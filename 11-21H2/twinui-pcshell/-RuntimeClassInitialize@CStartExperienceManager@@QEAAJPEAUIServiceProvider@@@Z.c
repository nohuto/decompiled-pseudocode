/*
 * XREFs of ?RuntimeClassInitialize@CStartExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x18011AC04
 * Callers:
 *     ?GetExperienceManager@StartExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x180171CC0 (-GetExperienceManager@StartExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspecta.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_33710664@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180073164 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_33710664@@@details@wil@@QEAAX_NW4Reportin.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180095DF0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x180096F68 (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 *     ??4?$ComPtr@UIServiceProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAUIServiceProvider@@@Z @ 0x1800A281C (--4-$ComPtr@UIServiceProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAUIServiceProvider@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x1800FF230 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$Make@VPriorityBoostHelper@@PEAVCSingleViewShellExperience@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VPriorityBoostHelper@@@12@$$QEAPEAVCSingleViewShellExperience@@@Z @ 0x18011819C (--$Make@VPriorityBoostHelper@@PEAVCSingleViewShellExperience@@@Details@WRL@Microsoft@@YA-AV-$Com.c)
 *     ?RegisterForStartReady@PriorityBoostHelper@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801182F4 (-RegisterForStartReady@PriorityBoostHelper@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ??$As@UIExperienceManagerPriorityManipulator@Experience@Shell@Internal@Windows@@@?$ComPtr@VPriorityBoostHelper@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIExperienceManagerPriorityManipulator@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801189FC (--$As@UIExperienceManagerPriorityManipulator@Experience@Shell@Internal@Windows@@@-$ComPtr@VPrior.c)
 *     ??$As@UIHostExperienceManager@Experience@Shell@Internal@Windows@@@?$ComPtr@VPriorityBoostHelper@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIHostExperienceManager@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180118BF0 (--$As@UIHostExperienceManager@Experience@Shell@Internal@Windows@@@-$ComPtr@VPriorityBoostHelper@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_STest03@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801191C4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_STest03@@@details@wil@@QEAAX_NW4Reporting.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIHostExperienceManager@Experience@Shell@Internal@Windows@@UIExperienceManagerPriorityManipulator@5678@UIImmersiveWindowMessageNotification@@UIClosable@Foundation@8@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180166070 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIHostExperienceMa.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CStartExperienceManager::RuntimeClassInitialize(
        CStartExperienceManager *this,
        struct IServiceProvider *a2)
{
  HSTRING *v4; // r12
  HSTRING v5; // rbx
  unsigned int v6; // r8d
  __int64 v7; // rax
  int v8; // ebx
  __int64 v9; // r9
  unsigned int v10; // r8d
  __int64 v11; // rax
  char *v12; // r13
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  _QWORD *v14; // rdi
  PriorityBoostHelper **v15; // rax
  PriorityBoostHelper **v16; // rbx
  struct CSingleViewShellExperience *v17; // rdx
  PriorityBoostHelper *v18; // rcx
  int started; // edi
  HRESULT (__stdcall *v20)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdi
  __int64 (__fastcall *v24)(__int64, SID *, GUID *, char *); // rbx
  int v25; // eax
  __int64 v27; // rdx
  __int64 v28; // rdx
  PriorityBoostHelper *v29; // [rsp+30h] [rbp-39h] BYREF
  HSTRING *v30; // [rsp+38h] [rbp-31h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-29h] BYREF
  HSTRING v32; // [rsp+58h] [rbp-11h]
  _BYTE v33[32]; // [rsp+60h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v4 = (HSTRING *)((char *)this + 320);
  v32 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.ShellExperience.StartMenu",
    0x2Bu,
    0x2Au);
  v5 = v32;
  v7 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v33, (const WCHAR **)&off_180639198, v6);
  v8 = CSingleViewShellExperience::RuntimeClassInitialize(
         v4,
         (struct IWeakReferenceSource *)(((unsigned __int64)this + 32) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
         a2,
         *(HSTRING *)(v7 + 24),
         v5);
  if ( v8 < 0 )
  {
    v27 = 244LL;
LABEL_24:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v27,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)v8);
    return (unsigned int)v8;
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_STest03>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_STest03>::GetImpl'::`2'::impl,
    1u,
    3u,
    v9);
  v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v33, (const WCHAR **)off_180639190, v10);
  v8 = CSingleViewShellExperience::AddTestAumid((CSingleViewShellExperience *)v4, *(HSTRING *)(v11 + 24));
  if ( v8 < 0 )
  {
    v27 = 250LL;
    goto LABEL_24;
  }
  *((_DWORD *)this + 95) = 6;
  v12 = (char *)this + 528;
  Microsoft::WRL::ComPtr<IServiceProvider>::operator=((__int64 *)this + 66, (__int64)a2);
  QueryService = a2->lpVtbl->QueryService;
  v14 = (_QWORD *)((char *)this + 552);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 69);
  v8 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))QueryService)(
         a2,
         &IID_IImmersiveWindowMessageService,
         &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
         (char *)this + 552);
  if ( v8 < 0 )
  {
    v27 = 262LL;
    goto LABEL_24;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(*(_QWORD *)*v14 + 24LL))(
         *v14,
         26LL,
         ((unsigned __int64)this + 48) & -(__int64)(this != 0LL),
         (char *)this + 536);
  if ( v8 < 0 )
  {
    v27 = 263LL;
    goto LABEL_24;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *, char *))(*(_QWORD *)*v14 + 24LL))(
         *v14,
         1025LL,
         (char *)this + 48,
         (char *)this + 540);
  if ( v8 < 0 )
  {
    v27 = 264LL;
    goto LABEL_24;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *, char *))(*(_QWORD *)*v14 + 24LL))(
         *v14,
         798LL,
         (char *)this + 48,
         (char *)this + 544);
  if ( v8 < 0 )
  {
    v27 = 265LL;
    goto LABEL_24;
  }
  v30 = v4;
  v15 = Microsoft::WRL::Details::Make<PriorityBoostHelper,CSingleViewShellExperience *>(
          &v29,
          (struct CSingleViewShellExperience **)&v30);
  v16 = (PriorityBoostHelper **)((char *)this + 312);
  v17 = 0LL;
  if ( &v30 != (HSTRING **)v15 )
  {
    v17 = *v15;
    *v15 = 0LL;
  }
  v18 = *v16;
  *v16 = v17;
  if ( v18 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IHostExperienceManager,Windows::Internal::Shell::Experience::IExperienceManagerPriorityManipulator,IImmersiveWindowMessageNotification,Windows::Foundation::IClosable>::Release();
  if ( v29 )
  {
    v29 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IHostExperienceManager,Windows::Internal::Shell::Experience::IExperienceManagerPriorityManipulator,IImmersiveWindowMessageNotification,Windows::Foundation::IClosable>::Release();
  }
  if ( !*v16 )
  {
    v8 = -2147024882;
    v27 = 268LL;
    goto LABEL_24;
  }
  started = PriorityBoostHelper::RegisterForStartReady(*v16, a2);
  if ( started < 0 )
  {
    v28 = 269LL;
LABEL_33:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v28,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)started);
    return (unsigned int)started;
  }
  started = Microsoft::WRL::ComPtr<PriorityBoostHelper>::As<Windows::Internal::Shell::Experience::IHostExperienceManager>(
              (__int64 *)this + 39,
              (__int64 *)this + 37);
  if ( started < 0 )
  {
    v28 = 270LL;
    goto LABEL_33;
  }
  v8 = Microsoft::WRL::ComPtr<PriorityBoostHelper>::As<Windows::Internal::Shell::Experience::IExperienceManagerPriorityManipulator>(
         (__int64 *)this + 39,
         (__int64 *)this + 38);
  if ( v8 < 0 )
  {
    v27 = 271LL;
    goto LABEL_24;
  }
  v20 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 70);
  v8 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v20)(
         a2,
         &SID_TransitionCoordinator,
         &GUID_b1bed1ae_63da_4687_8063_c89ec276d28a,
         (char *)this + 560);
  if ( v8 < 0 )
  {
    v27 = 273LL;
    goto LABEL_24;
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_33710664>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_33710664>::GetImpl'::`2'::impl,
    1u,
    v21,
    v22);
  v23 = *(_QWORD *)v12;
  v24 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, char *))(**(_QWORD **)v12 + 24LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 71);
  v8 = v24(v23, &SID_InputHostLayout, &GUID_3a67c20b_df2d_4437_a761_0c41b441ac25, (char *)this + 568);
  if ( v8 < 0 )
  {
    v27 = 278LL;
    goto LABEL_24;
  }
  v25 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 71) + 24LL))(
          *((_QWORD *)this + 71),
          ((unsigned __int64)this + 72) & -(__int64)(this != 0LL),
          (char *)this + 548);
  if ( v25 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x117,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)v25);
  return 0LL;
}
