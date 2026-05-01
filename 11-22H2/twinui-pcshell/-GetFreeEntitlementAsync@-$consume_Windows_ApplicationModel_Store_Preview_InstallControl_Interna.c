/*
 * XREFs of ?GetFreeEntitlementAsync@?$consume_Windows_ApplicationModel_Store_Preview_InstallControl_Internal_IAppInstallManagerInternal@UIAppInstallManagerInternal@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@AEBW4AppIdType@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@3@_N@Z @ 0x180696134
 * Callers:
 *     _anonymous_namespace_::EnsureWebExperiencePackageInstalled$_ResumeCoro$1 @ 0x180239600 (_anonymous_namespace_--EnsureWebExperiencePackageInstalled$_ResumeCoro$1.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_ApplicationModel_Store_Preview_InstallControl_Internal_IAppInstallManagerInternal<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::Internal::IAppInstallManagerInternal>::GetFreeEntitlementAsync(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3,
        unsigned int *a4)
{
  __int64 v4; // rcx
  __int64 v7; // r8
  signed int v8; // eax
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  v4 = *a1;
  v10 = 0LL;
  v7 = *a4;
  LOBYTE(a4) = 1;
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, unsigned int *, __int64 *))(*(_QWORD *)v4 + 56LL))(
         v4,
         *a3,
         v7,
         a4,
         &v10);
  if ( v8 < 0 )
    winrt::throw_hresult(v8);
  *a2 = v10;
  return a2;
}
