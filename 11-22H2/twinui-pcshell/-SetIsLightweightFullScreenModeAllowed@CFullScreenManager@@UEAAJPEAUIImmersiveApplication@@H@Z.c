/*
 * XREFs of ?SetIsLightweightFullScreenModeAllowed@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@H@Z @ 0x1803F04A0
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
 *     ??1?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEAA@XZ @ 0x1801D97CC (--1-$CPropertyStoreHelperBase@UIPropertyStore@@@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CPropertyStoreHelper@@QEAA@PEAUIPropertyStore@@@Z @ 0x1803EC3B0 (--0CPropertyStoreHelper@@QEAA@PEAUIPropertyStore@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CFullScreenManager::SetIsLightweightFullScreenModeAllowed(
        IUnknown **this,
        struct IUnknown *a2,
        int a3)
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
  IUnknown *punk; // [rsp+30h] [rbp-40h] BYREF
  struct IPropertyStore *v23; // [rsp+38h] [rbp-38h] BYREF
  __int64 v24; // [rsp+40h] [rbp-30h] BYREF
  __int64 v25; // [rsp+48h] [rbp-28h] BYREF
  __int16 v26; // [rsp+50h] [rbp-20h] BYREF
  __int16 v27; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  void *ppvOut; // [rsp+A8h] [rbp+38h] BYREF
  __int64 v30; // [rsp+B8h] [rbp+48h] BYREF

  v23 = 0LL;
  QueryInterface = a2->lpVtbl[2].QueryInterface;
  v7 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v23, &v24);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v7);
  v8 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, GUID *, __int64 *))QueryInterface)(
         a2,
         0LL,
         &GUID_886d8eeb_8cf2_4446_8d02_cdba1dbdcf99,
         v7);
  v9 = v8;
  if ( v8 >= 0 )
  {
    CPropertyStoreHelper::CPropertyStoreHelper((CPropertyStoreHelper *)&v24, v23);
    v26 = 11;
    if ( a3 )
      v27 = -1;
    else
      v27 = 0;
    v10 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int16 *))(*(_QWORD *)v24 + 48LL))(
            v24,
            &PKEY_ImmersiveApplication_LightweightFullScreenModeAllowed,
            &v26);
    v9 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x145,
        (int)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
        (const char *)(unsigned int)v10);
LABEL_21:
      CPropertyStoreHelperBase<IPropertyStore>::~CPropertyStoreHelperBase<IPropertyStore>(&v24);
      goto LABEL_22;
    }
    v30 = 0LL;
    v11 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v30, &v25);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v11);
    ViewForApplication = ApplicationViewHelpers::GetViewForApplication(
                           *(this - 9),
                           a2,
                           (struct IImmersiveApplication *)v11,
                           v12);
    v9 = ViewForApplication;
    if ( ViewForApplication < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x148,
        (int)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
        (const char *)(unsigned int)ViewForApplication);
LABEL_20:
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v30);
      goto LABEL_21;
    }
    punk = 0LL;
    v14 = v30;
    v15 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v30 + 80LL);
    v16 = (__int64 **)Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&punk, &v25);
    AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(*v16);
    v18 = v15(v14, AddressOf);
    v9 = v18;
    if ( v18 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x14C,
        (int)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
        (const char *)(unsigned int)v18);
LABEL_19:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&punk);
      goto LABEL_20;
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
      v19 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)ppvOut + 104LL))(ppvOut, v30);
      v9 = v19;
      if ( v19 >= 0 )
      {
        v9 = 0;
        goto LABEL_18;
      }
      v20 = 336LL;
    }
    else
    {
      v20 = 335LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (int)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
      (const char *)(unsigned int)v19);
LABEL_18:
    Microsoft::WRL::ComPtr<IFullScreenPositioner>::InternalRelease((__int64 *)&ppvOut);
    goto LABEL_19;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x142,
    (int)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
    (const char *)(unsigned int)v8);
LABEL_22:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v23);
  return v9;
}
