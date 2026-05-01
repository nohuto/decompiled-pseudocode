/*
 * XREFs of ?Show@XamlAllUpViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW_FLAGS@@@Z @ 0x1804384F0
 * Callers:
 *     ?ToggleAllUpView@XamlAllUpViewHost@@UEAAJXZ @ 0x1804392C0 (-ToggleAllUpView@XamlAllUpViewHost@@UEAAJXZ.c)
 * Callees:
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ @ 0x18000F170 (-DismissView@-$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ.c)
 *     ?_RegisterForMonitorEvents@?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@IEAAJPEAUIUnknown@@@Z @ 0x18000F5A0 (-_RegisterForMonitorEvents@-$CMultitaskingViewHostBase@UIAllUpViewHost@@@@IEAAJPEAUIUnknown@@@Z.c)
 *     ?StartActivity@ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAXXZ @ 0x1800170F4 (-StartActivity@ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAXXZ.c)
 *     ??0?$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180017778 (--0-$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 *     ??4ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x180017C94 (--4ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??0?$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x180017D1C (--0-$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag__ea_180017D1C.c)
 *     ??1ShowXamlTaskView@XamlSwitcherTelemetry@@QEAA@XZ @ 0x180018180 (--1ShowXamlTaskView@XamlSwitcherTelemetry@@QEAA@XZ.c)
 *     ?_ViewShown@?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@IEAAXXZ @ 0x180018358 (-_ViewShown@-$CMultitaskingViewHostBase@UIAllUpViewHost@@@@IEAAXXZ.c)
 *     ??0XamlAllUpViewController@@QE$AAA@PEAUIAllUpViewHost@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUISnapServiceProvider@@PEAUIMultitaskingViewManager@@PEAUIAppLayoutCache@@PE$AAUIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@@PE$AAUIVirtualDesktopController@89Internal@Windows@@@Z @ 0x180018380 (--0XamlAllUpViewController@@QE$AAA@PEAUIAllUpViewHost@@PEAUIApplicationViewSwitcher@@PEAUIImmers.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z @ 0x180063B30 (-__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z.c)
 *     ?IsTabletMode@TabletModeHelpers@@YA_NXZ @ 0x1800693F8 (-IsTabletMode@TabletModeHelpers@@YA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitor@@@Z @ 0x1800D5664 (--4-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitor@@@Z.c)
 *     ??4?$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitorManager@@@Z @ 0x1800FE170 (--4-$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitorManager@.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180141840 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CreateFrames@XamlAllUpViewHost@@AEAAJXZ @ 0x180432ED4 (-CreateFrames@XamlAllUpViewHost@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=12 #try_helpers=1
__int64 __fastcall XamlAllUpViewHost::Show(__int64 a1, IUnknown *a2, _QWORD *a3, int a4)
{
  struct _RTL_CRITICAL_SECTION *v6; // r14
  int v7; // r15d
  int v8; // eax
  unsigned int v9; // esi
  enum _TABLETMODESTATE *v11; // rdx
  TabletModeHelpers *v12; // rcx
  HRESULT v13; // eax
  unsigned int v14; // esi
  _QWORD *v15; // rax
  _QWORD *v16; // rsi
  __int64 v17; // rdx
  _QWORD *v18; // rax
  _QWORD *v19; // rsi
  __int64 v20; // rdx
  int Frames; // eax
  void *ppvOut; // [rsp+50h] [rbp-2F8h] BYREF
  _QWORD *v23; // [rsp+58h] [rbp-2F0h]
  __int64 v24; // [rsp+60h] [rbp-2E8h]
  __int64 v25; // [rsp+68h] [rbp-2E0h]
  __int64 v26; // [rsp+70h] [rbp-2D8h]
  char v27; // [rsp+78h] [rbp-2D0h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+80h] [rbp-2C8h]
  int v29; // [rsp+88h] [rbp-2C0h]
  _QWORD v30[40]; // [rsp+90h] [rbp-2B8h] BYREF
  _QWORD v31[40]; // [rsp+1D0h] [rbp-178h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+348h] [rbp+0h]

  LODWORD(ppvOut) = a4;
  v23 = a3;
  v25 = a1;
  v6 = (struct _RTL_CRITICAL_SECTION *)((a1 + 24) & -(__int64)(a1 != 0));
  lpCriticalSection = v6;
  v7 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v6, 1);
  v29 = v7;
  wil::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v30);
  v30[0] = &XamlSwitcherTelemetry::ShowXamlTaskView::`vftable';
  XamlSwitcherTelemetry::ShowXamlTaskView::StartActivity((XamlSwitcherTelemetry::ShowXamlTaskView *)v30);
  v26 = a1;
  v27 = 1;
  v8 = CMultitaskingViewHostBase<IAllUpViewHost>::_RegisterForMonitorEvents(a1, a2);
  v9 = v8;
  v24 = a1 + 232;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x101,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
      (const char *)(unsigned int)v8);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)(a1 + 232));
    CMultitaskingViewHostBase<IAllUpViewHost>::DismissView(a1);
LABEL_3:
    XamlSwitcherTelemetry::ShowXamlTaskView::~ShowXamlTaskView((XamlSwitcherTelemetry::ShowXamlTaskView *)v30);
    if ( v7 >= 0 )
      LeaveCriticalSection(v6);
    return v9;
  }
  *(_DWORD *)(a1 + 288) = (_DWORD)ppvOut;
  Microsoft::WRL::ComPtr<IImmersiveMonitorManager>::operator=((__int64 *)(a1 + 232), (__int64)a2);
  Microsoft::WRL::ComPtr<IImmersiveMonitor>::operator=((__int64 *)(a1 + 240), (__int64)v23);
  if ( TabletModeHelpers::IsTabletMode(v12, v11) )
  {
    ppvOut = 0LL;
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&ppvOut);
    v13 = IUnknown_QueryService(
            *(IUnknown **)(a1 + 240),
            &GUID_e511e73c_cad4_40aa_bf1a_b9938ac75ff0,
            &GUID_e511e73c_cad4_40aa_bf1a_b9938ac75ff0,
            &ppvOut);
    v14 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x10D,
        (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
        (const char *)(unsigned int)v13);
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&ppvOut);
      v27 = 0;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)(a1 + 232));
      CMultitaskingViewHostBase<IAllUpViewHost>::DismissView(a1);
      XamlSwitcherTelemetry::ShowXamlTaskView::~ShowXamlTaskView((XamlSwitcherTelemetry::ShowXamlTaskView *)v30);
      if ( v7 >= 0 )
        LeaveCriticalSection(v6);
      return v14;
    }
    v23 = Platform::Details::Heap::Allocate(0x80uLL, 0xE8uLL);
    v15 = XamlAllUpViewController::XamlAllUpViewController(
            v23,
            a1,
            *(_QWORD *)(a1 + 208),
            *(_QWORD *)(a1 + 216),
            *(_QWORD *)(a1 + 248),
            *(__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))(a1 + 80),
            (__int64)ppvOut,
            0LL,
            0LL);
    v16 = v15;
    v23 = v15;
    if ( v15 )
      v17 = (__int64)(v15 + 2);
    else
      v17 = 0LL;
    __abi_winrt_ptr_assign((__int64 *)(a1 + 200), v17);
    if ( v16 )
      (*(void (__fastcall **)(_QWORD *))(*v16 + 16LL))(v16);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&ppvOut);
  }
  else
  {
    v23 = Platform::Details::Heap::Allocate(0x80uLL, 0xE8uLL);
    v18 = XamlAllUpViewController::XamlAllUpViewController(
            v23,
            a1,
            *(_QWORD *)(a1 + 208),
            *(_QWORD *)(a1 + 216),
            *(_QWORD *)(a1 + 248),
            *(__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))(a1 + 80),
            0LL,
            *(_QWORD *)(a1 + 176),
            *(_QWORD *)(a1 + 192));
    v19 = v18;
    v23 = v18;
    if ( v18 )
      v20 = (__int64)(v18 + 2);
    else
      v20 = 0LL;
    __abi_winrt_ptr_assign((__int64 *)(a1 + 200), v20);
    if ( v19 )
      (*(void (__fastcall **)(_QWORD *))(*v19 + 16LL))(v19);
  }
  Frames = XamlAllUpViewHost::CreateFrames((XamlAllUpViewHost *)a1);
  v9 = Frames;
  if ( Frames < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x125,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
      (const char *)(unsigned int)Frames);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)(a1 + 232));
    CMultitaskingViewHostBase<IAllUpViewHost>::DismissView(a1);
    goto LABEL_3;
  }
  CMultitaskingViewHostBase<IAllUpViewHost>::_ViewShown(a1);
  *(_BYTE *)(a1 + 112) = 1;
  wil::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v31,
    (__int64)v30,
    0);
  v31[0] = &XamlSwitcherTelemetry::ShowXamlTaskView::`vftable';
  XamlSwitcherTelemetry::ShowXamlTaskView::operator=(a1 + 368, (__int64)v31);
  XamlSwitcherTelemetry::ShowXamlTaskView::~ShowXamlTaskView((XamlSwitcherTelemetry::ShowXamlTaskView *)v31);
  XamlSwitcherTelemetry::ShowXamlTaskView::~ShowXamlTaskView((XamlSwitcherTelemetry::ShowXamlTaskView *)v30);
  if ( v7 >= 0 )
    LeaveCriticalSection(v6);
  return 0LL;
}
