/*
 * XREFs of ??$as@UIAppInstallManagerInternal@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?AUIAppInstallManagerInternal@Internal@InstallControl@Preview@Store@ApplicationModel@23@XZ @ 0x1801C2294
 * Callers:
 *     _anonymous_namespace_::EnsureWebExperiencePackageInstalled$_ResumeCoro$1 @ 0x1801C68D0 (_anonymous_namespace_--EnsureWebExperiencePackageInstalled$_ResumeCoro$1.c)
 * Callees:
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800F9C28 (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::IUnknown::as<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::Internal::IAppInstallManagerInternal>(
        __int64 (__fastcall ****a1)(_QWORD, void *, _QWORD **),
        _QWORD *a2)
{
  __int64 (__fastcall ***v2)(_QWORD, void *, _QWORD **); // rcx
  unsigned int v4; // eax
  _QWORD *v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  v2 = *a1;
  if ( v2 )
  {
    v6 = 0LL;
    v4 = (**v2)(
           v2,
           &winrt::impl::guid_v<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::Internal::IAppInstallManagerInternal>,
           &v6);
    winrt::check_hresult(v4);
    *a2 = v6;
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
