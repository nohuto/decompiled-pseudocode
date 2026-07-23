/*
 * XREFs of DefaultEnableMonitoring @ 0x14050D290
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerStartProfileInterrupt @ 0x14050B018 (HalpTimerStartProfileInterrupt.c)
 */

__int64 __fastcall DefaultEnableMonitoring(int a1, int a2, _DWORD *a3, _DWORD *a4, _DWORD *a5)
{
  if ( a1 || a2 )
    return 3221225659LL;
  *a4 = 0;
  *a5 = 0;
  *a3 = 1;
  return HalpTimerStartProfileInterrupt();
}
