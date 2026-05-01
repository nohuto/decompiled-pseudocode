/*
 * XREFs of ?_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1800F0A94
 * Callers:
 *     ?_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@PositionerPropertySetHelpers@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1800F0618 (-_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@Posi.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_ConvertScreenRectToWorkAreaRect@CDesktopPositioner@@AEAAJAEBUtagRECT@@PEAU2@@Z @ 0x18003ADC4 (-_ConvertScreenRectToWorkAreaRect@CDesktopPositioner@@AEAAJAEBUtagRECT@@PEAU2@@Z.c)
 *     ??$?4UIOcclusionBasedApplicationViewPosition@@@?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@QEAAAEAV012@AEBV?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@12@@Z @ 0x18003E7F8 (--$-4UIOcclusionBasedApplicationViewPosition@@@-$ComPtr@UIApplicationViewPosition@@@WRL@Microsof.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@AEAUtagRECT@@@Z @ 0x18007A3FC (--$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@D.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?DefaultLaunchPositionOverride_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F0030 (-DefaultLaunchPositionOverride_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?_GetDefaultRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@W4DefaultSizeOptions@@PEAU2@@Z @ 0x1800F00B8 (-_GetDefaultRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@W4DefaultSizeOptions@@PEAU2@@Z.c)
 *     ?_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU3@@Z @ 0x1800F0FC0 (-_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VoiceAssistantPositioner@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800F3074 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VoiceAssistantPositioner@@@details@wil@@Q.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PeopleBar@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800F36C0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_PeopleBar@@@details@wil@@QEAAX_NW4Reporti.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18010FD6C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x180117B98 (--0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x180117CC0 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveApplication@@XZ @ 0x18013E64C (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveAp.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPosition@@W4ARRANGEMENT_BASED_VIEW_STATE@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@@012@$$QEAW4ARRANGEMENT_BASED_VIEW_STATE@@AEAUtagRECT@@@Z @ 0x1804FA524 (--$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPos_ea_1804FA524.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CDesktopPositioner::_GetLaunchPosition(
        IUnknown *punkSite,
        struct IApplicationView *a2,
        struct IApplicationViewPosition **a3)
{
  unsigned int v4; // r15d
  struct wil::details::IFunctorHost *v5; // r8
  __int64 (__fastcall *v6)(struct IApplicationView *, __int64 *); // rbx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 (__fastcall *v9)(struct IApplicationView *, __int64 *); // rbx
  int v10; // eax
  struct IUnknownVtbl *lpVtbl; // rdi
  int (__fastcall *v12)(struct IUnknownVtbl *, __int64, __int64, __int64 *); // rbx
  __int64 v13; // rdx
  const struct _GUID *v14; // rcx
  int Instance; // eax
  int v16; // eax
  struct IApplicationViewPosition *v17; // rcx
  unsigned int v18; // r14d
  int (__fastcall *v19)(struct IApplicationView *, GUID *, __int64 *); // rbx
  __int64 v20; // rbx
  int (__fastcall *v21)(__int64, __int64); // rdi
  __int64 AddressOf; // rax
  int DefaultRect; // eax
  CDesktopPositioner *v24; // rcx
  __int64 v25; // rdx
  int fixed; // eax
  void *v28; // [rsp+30h] [rbp-D0h] BYREF
  IUnknown *punk; // [rsp+38h] [rbp-C8h] BYREF
  struct IApplicationView *v30; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v31; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v32; // [rsp+50h] [rbp-B0h] BYREF
  void *v33[2]; // [rsp+58h] [rbp-A8h] BYREF
  struct IApplicationViewPosition **v34; // [rsp+68h] [rbp-98h] BYREF
  __int64 v35; // [rsp+70h] [rbp-90h] BYREF
  __int64 v36; // [rsp+78h] [rbp-88h]
  __int64 v37; // [rsp+80h] [rbp-80h]
  __int64 v38; // [rsp+88h] [rbp-78h] BYREF
  __int64 v39; // [rsp+90h] [rbp-70h]
  __int64 v40; // [rsp+98h] [rbp-68h]
  struct tagRECT v41; // [rsp+A0h] [rbp-60h] BYREF
  char v42; // [rsp+B0h] [rbp-50h]
  _QWORD v43[3]; // [rsp+B8h] [rbp-48h] BYREF
  struct DiagnosticsInfo v44; // [rsp+D0h] [rbp-30h] BYREF
  const char *v45; // [rsp+D8h] [rbp-28h]
  __int64 v46; // [rsp+E0h] [rbp-20h]
  __int16 v47; // [rsp+E8h] [rbp-18h]
  _BYTE v48[8]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v49; // [rsp+F8h] [rbp-8h]
  int v50; // [rsp+104h] [rbp+4h]
  struct tagRECT v51; // [rsp+118h] [rbp+18h] BYREF
  struct tagRECT v52; // [rsp+128h] [rbp+28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+78h]

  v30 = a2;
  v34 = a3;
  *a3 = 0LL;
  v43[0] = &v30;
  v43[1] = punkSite;
  v43[2] = &v34;
  v44 = (struct DiagnosticsInfo)retaddr;
  v45 = "pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp";
  v46 = 0LL;
  v47 = 1453;
  v4 = 1;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_PeopleBar>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_PeopleBar>::GetImpl'::`2'::impl,
    a2);
  v33[0] = &off_180644B68;
  v33[1] = v43;
  wil::details::FeatureFunctorHost::FeatureFunctorHost((wil::details::FeatureFunctorHost *)v48, 0x60F183u, &v44);
  wil::details::RunFunctor((wil::details *)v33, (struct wil::details::IFunctor *)v48, v5);
  if ( v49 )
    *(_DWORD *)(v49 + 16) = v50;
  if ( !*v34 )
  {
    v33[0] = 0LL;
    v38 = 0LL;
    v39 = 0LL;
    v40 = 0LL;
    v6 = *(__int64 (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)v30 + 136LL);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v38);
    v39 = -1LL;
    v40 = -1LL;
    v7 = v6(v30, &v38);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5BD,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v7);
LABEL_38:
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v38);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v33);
      return v8;
    }
    v35 = 0LL;
    v36 = 0LL;
    v37 = 0LL;
    v9 = *(__int64 (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)v30 + 488LL);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v35);
    v36 = -1LL;
    v37 = -1LL;
    v10 = v9(v30, &v35);
    v8 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5C0,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v10);
LABEL_37:
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v35);
      goto LABEL_38;
    }
    v32 = 0LL;
    lpVtbl = punkSite[31].lpVtbl;
    v12 = (int (__fastcall *)(struct IUnknownVtbl *, __int64, __int64, __int64 *))*((_QWORD *)lpVtbl->QueryInterface + 3);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v32);
    if ( v12(lpVtbl, v38, v35, &v32) >= 0 )
    {
      Microsoft::WRL::ComPtr<IApplicationViewPosition>::operator=<IOcclusionBasedApplicationViewPosition>(
        (__int64 *)v33,
        &v32);
      v4 = 0;
    }
    else
    {
      LOBYTE(v13) = 1;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::ReportUsage(
        &`wil::Feature<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::GetImpl'::`2'::impl,
        v13);
      punk = 0LL;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&punk);
      Instance = DefaultLaunchPositionOverride_CreateInstance(v14, (void **)&punk);
      v8 = Instance;
      if ( Instance < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x5CA,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)Instance);
LABEL_17:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&punk);
LABEL_36:
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v32);
        goto LABEL_37;
      }
      IUnknown_SetSite(punk, punkSite);
      v42 = 0;
      if ( ((int (__fastcall *)(IUnknown *, struct IApplicationView *, struct tagRECT *))punk->lpVtbl[1].QueryInterface)(
             punk,
             v30,
             &v41) >= 0
        && v42 )
      {
        v28 = 0LL;
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v28);
        v16 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT &>(
                &v28,
                &v41);
        v8 = v16;
        if ( v16 >= 0 )
        {
          v17 = (struct IApplicationViewPosition *)v28;
          v28 = 0LL;
          *v34 = v17;
          v8 = 0;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x5D1,
            (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
            (const char *)(unsigned int)v16);
        }
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v28);
        goto LABEL_17;
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&punk);
      v18 = 0;
      v31 = 0LL;
      v19 = **(int (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))v30;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v31);
      if ( v19(v30, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, &v31) >= 0 )
      {
        v28 = 0LL;
        v20 = v31;
        v21 = *(int (__fastcall **)(__int64, __int64))(*(_QWORD *)v31 + 24LL);
        AddressOf = Microsoft::WRL::ComPtr<IImmersiveApplication>::ReleaseAndGetAddressOf(&v28);
        if ( v21(v20, AddressOf) >= 0 )
          v18 = (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)v28 + 328LL))(v28, 0LL) != 0;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v28);
      }
      DefaultRect = CDesktopPositioner::_GetDefaultRect((CDesktopPositioner *)punkSite, 0LL, v18, &v51);
      v8 = DefaultRect;
      if ( DefaultRect < 0 )
      {
        v25 = 1515LL;
LABEL_31:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v25,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)DefaultRect);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v31);
        goto LABEL_36;
      }
      if ( LODWORD(punkSite[63].lpVtbl) )
      {
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v33);
        DefaultRect = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT &>(
                        v33,
                        &v51);
        v8 = DefaultRect;
        if ( DefaultRect < 0 )
        {
          v25 = 1519LL;
          goto LABEL_31;
        }
      }
      else
      {
        DefaultRect = CDesktopPositioner::_ConvertScreenRectToWorkAreaRect(v24, &v51, &v52);
        v8 = DefaultRect;
        if ( DefaultRect < 0 )
        {
          v25 = 1524LL;
          goto LABEL_31;
        }
        LODWORD(punk) = 3;
        DefaultRect = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewOcclusionPosition,IApplicationViewPosition,enum ARRANGEMENT_BASED_VIEW_STATE,tagRECT &>(
                        v33,
                        &punk,
                        &v52);
        v8 = DefaultRect;
        if ( DefaultRect < 0 )
        {
          v25 = 1525LL;
          goto LABEL_31;
        }
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v31);
    }
    fixed = CDesktopPositioner::_FixPosition(punkSite, v4, v33[0], v34);
    v8 = fixed;
    if ( fixed < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x604,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)fixed);
      goto LABEL_36;
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v32);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v35);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v38);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v33);
  }
  return 0LL;
}
