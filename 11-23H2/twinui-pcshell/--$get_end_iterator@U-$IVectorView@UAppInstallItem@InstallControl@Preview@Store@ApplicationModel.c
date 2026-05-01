/*
 * XREFs of ??$get_end_iterator@U?$IVectorView@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Collections@Foundation@Windows@winrt@@$0A@@impl@winrt@@YA?AU?$fast_iterator@U?$IVectorView@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@01@AEBU?$IVectorView@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Collections@Foundation@Windows@1@@Z @ 0x1806946A8
 * Callers:
 *     _anonymous_namespace_::EnsureWebExperiencePackageInstalled$_ResumeCoro$1 @ 0x180239600 (_anonymous_namespace_--EnsureWebExperiencePackageInstalled$_ResumeCoro$1.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::get_end_iterator<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>,0>(
        __int64 a1,
        _QWORD *a2)
{
  signed int v4; // eax
  __int64 result; // rax
  int v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0;
  v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)*a2 + 56LL))(*a2, &v6);
  if ( v4 < 0 )
    winrt::throw_hresult(v4);
  *(_DWORD *)(a1 + 8) = v6;
  result = a1;
  *(_QWORD *)a1 = a2;
  return result;
}
