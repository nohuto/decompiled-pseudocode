/*
 * XREFs of ?CloseSwitchItem@CMultitaskingViewControllerBase@@UEAAXPEAUISwitchItem@@@Z @ 0x180576D70
 * Callers:
 *     <none>
 * Callees:
 *     ?CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSHER_INPUT@@W4APPCRUSHER_SOURCE@@W4APPCRUSHER_CLOSE_OPTIONS@@@Z @ 0x18000BF8C (-CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSH.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800CA970 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?WindowTabHostTabClosedViaAltTab@WindowTabHostTelemetry@@SAXXZ @ 0x18057772C (-WindowTabHostTabClosedViaAltTab@WindowTabHostTelemetry@@SAXXZ.c)
 *     ?WindowTabHostWindowClosedViaAltTab@WindowTabHostTelemetry@@SAXXZ @ 0x18057785C (-WindowTabHostWindowClosedViaAltTab@WindowTabHostTelemetry@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CMultitaskingViewControllerBase::CloseSwitchItem(
        CMultitaskingViewControllerBase *this,
        __int64 (__fastcall ***a2)(struct ISwitchItem *, GUID *, __int64 *))
{
  __int64 (__fastcall *v4)(struct ISwitchItem *, GUID *, __int64 *); // rbx
  int v5; // eax
  void (__fastcall *v6)(struct ISwitchItem *, GUID *, __int64 *); // rbx
  struct IApplicationView *v7; // rdx
  HWND WindowForView; // rax
  __int64 v9; // rbx
  __int64 (__fastcall ****v10)(_QWORD, GUID *, __int64); // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v12; // [rsp+58h] [rbp+28h] BYREF
  __int64 v13; // [rsp+60h] [rbp+30h] BYREF
  ApplicationViewHelpers *v14; // [rsp+68h] [rbp+38h] BYREF

  v13 = 0LL;
  v4 = **a2;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v13);
  v5 = v4((struct ISwitchItem *)a2, &GUID_de9754c3_efc7_4024_99ca_fbded7bee7cb, &v13);
  if ( v5 >= 0 )
  {
    if ( *((_QWORD *)this + 9) )
    {
      v12 = 0LL;
      v6 = (void (__fastcall *)(struct ISwitchItem *, GUID *, __int64 *))**a2;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
      v6((struct ISwitchItem *)a2, &GUID_de9754c3_efc7_4024_99ca_fbded7bee7cb, &v12);
      (*(void (__fastcall **)(__int64, ApplicationViewHelpers **))(*(_QWORD *)v12 + 24LL))(v12, &v14);
      WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(
                              (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64))v14,
                              v7);
      if ( GetPropW(WindowForView, (LPCWSTR)0xA920) )
        WindowTabHostTelemetry::WindowTabHostTabClosedViaAltTab();
      else
        WindowTabHostTelemetry::WindowTabHostWindowClosedViaAltTab();
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v14);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
    }
    v9 = *((_QWORD *)this + 5);
    v10 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64))(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 24LL))(
                                                                v13,
                                                                &v12);
    ApplicationViewHelpers::CloseView(*v10, v9, 7, 8, 3);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v12);
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x97,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\baseviewcontroller.cpp",
      (const char *)(unsigned int)v5);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v13);
}
