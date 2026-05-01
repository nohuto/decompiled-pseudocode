/*
 * XREFs of ?ReportVisibility@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBAXAEBW4ViewVisibility@Shell@UI@WindowsUdk@3@@Z @ 0x180114ED8
 * Callers:
 *     _lambda_8a91dc501c467fec4cc3e90f0a415469_::operator() @ 0x18003135C (_lambda_8a91dc501c467fec4cc3e90f0a415469_--operator().c)
 *     ??R_lambda_26f44cd4480ca991a21fc760d40b2af7_@@QEBAXXZ @ 0x180038A64 (--R_lambda_26f44cd4480ca991a21fc760d40b2af7_@@QEBAXXZ.c)
 *     wil::details::functor_wrapper_void__lambda_6c8cd7b2a30f0944c4ce93b0334e31b2__&_::Run @ 0x180041BA0 (wil--details--functor_wrapper_void__lambda_6c8cd7b2a30f0944c4ce93b0334e31b2__-_--Run.c)
 *     std::_Func_impl_no_alloc__lambda_4fcc601e1ca868e387495d7c277bf315__void_enum_winrt::WindowsUdk::UI::Shell::ViewVisibility_::_Do_call @ 0x180043B30 (std--_Func_impl_no_alloc__lambda_4fcc601e1ca868e387495d7c277bf315__void_enum_winrt--WindowsUdk--.c)
 *     ?Run@?$functor_wrapper_void@AEAV_lambda_ef4795d9d67b2631c82caa1661802619_@@@details@wil@@UEAAJXZ @ 0x180114EA0 (-Run@-$functor_wrapper_void@AEAV_lambda_ef4795d9d67b2631c82caa1661802619_@@@details@wil@@UEAAJXZ.c)
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x180114F20 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 *     ?Show@MiniSearchExperienceManager@@AEAAJ_N@Z @ 0x1801A8090 (-Show@MiniSearchExperienceManager@@AEAAJ_N@Z.c)
 *     ?OnFindInStartVisibilityChanged@XamlLauncher@@UEAAX_N@Z @ 0x1801ABA70 (-OnFindInStartVisibilityChanged@XamlLauncher@@UEAAX_N@Z.c)
 *     ?HideView@MiniSearchExperienceManager@@AEAAJXZ @ 0x1803A1B70 (-HideView@MiniSearchExperienceManager@@AEAAJXZ.c)
 *     ?OnViewDestroyed@MiniSearchExperienceManager@@AEAAJXZ @ 0x1803A2C4C (-OnViewDestroyed@MiniSearchExperienceManager@@AEAAJXZ.c)
 *     std::_Func_impl_no_alloc__lambda_f5bad7708cd3d32b6b139f2523e4a8ac__void_enum_winrt::WindowsUdk::UI::Shell::ViewVisibility_::_Do_call @ 0x18049B390 (std--_Func_impl_no_alloc__lambda_f5bad7708cd3d32b6b139f2523e4a8ac__void_enum_winrt-_ea_18049B390.c)
 *     ?ReportFlyoutVisibility@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXW4ViewVisibility@3UI@WindowsUdk@6@@Z @ 0x1805CDE7C (-ReportFlyoutVisibility@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXW4V.c)
 *     ?CompleteShowAction@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x1805E1070 (-CompleteShowAction@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ.c)
 *     ?OnControlUnloaded@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x1805E2044 (-OnControlUnloaded@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
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
