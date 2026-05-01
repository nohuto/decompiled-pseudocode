/*
 * XREFs of ?SetSystemOverlaysMode@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@W4FULL_SCREEN_OVERLAYS@@@Z @ 0x1803F0720
 * Callers:
 *     <none>
 * Callees:
 *     ?GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPEAUIApplicationView@@@Z @ 0x180015A20 (-GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPE.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18004C4FC (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800CAB68 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIFullScreenPositioner@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B7F64 (-InternalRelease@-$ComPtr@UIFullScreenPositioner@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??1?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEAA@XZ @ 0x1801D97CC (--1-$CPropertyStoreHelperBase@UIPropertyStore@@@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CPropertyStoreHelper@@QEAA@PEAUIPropertyStore@@@Z @ 0x1803EC3B0 (--0CPropertyStoreHelper@@QEAA@PEAUIPropertyStore@@@Z.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1803EF0D4 (--0-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Par.c)
 *     ??1FSMSetSystemOverlaysMode@FullScreenManagerTelemetry@@QEAA@XZ @ 0x1803EF28C (--1FSMSetSystemOverlaysMode@FullScreenManagerTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@FSMSetSystemOverlaysMode@FullScreenManagerTelemetry@@QEAAXPEAUIImmersiveApplication@@W4FULL_SCREEN_OVERLAYS@@@Z @ 0x1803F0C70 (-StartActivity@FSMSetSystemOverlaysMode@FullScreenManagerTelemetry@@QEAAXPEAUIImmersiveApplicati.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1803F0DFC (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CFullScreenManager::SetSystemOverlaysMode(__int64 a1, struct IUnknown *a2, unsigned int a3)
{
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rdi
  __int64 *v7; // rbx
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  __int64 *v11; // rbx
  struct IApplicationView **v12; // r9
  int ViewForApplication; // eax
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, __int64 *); // rdi
  __int64 **v16; // rax
  __int64 *AddressOf; // rax
  int v18; // eax
  HRESULT v19; // eax
  __int64 v20; // rdx
  void *ppvOut; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v23; // [rsp+38h] [rbp-C8h] BYREF
  IUnknown *punk; // [rsp+40h] [rbp-C0h] BYREF
  struct IPropertyStore *v25; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v27; // [rsp+58h] [rbp-A8h] BYREF
  __int16 v28; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v29; // [rsp+68h] [rbp-98h]
  _QWORD v30[40]; // [rsp+80h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+F8h]

  wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v30);
  v30[0] = &FullScreenManagerTelemetry::FSMSetSystemOverlaysMode::`vftable';
  FullScreenManagerTelemetry::FSMSetSystemOverlaysMode::StartActivity(v30, a2, a3);
  v25 = 0LL;
  QueryInterface = a2->lpVtbl[2].QueryInterface;
  v7 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v25, &v26);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v7);
  v8 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, GUID *, __int64 *))QueryInterface)(
         a2,
         0LL,
         &GUID_886d8eeb_8cf2_4446_8d02_cdba1dbdcf99,
         v7);
  v9 = v8;
  if ( v8 >= 0 )
  {
    CPropertyStoreHelper::CPropertyStoreHelper((CPropertyStoreHelper *)&v26, v25);
    v28 = 3;
    v29 = a3;
    v10 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int16 *))(*(_QWORD *)v26 + 48LL))(
            v26,
            &PKEY_ImmersiveApplication_FullScreenSystemOverlayMode,
            &v28);
    v9 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x12C,
        (int)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
        (const char *)(unsigned int)v10);
LABEL_18:
      CPropertyStoreHelperBase<IPropertyStore>::~CPropertyStoreHelperBase<IPropertyStore>(&v26);
      goto LABEL_19;
    }
    v23 = 0LL;
    v11 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v23, &v27);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v11);
    ViewForApplication = ApplicationViewHelpers::GetViewForApplication(
                           *(IUnknown **)(a1 - 72),
                           a2,
                           (struct IImmersiveApplication *)v11,
                           v12);
    v9 = ViewForApplication;
    if ( ViewForApplication < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x131,
        (int)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
        (const char *)(unsigned int)ViewForApplication);
LABEL_17:
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v23);
      goto LABEL_18;
    }
    punk = 0LL;
    v14 = v23;
    v15 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v23 + 80LL);
    v16 = (__int64 **)Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&punk, &v27);
    AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(*v16);
    v18 = v15(v14, AddressOf);
    v9 = v18;
    if ( v18 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x134,
        (int)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
        (const char *)(unsigned int)v18);
LABEL_16:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&punk);
      goto LABEL_17;
    }
    ppvOut = 0LL;
    Microsoft::WRL::ComPtr<IFullScreenPositioner>::InternalRelease((__int64 *)&ppvOut);
    v19 = IUnknown_QueryService(
            punk,
            &GUID_88ed940d_d632_4b84_9529_a3110b5af527,
            &GUID_88ed940d_d632_4b84_9529_a3110b5af527,
            &ppvOut);
    v9 = v19;
    if ( v19 >= 0 )
    {
      v19 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)ppvOut + 104LL))(ppvOut, v23);
      v9 = v19;
      if ( v19 >= 0 )
      {
        wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v30);
        v9 = 0;
        goto LABEL_15;
      }
      v20 = 312LL;
    }
    else
    {
      v20 = 311LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (int)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
      (const char *)(unsigned int)v19);
LABEL_15:
    Microsoft::WRL::ComPtr<IFullScreenPositioner>::InternalRelease((__int64 *)&ppvOut);
    goto LABEL_16;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x129,
    (int)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
    (const char *)(unsigned int)v8);
LABEL_19:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v25);
  FullScreenManagerTelemetry::FSMSetSystemOverlaysMode::~FSMSetSystemOverlaysMode((FullScreenManagerTelemetry::FSMSetSystemOverlaysMode *)v30);
  return v9;
}
