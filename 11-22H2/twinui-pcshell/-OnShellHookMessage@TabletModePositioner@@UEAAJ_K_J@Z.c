/*
 * XREFs of ?OnShellHookMessage@TabletModePositioner@@UEAAJ_K_J@Z @ 0x180065BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsTabletMode@TabletModePositioner@@AEAA_NXZ @ 0x18007093C (-IsTabletMode@TabletModePositioner@@AEAA_NXZ.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800CA970 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x1805B8FC4 (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?InitLayoutOperationHelper@TabletModePositioner@@AEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1805BCE54 (-InitLayoutOperationHelper@TabletModePositioner@@AEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TabletModePositioner::OnShellHookMessage(TabletModePositioner *this, __int64 a2, HWND a3)
{
  TabletModePositioner *v6; // r14
  __int64 v7; // rdx
  unsigned int v8; // ebx
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, ApplicationViewHelpers **); // rbx
  int v11; // eax
  struct IApplicationView *v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 (__fastcall *v15)(__int64, __int64 *); // rbx
  int v16; // eax
  int inited; // eax
  __int64 v18; // rdx
  ApplicationViewHelpers *v19; // [rsp+20h] [rbp-10h] BYREF
  __int64 v20; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  struct IUnknown *v22; // [rsp+60h] [rbp+30h] BYREF
  __int64 v23; // [rsp+78h] [rbp+48h] BYREF

  if ( !*((_QWORD *)this + 15) )
    return 0LL;
  v6 = (TabletModePositioner *)((char *)this - 168);
  if ( TabletModePositioner::IsTabletMode((TabletModePositioner *)((char *)this - 168)) )
  {
    v9 = *((_QWORD *)this + 14);
    if ( !v9 )
    {
      v7 = 1498LL;
      goto LABEL_6;
    }
    v19 = 0LL;
    v10 = *(__int64 (__fastcall **)(__int64, ApplicationViewHelpers **))(*(_QWORD *)v9 + 120LL);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v19);
    v11 = v10(v9, &v19);
    v8 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5DD,
        (unsigned int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v11,
        (int)v19);
LABEL_7:
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v19);
      return v8;
    }
    if ( a3 == ApplicationViewHelpers::GetWindowForView(v19, v12) )
    {
      v13 = *((_QWORD *)this + 14);
      v20 = v13;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v20);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((char *)this + 120);
      v14 = *((_QWORD *)this + 14);
      if ( v14 )
      {
        *((_QWORD *)this + 14) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
      v23 = 0LL;
      v15 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 40LL);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v23);
      v16 = v15(v13, &v23);
      v8 = v16;
      if ( v16 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x5E9,
          (unsigned int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)v16,
          (int)v19);
        goto LABEL_24;
      }
      v22 = 0LL;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v22);
      inited = TabletModePositioner::InitLayoutOperationHelper(
                 v6,
                 &CLSID_TabletModePositionerOperation,
                 &GUID_ef9dff78_5b41_4081_a5aa_407c9421d1b6,
                 (void **)&v22);
      v8 = inited;
      if ( inited < 0 )
      {
        v18 = 1516LL;
LABEL_23:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v18,
          (unsigned int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)inited,
          (int)v19);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v22);
LABEL_24:
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v23);
        if ( v13 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        goto LABEL_7;
      }
      inited = ((__int64 (__fastcall *)(struct IUnknown *, __int64, __int64))v22->lpVtbl[2].AddRef)(v22, v23, 4LL);
      v8 = inited;
      if ( inited < 0 )
      {
        v18 = 1517LL;
        goto LABEL_23;
      }
      inited = TabletModePositioner::ApplyLayoutOperationHelper(v6, v22);
      v8 = inited;
      if ( inited < 0 )
      {
        v18 = 1518LL;
        goto LABEL_23;
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v22);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v23);
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v19);
    return 0LL;
  }
  v7 = 1497LL;
LABEL_6:
  v8 = -2147019873;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (unsigned int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)0x8007139FLL,
    (int)v19);
  return v8;
}
