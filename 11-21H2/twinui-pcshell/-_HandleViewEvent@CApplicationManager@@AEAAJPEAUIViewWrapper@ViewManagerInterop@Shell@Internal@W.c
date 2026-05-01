/*
 * XREFs of ?_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x1800E8B80
 * Callers:
 *     <none>
 * Callees:
 *     ?_HandleViewPropertyChanged@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewPropertyChangedArgs@3456@@Z @ 0x180028AE4 (-_HandleViewPropertyChanged@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_CreatePresentationRequestedArgs@CApplicationManager@@AEAAJPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@PEAPEAUIPresentationRequestedArgs@@@Z @ 0x18002ECFC (-_CreatePresentationRequestedArgs@CApplicationManager@@AEAAJPEAUIViewEventArgs@ViewManagerIntero.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_HandleSelectTargetViewForNavigationRequest@CApplicationManager@@AEAAX_KPEAUIPropertySet@Collections@Foundation@Windows@@PEAUIViewEventArgsForSelectTargetView@ViewManagerInterop@Shell@Internal@5@@Z @ 0x18003AA48 (-_HandleSelectTargetViewForNavigationRequest@CApplicationManager@@AEAAX_KPEAUIPropertySet@Collec.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_HandleViewNavigationRequested@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@PEAUIViewEventArgsForNavigationRequest@3456@@Z @ 0x180073EB0 (-_HandleViewNavigationRequested@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Sh.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x1800E8EF8 (-_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ??$As@UIImmersiveApplication@@@?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800EBCDC (--$As@UIImmersiveApplication@@@-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@QEBAJV-$.c)
 *     ?_HandleTaskWindowDestruction@CApplicationManager@@AEAAXAEBVCTaskWindowFinder@@@Z @ 0x1801230DC (-_HandleTaskWindowDestruction@CApplicationManager@@AEAAXAEBVCTaskWindowFinder@@@Z.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByTaskWindow@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByTaskWindow@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180124EC0 (--$_FindFirstApplication@VCImmersiveAppFinderByTaskWindow@@@CApplicationManager@@AEAAJAEBVCImmer.c)
 *     ??0CTaskWindowFinder@@QEAA@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18017A0E0 (--0CTaskWindowFinder@@QEAA@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ViewClosingAPIs_TryConsolidate_Desktop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802E740C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ViewClosingAPIs_TryConsolidate_Desktop@@@.c)
 *     ?_HandleWindowingEnvironmentSettingsRequest@CApplicationManager@@AEAAJPEAUIWindowingEnvironmentSettingsArgs@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802EAB18 (-_HandleWindowingEnvironmentSettingsRequest@CApplicationManager@@AEAAJPEAUIWindowingEnvironmentS.c)
 */

