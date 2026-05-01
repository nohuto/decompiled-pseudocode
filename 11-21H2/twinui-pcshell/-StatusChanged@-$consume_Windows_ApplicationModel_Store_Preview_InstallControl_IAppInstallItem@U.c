/*
 * XREFs of ?StatusChanged@?$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem@UIAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UIAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@$MP8type@?$abi@UIAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@X@impl@7@EAAHUevent_token@7@@_E1??_989impl@7@$BII@AA@23@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@UIInspectable@Foundation@67@@Foundation@Windows@3@@Z @ 0x1801CB8BC
 * Callers:
 *     _anonymous_namespace_::EnsureWebExperiencePackageInstalled$_ResumeCoro$1 @ 0x1801C68D0 (_anonymous_namespace_--EnsureWebExperiencePackageInstalled$_ResumeCoro$1.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800F70DC (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ??$try_as@UIWeakReferenceSource@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?AU?$com_ptr@UIWeakReferenceSource@impl@winrt@@@3@XZ @ 0x1800F8340 (--$try_as@UIWeakReferenceSource@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA-AU-$com_ptr.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800F9C28 (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall winrt::impl::consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem>::StatusChanged(
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
  v6 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64 *))(**a1)[16])(*a1, *a4, &v12);
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
