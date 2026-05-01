/*
 * XREFs of ?RegisterActivationChanged@XamlBaseViewController@@IE$AAAXAEBUXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@@Z @ 0x180448134
 * Callers:
 *     ?RegisterForEvents@XamlAltTabViewController@@QE$AAAXAEBUXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@PE$AAVSwitcherControlBase@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAUISwitcherViewModel@9Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18060F194 (-RegisterForEvents@XamlAltTabViewController@@QE$AAAXAEBUXamlExplorerHostWindow@XamlExplorerHost@.c)
 *     ?RegisterForEvents@XamlSnapAssistViewController@@QE$AAAXAEBUXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@PE$AAVSwitcherControlBase@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAUISwitcherViewModel@9Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180611A18 (-RegisterForEvents@XamlSnapAssistViewController@@QE$AAAXAEBUXamlExplorerHostWindow@XamlExplorerH.c)
 * Callees:
 *     ??4?$event_revoker@UIXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UIXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BJA@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x180010230 (--4-$event_revoker@UIXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@$MP8t.c)
 *     ??1?$event_revoker@UIXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UIXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BJA@AA@impl@winrt@@QEAA@XZ @ 0x1800114D4 (--1-$event_revoker@UIXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@$MP8t.c)
 *     ?ActivationChanged@?$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow@UIXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UIXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UIXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BJA@AA@23@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@UActivationChangedEventArgs@23456@@Foundation@Windows@3@@Z @ 0x1800133F4 (-ActivationChanged@-$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow@UIX.c)
 *     ?InternalRelease@WeakReference@Platform@@AEAAXXZ @ 0x180033140 (-InternalRelease@WeakReference@Platform@@AEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall XamlBaseViewController::RegisterActivationChanged(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // r8
  __int64 *v6; // rax
  __int64 v7[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 WeakReference; // [rsp+50h] [rbp+20h] BYREF
  __int64 *p_WeakReference; // [rsp+60h] [rbp+30h] BYREF
  __int64 v10; // [rsp+68h] [rbp+38h] BYREF

  WeakReference = Platform::Details::GetWeakReference(a1);
  v10 = 0LL;
  p_WeakReference = &WeakReference;
  v4 = operator new(0x18uLL);
  v4[1] = WeakReference;
  WeakReference = 0LL;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v4 + 4) = 1;
  *v4 = off_1807AB2D8;
  p_WeakReference = v4;
  Platform::WeakReference::InternalRelease((Platform::WeakReference *)&WeakReference);
  v6 = (__int64 *)winrt::impl::consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow<winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow>::ActivationChanged(
                    a2,
                    (__int64)v7,
                    v5,
                    &p_WeakReference);
  __4__event_revoker_UIXamlExplorerHostWindow_XamlExplorerHost_Shell_Internal_Windows_winrt___MP8type___abi_UIXamlExplorerHostWindow_XamlExplorerHost_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BJA_AA_impl_winrt__QEAAAEAU012___QEAU012__Z(
    a1 + 104,
    v6);
  __1__event_revoker_UIXamlExplorerHostWindow_XamlExplorerHost_Shell_Internal_Windows_winrt___MP8type___abi_UIXamlExplorerHostWindow_XamlExplorerHost_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BJA_AA_impl_winrt__QEAA_XZ(v7);
  winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&p_WeakReference);
  Platform::WeakReference::InternalRelease((Platform::WeakReference *)&v10);
}
