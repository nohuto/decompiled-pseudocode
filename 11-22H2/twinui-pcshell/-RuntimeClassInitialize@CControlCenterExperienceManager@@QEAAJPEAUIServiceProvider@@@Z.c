/*
 * XREFs of ?RuntimeClassInitialize@CControlCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801057B0
 * Callers:
 *     ??$MakeAndInitialize@VCControlCenterExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x180134400 (--$MakeAndInitialize@VCControlCenterExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x18009720C (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18009ACBC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIServiceProvider@@PEAPEAUIExperienceManagerPriorityManipulator@Experience@Shell@Internal@Windows@@@Z @ 0x1800E48DC (-GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIServiceProvider@@PEAPEAUIE.c)
 *     ??4?$ComPtr@UIServiceProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAUIServiceProvider@@@Z @ 0x1800EA0E8 (--4-$ComPtr@UIServiceProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAUIServiceProvider@@@Z.c)
 *     ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x180106290 (--0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x180106324 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x1801070F0 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?SubscribeToShellReadyWnf@CControlCenterExperienceManager@@AEAAJXZ @ 0x18012837C (-SubscribeToShellReadyWnf@CControlCenterExperienceManager@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Close@CControlCenterExperienceManager@@UEAAJXZ @ 0x180143C40 (-Close@CControlCenterExperienceManager@@UEAAJXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_STUC@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18018F8E4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_STUC@@@details@wil@@QEAAX_NW4ReportingKin.c)
 *     ??$Register@UIInputHostLayout@@P81@EAAJPEAUIInputHostLayoutChanges@@PEAK@ZP81@EAAJK@ZPEAVCControlCenterExperienceManager@@@SmartCookie@@QEAAJPEAUIInputHostLayout@@P81@EAAJPEAUIInputHostLayoutChanges@@PEAK@ZP81@EAAJK@ZPEAVCControlCenterExperienceManager@@@Z @ 0x1801B49B0 (--$Register@UIInputHostLayout@@P81@EAAJPEAUIInputHostLayoutChanges@@PEAK@ZP81@EAAJK@ZPEAVCContro.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?CreateDisplayMonitorInfoCollectionAsync@CControlCenterExperienceManager@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x1801DE640 (-CreateDisplayMonitorInfoCollectionAsync@CControlCenterExperienceManager@@AEAA-AUfire_and_forget.c)
 *     ?PrelaunchExperienceAsync@CControlCenterExperienceManager@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x1801DF85C (-PrelaunchExperienceAsync@CControlCenterExperienceManager@@AEAA-AUfire_and_forget@winrt@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CControlCenterExperienceManager::RuntimeClassInitialize(
        CControlCenterExperienceManager *this,
        struct IServiceProvider *a2)
{
  HSTRING v4; // rbx
  int v5; // eax
  unsigned int v6; // ebx
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v9; // eax
  int v10; // eax
  HRESULT (__stdcall *v11)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v12; // eax
  int v13; // r8d
  int v14; // r9d
  int v15; // eax
  HRESULT (__stdcall *v16)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v17; // eax
  int v18; // eax
  HRESULT (__stdcall *v19)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  _QWORD *v20; // rdi
  int v21; // eax
  int v22; // eax
  int v23; // eax
  HRESULT (__stdcall *v24)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  int v25; // eax
  int ready; // eax
  struct Windows::Internal::Shell::Experience::IExperienceManagerPriorityManipulator **v27; // r8
  int HostExperiencePriorityManipulator; // eax
  unsigned int v29; // r8d
  HSTRING Reserved1; // rdx
  int v31; // eax
  const char *v32; // rdx
  struct wil::details::IFunctorHost *v33; // r8
  const char *v34; // r9
  int v35; // [rsp+20h] [rbp-D8h]
  int v36; // [rsp+20h] [rbp-D8h]
  _BYTE v37[7]; // [rsp+31h] [rbp-C7h] BYREF
  CControlCenterExperienceManager *v38; // [rsp+38h] [rbp-C0h] BYREF
  CControlCenterExperienceManager *v39; // [rsp+40h] [rbp-B8h]
  _QWORD v40[2]; // [rsp+48h] [rbp-B0h] BYREF
  _BYTE v41[8]; // [rsp+58h] [rbp-A0h] BYREF
  __int64 v42; // [rsp+60h] [rbp-98h]
  int v43; // [rsp+6Ch] [rbp-8Ch]
  HSTRING_HEADER v44; // [rsp+80h] [rbp-78h] BYREF
  HSTRING v45; // [rsp+98h] [rbp-60h]
  HSTRING_HEADER hstringHeader; // [rsp+A0h] [rbp-58h] BYREF
  HSTRING v47; // [rsp+B8h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]

  v39 = this;
  v45 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v44,
    L"Windows.Internal.ShellExperience.ControlCenter",
    0x2Fu,
    0x2Eu);
  v4 = v45;
  v47 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Microsoft.Windows.ShellExperienceHost_cw5n1h2txyewy!App",
    0x38u,
    0x37u);
  v5 = CSingleViewShellExperience::RuntimeClassInitialize(
         (CControlCenterExperienceManager *)((char *)this + 120),
         (struct IWeakReferenceSource *)(((unsigned __int64)this + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
         a2,
         v47,
         v4);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x12E,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v5,
      v35);
    return v6;
  }
  hstringHeader.Reserved.Reserved1 = this;
  hstringHeader.Reserved.Reserved2[8] = 1;
  QueryService = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 54);
  v9 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))QueryService)(
         a2,
         &IID_IImmersiveSessionIdleDetector,
         &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29,
         (char *)this + 432);
  v6 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x135,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v9,
      v35);
    CControlCenterExperienceManager::Close((CControlCenterExperienceManager *)((char *)this + 64));
    return v6;
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 54) + 32LL))(
          *((_QWORD *)this + 54),
          -(__int64)(this != 0LL) & ((unsigned __int64)this + 40),
          (char *)this + 440);
  v6 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x136,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v10,
      v35);
    CControlCenterExperienceManager::Close((CControlCenterExperienceManager *)((char *)this + 64));
    return v6;
  }
  v11 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 63);
  v12 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v11)(
          a2,
          &SID_InputHostLayout,
          &GUID_3a67c20b_df2d_4437_a761_0c41b441ac25,
          (char *)this + 504);
  v6 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x138,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v12,
      v35);
    CControlCenterExperienceManager::Close((CControlCenterExperienceManager *)((char *)this + 64));
    return v6;
  }
  v15 = SmartCookie::Register<IInputHostLayout,long (IInputHostLayout::*)(IInputHostLayoutChanges *,unsigned long *),long (IInputHostLayout::*)(unsigned long),CControlCenterExperienceManager *>(
          (int)this + 512,
          *((_QWORD *)this + 63),
          v13,
          v14,
          (__int64)this);
  v6 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13A,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v15,
      v36);
    CControlCenterExperienceManager::Close((CControlCenterExperienceManager *)((char *)this + 64));
    return v6;
  }
  v16 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 59);
  v17 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v16)(
          a2,
          &SID_IImmersiveMonitorService,
          &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
          (char *)this + 472);
  v6 = v17;
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13C,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v17,
      v36);
    CControlCenterExperienceManager::Close((CControlCenterExperienceManager *)((char *)this + 64));
    return v6;
  }
  v18 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 59) + 24LL))(
          *((_QWORD *)this + 59),
          -(__int64)(this != 0LL) & ((unsigned __int64)this + 56),
          (char *)this + 456);
  v6 = v18;
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13D,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v18,
      v36);
    CControlCenterExperienceManager::Close((CControlCenterExperienceManager *)((char *)this + 64));
    return v6;
  }
  v19 = a2->lpVtbl->QueryService;
  v20 = (_QWORD *)((char *)this + 464);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 58);
  v21 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v19)(
          a2,
          &IID_IImmersiveWindowMessageService,
          &GUID_fc62ce95_8396_401a_b74f_88df0d75e112,
          (char *)this + 464);
  v6 = v21;
  if ( v21 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x141,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v21,
      v36);
    CControlCenterExperienceManager::Close((CControlCenterExperienceManager *)((char *)this + 64));
    return v6;
  }
  v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, char *))(*(_QWORD *)*v20 + 24LL))(
          *v20,
          0LL,
          ((unsigned __int64)this + 48) & -(__int64)(this != 0LL),
          (char *)this + 448);
  v6 = v22;
  if ( v22 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x143,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v22,
      v36);
    CControlCenterExperienceManager::Close((CControlCenterExperienceManager *)((char *)this + 64));
    return v6;
  }
  v23 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(*(_QWORD *)*v20 + 24LL))(
          *v20,
          26LL,
          ((unsigned __int64)this + 48) & -(__int64)(this != 0LL),
          (char *)this + 452);
  v6 = v23;
  if ( v23 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x144,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v23,
      v36);
    CControlCenterExperienceManager::Close((CControlCenterExperienceManager *)((char *)this + 64));
    return v6;
  }
  v24 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 60);
  v25 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v24)(
          a2,
          &IID_IRealmActivationHistory,
          &GUID_67136e8b_6914_43f0_8f25_05619927d22e,
          (char *)this + 480);
  v6 = v25;
  if ( v25 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x146,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v25,
      v36);
    CControlCenterExperienceManager::Close((CControlCenterExperienceManager *)((char *)this + 64));
    return v6;
  }
  ready = CControlCenterExperienceManager::SubscribeToShellReadyWnf(this);
  v6 = ready;
  if ( ready < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x148,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
      (const char *)(unsigned int)ready,
      v36);
    CControlCenterExperienceManager::Close((CControlCenterExperienceManager *)((char *)this + 64));
    return v6;
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 14);
  HostExperiencePriorityManipulator = ExperienceManagerUtils::GetHostExperiencePriorityManipulator(
                                        (ExperienceManagerUtils *)a2,
                                        (struct IServiceProvider *)this + 14,
                                        v27);
  v6 = HostExperiencePriorityManipulator;
  if ( HostExperiencePriorityManipulator < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x149,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
      (const char *)(unsigned int)HostExperiencePriorityManipulator,
      v36);
    CControlCenterExperienceManager::Close((CControlCenterExperienceManager *)((char *)this + 64));
    return v6;
  }
  Reserved1 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                         &v44,
                         (const WCHAR **)off_1807CBFD0,
                         v29)[1].Reserved.Reserved1;
  v31 = CSingleViewShellExperience::AddTestAumid((CControlCenterExperienceManager *)((char *)this + 120), Reserved1);
  v6 = v31;
  if ( v31 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14B,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v31,
      v36);
    CControlCenterExperienceManager::Close((CControlCenterExperienceManager *)((char *)this + 64));
    return v6;
  }
  Microsoft::WRL::ComPtr<IServiceProvider>::operator=((__int64 *)this + 61, (__int64)a2);
  v38 = this;
  v44.Reserved.Reserved1 = retaddr;
  v32 = "pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp";
  *(_QWORD *)&v44.Reserved.Reserved2[8] = "pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp";
  *(_QWORD *)&v44.Reserved.Reserved2[16] = 0LL;
  LOWORD(v45) = 336;
  LOBYTE(v32) = 1;
  try
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_STUC>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_STUC>::GetImpl'::`2'::impl,
      v32);
    v40[0] = off_1807D3478;
    v40[1] = &v38;
    wil::details::FeatureFunctorHost::FeatureFunctorHost(
      (wil::details::FeatureFunctorHost *)v41,
      0x1C537D7u,
      (const struct DiagnosticsInfo *)&v44);
    wil::details::RunFunctor((wil::details *)v40, (struct wil::details::IFunctor *)v41, v33);
    if ( v42 )
      *(_DWORD *)(v42 + 16) = v43;
  }
  catch ( ... )
  {
    LODWORD(v38) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x168,
                     (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
                     v34);
    CControlCenterExperienceManager::Close((CControlCenterExperienceManager *)((char *)v39 + 64));
    return (unsigned int)v38;
  }
  CControlCenterExperienceManager::CreateDisplayMonitorInfoCollectionAsync();
  CControlCenterExperienceManager::PrelaunchExperienceAsync(this, v37);
  return 0LL;
}
