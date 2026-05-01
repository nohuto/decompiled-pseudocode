/*
 * XREFs of ??$ActivateInstance@UPackageManager@Deployment@Management@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUPackageManager@Deployment@Management@23@XZ @ 0x1801C1BB4
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_6fd1ee5d6179fa7e6cafc7c7248cd72e_@@CA?AUPackageManager@Deployment@Management@Windows@winrt@@AEBUIActivationFactory@Foundation@56@@Z @ 0x1801C1200 (-_lambda_invoker_cdecl_@_lambda_6fd1ee5d6179fa7e6cafc7c7248cd72e_@@CA-AUPackageManager@Deploymen.c)
 *     ??0PackageManager@Deployment@Management@Windows@winrt@@QEAA@XZ @ 0x1801C43F8 (--0PackageManager@Deployment@Management@Windows@winrt@@QEAA@XZ.c)
 *     _anonymous_namespace_::GetWebExperiencePackage @ 0x1801C8AC8 (_anonymous_namespace_--GetWebExperiencePackage.c)
 * Callees:
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x1800F79D0 (-put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800F9C28 (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

struct IUnknown *__fastcall winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::Management::Deployment::PackageManager>(
        __int64 *a1,
        struct IUnknown *a2)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, void **); // rbx
  void **v5; // rax
  unsigned int v6; // eax
  struct IUnknownVtbl *v8; // [rsp+30h] [rbp+8h] BYREF
  void (__fastcall ***v9)(_QWORD, void *, struct IUnknownVtbl **); // [rsp+38h] [rbp+10h] BYREF

  v9 = 0LL;
  v3 = *a1;
  v4 = *(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)*a1 + 48LL);
  v5 = winrt::put_abi((winrt *)&v9, a2);
  v6 = v4(v3, v5);
  winrt::check_hresult(v6);
  if ( v9 )
  {
    v8 = 0LL;
    (**v9)(v9, &winrt::impl::guid_v<winrt::Windows::Management::Deployment::IPackageManager>, &v8);
    a2->lpVtbl = v8;
  }
  else
  {
    a2->lpVtbl = 0LL;
  }
  winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)&v9);
  return a2;
}
