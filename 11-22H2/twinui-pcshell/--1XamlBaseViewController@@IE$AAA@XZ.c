/*
 * XREFs of ??1XamlBaseViewController@@IE$AAA@XZ @ 0x18007FA3C
 * Callers:
 *     ??1XamlAllUpViewController@@AE$AAA@XZ @ 0x1800815D0 (--1XamlAllUpViewController@@AE$AAA@XZ.c)
 *     _XamlAllUpViewController::_XamlAllUpViewController_::_1_::dtor$0 @ 0x1802C3DE8 (_XamlAllUpViewController--_XamlAllUpViewController_--_1_--dtor$0.c)
 *     ??1XamlAltTabViewController@@AE$AAA@XZ @ 0x1802ED08A (--1XamlAltTabViewController@@AE$AAA@XZ.c)
 *     _XamlAltTabViewController::_XamlAltTabViewController_::_1_::dtor$0 @ 0x1802ED123 (_XamlAltTabViewController--_XamlAltTabViewController_--_1_--dtor$0.c)
 *     ??1GuidedSnapAssistViewController@@AE$AAA@XZ @ 0x180788CAC (--1GuidedSnapAssistViewController@@AE$AAA@XZ.c)
 *     _GuidedSnapAssistViewController::_GuidedSnapAssistViewController_::_1_::dtor$0 @ 0x180788D69 (_GuidedSnapAssistViewController--_GuidedSnapAssistViewController_--_1_--dtor$0.c)
 *     ??1VirtualDesktopSwitcherController@@AE$AAA@XZ @ 0x18078C508 (--1VirtualDesktopSwitcherController@@AE$AAA@XZ.c)
 *     _VirtualDesktopSwitcherController::_VirtualDesktopSwitcherController_::_1_::dtor$0 @ 0x18078C560 (_VirtualDesktopSwitcherController--_VirtualDesktopSwitcherController_--_1_--dtor$0.c)
 *     ?__abi_Release@?QObject@Platform@@XamlBaseViewController@@UE$AAAKXZ @ 0x18078D760 (-__abi_Release@-QObject@Platform@@XamlBaseViewController@@UE$AAAKXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$event_revoker@UIXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UIXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BJI@AA@impl@winrt@@QEAA@XZ @ 0x180081790 (--1-$event_revoker@UIXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@$MP8t.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180142290 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@VFtmBa.c)
 */

void __fastcall XamlBaseViewController::~XamlBaseViewController(__int64 *a1)
{
  __1__event_revoker_UIXamlExplorerHostWindow_XamlExplorerHost_Shell_Internal_Windows_winrt___MP8type___abi_UIXamlExplorerHostWindow_XamlExplorerHost_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BJI_AA_impl_winrt__QEAA_XZ(a1 + 13);
  if ( a1[12] )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)(a1 + 12));
  if ( a1[11] )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)(a1 + 11));
  if ( a1[10] )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown,Microsoft::WRL::FtmBase>::Release();
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a1 + 9);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a1 + 8);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a1 + 7);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a1 + 6);
}
