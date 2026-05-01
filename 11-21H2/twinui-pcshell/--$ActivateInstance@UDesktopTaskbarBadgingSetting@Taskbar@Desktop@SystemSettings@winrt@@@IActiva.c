/*
 * XREFs of ??$ActivateInstance@UDesktopTaskbarBadgingSetting@Taskbar@Desktop@SystemSettings@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUDesktopTaskbarBadgingSetting@Taskbar@Desktop@SystemSettings@3@XZ @ 0x1801D0208
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_ad8d6bf895fdeda767c5ede3379139c0_@@CA?AUDesktopTaskbarBadgingSetting@Taskbar@Desktop@SystemSettings@winrt@@AEBUIActivationFactory@Foundation@Windows@6@@Z @ 0x1801D01E0 (-_lambda_invoker_cdecl_@_lambda_ad8d6bf895fdeda767c5ede3379139c0_@@CA-AUDesktopTaskbarBadgingSet.c)
 *     ?GetTaskbarBadgingEnabled@DashboardTaskbarSettings@@YA_NXZ @ 0x1801D07C4 (-GetTaskbarBadgingEnabled@DashboardTaskbarSettings@@YA_NXZ.c)
 * Callees:
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x1800F79D0 (-put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800F9C28 (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

struct IUnknown *__fastcall winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::SystemSettings::Desktop::Taskbar::DesktopTaskbarBadgingSetting>(
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
    (**v9)(v9, &winrt::impl::guid_v<winrt::SystemSettings::Desktop::Taskbar::IDesktopTaskbarBadgingSetting>, &v8);
    a2->lpVtbl = v8;
  }
  else
  {
    a2->lpVtbl = 0LL;
  }
  winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)&v9);
  return a2;
}
