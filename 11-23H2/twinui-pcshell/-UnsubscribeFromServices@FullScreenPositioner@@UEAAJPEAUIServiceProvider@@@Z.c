/*
 * XREFs of ?UnsubscribeFromServices@FullScreenPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801A2390
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsFullScreenCompatQuirkedApp@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x180044A70 (-IsFullScreenCompatQuirkedApp@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?EraseAllViews@FullScreenPositioner@@AEAAJXZ @ 0x1801A25E0 (-EraseAllViews@FullScreenPositioner@@AEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_b0726e8044fd13968fa83f7fa075fb7d___ @ 0x1803EC148 (Windows--Internal--ComTaskPool--QueueTask__lambda_b0726e8044fd13968fa83f7fa075fb7d___.c)
 *     ?SetPositionerMonitor@FullScreenPositioner@@CAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x1803EE0E0 (-SetPositionerMonitor@FullScreenPositioner@@CAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall FullScreenPositioner::UnsubscribeFromServices(
        FullScreenPositioner *this,
        struct IServiceProvider *a2)
{
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v5; // eax
  unsigned int v6; // ebx
  HRESULT (__stdcall *v7)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v8; // eax
  struct IApplicationView *v9; // rdx
  HRESULT (__stdcall *v10)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v11; // eax
  struct IApplicationView **v12; // rsi
  int (__fastcall ***v13)(FullScreenPositionerHelpers *, GUID *, __int64 *); // rcx
  __int64 v15; // rdx
  __int64 v16; // rdx
  struct IApplicationView *v17; // rbx
  __int64 v18; // rcx
  struct IServiceProvider *v19; // [rsp+30h] [rbp-10h] BYREF
  struct IApplicationView *v20; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  struct IApplicationView *v22; // [rsp+70h] [rbp+30h] BYREF
  struct IServiceProvider *v23; // [rsp+80h] [rbp+40h] BYREF

  if ( *((_DWORD *)this + 72) )
  {
    v22 = 0LL;
    QueryService = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v22);
    v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, struct IApplicationView **))QueryService)(
           a2,
           &IID_IActiveZBandNotificationForMonitorService,
           &GUID_0f019ffe_0388_4dcf_a2e2_f059a60a5704,
           &v22);
    v6 = v5;
    if ( v5 < 0 )
    {
      v15 = 233LL;
    }
    else
    {
      v5 = (*(__int64 (__fastcall **)(struct IApplicationView *, _QWORD))(*(_QWORD *)v22 + 32LL))(
             v22,
             *((unsigned int *)this + 72));
      v6 = v5;
      if ( v5 >= 0 )
      {
        *((_DWORD *)this + 72) = 0;
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v22);
        goto LABEL_5;
      }
      v15 = 234LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
      (const char *)(unsigned int)v5);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v22);
    return v6;
  }
LABEL_5:
  if ( !*((_DWORD *)this + 73) )
    goto LABEL_9;
  v22 = 0LL;
  v7 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v22);
  v8 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, struct IApplicationView **))v7)(
         a2,
         &SID_IImmersiveMonitorService,
         &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
         &v22);
  v6 = v8;
  if ( v8 < 0 )
  {
    v16 = 241LL;
LABEL_23:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
      (const char *)(unsigned int)v8);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v22);
    return v6;
  }
  v8 = (*(__int64 (__fastcall **)(struct IApplicationView *, _QWORD))(*(_QWORD *)v22 + 32LL))(
         v22,
         *((unsigned int *)this + 73));
  v6 = v8;
  if ( v8 < 0 )
  {
    v16 = 242LL;
    goto LABEL_23;
  }
  *((_DWORD *)this + 73) = 0;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v22);
LABEL_9:
  v9 = (struct IApplicationView *)*((unsigned int *)this + 74);
  if ( (_DWORD)v9 )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 21) + 104LL))(*((_QWORD *)this + 21));
    *((_DWORD *)this + 74) = 0;
  }
  if ( !*((_DWORD *)this + 75) )
    goto LABEL_14;
  v22 = 0LL;
  v10 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v22);
  v11 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, struct IApplicationView **))v10)(
          a2,
          &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
          &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
          &v22);
  v6 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFF,
      (int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
      (const char *)(unsigned int)v11);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v22);
    return v6;
  }
  (*(void (__fastcall **)(struct IApplicationView *, _QWORD))(*(_QWORD *)v22 + 80LL))(v22, *((unsigned int *)this + 75));
  *((_DWORD *)this + 75) = 0;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v22);
LABEL_14:
  v12 = (struct IApplicationView **)((char *)this + 192);
  v13 = (int (__fastcall ***)(FullScreenPositionerHelpers *, GUID *, __int64 *))*((_QWORD *)this + 24);
  if ( v13 )
  {
    if ( !FullScreenPositionerHelpers::IsFullScreenCompatQuirkedApp(v13, v9) )
    {
      FullScreenPositioner::SetPositionerMonitor(*v12, 0LL);
      v23 = a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v23);
      v22 = *v12;
      v17 = v22;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v22);
      v19 = a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v19);
      v20 = v17;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v20);
      Windows::Internal::ComTaskPool::QueueTask__lambda_b0726e8044fd13968fa83f7fa075fb7d___(v18, &v19);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v20);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v19);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v22);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v23);
    }
  }
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)this + 24);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 23);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 21);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 22);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 28);
  FullScreenPositioner::EraseAllViews((FullScreenPositioner *)((char *)this - 32));
  return 0LL;
}
