/*
 * XREFs of ?GoingToDx@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C00772F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxPowerIdleMachine::GoingToDx(FxPowerIdleMachine *This)
{
  KeClearEvent(&This->m_D0NotificationEvent.m_Event.m_Event);
  return 17LL;
}
