/*
 * XREFs of ?InvokeSwitchItem@CMultitaskingViewControllerBase@@UEAAXPEAUISwitchItem@@@Z @ 0x180577080
 * Callers:
 *     ?InvokeSwitchItem@CAltTabViewController@@UEAAXPEAUISwitchItem@@@Z @ 0x18056A2E0 (-InvokeSwitchItem@CAltTabViewController@@UEAAXPEAUISwitchItem@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18009D028 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800CA970 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x180163C70 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?WindowTabHostWindowSwitchedToViaAltTab@WindowTabHostTelemetry@@SAXXZ @ 0x1802E4150 (-WindowTabHostWindowSwitchedToViaAltTab@WindowTabHostTelemetry@@SAXXZ.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1803A43A8 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?ExtractAppId@SwitchItemTelemetry@@YAJPEAUISwitchItem@@PEAPEAG@Z @ 0x180571EB4 (-ExtractAppId@SwitchItemTelemetry@@YAJPEAUISwitchItem@@PEAPEAG@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_f4067639e63611d5d8388fe1412d05ee___ @ 0x180576B00 (Windows--Internal--ComTaskPool--QueueTask__lambda_f4067639e63611d5d8388fe1412d05ee___.c)
 *     _lambda_f4067639e63611d5d8388fe1412d05ee_::__lambda_f4067639e63611d5d8388fe1412d05ee_ @ 0x180576B9C (_lambda_f4067639e63611d5d8388fe1412d05ee_--__lambda_f4067639e63611d5d8388fe1412d05ee_.c)
 *     ?WindowTabHostTabSwitchedToViaAltTab@WindowTabHostTelemetry@@SAXXZ @ 0x1805777C4 (-WindowTabHostTabSwitchedToViaAltTab@WindowTabHostTelemetry@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CMultitaskingViewControllerBase::InvokeSwitchItem(
        CMultitaskingViewControllerBase *this,
        __int64 (__fastcall ***a2)(SwitchItemTelemetry *, GUID *, __int64 *))
{
  __int64 (__fastcall *v4)(SwitchItemTelemetry *, GUID *, __int64 *); // rbx
  struct IApplicationView *v5; // rdx
  HWND WindowForView; // rsi
  __int64 v7; // rcx
  HANDLE PropW; // r14
  __int64 v9; // rdi
  int (__fastcall *v10)(__int64, HANDLE, IUnknown **); // rbx
  UINT v11; // eax
  const char *v12; // r9
  IUnknown *v13; // rbx
  void **v14; // rax
  unsigned __int16 **v15; // r8
  int AppId; // eax
  __int64 v17; // rcx
  IUnknown *v18; // [rsp+20h] [rbp-20h] BYREF
  __int64 v19[3]; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  IUnknown *v21; // [rsp+80h] [rbp+40h] BYREF
  LPVOID pv; // [rsp+88h] [rbp+48h] BYREF
  ApplicationViewHelpers *v23; // [rsp+90h] [rbp+50h] BYREF
  __int64 v24; // [rsp+98h] [rbp+58h] BYREF

  v24 = 0LL;
  v4 = **a2;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
  v4((SwitchItemTelemetry *)a2, &GUID_de9754c3_efc7_4024_99ca_fbded7bee7cb, &v24);
  (*(void (__fastcall **)(__int64, ApplicationViewHelpers **))(*(_QWORD *)v24 + 24LL))(v24, &v23);
  if ( *((_QWORD *)this + 9) )
  {
    WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(
                            (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64))v23,
                            v5);
    PropW = GetPropW(WindowForView, (LPCWSTR)0xA920);
    if ( PropW )
    {
      v21 = 0LL;
      v9 = *((_QWORD *)this + 9);
      v10 = *(int (__fastcall **)(__int64, HANDLE, IUnknown **))(*(_QWORD *)v9 + 48LL);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v21);
      if ( v10(v9, PropW, &v21) >= 0 )
        Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)&v23, (__int64 *)&v21);
      v11 = dword_180991AB8;
      if ( dword_180991AB8 )
        goto LABEL_9;
      v11 = RegisterWindowMessageW(L"TabSwitch");
      dword_180991AB8 = v11;
      if ( !v11 )
      {
        wil::details::in1diag3::_Log_GetLastError(
          retaddr,
          (void *)0x73,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\baseviewcontroller.cpp",
          v12);
        v11 = dword_180991AB8;
      }
      if ( v11 )
      {
LABEL_9:
        PostMessageW(WindowForView, v11, 0LL, 0LL);
        WindowTabHostTelemetry::WindowTabHostTabSwitchedToViaAltTab();
      }
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v21);
    }
    else
    {
      WindowTabHostTelemetry::WindowTabHostWindowSwitchedToViaAltTab(v7);
    }
  }
  v13 = (IUnknown *)*((_QWORD *)this + 4);
  v21 = v13;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v21);
  pv = 0LL;
  v14 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put(&pv);
  AppId = SwitchItemTelemetry::ExtractAppId(a2, (struct ISwitchItem *)v14, v15);
  if ( AppId < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x89,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\baseviewcontroller.cpp",
      (const char *)(unsigned int)AppId);
  CoAllowSetForegroundWindow(v13, 0LL);
  v18 = v13;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v18);
  v19[0] = (__int64)v23;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v19);
  v19[1] = (__int64)pv;
  pv = 0LL;
  Windows::Internal::ComTaskPool::QueueTask__lambda_f4067639e63611d5d8388fe1412d05ee___(v17, &v18);
  lambda_f4067639e63611d5d8388fe1412d05ee_::__lambda_f4067639e63611d5d8388fe1412d05ee_((__int64 *)&v18);
  if ( pv )
    CoTaskMemFree(pv);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v21);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v23);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
}
