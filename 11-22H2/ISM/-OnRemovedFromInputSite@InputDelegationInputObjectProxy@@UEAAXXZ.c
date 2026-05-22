/*
 * XREFs of ?OnRemovedFromInputSite@InputDelegationInputObjectProxy@@UEAAXXZ @ 0x180151040
 * Callers:
 *     <none>
 * Callees:
 *     ?GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ @ 0x18001D79C (-GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ.c)
 *     ?GetGamepadInterceptionHelper@ISMStatics@@SAPEAVGamepadInterceptionHelper@@XZ @ 0x18005A90C (-GetGamepadInterceptionHelper@ISMStatics@@SAPEAVGamepadInterceptionHelper@@XZ.c)
 *     ?ClearGamepadInterceptionTarget@GamepadInterceptionHelper@@QEAAXPEAUIGamepadInterceptionTarget@@@Z @ 0x18006A6C0 (-ClearGamepadInterceptionTarget@GamepadInterceptionHelper@@QEAAXPEAUIGamepadInterceptionTarget@@.c)
 *     ?ClearGamepadKeyRoutingEnabled@GamepadInterceptionHelper@@QEAAXK@Z @ 0x18006A840 (-ClearGamepadKeyRoutingEnabled@GamepadInterceptionHelper@@QEAAXK@Z.c)
 *     ?GetProcessId@InputDelegationInputObjectProxy@@UEAAKXZ @ 0x180071A50 (-GetProcessId@InputDelegationInputObjectProxy@@UEAAKXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_GamepadVKeyRoutingOptIn@@@details@wil@@QEAA_NXZ @ 0x180072358 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_GamepadVKeyRoutingOptIn@@@details.c)
 *     ?ClearInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@I@Z @ 0x1800B40C0 (-ClearInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@I@Z.c)
 */

void __fastcall InputDelegationInputObjectProxy::OnRemovedFromInputSite(struct InputSite **this)
{
  ForegroundManager *ForegroundManager; // rax
  const char *v3; // r9
  GamepadInterceptionHelper *GamepadInterceptionHelper; // rax
  GamepadInterceptionHelper *v5; // rbx
  int ProcessId; // eax

  ForegroundManager = ISMStatics::GetForegroundManager();
  ForegroundManager::ClearInputDelegation(ForegroundManager, this[4], *((_DWORD *)this + 12), v3);
  GamepadInterceptionHelper = ISMStatics::GetGamepadInterceptionHelper();
  GamepadInterceptionHelper::ClearGamepadInterceptionTarget(
    GamepadInterceptionHelper,
    (struct IGamepadInterceptionTarget *)((unsigned __int64)(this + 1) & -(__int64)(this != (struct InputSite **)64)));
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_GamepadVKeyRoutingOptIn>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_GamepadVKeyRoutingOptIn>::GetImpl'::`2'::impl) )
  {
    v5 = ISMStatics::GetGamepadInterceptionHelper();
    ProcessId = InputDelegationInputObjectProxy::GetProcessId((InputDelegationInputObjectProxy *)(this + 1));
    GamepadInterceptionHelper::ClearGamepadKeyRoutingEnabled(v5, ProcessId);
  }
  this[4] = 0LL;
}
