/*
 * XREFs of ?RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800E923C
 * Callers:
 *     ??$MakeAndInitialize@VCActionCenterExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x180134350 (--$MakeAndInitialize@VCActionCenterExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@D.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x18009720C (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18009ACBC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIServiceProvider@@PEAPEAUIExperienceManagerPriorityManipulator@Experience@Shell@Internal@Windows@@@Z @ 0x1800E48DC (-GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIServiceProvider@@PEAPEAUIE.c)
 *     ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x180106290 (--0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x180106324 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x1801070F0 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?SubscribeToShellReadyWnf@CActionCenterExperienceManager@@AEAAJXZ @ 0x180127FDC (-SubscribeToShellReadyWnf@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIToastCenterExperienceManager@Experience@Shell@Internal@Windows@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIToastCenterExperienceManager@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801441E4 (--$As@UIToastCenterExperienceManager@Experience@Shell@Internal@Windows@@@-$ComPtr@UIInspectable@.c)
 *     ?Close@CActionCenterExperienceManager@@UEAAJXZ @ 0x1801442E0 (-Close@CActionCenterExperienceManager@@UEAAJXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_STUC@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18018F8E4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_STUC@@@details@wil@@QEAAX_NW4ReportingKin.c)
 *     ?OnDpiOrHighContrastChanged@CActionCenterExperienceManager@@AEAAJXZ @ 0x18019C9EC (-OnDpiOrHighContrastChanged@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?IsShellLauncherEnabledForCurrentUser@@YA_NXZ @ 0x1801B225C (-IsShellLauncherEnabledForCurrentUser@@YA_NXZ.c)
 *     ??$Register@UIInputHostLayout@@P81@EAAJPEAUIInputHostLayoutChanges@@PEAK@ZP81@EAAJK@ZPEAVCActionCenterExperienceManager@@@SmartCookie@@QEAAJPEAUIInputHostLayout@@P81@EAAJPEAUIInputHostLayoutChanges@@PEAK@ZP81@EAAJK@ZPEAVCActionCenterExperienceManager@@@Z @ 0x1801B4A84 (--$Register@UIInputHostLayout@@P81@EAAJPEAUIInputHostLayoutChanges@@PEAK@ZP81@EAAJK@ZPEAVCAction.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?CreateDisplayMonitorInfoCollectionAsync@CActionCenterExperienceManager@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x1801DC1AC (-CreateDisplayMonitorInfoCollectionAsync@CActionCenterExperienceManager@@AEAA-AUfire_and_forget@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CActionCenterExperienceManager::RuntimeClassInitialize(
        CActionCenterExperienceManager *this,
        struct IServiceProvider *a2)
{
  CSingleViewShellExperience *v4; // r12
  HSTRING v5; // rbx
  int v6; // eax
  unsigned int v7; // ebx
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v9; // eax
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, HSTRING, __int64 *); // rdi
  int v12; // eax
  int v13; // eax
  HRESULT (__stdcall *v14)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v15; // eax
  int v16; // eax
  HRESULT (__stdcall *v17)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v18; // eax
  int v19; // r8d
  int v20; // r9d
  int v21; // eax
  HRESULT (__stdcall *v22)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v23; // eax
  int v24; // eax
  HRESULT (__stdcall *v25)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  _QWORD *v26; // rdi
  int v27; // eax
  int v28; // eax
  int v29; // eax
  HRESULT (__stdcall *v30)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  int v31; // eax
  int ready; // eax
  struct Windows::Internal::Shell::Experience::IExperienceManagerPriorityManipulator **v33; // r8
  int HostExperiencePriorityManipulator; // eax
  int v35; // eax
  unsigned int v36; // r8d
  HSTRING_HEADER *v37; // rax
  int v38; // eax
  const char *v40; // rdx
  struct wil::details::IFunctorHost *v41; // r8
  int v42; // [rsp+20h] [rbp-E8h]
  int v43; // [rsp+20h] [rbp-E8h]
  __int64 v44; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v45; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v46[8]; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v47[2]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v48[2]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v49[8]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v50; // [rsp+70h] [rbp-98h]
  int v51; // [rsp+7Ch] [rbp-8Ch]
  HSTRING_HEADER v52; // [rsp+90h] [rbp-78h] BYREF
  HSTRING v53; // [rsp+A8h] [rbp-60h]
  HSTRING_HEADER hstringHeader; // [rsp+B0h] [rbp-58h] BYREF
  HSTRING v55; // [rsp+C8h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+0h]

  v47[1] = this;
  v4 = (CActionCenterExperienceManager *)((char *)this + 128);
  v53 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v52,
    L"Windows.Internal.ShellExperience.ActionCenter",
    0x2Eu,
    0x2Du);
  v5 = v53;
  v55 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Microsoft.Windows.ShellExperienceHost_cw5n1h2txyewy!App",
    0x38u,
    0x37u);
  v6 = CSingleViewShellExperience::RuntimeClassInitialize(
         v4,
         (struct IWeakReferenceSource *)(((unsigned __int64)this + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
         a2,
         v55,
         v5);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x131,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v6,
      v42);
    return v7;
  }
  hstringHeader.Reserved.Reserved1 = this;
  hstringHeader.Reserved.Reserved2[8] = 1;
  v44 = 0LL;
  QueryService = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v44);
  v9 = ((__int64 (__fastcall *)(struct IServiceProvider *, void *, GUID *, __int64 *))QueryService)(
         a2,
         &unk_180813760,
         &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5,
         &v44);
  v7 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x139,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v9,
      v42);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v44);
    CActionCenterExperienceManager::Close((CActionCenterExperienceManager *)((char *)this + 80));
    return v7;
  }
  v45 = 0LL;
  v10 = v44;
  v11 = *(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v44 + 48LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v45);
  v53 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v52,
    L"Windows.Internal.ShellExperience.ToastCenter",
    0x2Du,
    0x2Cu);
  v12 = v11(v10, v53, &v45);
  v7 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13D,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v12,
      v42);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v45);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v44);
    CActionCenterExperienceManager::Close((CActionCenterExperienceManager *)((char *)this + 80));
    return v7;
  }
  v13 = Microsoft::WRL::ComPtr<IInspectable>::As<Windows::Internal::Shell::Experience::IToastCenterExperienceManager>(
          &v45,
          (char *)this + 744);
  v7 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13F,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v13,
      v42);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v45);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v44);
    CActionCenterExperienceManager::Close((CActionCenterExperienceManager *)((char *)this + 80));
    return v7;
  }
  v14 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 59);
  v15 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v14)(
          a2,
          &IID_IImmersiveSessionIdleDetector,
          &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29,
          (char *)this + 472);
  v7 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x141,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v15,
      v42);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v45);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v44);
    CActionCenterExperienceManager::Close((CActionCenterExperienceManager *)((char *)this + 80));
    return v7;
  }
  v16 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 59) + 32LL))(
          *((_QWORD *)this + 59),
          ((unsigned __int64)this + 56) & -(__int64)(this != 0LL),
          (char *)this + 480);
  v7 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x142,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v16,
      v42);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v45);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v44);
    CActionCenterExperienceManager::Close((CActionCenterExperienceManager *)((char *)this + 80));
    return v7;
  }
  v17 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 63);
  v18 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v17)(
          a2,
          &SID_InputHostLayout,
          &GUID_3a67c20b_df2d_4437_a761_0c41b441ac25,
          (char *)this + 504);
  v7 = v18;
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x144,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v18,
      v42);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v45);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v44);
    CActionCenterExperienceManager::Close((CActionCenterExperienceManager *)((char *)this + 80));
    return v7;
  }
  v21 = SmartCookie::Register<IInputHostLayout,long (IInputHostLayout::*)(IInputHostLayoutChanges *,unsigned long *),long (IInputHostLayout::*)(unsigned long),CActionCenterExperienceManager *>(
          (int)this + 512,
          *((_QWORD *)this + 63),
          v19,
          v20,
          (__int64)this);
  v7 = v21;
  if ( v21 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x146,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v21,
      v43);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v45);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v44);
    CActionCenterExperienceManager::Close((CActionCenterExperienceManager *)((char *)this + 80));
    return v7;
  }
  v22 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 83);
  v23 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v22)(
          a2,
          &SID_IImmersiveMonitorService,
          &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
          (char *)this + 664);
  v7 = v23;
  if ( v23 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x148,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v23,
      v43);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v45);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v44);
    CActionCenterExperienceManager::Close((CActionCenterExperienceManager *)((char *)this + 80));
    return v7;
  }
  v24 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 83) + 24LL))(
          *((_QWORD *)this + 83),
          ((unsigned __int64)this + 72) & -(__int64)(this != 0LL),
          (char *)this + 652);
  v7 = v24;
  if ( v24 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x149,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v24,
      v43);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v45);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v44);
    CActionCenterExperienceManager::Close((CActionCenterExperienceManager *)((char *)this + 80));
    return v7;
  }
  v25 = a2->lpVtbl->QueryService;
  v26 = (_QWORD *)((char *)this + 656);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 82);
  v27 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v25)(
          a2,
          &IID_IImmersiveWindowMessageService,
          &GUID_fc62ce95_8396_401a_b74f_88df0d75e112,
          (char *)this + 656);
  v7 = v27;
  if ( v27 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14D,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v27,
      v43);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v45);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v44);
    CActionCenterExperienceManager::Close((CActionCenterExperienceManager *)((char *)this + 80));
    return v7;
  }
  v28 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, char *))(*(_QWORD *)*v26 + 24LL))(
          *v26,
          0LL,
          ((unsigned __int64)this + 64) & -(__int64)(this != 0LL),
          (char *)this + 644);
  v7 = v28;
  if ( v28 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14F,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v28,
      v43);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v45);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v44);
    CActionCenterExperienceManager::Close((CActionCenterExperienceManager *)((char *)this + 80));
    return v7;
  }
  v29 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(*(_QWORD *)*v26 + 24LL))(
          *v26,
          26LL,
          ((unsigned __int64)this + 64) & -(__int64)(this != 0LL),
          (char *)this + 648);
  v7 = v29;
  if ( v29 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x150,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v29,
      v43);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v45);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v44);
    CActionCenterExperienceManager::Close((CActionCenterExperienceManager *)((char *)this + 80));
    return v7;
  }
  v30 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 84);
  v31 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v30)(
          a2,
          &IID_IRealmActivationHistory,
          &GUID_67136e8b_6914_43f0_8f25_05619927d22e,
          (char *)this + 672);
  v7 = v31;
  if ( v31 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x152,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v31,
      v43);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v45);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v44);
    CActionCenterExperienceManager::Close((CActionCenterExperienceManager *)((char *)this + 80));
    return v7;
  }
  ready = CActionCenterExperienceManager::SubscribeToShellReadyWnf(this);
  v7 = ready;
  if ( ready < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x154,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)ready,
      v43);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v45);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v44);
    CActionCenterExperienceManager::Close((CActionCenterExperienceManager *)((char *)this + 80));
    return v7;
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 15);
  HostExperiencePriorityManipulator = ExperienceManagerUtils::GetHostExperiencePriorityManipulator(
                                        (ExperienceManagerUtils *)a2,
                                        (struct IServiceProvider *)this + 15,
                                        v33);
  v7 = HostExperiencePriorityManipulator;
  if ( HostExperiencePriorityManipulator < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x155,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)HostExperiencePriorityManipulator,
      v43);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v45);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v44);
    CActionCenterExperienceManager::Close((CActionCenterExperienceManager *)((char *)this + 80));
    return v7;
  }
  v35 = CActionCenterExperienceManager::OnDpiOrHighContrastChanged(this);
  v7 = v35;
  if ( v35 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x156,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v35,
      v43);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v45);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v44);
    CActionCenterExperienceManager::Close((CActionCenterExperienceManager *)((char *)this + 80));
    return v7;
  }
  v37 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v52, (const WCHAR **)&off_1807A2B38, v36);
  v38 = CSingleViewShellExperience::AddTestAumid(v4, (HSTRING)v37[1].Reserved.Reserved1);
  v7 = v38;
  if ( v38 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x158,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v38,
      v43);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v45);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v44);
    CActionCenterExperienceManager::Close((CActionCenterExperienceManager *)((char *)this + 80));
    return v7;
  }
  *((_BYTE *)this + 752) = IsShellLauncherEnabledForCurrentUser();
  v47[0] = this;
  v52.Reserved.Reserved1 = retaddr;
  v40 = "pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp";
  *(_QWORD *)&v52.Reserved.Reserved2[8] = "pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp";
  *(_QWORD *)&v52.Reserved.Reserved2[16] = 0LL;
  LOWORD(v53) = 350;
  LOBYTE(v40) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_STUC>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_STUC>::GetImpl'::`2'::impl,
    v40);
  v48[0] = &off_1807CD6E8;
  v48[1] = v47;
  wil::details::FeatureFunctorHost::FeatureFunctorHost(
    (wil::details::FeatureFunctorHost *)v49,
    0x1C537D7u,
    (const struct DiagnosticsInfo *)&v52);
  wil::details::RunFunctor((wil::details *)v48, (struct wil::details::IFunctor *)v49, v41);
  if ( v50 )
    *(_DWORD *)(v50 + 16) = v51;
  CActionCenterExperienceManager::CreateDisplayMonitorInfoCollectionAsync(this, v46);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v45);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v44);
  return 0LL;
}
