/*
 * XREFs of ?ShouldHandleActivation@FullScreenPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x180044540
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x180012C88 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetTargetPresenterKind@ViewModePreferencesHelpers@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEAW4ApplicationWindowPresenterKindInternal@WindowingEnvironment@ApplicationModel@Internal@5@PEA_N@Z @ 0x180044774 (-GetTargetPresenterKind@ViewModePreferencesHelpers@@YAJPEAUIPropertySet@Collections@Foundation@W.c)
 *     ?IsFullScreenModeDisabledForView@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x180044818 (-IsFullScreenModeDisabledForView@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?IsFullScreenCompatQuirkedApp@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x180044A70 (-IsFullScreenCompatQuirkedApp@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
_BOOL8 __fastcall FullScreenPositioner::ShouldHandleActivation(
        FullScreenPositioner *this,
        int (__fastcall ***a2)(struct IApplicationView *, GUID *, __int64 *),
        __int64 (__fastcall ***a3)(struct IApplicationView *, GUID *, ViewSizePreferenceHelpers **))
{
  int (__fastcall *v6)(struct IApplicationView *, GUID *, __int64 *); // rbx
  struct IApplicationView *v7; // rdx
  PositionerPropertySetHelpers *v8; // rcx
  int DetailsForActivation; // eax
  struct IApplicationView *v10; // rdx
  BOOL v11; // edi
  int (__fastcall *v12)(struct IApplicationView *, __int64 *); // rbx
  int (__fastcall *v13)(struct IApplicationView *, struct IUnknown *); // rbx
  HRESULT (__stdcall *v14)(IUnknown *, const IID *const, void **); // rbx
  int TargetPresenterKind; // eax
  bool *v16; // r9
  __int64 v18; // rdx
  ViewModePreferencesHelpers *v19; // [rsp+20h] [rbp-30h] BYREF
  __int64 v20; // [rsp+28h] [rbp-28h] BYREF
  __int64 v21; // [rsp+30h] [rbp-20h] BYREF
  __int64 v22; // [rsp+38h] [rbp-18h]
  __int64 v23; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  struct IUnknown v25; // [rsp+88h] [rbp+38h] BYREF
  int v26; // [rsp+98h] [rbp+48h] BYREF

  v20 = 0LL;
  v6 = **a2;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
  if ( v6((struct IApplicationView *)a2, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, &v20) < 0
    || FullScreenPositionerHelpers::IsFullScreenModeDisabledForView((FullScreenPositionerHelpers *)a2, v7) )
  {
    goto LABEL_22;
  }
  DetailsForActivation = PositionerPropertySetHelpers::GetDetailsForActivation(v8, a3, &v25, 0LL);
  if ( DetailsForActivation < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x16C,
      (unsigned int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
      (const char *)(unsigned int)DetailsForActivation,
      (int)v19);
  if ( ((__int64)v25.lpVtbl & 0x10) != 0 )
  {
LABEL_22:
    v11 = 0;
    goto LABEL_21;
  }
  if ( FullScreenPositionerHelpers::IsFullScreenCompatQuirkedApp((FullScreenPositionerHelpers *)a2, v10) )
  {
    v11 = 1;
  }
  else
  {
    v11 = 0;
    v21 = 0LL;
    v22 = 0LL;
    v23 = 0LL;
    v12 = (int (__fastcall *)(struct IApplicationView *, __int64 *))(*a2)[17];
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v21);
    v22 = -1LL;
    v23 = -1LL;
    if ( v12((struct IApplicationView *)a2, &v21) >= 0
      && (*(int (__fastcall **)(_QWORD, __int64, struct IUnknown *))(**((_QWORD **)this + 18) + 24LL))(
           *((_QWORD *)this + 18),
           v21,
           &v25) >= 0 )
    {
      LOBYTE(v11) = LODWORD(v25.lpVtbl) == 2;
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v21);
    if ( !v11 )
    {
      v25.lpVtbl = 0LL;
      v13 = (int (__fastcall *)(struct IApplicationView *, struct IUnknown *))(*a2)[33];
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v25);
      if ( v13((struct IApplicationView *)a2, &v25) >= 0 )
        LOBYTE(v11) = (*((unsigned int (__fastcall **)(struct IUnknownVtbl *))v25.lpVtbl->QueryInterface + 3))(v25.lpVtbl) == 3;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v25);
    }
  }
  if ( a3 && !v11 )
  {
    v19 = 0LL;
    v14 = (HRESULT (__stdcall *)(IUnknown *, const IID *const, void **))**a3;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v19);
    TargetPresenterKind = ((__int64 (__fastcall *)(_QWORD, GUID *, ViewModePreferencesHelpers **))v14)(
                            a3,
                            &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c,
                            &v19);
    v11 = TargetPresenterKind;
    if ( TargetPresenterKind < 0 )
    {
      v18 = 406LL;
    }
    else
    {
      v26 = 0;
      LOBYTE(v25.lpVtbl) = 0;
      TargetPresenterKind = ViewModePreferencesHelpers::GetTargetPresenterKind(
                              v19,
                              (struct Windows::Foundation::Collections::IPropertySet *)&v26,
                              (enum Windows::Internal::ApplicationModel::WindowingEnvironment::ApplicationWindowPresenterKindInternal *)&v25,
                              v16);
      v11 = TargetPresenterKind;
      if ( TargetPresenterKind >= 0 )
      {
        v11 = LOBYTE(v25.lpVtbl) && v26 == 2;
        goto LABEL_20;
      }
      v18 = 410LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (unsigned int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
      (const char *)(unsigned int)TargetPresenterKind,
      (int)v19);
LABEL_20:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v19);
  }
LABEL_21:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
  return v11;
}
