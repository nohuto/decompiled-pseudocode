/*
 * XREFs of ?s_TimerTickProc@CTimer@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800E3F20
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?_OnTimerTick@CTimer@@AEAAXXZ @ 0x1800E3EB8 (-_OnTimerTick@CTimer@@AEAAXXZ.c)
 */

void __fastcall CTimer::s_TimerTickProc(PTP_CALLBACK_INSTANCE Instance, PVOID Context, PTP_TIMER Timer)
{
  if ( Context )
  {
    if ( Timer == (PTP_TIMER)_InterlockedCompareExchange64(
                               (volatile signed __int64 *)Context + 7,
                               (signed __int64)Timer,
                               (signed __int64)Timer) )
    {
      _InterlockedIncrement((volatile signed __int32 *)Context + 2);
      CTimer::_OnTimerTick((CTimer *)Context);
      CBaseObject::Release((CBaseObject *)Context);
    }
  }
}
