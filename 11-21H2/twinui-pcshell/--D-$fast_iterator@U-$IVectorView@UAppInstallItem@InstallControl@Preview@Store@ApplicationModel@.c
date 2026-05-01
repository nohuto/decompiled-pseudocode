/*
 * XREFs of ??D?$fast_iterator@U?$IVectorView@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@impl@winrt@@QEBA?AUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@2@XZ @ 0x1801C48E4
 * Callers:
 *     _anonymous_namespace_::EnsureWebExperiencePackageInstalled$_ResumeCoro$1 @ 0x1801C68D0 (_anonymous_namespace_--EnsureWebExperiencePackageInstalled$_ResumeCoro$1.c)
 * Callees:
 *     ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x1800F79D0 (-put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800F9C28 (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
winrt *__fastcall winrt::impl::fast_iterator<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>>::operator*(
        __int64 **a1,
        winrt *a2)
{
  __int64 *v3; // rax
  unsigned int v4; // esi
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, _QWORD, void **); // rbx
  void **v7; // rax
  unsigned int v8; // eax

  v3 = *a1;
  v4 = *((_DWORD *)a1 + 2);
  *(_QWORD *)a2 = 0LL;
  v5 = *v3;
  v6 = *(__int64 (__fastcall **)(__int64, _QWORD, void **))(*(_QWORD *)*v3 + 48LL);
  v7 = winrt::put_abi(a2, (struct IUnknown *)a2);
  v8 = v6(v5, v4, v7);
  winrt::check_hresult(v8);
  return a2;
}
