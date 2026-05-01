/*
 * XREFs of ??1?$event_revoker@UIXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UIXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BJA@AA@impl@winrt@@QEAA@XZ @ 0x1800114D4
 * Callers:
 *     ??1XamlBaseViewController@@IE$AAA@XZ @ 0x1800101BC (--1XamlBaseViewController@@IE$AAA@XZ.c)
 *     ??4?$event_revoker@UIXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UIXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BJA@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x180010230 (--4-$event_revoker@UIXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@$MP8t.c)
 *     ?RegisterForEvents@TaskViewFrame@@AEAAXXZ @ 0x180010454 (-RegisterForEvents@TaskViewFrame@@AEAAXXZ.c)
 *     ??1TaskViewFrame@@UEAA@XZ @ 0x180010AF8 (--1TaskViewFrame@@UEAA@XZ.c)
 *     _XamlBaseViewController::XamlBaseViewController_::_1_::dtor$8 @ 0x180213F2D (_XamlBaseViewController--XamlBaseViewController_--_1_--dtor$8.c)
 *     ?RegisterActivationChanged@XamlBaseViewController@@IE$AAAXAEBUXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@@Z @ 0x180448134 (-RegisterActivationChanged@XamlBaseViewController@@IE$AAAXAEBUXamlExplorerHostWindow@XamlExplore.c)
 *     ??1SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1805AEB70 (--1SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ?Initialize@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA_NIPEAUHWND__@@_N1AEBUIInspectable@Foundation@67@@Z @ 0x1805B8EB4 (-Initialize@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA_N.c)
 *     _XamlAltTabViewController::XamlAltTabViewController_::_1_::dtor$5 @ 0x18060E0A2 (_XamlAltTabViewController--XamlAltTabViewController_--_1_--dtor$5.c)
 *     ??1XamlAltTabViewController@@AE$AAA@XZ @ 0x18060E44C (--1XamlAltTabViewController@@AE$AAA@XZ.c)
 *     _XamlAltTabViewController::_XamlAltTabViewController_::_1_::dtor$6 @ 0x18060E5B3 (_XamlAltTabViewController--_XamlAltTabViewController_--_1_--dtor$6.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_9type@?$abi@UIXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@X@impl@winrt@@$BJA@AA @ 0x180202870 (--_9type@-$abi@UIXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@X@impl@wi.c)
 */

void __fastcall __1__event_revoker_UIXamlExplorerHostWindow_XamlExplorerHost_Shell_Internal_Windows_winrt___MP8type___abi_UIXamlExplorerHostWindow_XamlExplorerHost_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BJA_AA_impl_winrt__QEAA_XZ(
        __int64 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v2 = *a1;
  if ( v2 )
  {
    v3 = 0LL;
    (*(void (__fastcall **)(__int64, void *, __int64 *))(*(_QWORD *)v2 + 24LL))(
      v2,
      &winrt::impl::guid_v<winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow>,
      &v3);
    v4 = v3;
    if ( v3 )
    {
       winrt::impl::abi<winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow,void>::type::`vcall'{144,{flat}}(
        v3,
        a1[1]);
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v4);
    }
    if ( *a1 )
      winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(a1);
  }
}
