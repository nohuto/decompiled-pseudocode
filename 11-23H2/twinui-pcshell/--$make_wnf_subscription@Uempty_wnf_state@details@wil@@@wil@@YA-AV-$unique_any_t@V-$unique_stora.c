/*
 * XREFs of ??$make_wnf_subscription@Uempty_wnf_state@details@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@K@Z @ 0x1800A6608
 * Callers:
 *     ?SubscribeToAppEvents@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1800A4F14 (-SubscribeToAppEvents@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 *     ?InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1800A5144 (-InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?SubscribeTouchKeyboardWnfNotifications@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800A5DBC (-SubscribeTouchKeyboardWnfNotifications@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?InitializeAutomaticInvokeTrackingInformation@XamlLauncher@@AEAAJXZ @ 0x1800F3DDC (-InitializeAutomaticInvokeTrackingInformation@XamlLauncher@@AEAAJXZ.c)
 *     ?SubscribeToColorOverrideStateChange@DesktopBlueLightReductionManager@@AEAAXXZ @ 0x18012ACB0 (-SubscribeToColorOverrideStateChange@DesktopBlueLightReductionManager@@AEAAXXZ.c)
 *     ?RegisterAppDeploymentListeners@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1801EE4C4 (-RegisterAppDeploymentListeners@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?SubscribeToAccessPhysicalDevice@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180278634 (-SubscribeToAccessPhysicalDevice@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@A.c)
 *     ?SubscribeToLogon@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180707744 (-SubscribeToLogon@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 * Callees:
 *     ??$make_wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@KPEAPEAU?$wnf_subscription_state@Uempty_wnf_state@details@wil@@@01@@Z @ 0x1800A6650 (--$make_wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@YAJAEBU_WNF_STATE_NAM.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

_QWORD *__fastcall wil::make_wnf_subscription<wil::details::empty_wnf_state>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  int v5; // eax
  int v7; // [rsp+20h] [rbp-18h]
  __int64 v8; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v5 = wil::details::make_wnf_subscription_state<wil::details::empty_wnf_state>(a2, a3, a4, &v8);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x43C,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
      (const char *)(unsigned int)v5,
      v7);
  *a1 = v8;
  return a1;
}
