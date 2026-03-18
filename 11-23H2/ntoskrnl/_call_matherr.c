/*
 * XREFs of _call_matherr @ 0x1403DD8E0
 * Callers:
 *     _handle_error @ 0x1403DDA20 (_handle_error.c)
 *     _handle_errorf @ 0x1403DDB5C (_handle_errorf.c)
 * Callees:
 *     PdcCreateWatchdogAroundClientCall @ 0x140293450 (PdcCreateWatchdogAroundClientCall.c)
 *     xHalTimerWatchdogStop @ 0x14036E3C0 (xHalTimerWatchdogStop.c)
 *     _ctrlfp @ 0x1403DE2AC (_ctrlfp.c)
 */

double __fastcall call_matherr(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, double a6, __int64 a7)
{
  ctrlfp(a7, 65472LL);
  if ( !(unsigned int)PdcCreateWatchdogAroundClientCall() )
    xHalTimerWatchdogStop();
  return a6;
}
