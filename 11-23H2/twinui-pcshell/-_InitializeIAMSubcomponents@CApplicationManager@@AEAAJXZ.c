/*
 * XREFs of ?_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ @ 0x1800FA538
 * Callers:
 *     ?RuntimeClassInitialize@CApplicationManager@@QEAAJXZ @ 0x1800F9DB4 (-RuntimeClassInitialize@CApplicationManager@@QEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800A8AF0 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x1800D0440 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$MakeAndInitialize@VFrameFactory@@UIApplicationFrameFactory@@PEAUIPrivilegedPresentationOperations@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationFrameFactory@@$$QEAPEAUIPrivilegedPresentationOperations@@@Z @ 0x1800E9C70 (--$MakeAndInitialize@VFrameFactory@@UIApplicationFrameFactory@@PEAUIPrivilegedPresentationOperat.c)
 *     ??$MakeAndInitialize@VCImmersiveWindowManager@@UIImmersiveWindowManager@@AEAPEAUIIAMServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIImmersiveWindowManager@@AEAPEAUIIAMServiceProvider@@@Z @ 0x1800FD670 (--$MakeAndInitialize@VCImmersiveWindowManager@@UIImmersiveWindowManager@@AEAPEAUIIAMServiceProvi.c)
 *     ??$MakeAndInitialize@VCFallbackWindow@@UIFallbackWindow@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIFallbackWindow@@@Z @ 0x1800FD83C (--$MakeAndInitialize@VCFallbackWindow@@UIFallbackWindow@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIF.c)
 *     ??$MakeAndInitialize@VCCharmsWindowManager@@UICharmWindowManagerInternal@@AEAPEAUIImmersiveApplicationTransitionHelper@@@Details@WRL@Microsoft@@YAJPEAPEAUICharmWindowManagerInternal@@AEAPEAUIImmersiveApplicationTransitionHelper@@@Z @ 0x180103DBC (--$MakeAndInitialize@VCCharmsWindowManager@@UICharmWindowManagerInternal@@AEAPEAUIImmersiveAppli.c)
 *     ??$MakeAndInitialize@VCAppViewManager@@V1@AEAPEAUIImmersiveApplicationManagerInternal@@@Details@WRL@Microsoft@@YAJPEAPEAVCAppViewManager@@AEAPEAUIImmersiveApplicationManagerInternal@@@Z @ 0x18012F038 (--$MakeAndInitialize@VCAppViewManager@@V1@AEAPEAUIImmersiveApplicationManagerInternal@@@Details@.c)
 *     ?s_CreateInstance@CImmersiveMode@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x18013064C (-s_CreateInstance@CImmersiveMode@@SAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$MakeAndInitialize@VCClassicWindowManager@@UIClassicWindowManagerPrivate@@AEAPEAUIImmersiveSystemModeInternal@@@Details@WRL@Microsoft@@YAJPEAPEAUIClassicWindowManagerPrivate@@AEAPEAUIImmersiveSystemModeInternal@@@Z @ 0x1801373A4 (--$MakeAndInitialize@VCClassicWindowManager@@UIClassicWindowManagerPrivate@@AEAPEAUIImmersiveSys.c)
 *     ?CApplicationFrameService_CreateInstance@@YAJPEAUIImmersiveApplicationManagerInternal@@AEBU_GUID@@PEAPEAX@Z @ 0x18019ADC8 (-CApplicationFrameService_CreateInstance@@YAJPEAUIImmersiveApplicationManagerInternal@@AEBU_GUID.c)
 *     ?CreateInstance@CImmersiveApplicationTransitionHelper@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x18019EAF8 (-CreateInstance@CImmersiveApplicationTransitionHelper@@SAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?s_CreateInstance@CRotationManagerSync@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x1801AAE90 (-s_CreateInstance@CRotationManagerSync@@SAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?s_CreateInstance@CRealmActivationHistory@@SAJPEAUIImmersiveApplicationManagerInternal@@AEBU_GUID@@PEAPEAX@Z @ 0x1801AD49C (-s_CreateInstance@CRealmActivationHistory@@SAJPEAUIImmersiveApplicationManagerInternal@@AEBU_GUI.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x18073D440 (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CApplicationManager::_InitializeIAMSubcomponents(IUnknown *punkSite)
{
  IUnknown *v2; // rdi
  const struct _GUID *v3; // rdx
  __int64 v4; // rcx
  CCriticalFailureHandler *v5; // rcx
  int Instance; // ebx
  __int64 v7; // rcx
  CCriticalFailureHandler *v8; // rcx
  __int64 v9; // rcx
  CCriticalFailureHandler *v10; // rcx
  IUnknown **v11; // rsi
  const struct _GUID *v12; // rcx
  CCriticalFailureHandler *v13; // rcx
  CCriticalFailureHandler *v14; // rcx
  __int64 v15; // rcx
  CCriticalFailureHandler *v16; // rcx
  const struct _GUID *v17; // rcx
  CCriticalFailureHandler *v18; // rcx
  const struct _GUID *v19; // rcx
  CCriticalFailureHandler *v20; // rcx
  __int64 v21; // rcx
  CCriticalFailureHandler *v22; // rcx
  CCriticalFailureHandler *v23; // rcx
  int v24; // edx
  const struct _GUID *v25; // rdx
  const struct _GUID *v26; // rdx
  LSTATUS v28; // eax
  LSTATUS v29; // eax
  LSTATUS v30; // eax
  LSTATUS v31; // eax
  LSTATUS DWORD; // eax
  unsigned int v33; // eax
  unsigned int v34; // eax
  int v35; // eax
  unsigned __int64 *v36; // [rsp+20h] [rbp-59h]
  unsigned __int64 *v37; // [rsp+28h] [rbp-51h]
  __int64 v38; // [rsp+30h] [rbp-49h] BYREF
  __int64 (__fastcall ***v39)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-41h] BYREF
  __int64 (__fastcall ***v40)(_QWORD, GUID *, IUnknown *); // [rsp+40h] [rbp-39h] BYREF
  __int64 (__fastcall ***v41)(_QWORD, GUID *, IUnknown *); // [rsp+48h] [rbp-31h] BYREF
  __int64 (__fastcall ***v42)(_QWORD, GUID *, IUnknown *); // [rsp+50h] [rbp-29h] BYREF
  __int64 (__fastcall ***v43)(_QWORD, GUID *, IUnknown *); // [rsp+58h] [rbp-21h] BYREF
  unsigned int v44; // [rsp+60h] [rbp-19h] BYREF
  unsigned int v45; // [rsp+64h] [rbp-15h] BYREF
  unsigned int v46; // [rsp+68h] [rbp-11h] BYREF
  unsigned int v47; // [rsp+6Ch] [rbp-Dh] BYREF
  unsigned int v48; // [rsp+70h] [rbp-9h] BYREF
  unsigned int v49; // [rsp+74h] [rbp-5h] BYREF
  unsigned int v50; // [rsp+78h] [rbp-1h] BYREF
  unsigned int v51; // [rsp+7Ch] [rbp+3h] BYREF
  unsigned int v52; // [rsp+80h] [rbp+7h] BYREF
  unsigned int v53[19]; // [rsp+84h] [rbp+Bh] BYREF
  IUnknown *lpVtbl; // [rsp+E0h] [rbp+67h] BYREF
  unsigned int v55; // [rsp+E8h] [rbp+6Fh] BYREF
  unsigned int v56; // [rsp+F0h] [rbp+77h] BYREF
  unsigned int v57; // [rsp+F8h] [rbp+7Fh] BYREF

  v2 = punkSite + 72;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&punkSite[72]);
  Instance = CEnumerableObjectCollection::CreateInstance(v4, v3, (void **)&v2->lpVtbl);
  LODWORD(lpVtbl) = Instance;
  if ( CRVPrivate::cfhImmersiveShellStartup )
    goto LABEL_2;
  if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v55) >= 0 )
  {
    switch ( v55 )
    {
      case 2u:
        Instance = -2023406815;
        break;
      case 3u:
        Instance = -2023406814;
        break;
      case 4u:
        Instance = -2147418094;
        break;
      case 5u:
        Instance = -2147022986;
        break;
      default:
        goto LABEL_52;
    }
    LODWORD(lpVtbl) = Instance;
  }
LABEL_52:
  CRVPrivate::cfhImmersiveShellStartup = 1;
LABEL_2:
  if ( Instance >= 0 )
    goto LABEL_3;
  if ( Instance != -2147024882 && Instance != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v5,
      (int *)&lpVtbl,
      L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      0x134Cu,
      v36,
      v37);
    Instance = (int)lpVtbl;
  }
  if ( Instance >= 0 )
  {
LABEL_3:
    v38 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v38);
    lpVtbl = (IUnknown *)((unsigned __int64)&punkSite[24] & -(__int64)(punkSite != 0LL));
    v38 = 0LL;
    v39 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v39);
    Instance = Microsoft::WRL::Details::MakeAndInitialize<CImmersiveWindowManager,IImmersiveWindowManager,IIAMServiceProvider * &>(
                 &v39,
                 &lpVtbl);
    if ( Instance >= 0 )
      Instance = (**v39)(v39, &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee, &v38);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v39);
    LODWORD(lpVtbl) = Instance;
    v7 = (unsigned int)Instance;
    if ( CRVPrivate::cfhImmersiveShellStartup )
    {
LABEL_6:
      if ( (int)v7 < 0 && (_DWORD)v7 != -2147024882 && Instance != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          (CCriticalFailureHandler *)v7,
          (int *)&lpVtbl,
          L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          0x1352u,
          v36,
          v37);
        Instance = (int)lpVtbl;
      }
      if ( Instance < 0 )
        goto LABEL_49;
      Instance = (*((__int64 (__fastcall **)(struct IUnknownVtbl *, __int64))v2->lpVtbl->QueryInterface + 5))(
                   v2->lpVtbl,
                   v38);
      LODWORD(lpVtbl) = Instance;
      if ( CRVPrivate::cfhImmersiveShellStartup )
      {
LABEL_9:
        if ( Instance < 0 )
        {
          if ( Instance != -2147024882 && Instance != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v8,
              (int *)&lpVtbl,
              L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
              0x1355u,
              v36,
              v37);
            Instance = (int)lpVtbl;
          }
          if ( Instance < 0 )
            goto LABEL_49;
        }
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&punkSite[71]);
        punkSite[71].lpVtbl = 0LL;
        v40 = 0LL;
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v40);
        Instance = Microsoft::WRL::Details::MakeAndInitialize<CFallbackWindow,IFallbackWindow,>(&v40);
        if ( Instance >= 0 )
          Instance = (**v40)(v40, &GUID_743bc0bd_69f0_4f28_8401_047ae0c0ffee, punkSite + 71);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v40);
        LODWORD(lpVtbl) = Instance;
        v9 = (unsigned int)Instance;
        if ( CRVPrivate::cfhImmersiveShellStartup )
        {
LABEL_13:
          if ( (int)v9 < 0 && (_DWORD)v9 != -2147024882 && Instance != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              (CCriticalFailureHandler *)v9,
              (int *)&lpVtbl,
              L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
              0x135Cu,
              v36,
              v37);
            Instance = (int)lpVtbl;
          }
          if ( Instance < 0 )
            goto LABEL_49;
          Instance = IUnknown_SetSite((IUnknown *)punkSite[71].lpVtbl, punkSite);
          LODWORD(lpVtbl) = Instance;
          if ( CRVPrivate::cfhImmersiveShellStartup )
          {
LABEL_16:
            if ( Instance < 0 )
            {
              if ( Instance != -2147024882 && Instance != -2144862209 )
              {
                CCriticalFailureHandler::HandleFailure(
                  v10,
                  (int *)&lpVtbl,
                  L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                  0x135Fu,
                  v36,
                  v37);
                Instance = (int)lpVtbl;
              }
              if ( Instance < 0 )
                goto LABEL_49;
            }
            v11 = (IUnknown **)&punkSite[66];
            Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&punkSite[66]);
            Instance = CImmersiveMode::s_CreateInstance(v12, (void **)&punkSite[66].lpVtbl);
            LODWORD(lpVtbl) = Instance;
            if ( CRVPrivate::cfhImmersiveShellStartup )
            {
LABEL_18:
              if ( Instance < 0 )
              {
                if ( Instance != -2147024882 && Instance != -2144862209 )
                {
                  CCriticalFailureHandler::HandleFailure(
                    v13,
                    (int *)&lpVtbl,
                    L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                    0x1367u,
                    v36,
                    v37);
                  Instance = (int)lpVtbl;
                }
                if ( Instance < 0 )
                  goto LABEL_49;
              }
              Instance = IUnknown_SetSite(*v11, punkSite);
              LODWORD(lpVtbl) = Instance;
              if ( CRVPrivate::cfhImmersiveShellStartup )
              {
LABEL_20:
                if ( Instance < 0 )
                {
                  if ( Instance != -2147024882 && Instance != -2144862209 )
                  {
                    CCriticalFailureHandler::HandleFailure(
                      v14,
                      (int *)&lpVtbl,
                      L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                      0x136Au,
                      v36,
                      v37);
                    Instance = (int)lpVtbl;
                  }
                  if ( Instance < 0 )
                    goto LABEL_49;
                }
                Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&punkSite[67]);
                lpVtbl = *v11;
                punkSite[67].lpVtbl = 0LL;
                v41 = 0LL;
                Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v41);
                Instance = Microsoft::WRL::Details::MakeAndInitialize<CClassicWindowManager,IClassicWindowManagerPrivate,IImmersiveSystemModeInternal * &>(
                             &v41,
                             &lpVtbl);
                if ( Instance >= 0 )
                  Instance = (**v41)(v41, &GUID_226276c7_ca53_498c_b0be_ad1ea9c0ffee, punkSite + 67);
                Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v41);
                LODWORD(lpVtbl) = Instance;
                v15 = (unsigned int)Instance;
                if ( CRVPrivate::cfhImmersiveShellStartup )
                {
LABEL_24:
                  if ( (int)v15 < 0 && (_DWORD)v15 != -2147024882 && Instance != -2144862209 )
                  {
                    CCriticalFailureHandler::HandleFailure(
                      (CCriticalFailureHandler *)v15,
                      (int *)&lpVtbl,
                      L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                      0x1372u,
                      v36,
                      v37);
                    Instance = (int)lpVtbl;
                  }
                  if ( Instance < 0 )
                    goto LABEL_49;
                  Instance = IUnknown_SetSite((IUnknown *)punkSite[67].lpVtbl, punkSite);
                  LODWORD(lpVtbl) = Instance;
                  if ( CRVPrivate::cfhImmersiveShellStartup )
                  {
LABEL_27:
                    if ( Instance < 0 )
                    {
                      if ( Instance != -2147024882 && Instance != -2144862209 )
                      {
                        CCriticalFailureHandler::HandleFailure(
                          v16,
                          (int *)&lpVtbl,
                          L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                          0x1375u,
                          v36,
                          v37);
                        Instance = (int)lpVtbl;
                      }
                      if ( Instance < 0 )
                        goto LABEL_49;
                    }
                    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&punkSite[68]);
                    Instance = CRotationManagerSync::s_CreateInstance(v17, (void **)&punkSite[68].lpVtbl);
                    LODWORD(lpVtbl) = Instance;
                    if ( CRVPrivate::cfhImmersiveShellStartup )
                    {
LABEL_29:
                      if ( Instance < 0 )
                      {
                        if ( Instance != -2147024882 && Instance != -2144862209 )
                        {
                          CCriticalFailureHandler::HandleFailure(
                            v18,
                            (int *)&lpVtbl,
                            L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                            0x137Du,
                            v36,
                            v37);
                          Instance = (int)lpVtbl;
                        }
                        if ( Instance < 0 )
                          goto LABEL_49;
                      }
                      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&punkSite[69]);
                      Instance = CImmersiveApplicationTransitionHelper::CreateInstance(
                                   v19,
                                   (void **)&punkSite[69].lpVtbl);
                      LODWORD(lpVtbl) = Instance;
                      if ( CRVPrivate::cfhImmersiveShellStartup )
                      {
LABEL_31:
                        if ( Instance < 0 )
                        {
                          if ( Instance != -2147024882 && Instance != -2144862209 )
                          {
                            CCriticalFailureHandler::HandleFailure(
                              v20,
                              (int *)&lpVtbl,
                              L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                              0x1387u,
                              v36,
                              v37);
                            Instance = (int)lpVtbl;
                          }
                          if ( Instance < 0 )
                            goto LABEL_49;
                        }
                        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&punkSite[74]);
                        lpVtbl = (IUnknown *)punkSite[69].lpVtbl;
                        punkSite[74].lpVtbl = 0LL;
                        v42 = 0LL;
                        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v42);
                        Instance = Microsoft::WRL::Details::MakeAndInitialize<CCharmsWindowManager,ICharmWindowManagerInternal,IImmersiveApplicationTransitionHelper * &>(
                                     &v42,
                                     &lpVtbl);
                        if ( Instance >= 0 )
                          Instance = (**v42)(v42, &GUID_abda261c_6cda_4269_9160_4a16fbc0ffee, punkSite + 74);
                        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v42);
                        LODWORD(lpVtbl) = Instance;
                        v21 = (unsigned int)Instance;
                        if ( CRVPrivate::cfhImmersiveShellStartup )
                        {
LABEL_35:
                          if ( (int)v21 < 0 && (_DWORD)v21 != -2147024882 && Instance != -2144862209 )
                          {
                            CCriticalFailureHandler::HandleFailure(
                              (CCriticalFailureHandler *)v21,
                              (int *)&lpVtbl,
                              L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                              0x138Eu,
                              v36,
                              v37);
                            Instance = (int)lpVtbl;
                          }
                          if ( Instance < 0 )
                            goto LABEL_49;
                          Instance = IUnknown_SetSite((IUnknown *)punkSite[74].lpVtbl, punkSite);
                          LODWORD(lpVtbl) = Instance;
                          if ( CRVPrivate::cfhImmersiveShellStartup )
                          {
LABEL_38:
                            if ( Instance < 0 )
                            {
                              if ( Instance != -2147024882 && Instance != -2144862209 )
                              {
                                CCriticalFailureHandler::HandleFailure(
                                  v22,
                                  (int *)&lpVtbl,
                                  L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                                  0x1391u,
                                  v36,
                                  v37);
                                Instance = (int)lpVtbl;
                              }
                              if ( Instance < 0 )
                                goto LABEL_49;
                            }
                            Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&punkSite[75]);
                            lpVtbl = (IUnknown *)((unsigned __int64)&punkSite[30] & -(__int64)(punkSite != 0LL));
                            punkSite[75].lpVtbl = 0LL;
                            v43 = 0LL;
                            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v43);
                            Instance = Microsoft::WRL::Details::MakeAndInitialize<CAppViewManager,CAppViewManager,IImmersiveApplicationManagerInternal * &>(
                                         &v43,
                                         &lpVtbl);
                            if ( Instance >= 0 )
                              Instance = (**v43)(v43, &GUID_f89b0985_7620_4f91_ad6d_a2ab45c0ffee, punkSite + 75);
                            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v43);
                            LODWORD(lpVtbl) = Instance;
                            v24 = Instance;
                            if ( CRVPrivate::cfhImmersiveShellStartup )
                            {
LABEL_42:
                              if ( v24 < 0 && v24 != -2147024882 && Instance != -2144862209 )
                              {
                                CCriticalFailureHandler::HandleFailure(
                                  v23,
                                  (int *)&lpVtbl,
                                  L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                                  0x1399u,
                                  v36,
                                  v37);
                                Instance = (int)lpVtbl;
                              }
                              if ( Instance >= 0 )
                              {
                                Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&punkSite[65]);
                                Instance = CRealmActivationHistory::s_CreateInstance(
                                             (struct IImmersiveApplicationManagerInternal *)((unsigned __int64)&punkSite[30] & -(__int64)(punkSite != 0LL)),
                                             v25,
                                             (void **)&punkSite[65].lpVtbl);
                                if ( Instance >= 0 )
                                {
                                  Instance = IUnknown_SetSite((IUnknown *)punkSite[65].lpVtbl, punkSite);
                                  if ( Instance >= 0 )
                                  {
                                    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&punkSite[76]);
                                    Instance = CApplicationFrameService_CreateInstance(
                                                 (struct IImmersiveApplicationManagerInternal *)((unsigned __int64)&punkSite[30] & -(__int64)(punkSite != 0LL)),
                                                 v26,
                                                 (void **)&punkSite[76].lpVtbl);
                                    if ( Instance >= 0 )
                                    {
                                      Instance = IUnknown_SetSite((IUnknown *)punkSite[76].lpVtbl, punkSite);
                                      if ( Instance >= 0 )
                                      {
                                        lpVtbl = (IUnknown *)CApplicationManagerUtility::g_pIAMGlobals[17].Ptr;
                                        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&punkSite[77]);
                                        Instance = Microsoft::WRL::Details::MakeAndInitialize<FrameFactory,IApplicationFrameFactory,IPrivilegedPresentationOperations *>(
                                                     &punkSite[77].lpVtbl,
                                                     (struct IPrivilegedPresentationOperations **)&lpVtbl);
                                      }
                                    }
                                  }
                                }
                              }
LABEL_49:
                              Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v38);
                              return (unsigned int)Instance;
                            }
                            DWORD = SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", v53);
                            v24 = Instance;
                            if ( DWORD < 0 )
                            {
LABEL_78:
                              CRVPrivate::cfhImmersiveShellStartup = 1;
                              goto LABEL_42;
                            }
                            if ( v53[0] == 2 )
                            {
                              Instance = -2023406815;
                              v24 = -2023406815;
                            }
                            else
                            {
                              if ( v53[0] != 3 )
                              {
                                if ( v53[0] == 4 )
                                {
                                  v35 = -2147418094;
                                }
                                else
                                {
                                  if ( v53[0] != 5 )
                                    goto LABEL_78;
                                  v35 = -2147022986;
                                }
                                Instance = v35;
                                LODWORD(lpVtbl) = v35;
                                v24 = v35;
                                goto LABEL_78;
                              }
                              Instance = -2023406814;
                              v24 = -2023406814;
                            }
                            LODWORD(lpVtbl) = Instance;
                            goto LABEL_78;
                          }
                          if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v52) < 0 )
                          {
LABEL_76:
                            CRVPrivate::cfhImmersiveShellStartup = 1;
                            goto LABEL_38;
                          }
                          switch ( v52 )
                          {
                            case 2u:
                              Instance = -2023406815;
                              break;
                            case 3u:
                              Instance = -2023406814;
                              break;
                            case 4u:
                              Instance = -2147418094;
                              break;
                            case 5u:
                              Instance = -2147022986;
                              break;
                            default:
                              goto LABEL_76;
                          }
                          LODWORD(lpVtbl) = Instance;
                          goto LABEL_76;
                        }
                        v31 = SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v51);
                        v21 = (unsigned int)Instance;
                        if ( v31 < 0 )
                        {
LABEL_74:
                          CRVPrivate::cfhImmersiveShellStartup = 1;
                          goto LABEL_35;
                        }
                        if ( v51 == 2 )
                        {
                          Instance = -2023406815;
                          v21 = 2271560481LL;
                        }
                        else
                        {
                          if ( v51 != 3 )
                          {
                            if ( v51 == 4 )
                            {
                              v34 = -2147418094;
                            }
                            else
                            {
                              if ( v51 != 5 )
                                goto LABEL_74;
                              v34 = -2147022986;
                            }
                            Instance = v34;
                            LODWORD(lpVtbl) = v34;
                            v21 = v34;
                            goto LABEL_74;
                          }
                          Instance = -2023406814;
                          v21 = 2271560482LL;
                        }
                        LODWORD(lpVtbl) = Instance;
                        goto LABEL_74;
                      }
                      if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v50) < 0 )
                      {
LABEL_72:
                        CRVPrivate::cfhImmersiveShellStartup = 1;
                        goto LABEL_31;
                      }
                      switch ( v50 )
                      {
                        case 2u:
                          Instance = -2023406815;
                          break;
                        case 3u:
                          Instance = -2023406814;
                          break;
                        case 4u:
                          Instance = -2147418094;
                          break;
                        case 5u:
                          Instance = -2147022986;
                          break;
                        default:
                          goto LABEL_72;
                      }
                      LODWORD(lpVtbl) = Instance;
                      goto LABEL_72;
                    }
                    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v49) < 0 )
                    {
LABEL_70:
                      CRVPrivate::cfhImmersiveShellStartup = 1;
                      goto LABEL_29;
                    }
                    switch ( v49 )
                    {
                      case 2u:
                        Instance = -2023406815;
                        break;
                      case 3u:
                        Instance = -2023406814;
                        break;
                      case 4u:
                        Instance = -2147418094;
                        break;
                      case 5u:
                        Instance = -2147022986;
                        break;
                      default:
                        goto LABEL_70;
                    }
                    LODWORD(lpVtbl) = Instance;
                    goto LABEL_70;
                  }
                  if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v48) < 0 )
                  {
LABEL_68:
                    CRVPrivate::cfhImmersiveShellStartup = 1;
                    goto LABEL_27;
                  }
                  switch ( v48 )
                  {
                    case 2u:
                      Instance = -2023406815;
                      break;
                    case 3u:
                      Instance = -2023406814;
                      break;
                    case 4u:
                      Instance = -2147418094;
                      break;
                    case 5u:
                      Instance = -2147022986;
                      break;
                    default:
                      goto LABEL_68;
                  }
                  LODWORD(lpVtbl) = Instance;
                  goto LABEL_68;
                }
                v30 = SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v47);
                v15 = (unsigned int)Instance;
                if ( v30 < 0 )
                {
LABEL_66:
                  CRVPrivate::cfhImmersiveShellStartup = 1;
                  goto LABEL_24;
                }
                v15 = (unsigned int)Instance;
                if ( v47 == 2 )
                {
                  Instance = -2023406815;
                  v15 = 2271560481LL;
                }
                else
                {
                  if ( v47 != 3 )
                  {
                    if ( v47 == 4 )
                    {
                      v33 = -2147418094;
                    }
                    else
                    {
                      if ( v47 != 5 )
                        goto LABEL_66;
                      v33 = -2147022986;
                    }
                    Instance = v33;
                    LODWORD(lpVtbl) = v33;
                    v15 = v33;
                    goto LABEL_66;
                  }
                  Instance = -2023406814;
                  v15 = 2271560482LL;
                }
                LODWORD(lpVtbl) = Instance;
                goto LABEL_66;
              }
              if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v46) < 0 )
              {
LABEL_64:
                CRVPrivate::cfhImmersiveShellStartup = 1;
                goto LABEL_20;
              }
              switch ( v46 )
              {
                case 2u:
                  Instance = -2023406815;
                  break;
                case 3u:
                  Instance = -2023406814;
                  break;
                case 4u:
                  Instance = -2147418094;
                  break;
                case 5u:
                  Instance = -2147022986;
                  break;
                default:
                  goto LABEL_64;
              }
              LODWORD(lpVtbl) = Instance;
              goto LABEL_64;
            }
            if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v45) < 0 )
            {
LABEL_62:
              CRVPrivate::cfhImmersiveShellStartup = 1;
              goto LABEL_18;
            }
            switch ( v45 )
            {
              case 2u:
                Instance = -2023406815;
                break;
              case 3u:
                Instance = -2023406814;
                break;
              case 4u:
                Instance = -2147418094;
                break;
              case 5u:
                Instance = -2147022986;
                break;
              default:
                goto LABEL_62;
            }
            LODWORD(lpVtbl) = Instance;
            goto LABEL_62;
          }
          if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v44) < 0 )
          {
LABEL_60:
            CRVPrivate::cfhImmersiveShellStartup = 1;
            goto LABEL_16;
          }
          switch ( v44 )
          {
            case 2u:
              Instance = -2023406815;
              break;
            case 3u:
              Instance = -2023406814;
              break;
            case 4u:
              Instance = -2147418094;
              break;
            case 5u:
              Instance = -2147022986;
              break;
            default:
              goto LABEL_60;
          }
          LODWORD(lpVtbl) = Instance;
          goto LABEL_60;
        }
        v29 = SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v57);
        v9 = (unsigned int)Instance;
        if ( v29 >= 0 )
        {
          v9 = (unsigned int)Instance;
          if ( v57 == 2 )
          {
            Instance = -2023406815;
            v9 = 2271560481LL;
          }
          else if ( v57 == 3 )
          {
            Instance = -2023406814;
            v9 = 2271560482LL;
          }
          else
          {
            if ( v57 != 4 )
            {
              if ( v57 == 5 )
              {
                Instance = -2147022986;
                LODWORD(lpVtbl) = -2147022986;
                v9 = 2147944310LL;
              }
              goto LABEL_58;
            }
            Instance = -2147418094;
            v9 = 2147549202LL;
          }
          LODWORD(lpVtbl) = Instance;
        }
LABEL_58:
        CRVPrivate::cfhImmersiveShellStartup = 1;
        goto LABEL_13;
      }
      if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v56) < 0 )
      {
LABEL_56:
        CRVPrivate::cfhImmersiveShellStartup = 1;
        goto LABEL_9;
      }
      switch ( v56 )
      {
        case 2u:
          Instance = -2023406815;
          break;
        case 3u:
          Instance = -2023406814;
          break;
        case 4u:
          Instance = -2147418094;
          break;
        case 5u:
          Instance = -2147022986;
          break;
        default:
          goto LABEL_56;
      }
      LODWORD(lpVtbl) = Instance;
      goto LABEL_56;
    }
    v28 = SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v55);
    v7 = (unsigned int)Instance;
    if ( v28 >= 0 )
    {
      v7 = (unsigned int)Instance;
      if ( v55 == 2 )
      {
        Instance = -2023406815;
        v7 = 2271560481LL;
      }
      else if ( v55 == 3 )
      {
        Instance = -2023406814;
        v7 = 2271560482LL;
      }
      else
      {
        if ( v55 != 4 )
        {
          if ( v55 == 5 )
          {
            Instance = -2147022986;
            LODWORD(lpVtbl) = -2147022986;
            v7 = 2147944310LL;
          }
          goto LABEL_54;
        }
        Instance = -2147418094;
        v7 = 2147549202LL;
      }
      LODWORD(lpVtbl) = Instance;
    }
LABEL_54:
    CRVPrivate::cfhImmersiveShellStartup = 1;
    goto LABEL_6;
  }
  return (unsigned int)Instance;
}
