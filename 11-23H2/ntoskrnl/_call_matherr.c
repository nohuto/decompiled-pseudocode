/*
 * XREFs of _call_matherr @ 0x1403DDAC0
 * Callers:
 *     _handle_error @ 0x1403DDC00 (_handle_error.c)
 *     _handle_errorf @ 0x1403DDD3C (_handle_errorf.c)
 * Callees:
 *     PdcCreateWatchdogAroundClientCall @ 0x1402936E0 (PdcCreateWatchdogAroundClientCall.c)
 *     xHalTimerWatchdogStop @ 0x14036E560 (xHalTimerWatchdogStop.c)
 *     _ctrlfp @ 0x1403DE48C (_ctrlfp.c)
 */

double __fastcall call_matherr(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, double a6, __int64 a7)
{
  ctrlfp(a7, 65472LL);
  if ( !(unsigned int)PdcCreateWatchdogAroundClientCall() )
    xHalTimerWatchdogStop();
  return a6;
}
