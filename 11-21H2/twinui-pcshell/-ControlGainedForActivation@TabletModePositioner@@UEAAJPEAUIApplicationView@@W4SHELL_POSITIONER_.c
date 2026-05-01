/*
 * XREFs of ?ControlGainedForActivation@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x180501FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180075C24 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x180097200 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x1801243A0 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsPeopleExperienceHostView@@YA_NPEAUIApplicationView@@@Z @ 0x1804B3754 (-IsPeopleExperienceHostView@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?AppToAppSwitchHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@01W4APP_TO_APP_SWITCH_FLAGS@@@Z @ 0x180500628 (-AppToAppSwitchHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_P.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SurfaceHubProximalAppLaunch@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180505D9C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SurfaceHubProximalAppLaunch@@@details@wil.c)
 *     ?SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUtagRECT@@PEA_N@Z @ 0x180508F54 (-SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUt.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall TabletModePositioner::ControlGainedForActivation(
        __int64 a1,
        struct IUnknown *a2,
        int a3,
        struct IApplicationView *a4)
{
  __int64 *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  PositionerPropertySetHelpers *v13; // rcx
  int DetailsForActivation; // ebx
  __int64 v15; // rdx
  char lpVtbl; // bl
  const struct _GUID *v17; // rdx
  __int64 v18; // rcx
  int Instance; // eax
  int v20; // eax
  struct IUnknownVtbl *v21; // rbx
  __int64 (__fastcall *v22)(struct IUnknownVtbl *, GUID *, __int64 *); // rdi
  int v23; // eax
  __int64 v24; // r15
  __int64 v25; // rdi
  int (__fastcall *v26)(__int64, __int64, __int64 *); // rbx
  __int64 *AddressOf; // rax
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // [rsp+30h] [rbp-20h] BYREF
  struct IUnknown *v31; // [rsp+38h] [rbp-18h] BYREF
  unsigned int v32; // [rsp+40h] [rbp-10h]
  int v33; // [rsp+44h] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  struct IUnknown v35; // [rsp+70h] [rbp+20h] BYREF

  v8 = (__int64 *)(a1 + 168);
  if ( (unsigned int)SHIsSameObject(a2, *(struct IUnknown **)(a1 + 168)) )
  {
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v8);
    return 0LL;
  }
  if ( IsPeopleExperienceHostView((struct IApplicationView *)a2, v9, v10, v11) )
    return 0LL;
  v31 = 0LL;
  v32 = 0;
  v33 = 0;
  DetailsForActivation = PositionerPropertySetHelpers::GetDetailsForActivation(
                           v13,
                           a4,
                           &v35,
                           (enum PositionerPropertySetHelpers::ActivationPropertyFlags *)&v31);
  if ( DetailsForActivation >= 0 )
  {
    lpVtbl = (char)v35.lpVtbl;
    if ( ((__int64)v35.lpVtbl & 1) != 0 )
      return 0LL;
    if ( ((__int64)v35.lpVtbl & 0x10) != 0 )
    {
      DetailsForActivation = ((__int64 (__fastcall *)(struct IUnknown *, __int64))a2->lpVtbl[9].AddRef)(a2, 1LL);
      if ( DetailsForActivation >= 0 )
        return 0LL;
      v15 = 801LL;
      goto LABEL_7;
    }
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_SurfaceHubProximalAppLaunch>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_SurfaceHubProximalAppLaunch>::GetImpl'::`2'::impl,
      0LL);
    if ( (lpVtbl & 2) != 0 )
    {
      DetailsForActivation = ((__int64 (__fastcall *)(struct IUnknown *, __int64))a2->lpVtbl[9].AddRef)(a2, 1LL);
      if ( DetailsForActivation < 0 )
      {
        v15 = 816LL;
        goto LABEL_7;
      }
      DetailsForActivation = ((__int64 (__fastcall *)(struct IUnknown *))a2->lpVtbl[14].Release)(a2);
      if ( DetailsForActivation < 0 )
      {
        v15 = 817LL;
        goto LABEL_7;
      }
LABEL_38:
      DetailsForActivation = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD))a2->lpVtbl[18].QueryInterface)(a2, 0LL);
      if ( DetailsForActivation >= 0 )
        return 0LL;
      v15 = 856LL;
      goto LABEL_7;
    }
    if ( (*(unsigned int (__fastcall **)(_QWORD, struct IUnknown *))(**(_QWORD **)(a1 + 120) + 184LL))(
           *(_QWORD *)(a1 + 120),
           a2) )
    {
      ((void (__fastcall *)(struct IUnknown *))a2->lpVtbl[2].QueryInterface)(a2);
      goto LABEL_38;
    }
    v35.lpVtbl = 0LL;
    if ( a3 == 6 )
    {
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v35);
      Instance = CEnumerableObjectCollection::CreateInstance(v18, v17, (void **)&v35.lpVtbl);
      DetailsForActivation = Instance;
      if ( Instance >= 0 )
      {
        v31 = a2;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v31);
        v20 = (*((__int64 (__fastcall **)(struct IUnknownVtbl *, struct IUnknown *))v35.lpVtbl->QueryInterface + 5))(
                v35.lpVtbl,
                a2);
        DetailsForActivation = v20;
        if ( v20 >= 0 )
        {
          v30 = 0LL;
          v21 = v35.lpVtbl;
          v22 = *(__int64 (__fastcall **)(struct IUnknownVtbl *, GUID *, __int64 *))v35.lpVtbl->QueryInterface;
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v30);
          v23 = v22(v21, &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9, &v30);
          DetailsForActivation = v23;
          if ( v23 >= 0 )
          {
            (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 96LL))(a1, v30, 6LL);
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v30);
            Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v31);
            Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v35);
            goto LABEL_38;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x343,
            (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
            (const char *)(unsigned int)v23);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v30);
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x340,
            (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
            (const char *)(unsigned int)v20);
        }
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v31);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x33D,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)Instance);
      }
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v35);
      return (unsigned int)DetailsForActivation;
    }
    v24 = (__int64)v31;
    if ( v31
      && (v25 = *(_QWORD *)(a1 + 208),
          v26 = *(int (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v25 + 48LL),
          AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf((__int64 *)&v35),
          v26(v25, v24, AddressOf) >= 0) )
    {
      v28 = TabletModePositioner::AppToAppSwitchHelper(
              (TabletModePositioner *)(a1 - 128),
              (__int64)v35.lpVtbl,
              v32,
              (__int64)a2,
              v33,
              0);
      DetailsForActivation = v28;
      if ( v28 < 0 )
      {
        v29 = 846LL;
LABEL_36:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v29,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)v28);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v35);
        return (unsigned int)DetailsForActivation;
      }
    }
    else
    {
      v28 = TabletModePositioner::SwitchToAppHelper(a1 - 128, a2, 0LL, 0LL, 0LL);
      DetailsForActivation = v28;
      if ( v28 < 0 )
      {
        v29 = 851LL;
        goto LABEL_36;
      }
    }
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v35);
    goto LABEL_38;
  }
  v15 = 793LL;
LABEL_7:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)(unsigned int)DetailsForActivation);
  return (unsigned int)DetailsForActivation;
}
