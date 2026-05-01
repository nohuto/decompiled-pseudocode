/*
 * XREFs of ?InitializePosition@TabletModePositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x180504DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x180097200 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z @ 0x1801712D0 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsPeopleExperienceHostView@@YA_NPEAUIApplicationView@@@Z @ 0x1804B3754 (-IsPeopleExperienceHostView@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?AppToAppSwitchHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@01W4APP_TO_APP_SWITCH_FLAGS@@@Z @ 0x180500628 (-AppToAppSwitchHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_P.c)
 *     ?CreateAndInitApplicationViewOperation@TabletModePositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x180502840 (-CreateAndInitApplicationViewOperation@TabletModePositioner@@AEAAJPEAUIApplicationView@@PEAPEAUI.c)
 *     ?SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUtagRECT@@PEA_N@Z @ 0x180508F54 (-SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUt.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TabletModePositioner::InitializePosition(
        TabletModePositioner *this,
        int (__fastcall ***a2)(struct IApplicationView *, GUID *, __int64 *),
        struct IUnknown *a3,
        struct IPresentationRequestedArgs *a4)
{
  int (__fastcall *v7)(struct IApplicationView *, GUID *, __int64 *); // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  PositionerPropertySetHelpers *v11; // rcx
  int DetailsForActivation; // eax
  unsigned int v13; // ebx
  struct IApplicationView *v14; // rdx
  int inited; // eax
  __int64 v16; // rdx
  __int64 v17; // rdi
  int (__fastcall *v18)(__int64, __int64, __int64 *); // rbx
  __int64 *AddressOf; // rax
  int v20; // eax
  __int64 v21; // rdx
  __int64 v23; // [rsp+30h] [rbp-20h] BYREF
  __int64 v24; // [rsp+38h] [rbp-18h] BYREF
  unsigned int v25; // [rsp+40h] [rbp-10h]
  int v26; // [rsp+44h] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  struct IUnknown v28; // [rsp+78h] [rbp+28h] BYREF

  v23 = 0LL;
  v7 = **a2;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v23);
  if ( v7((struct IApplicationView *)a2, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, &v23) < 0
    || IsPeopleExperienceHostView((struct IApplicationView *)a2, v8, v9, v10) )
  {
    goto LABEL_25;
  }
  v24 = 0LL;
  v25 = 0;
  v26 = 0;
  DetailsForActivation = PositionerPropertySetHelpers::GetDetailsForActivation(
                           v11,
                           (struct IApplicationView *)a3,
                           &v28,
                           (enum PositionerPropertySetHelpers::ActivationPropertyFlags *)&v24);
  v13 = DetailsForActivation;
  if ( DetailsForActivation >= 0 )
  {
    if ( ((__int64)v28.lpVtbl & 3) != 0 )
    {
      v28.lpVtbl = 0LL;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v28);
      inited = TabletModePositioner::CreateAndInitApplicationViewOperation(
                 (TabletModePositioner *)((char *)this - 128),
                 v14,
                 (struct IApplicationViewOperation **)&v28);
      v13 = inited;
      if ( inited < 0 )
      {
        v16 = 744LL;
LABEL_14:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v16,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)inited);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v28);
        goto LABEL_26;
      }
      inited = (*((__int64 (__fastcall **)(struct IUnknownVtbl *, __int64))v28.lpVtbl->QueryInterface + 6))(
                 v28.lpVtbl,
                 3LL);
      v13 = inited;
      if ( inited < 0 )
      {
        v16 = 745LL;
        goto LABEL_14;
      }
      inited = (*((__int64 (__fastcall **)(struct IUnknownVtbl *, __int64))v28.lpVtbl->QueryInterface + 9))(
                 v28.lpVtbl,
                 1LL);
      v13 = inited;
      if ( inited < 0 )
      {
        v16 = 746LL;
        goto LABEL_14;
      }
      inited = ((__int64 (__fastcall *)(int (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *), struct IUnknownVtbl *))(*a2)[40])(
                 a2,
                 v28.lpVtbl);
      v13 = inited;
      if ( inited < 0 )
      {
        v16 = 747LL;
        goto LABEL_14;
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v28);
      goto LABEL_24;
    }
    v28.lpVtbl = 0LL;
    if ( v24
      && (v17 = *((_QWORD *)this + 26),
          v18 = *(int (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v17 + 48LL),
          AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf((__int64 *)&v28),
          v18(v17, v24, AddressOf) >= 0) )
    {
      v20 = TabletModePositioner::AppToAppSwitchHelper(
              (TabletModePositioner *)((char *)this - 128),
              (__int64)v28.lpVtbl,
              v25,
              (__int64)a2,
              v26,
              0);
      v13 = v20;
      if ( v20 < 0 )
      {
        v21 = 755LL;
LABEL_22:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v21,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)v20);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v28);
        goto LABEL_26;
      }
    }
    else
    {
      v20 = TabletModePositioner::SwitchToAppHelper((char *)this - 128, a2, 0LL, 0LL, 0LL);
      v13 = v20;
      if ( v20 < 0 )
      {
        v21 = 760LL;
        goto LABEL_22;
      }
    }
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v28);
LABEL_24:
    Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)this + 21, (__int64)a2);
LABEL_25:
    v13 = 0;
    goto LABEL_26;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2E0,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)(unsigned int)DetailsForActivation);
LABEL_26:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v23);
  return v13;
}
