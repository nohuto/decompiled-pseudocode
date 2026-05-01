/*
 * XREFs of ?ReportVisibility@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBW4ViewVisibility@Shell@UI@WindowsUdk@3@@Z @ 0x1800D6384
 * Callers:
 *     ?OnSearchAppVisibilityChanged@XamlLauncher@@UEAAX_N@Z @ 0x180057B70 (-OnSearchAppVisibilityChanged@XamlLauncher@@UEAAX_N@Z.c)
 *     ?DismissImpl@CJumpViewExperienceManager@@AEAAJ_N@Z @ 0x18006C810 (-DismissImpl@CJumpViewExperienceManager@@AEAAJ_N@Z.c)
 *     wil::details::functor_wrapper_void__lambda_6c8cd7b2a30f0944c4ce93b0334e31b2__&_::Run @ 0x180071230 (wil--details--functor_wrapper_void__lambda_6c8cd7b2a30f0944c4ce93b0334e31b2__-_--Run.c)
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x1800F3710 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 *     ?OnFindInStartVisibilityChanged@XamlLauncher@@UEAAX_N@Z @ 0x1800F4850 (-OnFindInStartVisibilityChanged@XamlLauncher@@UEAAX_N@Z.c)
 *     wil::details::functor_wrapper_void__lambda_4858afb64eb3b799e5108b1f2c6ece18__&_::Run @ 0x1801A1200 (wil--details--functor_wrapper_void__lambda_4858afb64eb3b799e5108b1f2c6ece18__-_--Run.c)
 *     ?Run@?$functor_wrapper_void@AEAV_lambda_ef4795d9d67b2631c82caa1661802619_@@@details@wil@@UEAAJXZ @ 0x1801BC8C0 (-Run@-$functor_wrapper_void@AEAV_lambda_ef4795d9d67b2631c82caa1661802619_@@@details@wil@@UEAAJXZ.c)
 *     std::_Func_impl_no_alloc__lambda_568cc8b99e08703b6f8e9ab35c61ba24__void_enum_winrt::WindowsUdk::UI::Shell::ViewVisibility_::_Do_call @ 0x1802103E0 (std--_Func_impl_no_alloc__lambda_568cc8b99e08703b6f8e9ab35c61ba24__void_enum_winrt-_ea_1802103E0.c)
 *     std::_Func_impl_no_alloc__lambda_9ec3d353ebe123d5bcc6e0dd9d042727__void_enum_winrt::WindowsUdk::UI::Shell::ViewVisibility_::_Do_call @ 0x180210410 (std--_Func_impl_no_alloc__lambda_9ec3d353ebe123d5bcc6e0dd9d042727__void_enum_winrt-_ea_180210410.c)
 *     ?Show@CJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x1804496F0 (-Show@CJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?OnVisibilityChanged@CVirtualTouchpadExperienceManager@@AEAAXXZ @ 0x180453F40 (-OnVisibilityChanged@CVirtualTouchpadExperienceManager@@AEAAXXZ.c)
 *     ?OnViewHidden@CNetworkExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18046E530 (-OnViewHidden@CNetworkExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewShown@CNetworkExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18046E640 (-OnViewShown@CNetworkExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?SetViewInfoCloakAndReportVisibilityChanged@TouchKeyboardExperienceManager@@AEAAXPEAUKBViewInfo@@_N@Z @ 0x180516194 (-SetViewInfoCloakAndReportVisibilityChanged@TouchKeyboardExperienceManager@@AEAAXPEAUKBViewInfo@.c)
 *     ?ReportFlyoutVisibility@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXW4ViewVisibility@3UI@WindowsUdk@6@@Z @ 0x1806BF76C (-ReportFlyoutVisibility@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXW4V.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>::ReportVisibility(
        _QWORD *a1,
        unsigned int *a2)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 80LL))(*a1, *a2);
  if ( (int)result < 0 )
    winrt::throw_hresult((unsigned int)result);
  return result;
}
