/*
 * XREFs of HalpSetVirtualRtc @ 0x14033B3F0
 * Callers:
 *     HalQueryRealTimeClock @ 0x14033AF30 (HalQueryRealTimeClock.c)
 *     HalCalibratePerformanceCounter @ 0x1404FE230 (HalCalibratePerformanceCounter.c)
 *     HalSetRealTimeClock @ 0x1404FED20 (HalSetRealTimeClock.c)
 *     HalpSetResumeTime @ 0x14051C788 (HalpSetResumeTime.c)
 * Callees:
 *     RtlGetSystemTimePrecise @ 0x140226E30 (RtlGetSystemTimePrecise.c)
 *     KeQueryPerformanceCounter @ 0x1402C3240 (KeQueryPerformanceCounter.c)
 *     RtlpTimeToTimeFields @ 0x14033B4C8 (RtlpTimeToTimeFields.c)
 */

char __fastcall HalpSetVirtualRtc(LARGE_INTEGER *a1)
{
  LARGE_INTEGER SystemTimePrecise; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF
  LARGE_INTEGER v6; // [rsp+48h] [rbp+10h] BYREF

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
  dword_140C62820 = PerformanceCounter.HighPart;
  qword_140C62818 = PerformanceCounter.QuadPart;
  dword_140C62814 = v6.HighPart;
  qword_140C6280C = SystemTimePrecise.QuadPart;
  dword_140C62808 = PerformanceCounter.HighPart;
  VrtcTime = PerformanceCounter.QuadPart;
  if ( a1 )
    HalpVrtcTimeStale = 0;
  return 1;
}
