/*
 * XREFs of WPP_SF_gg @ 0x180124B88
 * Callers:
 *     ?MeasureClockDrift@CMonitor@@AEAAXNN@Z @ 0x1801216F4 (-MeasureClockDrift@CMonitor@@AEAAXNN@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_gg(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  double v5; // [rsp+78h] [rbp+20h] BYREF

  v5 = a4;
  return EtwTraceMessage(a1, 43LL, &WPP_a37dfcc815523b32eaec5cff52282599_Traceguids, 54LL, &v5);
}
