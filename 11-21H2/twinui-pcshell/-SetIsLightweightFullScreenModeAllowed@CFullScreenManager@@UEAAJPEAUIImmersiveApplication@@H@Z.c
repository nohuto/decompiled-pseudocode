/*
 * XREFs of ?SetIsLightweightFullScreenModeAllowed@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@H@Z @ 0x180322D90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ?GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPEAUIApplicationView@@@Z @ 0x180053DA8 (-GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPE.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800759C4 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18015DFA8 (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     ?InternalRelease@?$ComPtr@UICallingProcessInfo@@@WRL@Microsoft@@IEAAKXZ @ 0x180173F8C (-InternalRelease@-$ComPtr@UICallingProcessInfo@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEAA@XZ @ 0x180191028 (--1-$CPropertyStoreHelperBase@UIPropertyStore@@@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CPropertyStoreHelper@@QEAA@PEAUIPropertyStore@@@Z @ 0x18031E300 (--0CPropertyStoreHelper@@QEAA@PEAUIPropertyStore@@@Z.c)
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
  __int64 **v11; // rax
  __int64 *AddressOf; // rax
  struct IApplicationView **v13; // r9
  int ViewForApplication; // eax
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, __int64 *); // rdi
  __int64 **v17; // rax
  __int64 *v18; // rax
  int v19; // eax
  HRESULT v20; // eax
  __int64 v21; // rdx
  IUnknown *punk; // [rsp+30h] [rbp-40h] BYREF
  struct IPropertyStore *v24; // [rsp+38h] [rbp-38h] BYREF
  __int64 v25; // [rsp+40h] [rbp-30h] BYREF
  __int64 v26; // [rsp+48h] [rbp-28h] BYREF
  __int16 v27; // [rsp+50h] [rbp-20h] BYREF
  __int16 v28; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  void *ppvOut; // [rsp+A8h] [rbp+38h] BYREF
  __int64 v31; // [rsp+B8h] [rbp+48h] BYREF

  v24 = 0LL;
  QueryInterface = a2->lpVtbl[2].QueryInterface;
  v7 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v24, &v25);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v7);
  v8 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, GUID *, __int64 *))QueryInterface)(
         a2,
         0LL,
         &GUID_886d8eeb_8cf2_4446_8d02_cdba1dbdcf99,
         v7);
  v9 = v8;
  if ( v8 >= 0 )
  {
    CPropertyStoreHelper::CPropertyStoreHelper((CPropertyStoreHelper *)&v25, v24);
    v27 = 11;
    if ( a3 )
      v28 = -1;
    else
      v28 = 0;
    v10 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int16 *))(*(_QWORD *)v25 + 48LL))(
            v25,
            &PKEY_ImmersiveApplication_LightweightFullScreenModeAllowed,
            &v27);
    v9 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x145,
        (__int64)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
        (const char *)(unsigned int)v10);
LABEL_21:
      CPropertyStoreHelperBase<IPropertyStore>::~CPropertyStoreHelperBase<IPropertyStore>(&v25);
      goto LABEL_22;
    }
    v31 = 0LL;
    v11 = (__int64 **)Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v31, &v26);
    AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf(*v11);
    ViewForApplication = ApplicationViewHelpers::GetViewForApplication(
                           *(this - 9),
                           a2,
                           (struct IImmersiveApplication *)AddressOf,
                           v13);
    v9 = ViewForApplication;
    if ( ViewForApplication < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x148,
        (__int64)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
        (const char *)(unsigned int)ViewForApplication);
LABEL_20:
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v31);
      goto LABEL_21;
    }
    punk = 0LL;
    v15 = v31;
    v16 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v31 + 80LL);
    v17 = (__int64 **)Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&punk, &v26);
    v18 = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(*v17);
    v19 = v16(v15, v18);
    v9 = v19;
    if ( v19 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x14C,
        (__int64)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
        (const char *)(unsigned int)v19);
LABEL_19:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&punk);
      goto LABEL_20;
    }
    ppvOut = 0LL;
    Microsoft::WRL::ComPtr<ICallingProcessInfo>::InternalRelease((__int64 *)&ppvOut);
    v20 = IUnknown_QueryService(
            punk,
            &GUID_88ed940d_d632_4b84_9529_a3110b5af527,
            &GUID_88ed940d_d632_4b84_9529_a3110b5af527,
            &ppvOut);
    v9 = v20;
    if ( v20 >= 0 )
    {
      v20 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)ppvOut + 104LL))(ppvOut, v31);
      v9 = v20;
      if ( v20 >= 0 )
      {
        v9 = 0;
        goto LABEL_18;
      }
      v21 = 336LL;
    }
    else
    {
      v21 = 335LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (__int64)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
      (const char *)(unsigned int)v20);
LABEL_18:
    Microsoft::WRL::ComPtr<ICallingProcessInfo>::InternalRelease((__int64 *)&ppvOut);
    goto LABEL_19;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x142,
    (__int64)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
    (const char *)(unsigned int)v8);
LABEL_22:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v24);
  return v9;
}
