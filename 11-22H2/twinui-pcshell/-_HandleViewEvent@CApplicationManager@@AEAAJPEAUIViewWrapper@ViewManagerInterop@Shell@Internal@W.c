/*
 * XREFs of ?_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18000F0C0
 * Callers:
 *     <none>
 * Callees:
 *     ??$As@UIImmersiveApplication@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@@Details@12@@Z @ 0x18000D5C0 (--$As@UIImmersiveApplication@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ?_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x18000E474 (-_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ?_HandleViewNavigationRequested@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@PEAUIViewEventArgsForNavigationRequest@3456@@Z @ 0x18000F584 (-_HandleViewNavigationRequested@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Sh.c)
 *     ??0CTaskWindowFinder@@QEAA@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18000F918 (--0CTaskWindowFinder@@QEAA@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z.c)
 *     ?_HandleTaskWindowDestruction@CApplicationManager@@AEAAXAEBVCTaskWindowFinder@@@Z @ 0x18000F948 (-_HandleTaskWindowDestruction@CApplicationManager@@AEAAXAEBVCTaskWindowFinder@@@Z.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByTaskWindow@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByTaskWindow@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x18000FB04 (--$_FindFirstApplication@VCImmersiveAppFinderByTaskWindow@@@CApplicationManager@@AEAAJAEBVCImmer.c)
 *     ?_HandleViewPropertyChanged@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewPropertyChangedArgs@3456@@Z @ 0x180011DA0 (-_HandleViewPropertyChanged@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ViewClosingAPIs_TryConsolidate_Desktop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18039FB08 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ViewClosingAPIs_TryConsolidate_Desktop@@@.c)
 *     ?_CreatePresentationRequestedArgs@CApplicationManager@@AEAAJPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@PEAPEAUIPresentationRequestedArgs@@@Z @ 0x1803A1C00 (-_CreatePresentationRequestedArgs@CApplicationManager@@AEAAJPEAUIViewEventArgs@ViewManagerIntero.c)
 *     ?_HandleSelectTargetViewForNavigationRequest@CApplicationManager@@AEAAX_KPEAUIPropertySet@Collections@Foundation@Windows@@PEAUIViewEventArgsForSelectTargetView@ViewManagerInterop@Shell@Internal@5@@Z @ 0x1803A2C30 (-_HandleSelectTargetViewForNavigationRequest@CApplicationManager@@AEAAX_KPEAUIPropertySet@Collec.c)
 *     ?_HandleWindowingEnvironmentSettingsRequest@CApplicationManager@@AEAAJPEAUIWindowingEnvironmentSettingsArgs@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1803A36E0 (-_HandleWindowingEnvironmentSettingsRequest@CApplicationManager@@AEAAJPEAUIWindowingEnvironmentS.c)
 */

