/*
 * XREFs of ?ShouldHandleActivation@FullScreenPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x180098AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIShellPositionerPriority@@@WRL@Microsoft@@QEAAPEAPEAUIShellPositionerPriority@@XZ @ 0x1800340AC (-ReleaseAndGetAddressOf@-$ComPtr@UIShellPositionerPriority@@@WRL@Microsoft@@QEAAPEAPEAUIShellPos.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x180097200 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_RespectEdgeAllowFullScreenPolicy@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180098CEC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_RespectEdgeAllowFullScreenPolicy@@@detail.c)
 *     ?GetCoreWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180098D74 (-GetCoreWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?GetTargetPresenterKind@ViewModePreferencesHelpers@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEAW4ApplicationWindowPresenterKindInternal@WindowingEnvironment@ApplicationModel@Internal@5@PEA_N@Z @ 0x18009908C (-GetTargetPresenterKind@ViewModePreferencesHelpers@@YAJPEAUIPropertySet@Collections@Foundation@W.c)
 *     ?IsFullScreenCompatQuirkedApp@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x180099154 (-IsFullScreenCompatQuirkedApp@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
_BOOL8 __fastcall FullScreenPositioner::ShouldHandleActivation(
        FullScreenPositioner *this,
        struct IApplicationView *a2,
        struct IUnknown *a3)
{
  __int64 v6; // rdx
  struct IApplicationView *v7; // rdx
  HWND CoreWindowForView; // rax
  PositionerPropertySetHelpers *v9; // rcx
  int DetailsForActivation; // eax
  struct IApplicationView *v11; // rdx
  BOOL v12; // edi
  __int64 v13; // rax
  int (__fastcall *v14)(struct IApplicationView *, __int64 *); // rbx
  __int64 *AddressOf; // rax
  int TargetPresenterKind; // eax
  bool *v17; // r9
  __int64 v19; // rdx
  ViewModePreferencesHelpers *v20; // [rsp+20h] [rbp-30h] BYREF
  __int64 v21; // [rsp+28h] [rbp-28h] BYREF
  LPVOID pv[4]; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  struct IUnknown v24; // [rsp+78h] [rbp+28h] BYREF
  int v25; // [rsp+88h] [rbp+38h] BYREF

  v21 = 0LL;
  if ( (**(int (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))a2)(
         a2,
         &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b,
         &v21) < 0 )
    goto LABEL_24;
  LOBYTE(v6) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_RespectEdgeAllowFullScreenPolicy>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_RespectEdgeAllowFullScreenPolicy>::GetImpl'::`2'::impl,
    v6);
  CoreWindowForView = ApplicationViewHelpers::GetCoreWindowForView(a2, v7);
  if ( GetPropW(CoreWindowForView, L"Windows.ImmersiveShell.DisableFullScreenMode") )
    goto LABEL_24;
  DetailsForActivation = PositionerPropertySetHelpers::GetDetailsForActivation(
                           v9,
                           (struct IApplicationView *)a3,
                           &v24,
                           0LL);
  if ( DetailsForActivation < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1AB,
      (unsigned int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
      (const char *)(unsigned int)DetailsForActivation,
      (int)v20);
  if ( ((__int64)v24.lpVtbl & 0x10) != 0 )
  {
LABEL_24:
    v12 = 0;
    goto LABEL_23;
  }
  if ( FullScreenPositionerHelpers::IsFullScreenCompatQuirkedApp(a2, v11) )
  {
    v12 = 1;
  }
  else
  {
    v12 = 0;
    pv[0] = 0LL;
    v13 = *(_QWORD *)a2;
    pv[1] = (LPVOID)-1LL;
    pv[2] = (LPVOID)-1LL;
    if ( (*(int (__fastcall **)(struct IApplicationView *, LPVOID *))(v13 + 136))(a2, pv) >= 0
      && (*(int (__fastcall **)(_QWORD, LPVOID, struct IUnknown *))(**((_QWORD **)this + 19) + 24LL))(
           *((_QWORD *)this + 19),
           pv[0],
           &v24) >= 0 )
    {
      LOBYTE(v12) = LODWORD(v24.lpVtbl) == 2;
    }
    if ( pv[0] )
      CoTaskMemFree(pv[0]);
    if ( !v12 )
    {
      v24.lpVtbl = 0LL;
      v14 = *(int (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 264LL);
      AddressOf = Microsoft::WRL::ComPtr<IShellPositionerPriority>::ReleaseAndGetAddressOf((__int64 *)&v24);
      if ( v14(a2, AddressOf) >= 0 )
        LOBYTE(v12) = (*((unsigned int (__fastcall **)(struct IUnknownVtbl *))v24.lpVtbl->QueryInterface + 3))(v24.lpVtbl) == 3;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v24);
    }
  }
  if ( a3 && !v12 )
  {
    v20 = 0LL;
    TargetPresenterKind = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, ViewModePreferencesHelpers **))a3->lpVtbl->QueryInterface)(
                            a3,
                            &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c,
                            &v20);
    v12 = TargetPresenterKind;
    if ( TargetPresenterKind < 0 )
    {
      v19 = 469LL;
    }
    else
    {
      v25 = 0;
      LOBYTE(v24.lpVtbl) = 0;
      TargetPresenterKind = ViewModePreferencesHelpers::GetTargetPresenterKind(
                              v20,
                              (struct Windows::Foundation::Collections::IPropertySet *)&v25,
                              (enum Windows::Internal::ApplicationModel::WindowingEnvironment::ApplicationWindowPresenterKindInternal *)&v24,
                              v17);
      v12 = TargetPresenterKind;
      if ( TargetPresenterKind >= 0 )
      {
        v12 = LOBYTE(v24.lpVtbl) && v25 == 2;
        goto LABEL_22;
      }
      v19 = 473LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
      (const char *)(unsigned int)TargetPresenterKind);
LABEL_22:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v20);
  }
LABEL_23:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v21);
  return v12;
}
