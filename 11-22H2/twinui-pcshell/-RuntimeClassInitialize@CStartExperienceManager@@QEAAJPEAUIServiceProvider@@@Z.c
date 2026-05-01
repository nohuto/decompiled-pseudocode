/*
 * XREFs of ?RuntimeClassInitialize@CStartExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801068D4
 * Callers:
 *     ?GetExperienceManager@StartExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x1801344C0 (-GetExperienceManager@StartExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspecta.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x18009720C (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18009ACBC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$As@UIExperienceManagerPriorityManipulator@Experience@Shell@Internal@Windows@@@?$ComPtr@VPriorityBoostHelper@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIExperienceManagerPriorityManipulator@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800E4830 (--$As@UIExperienceManagerPriorityManipulator@Experience@Shell@Internal@Windows@@@-$ComPtr@VPrior.c)
 *     ??$As@UIHostExperienceManager@Experience@Shell@Internal@Windows@@@?$ComPtr@VPriorityBoostHelper@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIHostExperienceManager@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800E4978 (--$As@UIHostExperienceManager@Experience@Shell@Internal@Windows@@@-$ComPtr@VPriorityBoostHelper@.c)
 *     ?RegisterForStartReady@PriorityBoostHelper@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800E5F9C (-RegisterForStartReady@PriorityBoostHelper@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ??4?$ComPtr@UIServiceProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAUIServiceProvider@@@Z @ 0x1800EA0E8 (--4-$ComPtr@UIServiceProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAUIServiceProvider@@@Z.c)
 *     ??$Make@VPriorityBoostHelper@@PEAVCSingleViewShellExperience@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VPriorityBoostHelper@@@12@$$QEAPEAVCSingleViewShellExperience@@@Z @ 0x180106D98 (--$Make@VPriorityBoostHelper@@PEAVCSingleViewShellExperience@@@Details@WRL@Microsoft@@YA-AV-$Com.c)
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x1801070F0 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIHostExperienceManager@Experience@Shell@Internal@Windows@@UIExperienceManagerPriorityManipulator@5678@UIImmersiveWindowMessageNotification@@UIClosable@Foundation@8@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18019C630 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIHostExperienceMa.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?CreateDisplayMonitorInfoCollectionAsync@CStartExperienceManager@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x1801E1A90 (-CreateDisplayMonitorInfoCollectionAsync@CStartExperienceManager@@AEAA-AUfire_and_forget@winrt@@.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_49402389@@@details@wil@@QEAA_NXZ @ 0x1801E3294 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_49402389@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_FullTrustStartMenu@@@details@wil@@QEAA_NXZ @ 0x1801E32D0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_FullTrustStartMenu@@_ea_1801E32D0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$?0$0CL@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0CL@$$CBG@Z @ 0x1803AAF0C (--$-0$0CL@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0CL@$$CBG@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CStartExperienceManager::RuntimeClassInitialize(
        CStartExperienceManager *this,
        struct IServiceProvider *a2)
{
  CSingleViewShellExperience *v4; // rdi
  HSTRING v5; // rbx
  unsigned int v6; // r8d
  HSTRING_HEADER *v7; // rax
  int v8; // ebx
  unsigned int v9; // r8d
  __int64 v10; // rdx
  HSTRING v12; // rbx
  unsigned int v13; // r8d
  HSTRING_HEADER *v14; // rax
  HSTRING_HEADER *v15; // rax
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  _QWORD *v17; // r15
  PriorityBoostHelper **v18; // rax
  PriorityBoostHelper **v19; // rbx
  PriorityBoostHelper *v20; // rdx
  PriorityBoostHelper *v21; // rcx
  int started; // edi
  __int64 v23; // rdx
  HRESULT (__stdcall *v24)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 v25; // rdi
  __int64 (__fastcall *v26)(__int64, SID *, GUID *, char *); // rbx
  int v27; // eax
  int v28; // [rsp+20h] [rbp-49h]
  _BYTE v29[8]; // [rsp+30h] [rbp-39h] BYREF
  __int64 v30; // [rsp+38h] [rbp-31h] BYREF
  CSingleViewShellExperience *v31; // [rsp+40h] [rbp-29h] BYREF
  HSTRING_HEADER v32; // [rsp+48h] [rbp-21h] BYREF
  HSTRING_HEADER v33; // [rsp+68h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v4 = (CStartExperienceManager *)((char *)this + 320);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_FullTrustStartMenu>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_FullTrustStartMenu>::GetImpl'::`2'::impl) )
  {
    v5 = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                        (Microsoft::WRL::Wrappers::HStringReference *)&v33,
                        (const unsigned __int16 (*)[43])L"Windows.Internal.ShellExperience.StartMenu")
                    + 24);
    v7 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
           &v32,
           (const WCHAR **)&StartMenuExperienceHost_AppIdFullTrust,
           v6);
    v8 = CSingleViewShellExperience::RuntimeClassInitialize(
           v4,
           (struct IWeakReferenceSource *)(((unsigned __int64)this + 32) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
           a2,
           (HSTRING)v7[1].Reserved.Reserved1,
           v5);
    if ( v8 < 0 )
    {
      v10 = 287LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)(unsigned int)v8,
        v28);
      return (unsigned int)v8;
    }
  }
  else
  {
    v12 = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                         (Microsoft::WRL::Wrappers::HStringReference *)&v32,
                         (const unsigned __int16 (*)[43])L"Windows.Internal.ShellExperience.StartMenu")
                     + 24);
    v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v33, (const WCHAR **)off_1807CBFF0, v13);
    v8 = CSingleViewShellExperience::RuntimeClassInitialize(
           v4,
           (struct IWeakReferenceSource *)(((unsigned __int64)this + 32) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
           a2,
           (HSTRING)v14[1].Reserved.Reserved1,
           v12);
    if ( v8 < 0 )
    {
      v10 = 293LL;
      goto LABEL_4;
    }
  }
  v15 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v32, (const WCHAR **)off_1807CBFE8, v9);
  v8 = CSingleViewShellExperience::AddTestAumid(v4, (HSTRING)v15[1].Reserved.Reserved1);
  if ( v8 < 0 )
  {
    v10 = 296LL;
    goto LABEL_4;
  }
  *((_DWORD *)this + 95) = 6;
  Microsoft::WRL::ComPtr<IServiceProvider>::operator=((__int64 *)this + 66, (__int64)a2);
  QueryService = a2->lpVtbl->QueryService;
  v17 = (_QWORD *)((char *)this + 560);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 70);
  v8 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))QueryService)(
         a2,
         &IID_IImmersiveWindowMessageService,
         &GUID_fc62ce95_8396_401a_b74f_88df0d75e112,
         (char *)this + 560);
  if ( v8 < 0 )
  {
    v10 = 303LL;
    goto LABEL_4;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(*(_QWORD *)*v17 + 24LL))(
         *v17,
         26LL,
         ((unsigned __int64)this + 48) & -(__int64)(this != 0LL),
         (char *)this + 536);
  if ( v8 < 0 )
  {
    v10 = 304LL;
    goto LABEL_4;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(*(_QWORD *)*v17 + 24LL))(
         *v17,
         1025LL,
         ((unsigned __int64)this + 48) & -(__int64)(this != 0LL),
         (char *)this + 540);
  if ( v8 < 0 )
  {
    v10 = 305LL;
    goto LABEL_4;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *, char *))(*(_QWORD *)*v17 + 24LL))(
         *v17,
         798LL,
         (char *)this + 48,
         (char *)this + 544);
  if ( v8 < 0 )
  {
    v10 = 306LL;
    goto LABEL_4;
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_49402389>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_49402389>::GetImpl'::`2'::impl) )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *, char *))(*(_QWORD *)*v17 + 24LL))(
           *v17,
           1027LL,
           (char *)this + 48,
           (char *)this + 552);
    if ( v8 < 0 )
    {
      v10 = 309LL;
      goto LABEL_4;
    }
    v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *, char *))(*(_QWORD *)*v17 + 24LL))(
           *v17,
           1026LL,
           (char *)this + 48,
           (char *)this + 556);
    if ( v8 < 0 )
    {
      v10 = 310LL;
      goto LABEL_4;
    }
  }
  v31 = v4;
  v18 = (PriorityBoostHelper **)Microsoft::WRL::Details::Make<PriorityBoostHelper,CSingleViewShellExperience *>(
                                  &v30,
                                  &v31);
  v19 = (PriorityBoostHelper **)((char *)this + 312);
  v20 = 0LL;
  if ( &v31 != v18 )
  {
    v20 = *v18;
    *v18 = 0LL;
  }
  v21 = *v19;
  *v19 = v20;
  if ( v21 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IHostExperienceManager,Windows::Internal::Shell::Experience::IExperienceManagerPriorityManipulator,IImmersiveWindowMessageNotification,Windows::Foundation::IClosable>::Release();
  if ( v30 )
  {
    v30 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IHostExperienceManager,Windows::Internal::Shell::Experience::IExperienceManagerPriorityManipulator,IImmersiveWindowMessageNotification,Windows::Foundation::IClosable>::Release();
  }
  if ( !*v19 )
  {
    v8 = -2147024882;
    v10 = 314LL;
    goto LABEL_4;
  }
  started = PriorityBoostHelper::RegisterForStartReady(*v19, a2);
  if ( started < 0 )
  {
    v23 = 315LL;
LABEL_32:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v23,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)started,
      v28);
    return (unsigned int)started;
  }
  started = Microsoft::WRL::ComPtr<PriorityBoostHelper>::As<Windows::Internal::Shell::Experience::IHostExperienceManager>(
              (__int64 *)this + 39,
              (__int64 *)this + 37);
  if ( started < 0 )
  {
    v23 = 316LL;
    goto LABEL_32;
  }
  v8 = Microsoft::WRL::ComPtr<PriorityBoostHelper>::As<Windows::Internal::Shell::Experience::IExperienceManagerPriorityManipulator>(
         (__int64 *)this + 39,
         (__int64 *)this + 38);
  if ( v8 < 0 )
  {
    v10 = 317LL;
    goto LABEL_4;
  }
  v24 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 71);
  v8 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v24)(
         a2,
         &SID_TransitionCoordinator,
         &GUID_b1bed1ae_63da_4687_8063_c89ec276d28a,
         (char *)this + 568);
  if ( v8 < 0 )
  {
    v10 = 319LL;
    goto LABEL_4;
  }
  v25 = *((_QWORD *)this + 66);
  v26 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, char *))(*(_QWORD *)v25 + 24LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 72);
  v8 = v26(v25, &SID_InputHostLayout, &GUID_3a67c20b_df2d_4437_a761_0c41b441ac25, (char *)this + 576);
  if ( v8 < 0 )
  {
    v10 = 322LL;
    goto LABEL_4;
  }
  v27 = (*(__int64 (__fastcall **)(_QWORD, char *, char *))(**((_QWORD **)this + 72) + 24LL))(
          *((_QWORD *)this + 72),
          (char *)this + 72,
          (char *)this + 548);
  if ( v27 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x143,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)v27,
      v28);
  CStartExperienceManager::CreateDisplayMonitorInfoCollectionAsync(this, v29);
  return 0LL;
}
