/*
 * XREFs of ?RuntimeClassInitialize@CJumpViewExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x180118538
 * Callers:
 *     ??$MakeAndInitialize@VCJumpViewExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x180118460 (--$MakeAndInitialize@VCJumpViewExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Detai.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180095DF0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x180096F68 (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 *     ??4?$ComPtr@UIServiceProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAUIServiceProvider@@@Z @ 0x1800A281C (--4-$ComPtr@UIServiceProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAUIServiceProvider@@@Z.c)
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x1800FF230 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@PEAPEAUIExperienceManagerPriorityManipulator@3456@@Z @ 0x180118AA8 (-GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIShellExperienceManagerFact.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_JumpListV4@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180118D90 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_JumpListV4@@@details@wil@@QEAAX_NW4Report.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CJumpViewExperienceManager::RuntimeClassInitialize(
        CJumpViewExperienceManager *this,
        struct IServiceProvider *a2)
{
  HSTRING *v4; // rdi
  HSTRING v5; // rbx
  int v6; // ebx
  unsigned int v7; // r8d
  __int64 v8; // rax
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v10; // eax
  HRESULT (__stdcall *v11)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  __int64 (__fastcall ***v12)(_QWORD, GUID *, char *); // rdi
  __int64 (__fastcall *v13)(_QWORD, GUID *, char *); // rbx
  HRESULT (__stdcall *v14)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  HRESULT (__stdcall *v15)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v16)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int HostExperiencePriorityManipulator; // eax
  struct Windows::Internal::Shell::Experience::IExperienceManagerPriorityManipulator **v18; // r8
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rdx
  ExperienceManagerUtils *v23; // [rsp+30h] [rbp-29h] BYREF
  __int64 v24; // [rsp+38h] [rbp-21h] BYREF
  HSTRING_HEADER v25; // [rsp+40h] [rbp-19h] BYREF
  HSTRING v26; // [rsp+58h] [rbp-1h]
  HSTRING_HEADER hstringHeader; // [rsp+60h] [rbp+7h] BYREF
  HSTRING v28; // [rsp+78h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v4 = (HSTRING *)((char *)this + 152);
  v28 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.ShellExperience.JumpView",
    0x2Au,
    0x29u);
  v5 = v28;
  v26 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v25,
    L"Microsoft.Windows.ShellExperienceHost_cw5n1h2txyewy!App",
    0x38u,
    0x37u);
  v6 = CSingleViewShellExperience::RuntimeClassInitialize(
         v4,
         (struct IWeakReferenceSource *)(((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
         a2,
         v26,
         v5);
  if ( v6 < 0 )
  {
    v20 = 201LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&v25, (const WCHAR **)off_180639188, v7);
  v6 = CSingleViewShellExperience::AddTestAumid((CSingleViewShellExperience *)v4, *(HSTRING *)(v8 + 24));
  if ( v6 < 0 )
  {
    v20 = 202LL;
    goto LABEL_19;
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_JumpListV4>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_JumpListV4>::GetImpl'::`2'::impl,
    0LL);
  *((_DWORD *)this + 53) = *((_DWORD *)this + 126);
  v24 = 0LL;
  QueryService = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
  v10 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))QueryService)(
          a2,
          &IID_IActiveZBandNotificationForMonitorService,
          &GUID_0f019ffe_0388_4dcf_a2e2_f059a60a5704,
          &v24);
  v6 = v10;
  if ( v10 < 0 )
  {
    v21 = 216LL;
LABEL_28:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_15;
  }
  v10 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, char *))(*(_QWORD *)v24 + 24LL))(
          v24,
          ((unsigned __int64)this + 32) & -(__int64)(this != 0LL),
          (char *)this + 416);
  v6 = v10;
  if ( v10 < 0 )
  {
    v21 = 217LL;
    goto LABEL_28;
  }
  v11 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 48);
  v10 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v11)(
          a2,
          &SID_IImmersiveMonitorService,
          &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
          (char *)this + 384);
  v6 = v10;
  if ( v10 < 0 )
  {
    v21 = 219LL;
    goto LABEL_28;
  }
  v12 = (__int64 (__fastcall ***)(_QWORD, GUID *, char *))*((_QWORD *)this + 48);
  v13 = **v12;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 49);
  v10 = v13(v12, &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83, (char *)this + 392);
  v6 = v10;
  if ( v10 < 0 )
  {
    v21 = 220LL;
    goto LABEL_28;
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 49) + 24LL))(
          *((_QWORD *)this + 49),
          ((unsigned __int64)this + 16) & -(__int64)(this != 0LL),
          (char *)this + 408);
  v6 = v10;
  if ( v10 < 0 )
  {
    v21 = 221LL;
    goto LABEL_28;
  }
  v14 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 50);
  v10 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v14)(
          a2,
          &IID_IImmersiveWindowMessageService,
          &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
          (char *)this + 400);
  v6 = v10;
  if ( v10 < 0 )
  {
    v21 = 223LL;
    goto LABEL_28;
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, char *))(**((_QWORD **)this + 50) + 24LL))(
          *((_QWORD *)this + 50),
          0LL,
          ((unsigned __int64)this + 40) & -(__int64)(this != 0LL),
          (char *)this + 412);
  v6 = v10;
  if ( v10 < 0 )
  {
    v21 = 224LL;
    goto LABEL_28;
  }
  v15 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 47);
  v10 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v15)(
          a2,
          &IID_IRealmActivationHistory,
          &GUID_67136e8b_6914_43f0_8f25_05619927d22e,
          (char *)this + 376);
  v6 = v10;
  if ( v10 < 0 )
  {
    v21 = 226LL;
    goto LABEL_28;
  }
  v23 = 0LL;
  v16 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v23);
  HostExperiencePriorityManipulator = ((__int64 (__fastcall *)(struct IServiceProvider *, void *, GUID *, ExperienceManagerUtils **))v16)(
                                        a2,
                                        &unk_18068B880,
                                        &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5,
                                        &v23);
  v6 = HostExperiencePriorityManipulator;
  if ( HostExperiencePriorityManipulator < 0 )
  {
    v22 = 229LL;
LABEL_31:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v22,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
      (const char *)(unsigned int)HostExperiencePriorityManipulator);
    goto LABEL_14;
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 18);
  HostExperiencePriorityManipulator = ExperienceManagerUtils::GetHostExperiencePriorityManipulator(
                                        v23,
                                        (CJumpViewExperienceManager *)((char *)this + 144),
                                        v18);
  v6 = HostExperiencePriorityManipulator;
  if ( HostExperiencePriorityManipulator < 0 )
  {
    v22 = 231LL;
    goto LABEL_31;
  }
  Microsoft::WRL::ComPtr<IServiceProvider>::operator=((__int64 *)this + 46, (__int64)a2);
  v6 = 0;
LABEL_14:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v23);
LABEL_15:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
  return (unsigned int)v6;
}
