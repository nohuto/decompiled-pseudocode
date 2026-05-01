/*
 * XREFs of ?StartAppInstallAsync@?$consume_Windows_ApplicationModel_Store_Preview_InstallControl_Internal_IAppInstallManagerInternal@UIAppInstallManagerInternal@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@AEBW4AppIdType@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@3@_N220000@Z @ 0x180697EA4
 * Callers:
 *     _anonymous_namespace_::EnsureWebExperiencePackageInstalled$_ResumeCoro$1 @ 0x180239600 (_anonymous_namespace_--EnsureWebExperiencePackageInstalled$_ResumeCoro$1.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_ApplicationModel_Store_Preview_InstallControl_Internal_IAppInstallManagerInternal<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::Internal::IAppInstallManagerInternal>::StartAppInstallAsync(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3,
        unsigned int *a4,
        int a5,
        int a6,
        char a7,
        _QWORD *a8,
        _QWORD *a9,
        _QWORD *a10,
        _QWORD *a11)
{
  __int64 v11; // rbx
  signed int v13; // eax
  char v15; // [rsp+20h] [rbp-58h]
  char v16; // [rsp+28h] [rbp-50h]
  __int64 v17; // [rsp+80h] [rbp+8h] BYREF

  v11 = *a1;
  v17 = 0LL;
  v16 = a7;
  v15 = 0;
  v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, char, char, _QWORD, _QWORD, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v11 + 72LL))(
          v11,
          *a3,
          *a4,
          0LL,
          v15,
          v16,
          *a8,
          *a9,
          *a10,
          *a11,
          &v17);
  if ( v13 < 0 )
    winrt::throw_hresult(v13);
  *a2 = v17;
  return a2;
}
