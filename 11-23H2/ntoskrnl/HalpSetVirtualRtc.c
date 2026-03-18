/*
 * XREFs of HalpSetVirtualRtc @ 0x14033B5F0
 * Callers:
 *     HalQueryRealTimeClock @ 0x14033B130 (HalQueryRealTimeClock.c)
 *     HalCalibratePerformanceCounter @ 0x1404FE120 (HalCalibratePerformanceCounter.c)
 *     HalSetRealTimeClock @ 0x1404FEC10 (HalSetRealTimeClock.c)
 *     HalpSetResumeTime @ 0x14051C6C8 (HalpSetResumeTime.c)
 * Callees:
 *     RtlGetSystemTimePrecise @ 0x140226E10 (RtlGetSystemTimePrecise.c)
 *     KeQueryPerformanceCounter @ 0x1402C3270 (KeQueryPerformanceCounter.c)
 *     RtlpTimeToTimeFields @ 0x14033B6C8 (RtlpTimeToTimeFields.c)
 */

char __fastcall HalpSetVirtualRtc(__int64 *a1)
{
  __int64 SystemTimePrecise; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0LL;
  if ( SystemPowerPhase == 2 )
    return 0;
  if ( a1 )
  {
    SystemTimePrecise = *a1;
    v6 = *a1;
  }
  else
  {
    if ( SystemPowerPhase )
      return 0;
    SystemTimePrecise = RtlGetSystemTimePrecise();
    v6 = SystemTimePrecise;
  }
  RtlpTimeToTimeFields(&v6, &v5);
  if ( (__int16)v5 <= 1601 )
    return 0;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  dword_140C62740 = PerformanceCounter.HighPart;
  qword_140C62738 = PerformanceCounter.QuadPart;
  dword_140C62734 = HIDWORD(v6);
  qword_140C6272C = SystemTimePrecise;
  dword_140C62728 = PerformanceCounter.HighPart;
  VrtcTime = PerformanceCounter.QuadPart;
  if ( a1 )
    HalpVrtcTimeStale = 0;
  return 1;
}
