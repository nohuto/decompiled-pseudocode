/*
 * XREFs of ?OnShellHookMessage@TabletModePositioner@@UEAAJ_K_J@Z @ 0x180505920
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?IsTabletMode@TabletModePositioner@@AEAA_NXZ @ 0x18004157C (-IsTabletMode@TabletModePositioner@@AEAA_NXZ.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180082930 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x180500804 (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?InitLayoutOperationHelper@TabletModePositioner@@AEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1805048C4 (-InitLayoutOperationHelper@TabletModePositioner@@AEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TabletModePositioner::OnShellHookMessage(TabletModePositioner *this, __int64 a2, __int64 a3)
{
  TabletModePositioner *v5; // r14
  __int64 v6; // rdx
  unsigned int v7; // ebx
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, __int64 *); // rbx
  __int64 *AddressOf; // rax
  int v12; // eax
  struct IApplicationView *v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 (__fastcall *v16)(__int64, __int64 *); // rbx
  int v17; // eax
  int inited; // eax
  __int64 v19; // rdx
  ApplicationViewHelpers *v20; // [rsp+20h] [rbp-10h] BYREF
  __int64 v21; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  struct IUnknown *v23; // [rsp+60h] [rbp+30h] BYREF
  __int64 v24; // [rsp+78h] [rbp+48h] BYREF

  if ( *((_QWORD *)this + 15) )
  {
    v5 = (TabletModePositioner *)((char *)this - 168);
    if ( !TabletModePositioner::IsTabletMode((TabletModePositioner *)((char *)this - 168)) )
    {
      v6 = 1497LL;
LABEL_4:
      v7 = -2147019873;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)0x8007139FLL);
      return v7;
    }
    v9 = *((_QWORD *)this + 14);
    if ( !v9 )
    {
      v6 = 1498LL;
      goto LABEL_4;
    }
    v20 = 0LL;
    v10 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 120LL);
    AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf((__int64 *)&v20);
    v12 = v10(v9, AddressOf);
    v7 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5DD,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v12);
LABEL_24:
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v20);
      return v7;
    }
    if ( a3 == ApplicationViewHelpers::GetWindowForView(
                 (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64))v20,
                 v13) )
    {
      v14 = *((_QWORD *)this + 14);
      v21 = v14;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v21);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 15);
      v15 = *((_QWORD *)this + 14);
      if ( v15 )
      {
        *((_QWORD *)this + 14) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      }
      v24 = 0LL;
      v16 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 40LL);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v24);
      v17 = v16(v14, &v24);
      v7 = v17;
      if ( v17 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x5E9,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)v17);
        goto LABEL_22;
      }
      v23 = 0LL;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v23);
      inited = TabletModePositioner::InitLayoutOperationHelper(
                 v5,
                 &CLSID_TabletModePositionerOperation,
                 &GUID_ef9dff78_5b41_4081_a5aa_407c9421d1b6,
                 (void **)&v23);
      v7 = inited;
      if ( inited < 0 )
      {
        v19 = 1516LL;
LABEL_21:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v19,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)inited);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v23);
LABEL_22:
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v24);
        if ( v14 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        goto LABEL_24;
      }
      inited = ((__int64 (__fastcall *)(struct IUnknown *, __int64, __int64))v23->lpVtbl[2].AddRef)(v23, v24, 4LL);
      v7 = inited;
      if ( inited < 0 )
      {
        v19 = 1517LL;
        goto LABEL_21;
      }
      inited = TabletModePositioner::ApplyLayoutOperationHelper(v5, v23);
      v7 = inited;
      if ( inited < 0 )
      {
        v19 = 1518LL;
        goto LABEL_21;
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v23);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v24);
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v20);
  }
  return 0LL;
}