// Hidden C++ exception states: #wind=20
__int64 __fastcall CApplicationManager::_HandleViewEvent(
        CApplicationManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        int (__fastcall ***a3)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView **))
{
  __int64 v6; // rdx
  int (__fastcall *v7)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView **); // rbx
  int (__fastcall *v8)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, struct IPresentationRequestedArgs **); // rbx
  int (__fastcall *v9)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView **); // rbx
  __int64 *p_ppvOut; // rcx
  int (__fastcall *v12)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView **); // rbx
  const struct CTaskWindowFinder *v13; // rax
  int (__fastcall *v14)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, void **); // rbx
  int (__fastcall *v15)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView **); // rbx
  struct Windows::Foundation::Collections::IPropertySet *v16; // r8
  int (__fastcall *v17)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView **); // rbx
  __int64 *v18; // rcx
  int (__fastcall *v19)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView **); // rbx
  char v20; // r15
  CTaskWindowFinder *v21; // rbx
  __int64 v22; // rcx
  void (__fastcall *v23)(char *, GUID *, IUnknown **); // rbx
  HRESULT v24; // eax
  int (__fastcall *v25)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView **); // rbx
  int (__fastcall *v26)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView **); // rbx
  struct IPresentationRequestedArgs *v27; // [rsp+30h] [rbp-29h] BYREF
  IUnknown *punk; // [rsp+38h] [rbp-21h] BYREF
  void *ppvOut; // [rsp+40h] [rbp-19h] BYREF
  unsigned __int64 v30; // [rsp+48h] [rbp-11h] BYREF
  _BYTE v31[8]; // [rsp+50h] [rbp-9h] BYREF
  __int64 v32[2]; // [rsp+58h] [rbp-1h] BYREF
  __int64 v33; // [rsp+68h] [rbp+Fh] BYREF
  __int64 v34; // [rsp+70h] [rbp+17h] BYREF
  char v35; // [rsp+78h] [rbp+1Fh]
  int v36; // [rsp+80h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]
  int v38; // [rsp+D0h] [rbp+77h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView *v39; // [rsp+D8h] [rbp+7Fh] BYREF

  LODWORD(v39) = 0;
  if ( ((int (__fastcall *)(int (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView **), int *))(*a3)[6])(
         a3,
         &v38) < 0 )
    return 0LL;
  if ( v38 == 12 )
  {
    v27 = 0LL;
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v27);
    CApplicationManager::_CreatePresentationRequestedArgs(
      this,
      (struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *)a3,
      &v27);
    v39 = 0LL;
    v17 = **a3;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v39);
    if ( v17(
           (struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *)a3,
           &GUID_73fde223_ab79_4255_b395_e73cc002703f,
           &v39) >= 0 )
      (*(void (__fastcall **)(_QWORD, struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView *, struct IPresentationRequestedArgs *))(**((_QWORD **)this + 75) + 112LL))(
        *((_QWORD *)this + 75),
        v39,
        v27);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v39);
    v18 = (__int64 *)&v27;
    goto LABEL_32;
  }
  if ( v38 <= 12 )
  {
    if ( v38 )
    {
      switch ( v38 )
      {
        case 1:
          ppvOut = 0LL;
          v14 = (int (__fastcall *)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, void **))(*a3)[7];
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
          if ( v14((struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *)a3, &ppvOut) >= 0 )
          {
            v39 = 0LL;
            v15 = **a3;
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v39);
            if ( v15(
                   (struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *)a3,
                   &GUID_741390c6_ef1e_43ce_bfc2_6cfb131c012e,
                   &v39) >= 0
              && (*(int (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, unsigned __int64 *))(*(_QWORD *)a2 + 584LL))(
                   a2,
                   &v30) >= 0 )
            {
              CApplicationManager::_HandleSelectTargetViewForNavigationRequest(this, v30, v16, v39);
            }
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v39);
          }
          p_ppvOut = (__int64 *)&ppvOut;
          break;
        case 2:
          v27 = 0LL;
          v8 = (int (__fastcall *)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, struct IPresentationRequestedArgs **))(*a3)[7];
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v27);
          if ( v8((struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *)a3, &v27) >= 0 )
          {
            v39 = 0LL;
            v9 = **a3;
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v39);
            if ( v9(
                   (struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *)a3,
                   &GUID_a8d2a90c_a403_4593_95ff_012516ae9351,
                   &v39) >= 0 )
              CApplicationManager::_HandleViewNavigationRequested(this, a2, v27, v39);
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v39);
          }
          p_ppvOut = (__int64 *)&v27;
          break;
        case 4:
          AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
          v13 = CTaskWindowFinder::CTaskWindowFinder((CTaskWindowFinder *)v31, a2);
          CApplicationManager::_HandleTaskWindowDestruction(this, v13);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v32);
          ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
          break;
        case 5:
          v39 = 0LL;
          v7 = **a3;
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v39);
          if ( v7(
                 (struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *)a3,
                 &GUID_360030af_7930_47a7_a1dd_184464be39de,
                 &v39) >= 0 )
            CApplicationManager::_HandleViewPropertyChanged(this, a2, v39);
