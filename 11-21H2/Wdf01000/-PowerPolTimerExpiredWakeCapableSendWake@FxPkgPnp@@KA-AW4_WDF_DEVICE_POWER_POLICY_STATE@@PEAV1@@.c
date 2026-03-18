/*
 * XREFs of ?PowerPolTimerExpiredWakeCapableSendWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008BFD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 *     ?PowerPolicySendWaitWakeRequest@FxPkgPnp@@IEAAJW4_SYSTEM_POWER_STATE@@@Z @ 0x1C008CA50 (-PowerPolicySendWaitWakeRequest@FxPkgPnp@@IEAAJW4_SYSTEM_POWER_STATE@@@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolTimerExpiredWakeCapableSendWake(FxPkgPnp *This)
{
  int _a1; // eax

  This->m_WakeInterruptsKeepConnected = 1;
  _a1 = FxPkgPnp::PowerPolicySendWaitWakeRequest(This, PowerSystemWorking);
  if ( _a1 >= 0 )
    return 1472LL;
  WPP_IFR_SF_d(This->m_Globals, 2u, 0xCu, 0x21u, WPP_PowerPolicyStateMachine_cpp_Traceguids, _a1);
  return 1337LL;
}
