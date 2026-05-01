/*
 * XREFs of ??$make_wnf_subscription_nothrow@K@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBK@Z@wistd@@K@Z @ 0x1800E47C8
 * Callers:
 *     ?RegisterForPackageUpdatesWNF@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1800B44EC (-RegisterForPackageUpdatesWNF@CScreenClippingExperienceManager@@AEAAJXZ.c)
 *     ?subscribe_to_services@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1800B4660 (-subscribe_to_services@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEAAXPE.c)
 *     ?RuntimeClassInitialize@AccessibilityExperienceManager@@QEAAJXZ @ 0x1800CF558 (-RuntimeClassInitialize@AccessibilityExperienceManager@@QEAAJXZ.c)
 *     ?subscribe_to_services@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1800E2D80 (-subscribe_to_services@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@UEAAXP.c)
 *     ?InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1800E3788 (-InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?RuntimeClassInitialize@CVirtualTouchpadExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x18037F0B0 (-RuntimeClassInitialize@CVirtualTouchpadExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ??$make_wnf_subscription_state@K@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBK@Z@wistd@@KPEAPEAU?$wnf_subscription_state@K@01@@Z @ 0x1800E4808 (--$make_wnf_subscription_state@K@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV-$function@$$A6AXAEB.c)
 */

_QWORD *__fastcall wil::make_wnf_subscription_nothrow<unsigned long>(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( (int)wil::details::make_wnf_subscription_state<unsigned long>(a2, a3, a3, v5) < 0 )
    *a1 = 0LL;
  else
    *a1 = v5[0];
  return a1;
}
