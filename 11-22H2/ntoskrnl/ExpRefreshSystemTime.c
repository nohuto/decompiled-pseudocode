/*
 * XREFs of ExpRefreshSystemTime @ 0x140840884
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x14080CEA0 (CmCompleteRegistryInitialization.c)
 *     CmpFinishSystemHivesLoad @ 0x14080D490 (CmpFinishSystemHivesLoad.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D390 (PsGetCurrentServerSiloGlobals.c)
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14023D3F0 (ExReleaseResourceLite.c)
 *     HalQueryRealTimeClock @ 0x14033AF30 (HalQueryRealTimeClock.c)
 *     ExLocalTimeToSystemTime @ 0x14033B0A0 (ExLocalTimeToSystemTime.c)
 *     ExSystemTimeToLocalTime @ 0x14033B0F0 (ExSystemTimeToLocalTime.c)
 *     RtlTimeFieldsToTime @ 0x14033B150 (RtlTimeFieldsToTime.c)
 *     RtlTimeToTimeFields @ 0x14033B4B0 (RtlTimeToTimeFields.c)
 *     KeSetSystemTime @ 0x1403B571C (KeSetSystemTime.c)
 *     PoNotifySystemTimeSet @ 0x1403B5E38 (PoNotifySystemTimeSet.c)
 *     HalSetRealTimeClock @ 0x1404FED20 (HalSetRealTimeClock.c)
 *     ExAcquireTimeRefreshLock @ 0x14075FE64 (ExAcquireTimeRefreshLock.c)
 *     ExpRefreshTimeZoneInformation @ 0x140840928 (ExpRefreshTimeZoneInformation.c)
 */

void ExpRefreshSystemTime()
{
  __int64 v0; // rbx
  unsigned __int8 v1; // di
  int v2; // esi
  LARGE_INTEGER v3; // rax
  int v4; // [rsp+28h] [rbp-28h]
  _TIME_FIELDS TimeFields; // [rsp+40h] [rbp-10h] BYREF
  LARGE_INTEGER Time; // [rsp+70h] [rbp+20h] BYREF
  LARGE_INTEGER SystemTime; // [rsp+78h] [rbp+28h] BYREF
  LARGE_INTEGER v8; // [rsp+80h] [rbp+30h] BYREF

  SystemTime.QuadPart = 0LL;
  v8.QuadPart = 0LL;
  Time.QuadPart = 0LL;
  TimeFields = 0LL;
  v0 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 157);
  ExAcquireTimeRefreshLock(1u);
  v1 = ExpSystemIsInCmosMode;
  if ( HalQueryRealTimeClock((__int64)&TimeFields) )
  {
    if ( RtlTimeFieldsToTime(&TimeFields, &Time) )
    {
      v2 = *(_DWORD *)(v0 + 436);
      if ( (unsigned __int8)ExpRefreshTimeZoneInformation(0LL) )
      {
        if ( v2 != *(_DWORD *)(v0 + 436) )
        {
          v3.QuadPart = MEMORY[0xFFFFF78000000014];
          SystemTime.QuadPart = MEMORY[0xFFFFF78000000014];
          if ( !ExpRealTimeIsUniversal )
          {
            if ( v1 )
            {
              ExLocalTimeToSystemTime(&Time, &v8);
              KeSetSystemTime((__int64)&v8, (__int64)&SystemTime, 0);
              goto LABEL_10;
            }
            ExSystemTimeToLocalTime(&SystemTime, &Time);
            RtlTimeToTimeFields(&Time, &TimeFields);
            HalSetRealTimeClock(&TimeFields.Year);
            v3 = SystemTime;
          }
          v8 = v3;
LABEL_10:
          PoNotifySystemTimeSet((__int64 *)&v8, (__int64 *)&SystemTime, 3, (int)&Time, *(_DWORD *)(v0 + 436), v4, v1);
        }
      }
    }
  }
  ExReleaseResourceLite(&ExpTimeRefreshLock);
  KeLeaveCriticalRegion();
}
