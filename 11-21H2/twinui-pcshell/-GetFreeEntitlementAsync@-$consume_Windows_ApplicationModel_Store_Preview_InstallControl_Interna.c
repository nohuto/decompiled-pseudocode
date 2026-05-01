/*
 * XREFs of ?GetFreeEntitlementAsync@?$consume_Windows_ApplicationModel_Store_Preview_InstallControl_Internal_IAppInstallManagerInternal@UIAppInstallManagerInternal@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA?AU?$IAsyncOperation@UAppData@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Foundation@Windows@3@AEBUhstring@param@3@AEBW4AppIdType@Internal@InstallControl@Preview@Store@ApplicationModel@63@_N@Z @ 0x1801C7F58
 * Callers:
 *     _anonymous_namespace_::EnsureWebExperiencePackageInstalled$_ResumeCoro$1 @ 0x1801C68D0 (_anonymous_namespace_--EnsureWebExperiencePackageInstalled$_ResumeCoro$1.c)
 * Callees:
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800F9C28 (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_ApplicationModel_Store_Preview_InstallControl_Internal_IAppInstallManagerInternal<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::Internal::IAppInstallManagerInternal>::GetFreeEntitlementAsync(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3,
        unsigned int *a4)
{
  __int64 v4; // rcx
  __int64 v7; // r8
  unsigned int v8; // eax
  _QWORD *v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = a2;
  v4 = *a1;
  v10 = 0LL;
  v7 = *a4;
  LOBYTE(a4) = 1;
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, unsigned int *, _QWORD **))(*(_QWORD *)v4 + 56LL))(
         v4,
         *a3,
         v7,
         a4,
         &v10);
  winrt::check_hresult(v8);
  *a2 = v10;
  return a2;
}
