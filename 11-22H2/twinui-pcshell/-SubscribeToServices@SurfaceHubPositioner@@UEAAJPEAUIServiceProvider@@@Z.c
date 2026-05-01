/*
 * XREFs of ?SubscribeToServices@SurfaceHubPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800F9270
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Register@UITabletModeController@@P81@EAAJPEAUITabletModeChangeListener@@PEAK@ZP81@EAAJK@ZPEAVSurfaceHubPositioner@@@SmartCookie@@QEAAJPEAUITabletModeController@@P81@EAAJPEAUITabletModeChangeListener@@PEAK@ZP81@EAAJK@ZPEAVSurfaceHubPositioner@@@Z @ 0x1801B4734 (--$Register@UITabletModeController@@P81@EAAJPEAUITabletModeChangeListener@@PEAK@ZP81@EAAJK@ZPEAV.c)
 *     ??$Register@UIImmersiveMonitorNotificationService@@P81@EAAJPEAUIImmersiveMonitorNotification@@PEAK@ZP81@EAAJK@ZPEAVSurfaceHubPositioner@@@SmartCookie@@QEAAJPEAUIImmersiveMonitorNotificationService@@P81@EAAJPEAUIImmersiveMonitorNotification@@PEAK@ZP81@EAAJK@ZPEAVSurfaceHubPositioner@@@Z @ 0x1801B4D00 (--$Register@UIImmersiveMonitorNotificationService@@P81@EAAJPEAUIImmersiveMonitorNotification@@PE.c)
 *     ??$Register@UIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener@@PEAK@ZP81@EAAJK@ZPEAVSurfaceHubPositioner@@@SmartCookie@@QEAAJPEAUIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener@@PEAK@ZP81@EAAJK@ZPEAVSurfaceHubPositioner@@@Z @ 0x1801B4EA8 (--$Register@UIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener_ea_1801B4EA8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SurfaceHubPositioner::SubscribeToServices(SurfaceHubPositioner *this, struct IServiceProvider *a2)
{
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  int v5; // ebx
  HRESULT (__stdcall *v6)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  HRESULT (__stdcall *v7)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  _QWORD *v8; // r15
  HRESULT (__stdcall *v9)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  int v10; // r8d
  int v11; // r9d
  int v12; // r8d
  int v13; // r9d
  HRESULT (__stdcall *v14)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v15; // eax
  int v16; // r8d
  int v17; // r9d
  __int64 v19; // rdx
  __int64 v20; // rdx
  int v21; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v23; // [rsp+50h] [rbp+8h] BYREF

  QueryService = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 15);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))QueryService)(
         a2,
         &SID_IImmersiveMonitorService,
         &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
         (char *)this + 120);
  if ( v5 < 0 )
  {
    v19 = 128LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
      (const char *)(unsigned int)v5,
      v21);
    return (unsigned int)v5;
  }
  v6 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 16);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v6)(
         a2,
         &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
         &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
         (char *)this + 128);
  if ( v5 < 0 )
  {
    v19 = 129LL;
    goto LABEL_16;
  }
  v7 = a2->lpVtbl->QueryService;
  v8 = (_QWORD *)((char *)this + 136);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 17);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v7)(
         a2,
         &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
         &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
         (char *)this + 136);
  if ( v5 < 0 )
  {
    v19 = 130LL;
    goto LABEL_16;
  }
  v9 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 18);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v9)(
         a2,
         &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
         &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
         (char *)this + 144);
  if ( v5 < 0 )
  {
    v19 = 131LL;
    goto LABEL_16;
  }
  v5 = SmartCookie::Register<IApplicationViewCollection,long (IApplicationViewCollection::*)(IApplicationViewChangeListener *,unsigned long *),long (IApplicationViewCollection::*)(unsigned long),SurfaceHubPositioner *>(
         (int)this + 152,
         *((_QWORD *)this + 16),
         v10,
         v11,
         (__int64)this - 40);
  if ( v5 < 0 )
  {
    v19 = 136LL;
    goto LABEL_16;
  }
  v5 = SmartCookie::Register<ITabletModeController,long (ITabletModeController::*)(ITabletModeChangeListener *,unsigned long *),long (ITabletModeController::*)(unsigned long),SurfaceHubPositioner *>(
         (int)this + 280,
         *v8,
         v12,
         v13,
         (__int64)this - 40);
  if ( v5 < 0 )
  {
    v19 = 141LL;
    goto LABEL_16;
  }
  v23 = 0LL;
  v14 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v23);
  v15 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))v14)(
          a2,
          &SID_IImmersiveMonitorService,
          &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
          &v23);
  v5 = v15;
  if ( v15 < 0 )
  {
    v20 = 144LL;
  }
  else
  {
    v15 = SmartCookie::Register<IImmersiveMonitorNotificationService,long (IImmersiveMonitorNotificationService::*)(IImmersiveMonitorNotification *,unsigned long *),long (IImmersiveMonitorNotificationService::*)(unsigned long),SurfaceHubPositioner *>(
            (int)this + 408,
            v23,
            v16,
            v17,
            (__int64)this - 40);
    v5 = v15;
    if ( v15 >= 0 )
    {
      (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v8 + 24LL))(*v8, (char *)this + 112);
      if ( *((_DWORD *)this + 28) != 1 )
        *((_BYTE *)this + 536) = 0;
      v5 = 0;
      goto LABEL_12;
    }
    v20 = 148LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v20,
    (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
    (const char *)(unsigned int)v15,
    v21);
LABEL_12:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v23);
  return (unsigned int)v5;
}
