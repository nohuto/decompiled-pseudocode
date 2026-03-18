/*
 * XREFs of NtSetSystemTime @ 0x1409F8290
 * Callers:
 *     ExpSetTimeZoneInformation @ 0x1409F762C (ExpSetTimeZoneInformation.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D370 (PsGetCurrentServerSiloGlobals.c)
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14023D410 (ExReleaseResourceLite.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140287470 (PsIsCurrentThreadInServerSilo.c)
 *     HalQueryRealTimeClock @ 0x14033B130 (HalQueryRealTimeClock.c)
 *     ExLocalTimeToSystemTime @ 0x14033B2A0 (ExLocalTimeToSystemTime.c)
 *     ExSystemTimeToLocalTime @ 0x14033B2F0 (ExSystemTimeToLocalTime.c)
 *     RtlTimeFieldsToTime @ 0x14033B350 (RtlTimeFieldsToTime.c)
 *     RtlTimeToTimeFields @ 0x14033B6B0 (RtlTimeToTimeFields.c)
 *     KeSetSystemTime @ 0x1403B5DAC (KeSetSystemTime.c)
 *     PoNotifySystemTimeSet @ 0x1403B64C8 (PoNotifySystemTimeSet.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     HalSetRealTimeClock @ 0x1404FEC10 (HalSetRealTimeClock.c)
 *     SeSinglePrivilegeCheck @ 0x140737B00 (SeSinglePrivilegeCheck.c)
 *     ExAcquireTimeRefreshLock @ 0x14075F954 (ExAcquireTimeRefreshLock.c)
 *     RtlIsMultiSessionSku @ 0x1407ECD20 (RtlIsMultiSessionSku.c)
 *     RtlCapabilityCheck @ 0x1407ECD50 (RtlCapabilityCheck.c)
 *     ExpRefreshTimeZoneInformation @ 0x14083EB98 (ExpRefreshTimeZoneInformation.c)
 *     SeAuditSystemTimeChange @ 0x1409CB098 (SeAuditSystemTimeChange.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00B60 (ExRaiseDatatypeMisalignment.c)
 *     ExpSetSystemTime @ 0x140AAAC64 (ExpSetSystemTime.c)
 */

__int64 __fastcall NtSetSystemTime(LARGE_INTEGER *a1, LARGE_INTEGER *a2)
{
  _QWORD *CurrentServerSiloGlobals; // rsi
  KPROCESSOR_MODE PreviousMode; // si
  __int64 v7; // rcx
  LARGE_INTEGER v8; // rax
  int v9; // ecx
  unsigned int v10; // ebx
  unsigned __int8 v11; // di
  LARGE_INTEGER v12; // rax
  int v13; // [rsp+28h] [rbp-70h]
  char v14[8]; // [rsp+40h] [rbp-58h] BYREF
  LARGE_INTEGER SystemTime; // [rsp+48h] [rbp-50h] BYREF
  LARGE_INTEGER v16; // [rsp+50h] [rbp-48h] BYREF
  LARGE_INTEGER Time; // [rsp+58h] [rbp-40h] BYREF
  UNICODE_STRING String2; // [rsp+60h] [rbp-38h] BYREF
  TIME_FIELDS TimeFields; // [rsp+70h] [rbp-28h] BYREF

  SystemTime.QuadPart = 0LL;
  v16.QuadPart = 0LL;
  Time.QuadPart = 0LL;
  TimeFields = 0LL;
  v14[0] = 0;
  *(_QWORD *)&String2.Length = 2228256LL;
  String2.Buffer = L"systemManagement";
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  if ( a1 )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( !SeSinglePrivilegeCheck(SeSystemtimePrivilege, PreviousMode)
      && (RtlIsMultiSessionSku() || (int)RtlCapabilityCheck(0LL, &String2, v14) < 0 || !v14[0])
      || PsIsCurrentThreadInServerSilo() )
    {
      return 3221225569LL;
    }
    if ( !PreviousMode )
    {
      v8 = *a1;
      v16 = *a1;
      goto LABEL_18;
    }
    if ( ((unsigned __int8)a1 & 3) == 0 )
    {
      v7 = 0x7FFFFFFF0000LL;
      if ( !a2 )
      {
LABEL_15:
        v8 = *a1;
        v16 = *a1;
LABEL_18:
        if ( v8.HighPart > 0x20000000u )
          return 3221225485LL;
        ExAcquireTimeRefreshLock(1u);
        LOBYTE(v9) = 1;
        ExpSetSystemTime(v9, 0, 1, v16.LowPart, (__int64)&SystemTime);
        SeAuditSystemTimeChange(SystemTime.QuadPart, v16.QuadPart);
        ExReleaseResourceLite(&ExpTimeRefreshLock);
        KeLeaveCriticalRegion();
        if ( a2 )
          *a2 = SystemTime;
        return 0;
      }
      if ( ((unsigned __int8)a2 & 3) == 0 )
      {
        if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
          v7 = (__int64)a2;
        *(_BYTE *)v7 = *(_BYTE *)v7;
        *(_BYTE *)(v7 + 7) = *(_BYTE *)(v7 + 7);
        goto LABEL_15;
      }
    }
    ExRaiseDatatypeMisalignment();
  }
  if ( PsIsCurrentThreadInServerSilo() )
  {
    ExAcquireTimeRefreshLock(1u);
    ExpRefreshTimeZoneInformation(0);
    ExReleaseResourceLite(&ExpTimeRefreshLock);
    KeLeaveCriticalRegion();
    return 0;
  }
  v10 = -1073741811;
  ExAcquireTimeRefreshLock(1u);
  v11 = ExpSystemIsInCmosMode;
  if ( HalQueryRealTimeClock((__int64)&TimeFields)
    && RtlTimeFieldsToTime(&TimeFields, &Time)
    && ExpRefreshTimeZoneInformation(0) )
  {
    v12.QuadPart = MEMORY[0xFFFFF78000000014];
    SystemTime.QuadPart = MEMORY[0xFFFFF78000000014];
    if ( !ExpRealTimeIsUniversal )
    {
      if ( v11 )
      {
        ExLocalTimeToSystemTime(&Time, &v16);
        KeSetSystemTime((__int64)&v16, (__int64)&SystemTime, 0);
        goto LABEL_30;
      }
      ExSystemTimeToLocalTime(&SystemTime, &Time);
      RtlTimeToTimeFields(&Time, &TimeFields);
      HalSetRealTimeClock(&TimeFields.Year);
      v12 = SystemTime;
    }
    v16 = v12;
LABEL_30:
    PoNotifySystemTimeSet(
      (__int64 *)&v16,
      (__int64 *)&SystemTime,
      3,
      (int)&Time,
      *(_DWORD *)(CurrentServerSiloGlobals[157] + 436LL),
      v13,
      v11);
    v10 = 0;
  }
  ExReleaseResourceLite(&ExpTimeRefreshLock);
  KeLeaveCriticalRegion();
  return v10;
}
