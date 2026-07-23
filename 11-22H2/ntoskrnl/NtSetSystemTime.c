/*
 * XREFs of NtSetSystemTime @ 0x1409F8340
 * Callers:
 *     ExpSetTimeZoneInformation @ 0x1409F76DC (ExpSetTimeZoneInformation.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D390 (PsGetCurrentServerSiloGlobals.c)
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14023D3F0 (ExReleaseResourceLite.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140287350 (PsIsCurrentThreadInServerSilo.c)
 *     HalQueryRealTimeClock @ 0x14033AF30 (HalQueryRealTimeClock.c)
 *     ExLocalTimeToSystemTime @ 0x14033B0A0 (ExLocalTimeToSystemTime.c)
 *     ExSystemTimeToLocalTime @ 0x14033B0F0 (ExSystemTimeToLocalTime.c)
 *     RtlTimeFieldsToTime @ 0x14033B150 (RtlTimeFieldsToTime.c)
 *     RtlTimeToTimeFields @ 0x14033B4B0 (RtlTimeToTimeFields.c)
 *     KeSetSystemTime @ 0x1403B571C (KeSetSystemTime.c)
 *     PoNotifySystemTimeSet @ 0x1403B5E38 (PoNotifySystemTimeSet.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     HalSetRealTimeClock @ 0x1404FED20 (HalSetRealTimeClock.c)
 *     SeSinglePrivilegeCheck @ 0x140738000 (SeSinglePrivilegeCheck.c)
 *     ExAcquireTimeRefreshLock @ 0x14075FE64 (ExAcquireTimeRefreshLock.c)
 *     RtlIsMultiSessionSku @ 0x1407ED2A0 (RtlIsMultiSessionSku.c)
 *     RtlCapabilityCheck @ 0x1407ED2D0 (RtlCapabilityCheck.c)
 *     ExpRefreshTimeZoneInformation @ 0x140840928 (ExpRefreshTimeZoneInformation.c)
 *     SeAuditSystemTimeChange @ 0x1409CB148 (SeAuditSystemTimeChange.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00C10 (ExRaiseDatatypeMisalignment.c)
 *     ExpSetSystemTime @ 0x140AAAD24 (ExpSetSystemTime.c)
 */

NTSTATUS __cdecl NtSetSystemTime(PLARGE_INTEGER SystemTime, PLARGE_INTEGER PreviousTime)
{
  _QWORD *CurrentServerSiloGlobals; // rsi
  KPROCESSOR_MODE PreviousMode; // si
  __int64 v7; // rcx
  LONGLONG QuadPart; // rax
  int v9; // ecx
  NTSTATUS v10; // ebx
  unsigned __int8 v11; // di
  LARGE_INTEGER v12; // rax
  int v13; // [rsp+28h] [rbp-70h]
  BOOLEAN HasCapability[8]; // [rsp+40h] [rbp-58h] BYREF
  LARGE_INTEGER SystemTimea; // [rsp+48h] [rbp-50h] BYREF
  LARGE_INTEGER v16; // [rsp+50h] [rbp-48h] BYREF
  LARGE_INTEGER Time; // [rsp+58h] [rbp-40h] BYREF
  UNICODE_STRING CapabilityName; // [rsp+60h] [rbp-38h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+70h] [rbp-28h] BYREF

  SystemTimea.QuadPart = 0LL;
  v16.QuadPart = 0LL;
  Time.QuadPart = 0LL;
  TimeFields = 0LL;
  HasCapability[0] = 0;
  *(_QWORD *)&CapabilityName.Length = 2228256LL;
  CapabilityName.Buffer = L"systemManagement";
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  if ( SystemTime )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( !SeSinglePrivilegeCheck(SeSystemtimePrivilege, PreviousMode)
      && (RtlIsMultiSessionSku() || RtlCapabilityCheck(0LL, &CapabilityName, HasCapability) < 0 || !HasCapability[0])
      || PsIsCurrentThreadInServerSilo() )
    {
      return -1073741727;
    }
    if ( !PreviousMode )
    {
      QuadPart = SystemTime->QuadPart;
      v16 = *SystemTime;
      goto LABEL_18;
    }
    if ( ((unsigned __int8)SystemTime & 3) == 0 )
    {
      v7 = 0x7FFFFFFF0000LL;
      if ( !PreviousTime )
      {
LABEL_15:
        QuadPart = SystemTime->QuadPart;
        v16 = *SystemTime;
LABEL_18:
        if ( HIDWORD(QuadPart) > 0x20000000 )
          return -1073741811;
        ExAcquireTimeRefreshLock(1u);
        LOBYTE(v9) = 1;
        ExpSetSystemTime(v9, 0, 1, v16.LowPart, (__int64)&SystemTimea);
        SeAuditSystemTimeChange(SystemTimea.QuadPart, v16.QuadPart);
        ExReleaseResourceLite(&ExpTimeRefreshLock);
        KeLeaveCriticalRegion();
        if ( PreviousTime )
          *PreviousTime = SystemTimea;
        return 0;
      }
      if ( ((unsigned __int8)PreviousTime & 3) == 0 )
      {
        if ( (unsigned __int64)PreviousTime < 0x7FFFFFFF0000LL )
          v7 = (__int64)PreviousTime;
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
    SystemTimea.QuadPart = MEMORY[0xFFFFF78000000014];
    if ( !ExpRealTimeIsUniversal )
    {
      if ( v11 )
      {
        ExLocalTimeToSystemTime(&Time, &v16);
        KeSetSystemTime((__int64)&v16, (__int64)&SystemTimea, 0);
        goto LABEL_30;
      }
      ExSystemTimeToLocalTime(&SystemTimea, &Time);
      RtlTimeToTimeFields(&Time, &TimeFields);
      HalSetRealTimeClock(&TimeFields.Year);
      v12 = SystemTimea;
    }
    v16 = v12;
LABEL_30:
    PoNotifySystemTimeSet(
      (__int64 *)&v16,
      (__int64 *)&SystemTimea,
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