LABEL_54:
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v39);
          return 0LL;
        default:
          return 0LL;
      }
    }
    else
    {
      v39 = 0LL;
      v12 = (int (__fastcall *)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView **))(*a3)[7];
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v39);
      if ( v12((struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *)a3, &v39) >= 0 )
        CApplicationManager::_HandleViewCreation(this, a2, v39);
      p_ppvOut = (__int64 *)&v39;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(p_ppvOut);
    return 0LL;
  }
  switch ( v38 )
  {
    case 13:
      v39 = 0LL;
      v26 = **a3;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v39);
      if ( v26(
             (struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *)a3,
             &GUID_8a11574c_5d5f_48d7_bd8c_d7a801fca248,
             &v39) >= 0 )
        (*(void (__fastcall **)(_QWORD, struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView *))(**((_QWORD **)this + 75) + 120LL))(
          *((_QWORD *)this + 75),
          v39);
      goto LABEL_54;
    case 14:
      ppvOut = 0LL;
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&ppvOut);
      CApplicationManager::_CreatePresentationRequestedArgs(
        this,
        (struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *)a3,
        (struct IPresentationRequestedArgs **)&ppvOut);
      v39 = 0LL;
      v25 = **a3;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v39);
      if ( v25(
             (struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *)a3,
             &GUID_ffc41fc2_6037_4426_8bfb_7716e14343f7,
             &v39) >= 0 )
        (*(void (__fastcall **)(_QWORD, struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView *, void *))(**((_QWORD **)this + 75) + 128LL))(
          *((_QWORD *)this + 75),
          v39,
          ppvOut);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v39);
      v18 = (__int64 *)&ppvOut;
LABEL_32:
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(v18);
      return 0LL;
    case 35:
      v20 = 1;
      LOBYTE(v6) = 1;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_ViewClosingAPIs_TryConsolidate_Desktop>::ReportUsage(
        &`wil::Feature<__WilFeatureTraits_Feature_ViewClosingAPIs_TryConsolidate_Desktop>::GetImpl'::`2'::impl,
        v6);
      AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      v27 = 0LL;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v27);
      v21 = CTaskWindowFinder::CTaskWindowFinder((CTaskWindowFinder *)v31, a2);
      v33 = *(_QWORD *)v21;
      v22 = *((_QWORD *)v21 + 1);
      v34 = v22;
      if ( v22 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
      v35 = *((_BYTE *)v21 + 16);
      v36 = 0;
      CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByTaskWindow>(this, &v33, &v27, 0LL);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v34);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v32);
      ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      if ( v27 )
      {
        v30 = 0LL;
        Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>::As<IImmersiveApplication>(&v27, &v30);
        ppvOut = 0LL;
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
        punk = 0LL;
        LODWORD(v39) = 2;
        v23 = *(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this + 6) + 32LL);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
        v23((char *)this + 48, &GUID_00000000_0000_0000_c000_000000000046, &punk);
        v24 = IUnknown_QueryService(punk, &stru_1806D4168, &GUID_103231ae_04cb_4e5e_b63d_e3ce47cd0f0a, &ppvOut);
        if ( v24 < 0 )
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x1789,
            (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
            (const char *)(unsigned int)v24);
          v20 = 0;
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
        if ( v20 )
          (*(void (__fastcall **)(void *, unsigned __int64, __int64))(*(_QWORD *)ppvOut + 32LL))(ppvOut, v30, 8LL);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v30);
      }
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v27);
      break;
    case 38:
      v39 = 0LL;
      v19 = **a3;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v39);
      if ( v19(
             (struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *)a3,
             &GUID_559064cb_9dc0_4491_9a6c_ace3cd4e51c8,
             &v39) >= 0 )
        CApplicationManager::_HandleWindowingEnvironmentSettingsRequest(this, v39);
      goto LABEL_54;
  }
  return 0LL;
}
