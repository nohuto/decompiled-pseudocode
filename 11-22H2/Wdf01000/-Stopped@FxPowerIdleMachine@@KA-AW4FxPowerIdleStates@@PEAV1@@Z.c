/*
 * XREFs of ?Stopped@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C0009900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxPowerIdleMachine::Stopped(FxPowerIdleMachine *This)
{
  This->m_Flags &= ~0x20u;
  return 35LL;
}