// Hidden C++ exception states: #wind=19
__int64 __fastcall CApplicationManager::_HandleViewEvent(
        CApplicationManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        int (__fastcall ***a3)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView **))
{
  __int64 v6; // rdx
  int (__fastcall *v8)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, struct IPresentationRequestedArgs **); // rbx
  int (__fastcall *v9)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView **); // rbx
  void *p_ppvOut; // rcx
  const struct CTaskWindowFinder *v11; // rax
  int (__fastcall *v12)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView **); // rbx
  int (__fastcall *v13)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView **); // rbx
  int (__fastcall *v14)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, void **); // rbx
  int (__fastcall *v15)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView **); // rbx
  struct Windows::Foundation::Collections::IPropertySet *v16; // r8
  int (__fastcall *v17)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView **); // rbx
  int (__fastcall *v18)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView **); // rbx
  char v19; // r15
  CTaskWindowFinder *v20; // rbx
  void (__fastcall *v21)(char *, GUID *, IUnknown **); // rbx
  HRESULT v22; // eax
  int (__fastcall *v23)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView **); // rbx
  int (__fastcall *v24)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView **); // rbx
  int v25; // [rsp+20h] [rbp-39h]
  struct IPresentationRequestedArgs *v26; // [rsp+30h] [rbp-29h] BYREF
  IUnknown *punk; // [rsp+38h] [rbp-21h] BYREF
  void *ppvOut; // [rsp+40h] [rbp-19h] BYREF
  unsigned __int64 v29; // [rsp+48h] [rbp-11h] BYREF
  _BYTE v30[8]; // [rsp+50h] [rbp-9h] BYREF
  _BYTE v31[16]; // [rsp+58h] [rbp-1h] BYREF
  __int64 v32; // [rsp+68h] [rbp+Fh] BYREF
  __int64 v33; // [rsp+70h] [rbp+17h] BYREF
  char v34; // [rsp+78h] [rbp+1Fh]
  int v35; // [rsp+80h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]
  int v37; // [rsp+D0h] [rbp+77h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView *v38; // [rsp+D8h] [rbp+7Fh] BYREF

  LODWORD(v38) = 0;
  if ( ((int (__fastcall *)(int (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView **), int *))(*a3)[6])(
         a3,
         &v37) < 0 )
    return 0LL;
  if ( v37 > 12 )
  {
    if ( v37 == 13 )
    {
      v38 = 0LL;
      v24 = **a3;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v38);
      if ( v24(
             (struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *)a3,
             &GUID_8a11574c_5d5f_48d7_bd8c_d7a801fca248,
             &v38) >= 0 )
        (*(void (__fastcall **)(_QWORD, struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView *))(**((_QWORD **)this + 75) + 120LL))(
          *((_QWORD *)this + 75),
          v38);
      goto LABEL_51;
    }
    if ( v37 != 14 )
    {
      if ( v37 == 35 )
      {
        v19 = 1;
        LOBYTE(v6) = 1;
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_ViewClosingAPIs_TryConsolidate_Desktop>::ReportUsage(
          &`wil::Feature<__WilFeatureTraits_Feature_ViewClosingAPIs_TryConsolidate_Desktop>::GetImpl'::`2'::impl,
          v6);
        AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
        v26 = 0LL;
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v26);
        v20 = CTaskWindowFinder::CTaskWindowFinder((CTaskWindowFinder *)v30, a2);
        v32 = *(_QWORD *)v20;
        v33 = *((_QWORD *)v20 + 1);
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v33);
        v34 = *((_BYTE *)v20 + 16);
        v35 = 0;
        CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByTaskWindow>(this, &v32, &v26, 0LL);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v33);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v31);
        ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
        if ( v26 )
        {
          v29 = 0LL;
          Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplication>(
            (__int64 (__fastcall ****)(_QWORD, GUID *, __int64))&v26,
            (__int64)&v29);
          ppvOut = 0LL;
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&ppvOut);
          punk = 0LL;
          LODWORD(v38) = 2;
          v21 = *(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this + 6) + 32LL);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&punk);
          v21((char *)this + 48, &GUID_00000000_0000_0000_c000_000000000046, &punk);
          v22 = IUnknown_QueryService(punk, &stru_18081F618, &GUID_103231ae_04cb_4e5e_b63d_e3ce47cd0f0a, &ppvOut);
          if ( v22 < 0 )
          {
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x1743,
              (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
              (const char *)(unsigned int)v22,
              v25);
            v19 = 0;
          }
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&punk);
          if ( v19 )
            (*(void (__fastcall **)(void *, unsigned __int64, __int64))(*(_QWORD *)ppvOut + 32LL))(ppvOut, v29, 8LL);
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&ppvOut);
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v29);
        }
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v26);
        return 0LL;
      }
      if ( v37 != 38 )
        return 0LL;
      v38 = 0LL;
      v18 = **a3;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v38);
      if ( v18(
             (struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *)a3,
             &GUID_559064cb_9dc0_4491_9a6c_ace3cd4e51c8,
             &v38) >= 0 )
        CApplicationManager::_HandleWindowingEnvironmentSettingsRequest(this, v38);
