/*
 * XREFs of ?StartTimer@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C0077640
 * Callers:
 *     <none>
 * Callees:
 *     ?Start@MxTimer@@QEAAXT_LARGE_INTEGER@@K@Z @ 0x1C003FB68 (-Start@MxTimer@@QEAAXT_LARGE_INTEGER@@K@Z.c)
 */

__int64 __fastcall FxPowerIdleMachine::StartTimer(FxPowerIdleMachine *This)
{
  _LARGE_INTEGER m_PowerTimeout; // rdx

  m_PowerTimeout = This->m_PowerTimeout;
  This->m_Flags |= 8u;
  MxTimer::Start(&This->m_PowerTimeoutTimer, m_PowerTimeout, 0x64u);
  return 10LL;
}
