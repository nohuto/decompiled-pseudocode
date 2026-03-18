/*
 * XREFs of ?PowerUpComplete@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C0077420
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxPowerIdleMachine::PowerUpComplete(FxPowerIdleMachine *This)
{
  unsigned __int8 m_Flags; // al

  m_Flags = This->m_Flags;
  if ( (m_Flags & 1) != 0 )
    return (m_Flags & 8) != 0 ? 10 : 6;
  else
    return 5LL;
}
