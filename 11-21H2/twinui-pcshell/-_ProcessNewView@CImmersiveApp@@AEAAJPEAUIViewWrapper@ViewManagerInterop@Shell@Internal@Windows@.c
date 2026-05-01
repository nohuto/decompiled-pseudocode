/*
 * XREFs of ?_ProcessNewView@CImmersiveApp@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@_NW4WindowAdditionReason@@PEAUITaskWindow@@PEA_N@Z @ 0x180070D38
 * Callers:
 *     ?HandleViewAddition@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4WindowAdditionReason@@PEAUITaskWindow@@@Z @ 0x180041880 (-HandleViewAddition@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windo.c)
 *     ?HandleInitialViewCreation@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUITaskWindow@@@Z @ 0x180172370 (-HandleInitialViewCreation@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_PersistFlagsToPresentationLayer@CloakType@CImmersiveApp@@AEAAXPEAUIApplicationPresentationLayer@@@Z @ 0x18002E340 (-_PersistFlagsToPresentationLayer@CloakType@CImmersiveApp@@AEAAXPEAUIApplicationPresentationLaye.c)
 *     ?AddConsecutiveView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4WindowAdditionReason@@PEAUITaskWindow@@@Z @ 0x180037748 (-AddConsecutiveView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerI.c)
 *     ?AddFirstView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUITaskWindow@@@Z @ 0x1800701F4 (-AddFirstView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop.c)
 *     ?StartActivity@ProcessNewWindow@CImmersiveAppTelemetry@@QEAAXPEBG@Z @ 0x180070F44 (-StartActivity@ProcessNewWindow@CImmersiveAppTelemetry@@QEAAXPEBG@Z.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800710F0 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18007206C (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro_ea_18007206C.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800767C0 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ @ 0x1800C6880 (-_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ.c)
 *     ?_UpdateWindowTitleAndButtons@CImmersiveApp@@AEAAXXZ @ 0x1800EBA40 (-_UpdateWindowTitleAndButtons@CImmersiveApp@@AEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180126700 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?IsApplicationWindowVisible@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18017C784 (-IsApplicationWindowVisible@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CImmersiveApp::_ProcessNewView(
        __int64 a1,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        char a3,
        int a4,
        struct ITaskWindow *a5,
        bool *a6)
{
  void (__fastcall *v9)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, GUID *, __int64 *); // rbx
  CImmersiveApp::CImmersiveWindowCollection *v10; // rcx
  int View; // eax
  unsigned int v12; // esi
  __int64 v13; // rdx
  void (__fastcall *v15)(struct ITaskWindow *, GUID *, __int64 *); // rbx
  struct IApplicationPresentationLayer *v16; // rdx
  __int64 v17; // [rsp+20h] [rbp-E0h] BYREF
  int v18; // [rsp+28h] [rbp-D8h]
  _QWORD v19[40]; // [rsp+30h] [rbp-D0h] BYREF

  v18 = a4;
  *a6 = *(_QWORD *)(a1 + 464) == 0LL;
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    v19,
    "ProcessNewWindow");
  v19[0] = &CImmersiveAppTelemetry::ProcessNewWindow::`vftable';
  CImmersiveAppTelemetry::ProcessNewWindow::StartActivity(
    (CImmersiveAppTelemetry::ProcessNewWindow *)v19,
    *(const unsigned __int16 **)(a1 + 584));
  v17 = 0LL;
  if ( a2 )
  {
    v9 = **(void (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, GUID *, __int64 *))a2;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v17);
    v9(a2, &GUID_9230a21d_831d_414f_87f1_f0131a16a75a, &v17);
  }
  else
  {
    v15 = *(void (__fastcall **)(struct ITaskWindow *, GUID *, __int64 *))(*(_QWORD *)a5 + 40LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v17);
    v15(a5, &GUID_9230a21d_831d_414f_87f1_f0131a16a75a, &v17);
  }
  (*(void (__fastcall **)(__int64, const WCHAR *, _QWORD))(*(_QWORD *)v17 + 96LL))(
    v17,
    L"LastSetGlomIdForReconstitution",
    *(unsigned int *)(a1 + 592));
  v10 = (CImmersiveApp::CImmersiveWindowCollection *)(a1 + 288);
  if ( a3 )
    View = CImmersiveApp::CImmersiveWindowCollection::AddFirstView(v10, a2, a5);
  else
    View = CImmersiveApp::CImmersiveWindowCollection::AddConsecutiveView((__int64)v10, (__int64)a2, v18, (__int64)a5);
  v12 = View;
  if ( View < 0 )
  {
    if ( *a6 )
      *a6 = 0;
  }
  else if ( a3 )
  {
    CImmersiveApp::_UpdateAppStateAndSendNotifications((CImmersiveApp *)a1);
    GetSystemTimeAsFileTime((LPFILETIME)(a1 + 668));
    *(_QWORD *)(a1 + 692) = *(_QWORD *)(a1 + 668);
    if ( CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowVisible((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 288)) )
    {
      *(_QWORD *)(a1 + 700) = v13;
      v16 = *(struct IApplicationPresentationLayer **)(a1 + 440);
      *(_DWORD *)(a1 + 624) &= ~1u;
      CImmersiveApp::CloakType::_PersistFlagsToPresentationLayer((LPCWSTR *)(a1 + 624), v16);
    }
    CImmersiveApp::_UpdateWindowTitleAndButtons((CImmersiveApp *)a1);
  }
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v19, v12);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v17);
  v19[0] = &CImmersiveAppTelemetry::ProcessNewWindow::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v19);
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(v19);
  return v12;
}
