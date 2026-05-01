/*
 * XREFs of ?InvokeSwitchItem@CMultitaskingViewControllerBase@@UEAAXPEAUISwitchItem@@@Z @ 0x1804BC520
 * Callers:
 *     ?InvokeSwitchItem@CAltTabViewController@@UEAAXPEAUISwitchItem@@@Z @ 0x1804AD880 (-InvokeSwitchItem@CAltTabViewController@@UEAAXPEAUISwitchItem@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18002E638 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180064078 (--1-$unique_storage@U-$resource_policy@PEA_WP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_consta.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180082930 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowTabHost@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800CB14C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowTabHost@@@details@wil@@QEAAX_NW4Rep.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18019033C (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ExtractAppId@SwitchItemTelemetry@@YAJPEAUISwitchItem@@PEAPEAG@Z @ 0x1804B4AE4 (-ExtractAppId@SwitchItemTelemetry@@YAJPEAUISwitchItem@@PEAPEAG@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_f4067639e63611d5d8388fe1412d05ee___ @ 0x1804BBF10 (Windows--Internal--ComTaskPool--QueueTask__lambda_f4067639e63611d5d8388fe1412d05ee___.c)
 *     _lambda_f4067639e63611d5d8388fe1412d05ee_::__lambda_f4067639e63611d5d8388fe1412d05ee_ @ 0x1804BBFAC (_lambda_f4067639e63611d5d8388fe1412d05ee_--__lambda_f4067639e63611d5d8388fe1412d05ee_.c)
 *     ?WindowTabHostTabSwitchedToViaAltTab@WindowTabHostTelemetry@@SAXXZ @ 0x1804BCD04 (-WindowTabHostTabSwitchedToViaAltTab@WindowTabHostTelemetry@@SAXXZ.c)
 *     ?WindowTabHostWindowSwitchedToViaAltTab@WindowTabHostTelemetry@@SAXXZ @ 0x1804BCE34 (-WindowTabHostWindowSwitchedToViaAltTab@WindowTabHostTelemetry@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CMultitaskingViewControllerBase::InvokeSwitchItem(
        CMultitaskingViewControllerBase *this,
        __int64 (__fastcall ***a2)(SwitchItemTelemetry *, GUID *, __int64 *))
{
  __int64 (__fastcall *v4)(SwitchItemTelemetry *, GUID *, __int64 *); // rbx
  __int64 v5; // r9
  struct IApplicationView *v6; // rdx
  HWND WindowForView; // rsi
  HANDLE PropW; // r14
  __int64 v9; // rdi
  int (__fastcall *v10)(__int64, HANDLE, __int64 *); // rbx
  __int64 *AddressOf; // rax
  UINT v12; // eax
  const char *v13; // r9
  IUnknown *v14; // rbx
  unsigned __int16 **v15; // r8
  int AppId; // eax
  __int64 v17; // rcx
  IUnknown *v18; // [rsp+20h] [rbp-20h] BYREF
  __int64 v19[3]; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  __int64 v21; // [rsp+80h] [rbp+40h] BYREF
  ApplicationViewHelpers *v22; // [rsp+88h] [rbp+48h] BYREF
  __int64 v23; // [rsp+90h] [rbp+50h] BYREF
  IUnknown *v24; // [rsp+98h] [rbp+58h] BYREF

  v23 = 0LL;
  v4 = **a2;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v23);
  v4((SwitchItemTelemetry *)a2, &GUID_de9754c3_efc7_4024_99ca_fbded7bee7cb, &v23);
  (*(void (__fastcall **)(__int64, ApplicationViewHelpers **))(*(_QWORD *)v23 + 24LL))(v23, &v22);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowTabHost>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_WindowTabHost>::GetImpl'::`2'::impl,
    1u,
    3u,
    v5);
  if ( *((_QWORD *)this + 10) )
  {
    WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(
                            (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64))v22,
                            v6);
    PropW = GetPropW(WindowForView, (LPCWSTR)0xA920);
    if ( PropW )
    {
      v24 = 0LL;
      v9 = *((_QWORD *)this + 10);
      v10 = *(int (__fastcall **)(__int64, HANDLE, __int64 *))(*(_QWORD *)v9 + 48LL);
      AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf((__int64 *)&v24);
      if ( v10(v9, PropW, AddressOf) >= 0 )
        Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)&v22, (__int64 *)&v24);
      v12 = dword_1807B69F8;
      if ( dword_1807B69F8 )
        goto LABEL_9;
      v12 = RegisterWindowMessageW(L"TabSwitch");
      dword_1807B69F8 = v12;
      if ( !v12 )
      {
        wil::details::in1diag3::_Log_GetLastError(
          retaddr,
          (void *)0x73,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\baseviewcontroller.cpp",
          v13);
        v12 = dword_1807B69F8;
      }
      if ( v12 )
      {
LABEL_9:
        PostMessageW(WindowForView, v12, 0LL, 0LL);
        WindowTabHostTelemetry::WindowTabHostTabSwitchedToViaAltTab();
      }
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v24);
    }
    else
    {
      WindowTabHostTelemetry::WindowTabHostWindowSwitchedToViaAltTab();
    }
  }
  v14 = (IUnknown *)*((_QWORD *)this + 4);
  v24 = v14;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v24);
  v21 = 0LL;
  AppId = SwitchItemTelemetry::ExtractAppId(a2, (struct ISwitchItem *)&v21, v15);
  if ( AppId < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x89,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\baseviewcontroller.cpp",
      (const char *)(unsigned int)AppId);
  CoAllowSetForegroundWindow(v14, 0LL);
  v18 = v14;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v18);
  v19[0] = (__int64)v22;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v19);
  v19[1] = v21;
  v21 = 0LL;
  Windows::Internal::ComTaskPool::QueueTask__lambda_f4067639e63611d5d8388fe1412d05ee___(v17, &v18);
  lambda_f4067639e63611d5d8388fe1412d05ee_::__lambda_f4067639e63611d5d8388fe1412d05ee_((__int64)&v18);
  wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>((void **)&v21);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v24);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v22);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v23);
}