LABEL_51:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v38);
      return 0LL;
    }
    ppvOut = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&ppvOut);
    CApplicationManager::_CreatePresentationRequestedArgs(
      this,
      (struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *)a3,
      (struct IPresentationRequestedArgs **)&ppvOut);
    v38 = 0LL;
    v23 = **a3;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v38);
    if ( v23(
           (struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *)a3,
           &GUID_ffc41fc2_6037_4426_8bfb_7716e14343f7,
           &v38) >= 0 )
      (*(void (__fastcall **)(_QWORD, struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView *, void *))(**((_QWORD **)this + 75) + 128LL))(
        *((_QWORD *)this + 75),
        v38,
        ppvOut);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v38);
    p_ppvOut = &ppvOut;
LABEL_32:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(p_ppvOut);
    return 0LL;
  }
  switch ( v37 )
  {
    case 12:
      v26 = 0LL;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v26);
      CApplicationManager::_CreatePresentationRequestedArgs(
        this,
        (struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *)a3,
        &v26);
      v38 = 0LL;
      v17 = **a3;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v38);
      if ( v17(
             (struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *)a3,
             &GUID_73fde223_ab79_4255_b395_e73cc002703f,
             &v38) >= 0 )
        (*(void (__fastcall **)(_QWORD, struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView *, struct IPresentationRequestedArgs *))(**((_QWORD **)this + 75) + 112LL))(
          *((_QWORD *)this + 75),
          v38,
          v26);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v38);
      p_ppvOut = &v26;
      goto LABEL_32;
    case 0:
      v38 = 0LL;
      v12 = (int (__fastcall *)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView **))(*a3)[7];
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v38);
      if ( v12((struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *)a3, &v38) >= 0 )
        CApplicationManager::_HandleViewCreation(
          this,
          (void (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, GUID *, struct IImmersiveMonitor **))a2,
          (struct IUnknown *)v38);
      p_ppvOut = &v38;
      goto LABEL_32;
    case 1:
      ppvOut = 0LL;
      v14 = (int (__fastcall *)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, void **))(*a3)[7];
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&ppvOut);
      if ( v14((struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *)a3, &ppvOut) >= 0 )
      {
        v38 = 0LL;
        v15 = **a3;
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v38);
        if ( v15(
               (struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *)a3,
               &GUID_741390c6_ef1e_43ce_bfc2_6cfb131c012e,
               &v38) >= 0
          && (*(int (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, unsigned __int64 *))(*(_QWORD *)a2 + 584LL))(
               a2,
               &v29) >= 0 )
        {
          CApplicationManager::_HandleSelectTargetViewForNavigationRequest(this, v29, v16, v38);
        }
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v38);
      }
      p_ppvOut = &ppvOut;
      goto LABEL_32;
    case 2:
      v26 = 0LL;
      v8 = (int (__fastcall *)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, struct IPresentationRequestedArgs **))(*a3)[7];
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v26);
      if ( v8((struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *)a3, &v26) >= 0 )
      {
        v38 = 0LL;
        v9 = **a3;
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v38);
        if ( v9(
               (struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *)a3,
               &GUID_a8d2a90c_a403_4593_95ff_012516ae9351,
               &v38) >= 0 )
          CApplicationManager::_HandleViewNavigationRequested(this, a2, v26, v38);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v38);
      }
      p_ppvOut = &v26;
      goto LABEL_32;
    case 4:
      AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      v11 = CTaskWindowFinder::CTaskWindowFinder((CTaskWindowFinder *)v30, a2);
      CApplicationManager::_HandleTaskWindowDestruction(this, v11);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v31);
      ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      return 0LL;
    case 5:
      v38 = 0LL;
      v13 = **a3;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v38);
      if ( v13(
             (struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *)a3,
             &GUID_360030af_7930_47a7_a1dd_184464be39de,
             &v38) >= 0 )
        CApplicationManager::_HandleViewPropertyChanged(this, a2, v38);
      goto LABEL_51;
  }
  return 0LL;
}
