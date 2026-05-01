/*
 * XREFs of ?ShellViewButtonBoundsChanged@?$consume_WindowsUdk_UI_Shell_ITaskbarLayout@UITaskbarLayout@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UITaskbarLayout@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UITaskbarLayout@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BGI@AA@23@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UTaskbarLayout@Shell@UI@WindowsUdk@winrt@@UIInspectable@Foundation@Windows@5@@Foundation@Windows@3@@Z @ 0x1801A1270
 * Callers:
 *     ?OnViewRequestNavigate@UndockedSearchAppExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180144C6C (-OnViewRequestNavigate@UndockedSearchAppExperienceManager@@AEAAJPEAUIPropertySet@Collections@Fou.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800F70DC (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ??$try_as@UIWeakReferenceSource@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?AU?$com_ptr@UIWeakReferenceSource@impl@winrt@@@3@XZ @ 0x1800F8340 (--$try_as@UIWeakReferenceSource@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA-AU-$com_ptr.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800F9C28 (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall winrt::impl::consume_WindowsUdk_UI_Shell_ITaskbarLayout<winrt::WindowsUdk::UI::Shell::ITaskbarLayout>::ShellViewButtonBoundsChanged(
        void (__fastcall ****a1)(_QWORD, __int64 *, __int64 *),
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4)
{
  unsigned int v6; // eax
  __int64 v7; // rbx
  _QWORD *v8; // rax
  unsigned int v9; // eax
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF
  _QWORD *v13; // [rsp+58h] [rbp+20h]

  v12 = 0LL;
  v6 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64 *))(**a1)[12])(*a1, *a4, &v12);
  winrt::check_hresult(v6);
  v7 = v12;
  v13 = a2;
  *a2 = 0LL;
  if ( *a1 )
  {
    v8 = winrt::Windows::Foundation::IUnknown::try_as<winrt::impl::IWeakReferenceSource>(a1, &v11);
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)*v8 + 24LL))(*v8, a2);
    winrt::check_hresult(v9);
    if ( v11 )
      winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v11);
  }
  a2[1] = v7;
  return a2;
}
