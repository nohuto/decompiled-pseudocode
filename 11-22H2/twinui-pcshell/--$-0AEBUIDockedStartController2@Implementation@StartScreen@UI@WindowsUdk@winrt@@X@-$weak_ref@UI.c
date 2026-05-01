/*
 * XREFs of ??$?0AEBUIDockedStartController2@Implementation@StartScreen@UI@WindowsUdk@winrt@@X@?$weak_ref@UIDockedStartController2@Implementation@StartScreen@UI@WindowsUdk@winrt@@@winrt@@QEAA@AEBUIDockedStartController2@Implementation@StartScreen@UI@WindowsUdk@1@@Z @ 0x1801E0C48
 * Callers:
 *     ?DismissAnimationCompleted@?$consume_WindowsUdk_UI_StartScreen_Implementation_IDockedStartController2@UDockedStartController@Implementation@StartScreen@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UIDockedStartController2@Implementation@StartScreen@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIDockedStartController2@Implementation@StartScreen@UI@WindowsUdk@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BGI@AA@23@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UDockedStartController@Implementation@StartScreen@UI@WindowsUdk@winrt@@UIInspectable@Foundation@Windows@6@@Foundation@Windows@3@@Z @ 0x1801E1AF4 (-DismissAnimationCompleted@-$consume_WindowsUdk_UI_StartScreen_Implementation_IDockedStartContro.c)
 *     ?Dismissed@?$consume_WindowsUdk_UI_StartScreen_Implementation_IDockedStartController2@UDockedStartController@Implementation@StartScreen@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UIDockedStartController2@Implementation@StartScreen@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIDockedStartController2@Implementation@StartScreen@UI@WindowsUdk@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BIA@AA@23@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UDockedStartController@Implementation@StartScreen@UI@WindowsUdk@winrt@@UIInspectable@Foundation@Windows@6@@Foundation@Windows@3@@Z @ 0x1801E1C44 (-Dismissed@-$consume_WindowsUdk_UI_StartScreen_Implementation_IDockedStartController2@UDockedSta.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ??$try_as@UIWeakReferenceSource@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?A_PXZ @ 0x1801B82EC (--$try_as@UIWeakReferenceSource@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA-A_PXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall winrt::weak_ref<winrt::WindowsUdk::UI::StartScreen::Implementation::IDockedStartController2>::weak_ref<winrt::WindowsUdk::UI::StartScreen::Implementation::IDockedStartController2>(
        __int64 *a1,
        void (__fastcall ****a2)(_QWORD, __int64 *, __int64 *))
{
  _QWORD *v3; // rax
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, __int64 *); // rsi
  int v6; // eax
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  *a1 = 0LL;
  if ( *a2 )
  {
    v3 = winrt::Windows::Foundation::IUnknown::try_as<winrt::impl::IWeakReferenceSource>(a2, &v8);
    v4 = *v3;
    v5 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*v3 + 24LL);
    if ( *a1 )
      winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(a1);
    v6 = v5(v4, a1);
    if ( v6 < 0 )
      winrt::throw_hresult((unsigned int)v6);
    if ( v8 )
      winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v8);
  }
  return a1;
}
