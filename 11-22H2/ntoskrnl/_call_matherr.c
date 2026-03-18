/*
 * XREFs of _call_matherr @ 0x1403DD280
 * Callers:
 *     _handle_error @ 0x1403DD3C0 (_handle_error.c)
 *     _handle_errorf @ 0x1403DD4FC (_handle_errorf.c)
 * Callees:
 *     PdcCreateWatchdogAroundClientCall @ 0x140293330 (PdcCreateWatchdogAroundClientCall.c)
 *     xHalTimerWatchdogStop @ 0x14036DD70 (xHalTimerWatchdogStop.c)
 *     _ctrlfp @ 0x1403DDC4C (_ctrlfp.c)
 */

double __fastcall call_matherr(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, double a6, __int64 a7)
{
  ctrlfp(a7, 65472LL);
  if ( !(unsigned int)PdcCreateWatchdogAroundClientCall() )
    xHalTimerWatchdogStop();
  return a6;
}
