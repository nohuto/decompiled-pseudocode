/*
 * XREFs of ?ControlGainedForActivation@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1805BA7B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x180012C88 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x1800D0440 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800DF498 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsPeopleExperienceHostView@@YA_NPEAUIApplicationView@@@Z @ 0x18056FF28 (-IsPeopleExperienceHostView@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?AppToAppSwitchHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@01W4APP_TO_APP_SWITCH_FLAGS@@@Z @ 0x1805B8DE8 (-AppToAppSwitchHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_P.c)
 *     ?SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUtagRECT@@PEA_N@Z @ 0x1805C141C (-SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUt.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall TabletModePositioner::ControlGainedForActivation(
        __int64 a1,
        struct IUnknown *a2,
        int a3,
        __int64 (__fastcall ***a4)(struct IApplicationView *, GUID *, ViewSizePreferenceHelpers **))
{
  __int64 *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  PositionerPropertySetHelpers *v13; // rcx
  int DetailsForActivation; // ebx
  __int64 v15; // rdx
  const struct _GUID *v16; // rdx
  __int64 v17; // rcx
  int Instance; // eax
  int v19; // eax
  struct IUnknownVtbl *lpVtbl; // rbx
  __int64 (__fastcall *v21)(struct IUnknownVtbl *, GUID *, __int64 *); // rdi
  int v22; // eax
  __int64 v23; // r15
  __int64 v24; // rdi
  int (__fastcall *v25)(__int64, __int64, struct IUnknown *); // rbx
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // [rsp+30h] [rbp-20h] BYREF
  struct IUnknown *v29; // [rsp+38h] [rbp-18h] BYREF
  unsigned int v30; // [rsp+40h] [rbp-10h]
  int v31; // [rsp+44h] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  struct IUnknown v33; // [rsp+70h] [rbp+20h] BYREF

  v8 = (__int64 *)(a1 + 168);
  if ( (unsigned int)SHIsSameObject(a2, *(struct IUnknown **)(a1 + 168)) )
  {
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v8);
    return 0LL;
  }
  if ( IsPeopleExperienceHostView((struct IApplicationView *)a2, v9, v10, v11) )
    return 0LL;
  v29 = 0LL;
  v30 = 0;
  v31 = 0;
  DetailsForActivation = PositionerPropertySetHelpers::GetDetailsForActivation(
                           v13,
                           a4,
                           &v33,
                           (enum PositionerPropertySetHelpers::ActivationPropertyFlags *)&v29);
  if ( DetailsForActivation >= 0 )
  {
    if ( ((__int64)v33.lpVtbl & 1) != 0 )
      return 0LL;
    if ( ((__int64)v33.lpVtbl & 0x10) != 0 )
    {
      DetailsForActivation = ((__int64 (__fastcall *)(struct IUnknown *))a2->lpVtbl[9].AddRef)(a2);
      if ( DetailsForActivation >= 0 )
        return 0LL;
      v15 = 801LL;
      goto LABEL_7;
    }
    if ( ((__int64)v33.lpVtbl & 2) != 0 )
    {
      DetailsForActivation = ((__int64 (__fastcall *)(struct IUnknown *))a2->lpVtbl[9].AddRef)(a2);
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
    v33.lpVtbl = 0LL;
    if ( a3 == 6 )
    {
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v33);
      Instance = CEnumerableObjectCollection::CreateInstance(v17, v16, (void **)&v33.lpVtbl);
      DetailsForActivation = Instance;
      if ( Instance >= 0 )
      {
        v29 = a2;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v29);
        v19 = (*((__int64 (__fastcall **)(struct IUnknownVtbl *, struct IUnknown *))v33.lpVtbl->QueryInterface + 5))(
                v33.lpVtbl,
                a2);
        DetailsForActivation = v19;
        if ( v19 >= 0 )
        {
          v28 = 0LL;
          lpVtbl = v33.lpVtbl;
          v21 = *(__int64 (__fastcall **)(struct IUnknownVtbl *, GUID *, __int64 *))v33.lpVtbl->QueryInterface;
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v28);
          v22 = v21(lpVtbl, &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9, &v28);
          DetailsForActivation = v22;
          if ( v22 >= 0 )
          {
            (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 96LL))(a1, v28, 6LL);
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v28);
            Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v29);
            Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v33);
            goto LABEL_38;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x343,
            (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
            (const char *)(unsigned int)v22);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v28);
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x340,
            (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
            (const char *)(unsigned int)v19);
        }
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v29);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x33D,
          (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)Instance);
      }
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v33);
      return (unsigned int)DetailsForActivation;
    }
    v23 = (__int64)v29;
    if ( v29
      && (v24 = *(_QWORD *)(a1 + 208),
          v25 = *(int (__fastcall **)(__int64, __int64, struct IUnknown *))(*(_QWORD *)v24 + 48LL),
          Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v33),
          v25(v24, v23, &v33) >= 0) )
    {
      v26 = TabletModePositioner::AppToAppSwitchHelper(
              (TabletModePositioner *)(a1 - 128),
              (__int64)v33.lpVtbl,
              v30,
              (__int64)a2,
              v31,
              0);
      DetailsForActivation = v26;
      if ( v26 < 0 )
      {
        v27 = 846LL;
LABEL_36:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v27,
          (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)v26);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v33);
        return (unsigned int)DetailsForActivation;
      }
    }
    else
    {
      v26 = TabletModePositioner::SwitchToAppHelper(a1 - 128, a2, 0LL, 0LL, 0LL);
      DetailsForActivation = v26;
      if ( v26 < 0 )
      {
        v27 = 851LL;
        goto LABEL_36;
      }
    }
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v33);
    goto LABEL_38;
  }
  v15 = 793LL;
LABEL_7:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)(unsigned int)DetailsForActivation);
  return (unsigned int)DetailsForActivation;
}
