/*
 * XREFs of SetGV3PerfStateAndTurbo @ 0x1C0004DF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000331C (WPP_RECORDER_SF_.c)
 *     IsTurboModeSupported @ 0x1C00036F4 (IsTurboModeSupported.c)
 *     ProcLibTraceUnexpectedTurboDisable @ 0x1C000875C (ProcLibTraceUnexpectedTurboDisable.c)
 */

__int64 __fastcall SetGV3PerfStateAndTurbo(__int64 a1, __int16 a2, __int64 a3, char a4)
{
  int v4; // ecx
  unsigned __int64 v6; // [rsp+48h] [rbp+10h]

  v6 = __readmsr(0x199u);
  LOWORD(v6) = a2;
  v4 = 1;
  if ( (a4 & 1) == 0 || BYTE4(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) )
    v4 = 0;
  HIDWORD(v6) = v4 | HIDWORD(v6) & 0xFFFFFFFE;
  __writemsr(0x199u, v6);
  return 0LL;
}
