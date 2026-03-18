/*
 * XREFs of ?TimerExpired@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C0009960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxPowerIdleMachine::TimerExpired(FxPowerIdleMachine *This)
{
  This->m_Flags &= ~8u;
  return 6LL;
}
