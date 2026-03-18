/*
 * XREFs of ExpSetSystemTime @ 0x140AAAC64
 * Callers:
 *     NtSetSystemTime @ 0x1409F8290 (NtSetSystemTime.c)
 *     ExUpdateSystemTimeFromCmos @ 0x140A88304 (ExUpdateSystemTimeFromCmos.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D370 (PsGetCurrentServerSiloGlobals.c)
 *     ExSystemTimeToLocalTime @ 0x14033B2F0 (ExSystemTimeToLocalTime.c)
 *     RtlTimeToTimeFields @ 0x14033B6B0 (RtlTimeToTimeFields.c)
 *     KeSetSystemTime @ 0x1403B5DAC (KeSetSystemTime.c)
 *     PoNotifySystemTimeSet @ 0x1403B64C8 (PoNotifySystemTimeSet.c)
 *     HalSetRealTimeClock @ 0x1404FEC10 (HalSetRealTimeClock.c)
 *     ExpRefreshTimeZoneInformation @ 0x14083EB98 (ExpRefreshTimeZoneInformation.c)
 */

__int64 ExpSetSystemTime(char a1, char a2, int a3, ...)
{
  _QWORD *CurrentServerSiloGlobals; // r14
  int v8; // [rsp+28h] [rbp-38h]
  LARGE_INTEGER LocalTime; // [rsp+40h] [rbp-20h] BYREF
  TIME_FIELDS TimeFields; // [rsp+48h] [rbp-18h] BYREF
  LARGE_INTEGER SystemTime; // [rsp+98h] [rbp+38h] BYREF
  va_list SystemTimea; // [rsp+98h] [rbp+38h]
  __int64 *v13; // [rsp+A0h] [rbp+40h]
  va_list va1; // [rsp+A8h] [rbp+48h] BYREF

  va_start(va1, a3);
  va_start(SystemTimea, a3);
  SystemTime.QuadPart = va_arg(va1, _QWORD);
  v13 = va_arg(va1, __int64 *);
  LocalTime.QuadPart = 0LL;
  TimeFields = 0LL;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  if ( ExpRealTimeIsUniversal )
    LocalTime = SystemTime;
  else
    ExSystemTimeToLocalTime((PLARGE_INTEGER)SystemTimea, &LocalTime);
  KeSetSystemTime((__int64)SystemTimea, (__int64)v13, a2 != 0 ? 3 : 0);
  if ( a1 )
  {
    ExpRefreshTimeZoneInformation(0);
    if ( !ExpSystemIsInCmosMode )
    {
      if ( ExpRealTimeIsUniversal )
        LocalTime = SystemTime;
      else
        ExSystemTimeToLocalTime((PLARGE_INTEGER)SystemTimea, &LocalTime);
      RtlTimeToTimeFields(&LocalTime, &TimeFields);
      HalSetRealTimeClock(&TimeFields.Year);
    }
  }
  return PoNotifySystemTimeSet(
           (__int64 *)SystemTimea,
           v13,
           a3,
           (int)&LocalTime,
           *(_DWORD *)(CurrentServerSiloGlobals[157] + 436LL),
           v8,
           ExpSystemIsInCmosMode);
}
