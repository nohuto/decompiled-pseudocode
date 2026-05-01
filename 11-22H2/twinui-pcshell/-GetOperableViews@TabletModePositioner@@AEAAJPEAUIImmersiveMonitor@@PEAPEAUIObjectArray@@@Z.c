/*
 * XREFs of ?GetOperableViews@TabletModePositioner@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x1805BC1E8
 * Callers:
 *     ?CleanupBackgroundViews@TabletModePositioner@@AEAAJPEAUIObjectArray@@W4ViewOperationFlags@@@Z @ 0x1805B9CC8 (-CleanupBackgroundViews@TabletModePositioner@@AEAAJPEAUIObjectArray@@W4ViewOperationFlags@@@Z.c)
 *     ?SwitchToSanitizedAppLayout@TabletModePositioner@@AEAAJW4ViewOperationFlags@@@Z @ 0x1805C1B38 (-SwitchToSanitizedAppLayout@TabletModePositioner@@AEAAJW4ViewOperationFlags@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x1800D0440 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x18013A728 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 *     ??0?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x18013A89C (--0-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@det.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18056FE30 (-IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall TabletModePositioner::GetOperableViews(
        TabletModePositioner *this,
        struct IImmersiveMonitor *a2,
        struct IObjectArray **a3)
{
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, __int64, struct IImmersiveMonitor *, __int64 *); // rbx
  int v7; // eax
  unsigned int v8; // ebx
  const struct _GUID *v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rdx
  __int64 (__fastcall ***v13)(ApplicationViewHelpers *, GUID *, __int64); // rbx
  struct IApplicationView *v14; // rdx
  int v15; // eax
  TabletModePositionerHelpers *v17; // [rsp+30h] [rbp-50h] BYREF
  __int64 v18; // [rsp+38h] [rbp-48h] BYREF
  unsigned int v19; // [rsp+40h] [rbp-40h]
  unsigned int v20; // [rsp+48h] [rbp-38h] BYREF
  TabletModePositionerHelpers *v21; // [rsp+50h] [rbp-30h] BYREF
  __int64 *v22; // [rsp+58h] [rbp-28h]
  unsigned int v23; // [rsp+60h] [rbp-20h] BYREF
  __int64 v24; // [rsp+68h] [rbp-18h] BYREF
  __int64 *v25; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  void *v27; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v28; // [rsp+B8h] [rbp+38h] BYREF

  v28 = 0LL;
  v5 = *((_QWORD *)this + 45);
  v6 = *(__int64 (__fastcall **)(__int64, __int64, struct IImmersiveMonitor *, __int64 *))(*(_QWORD *)v5 + 64LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v28);
  v7 = v6(v5, 1LL, a2, &v28);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v27 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v27);
    v11 = CEnumerableObjectCollection::CreateInstance(v10, v9, &v27);
    v8 = v11;
    if ( v11 >= 0 )
    {
      details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>(
        (__int64)&v18,
        v28);
      v20 = 0;
      v21 = 0LL;
      v22 = &v18;
      details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v20);
      v23 = v19;
      v24 = 0LL;
      v25 = &v18;
      details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v23);
      while ( v20 != v23 || v22 != v25 )
      {
        v13 = (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64))v21;
        v17 = v21;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v17);
        if ( TabletModePositionerHelpers::IsOperableView(v13, v14) )
        {
          v15 = (*(__int64 (__fastcall **)(void *, __int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64)))(*(_QWORD *)v27 + 40LL))(
                  v27,
                  v13);
          v8 = v15;
          if ( v15 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x8A3,
              (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
              (const char *)(unsigned int)v15);
            Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v17);
            Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v24);
            Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v21);
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v18);
            goto LABEL_16;
          }
        }
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v17);
        ++v20;
        details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v20);
      }
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v24);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v21);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v18);
      v11 = (**(__int64 (__fastcall ***)(void *, GUID *, struct IObjectArray **))v27)(
              v27,
              &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
              a3);
      v8 = v11;
      if ( v11 < 0 )
      {
        v12 = 2214LL;
        goto LABEL_5;
      }
      v8 = 0;
    }
    else
    {
      v12 = 2205LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v11);
    }
LABEL_16:
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v27);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x89A,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v7);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v28);
  return v8;
}
