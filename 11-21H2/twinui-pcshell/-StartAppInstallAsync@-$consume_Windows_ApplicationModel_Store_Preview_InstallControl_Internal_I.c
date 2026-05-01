/*
 * XREFs of ?StartAppInstallAsync@?$consume_Windows_ApplicationModel_Store_Preview_InstallControl_Internal_IAppInstallManagerInternal@UIAppInstallManagerInternal@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA?AU?$IAsyncOperation@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Foundation@Windows@3@AEBUhstring@param@3@AEBW4AppIdType@Internal@InstallControl@Preview@Store@ApplicationModel@63@_N220000@Z @ 0x1801CB77C
 * Callers:
 *     _anonymous_namespace_::EnsureWebExperiencePackageInstalled$_ResumeCoro$1 @ 0x1801C68D0 (_anonymous_namespace_--EnsureWebExperiencePackageInstalled$_ResumeCoro$1.c)
 * Callees:
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800F9C28 (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
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
  unsigned int v13; // eax
  char v15; // [rsp+20h] [rbp-48h]
  char v16; // [rsp+28h] [rbp-40h]
  _QWORD *v17; // [rsp+78h] [rbp+10h] BYREF

  v17 = a2;
  v11 = *a1;
  v17 = 0LL;
  v16 = a7;
  v15 = 0;
  v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, char, char, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD **))(*(_QWORD *)v11 + 72LL))(
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
  winrt::check_hresult(v13);
  *a2 = v17;
  return a2;
}
