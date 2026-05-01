/*
 * XREFs of ?RuntimeClassInitialize@CApplicationManager@@QEAAJXZ @ 0x1800F9DB4
 * Callers:
 *     ??$MakeAndInitialize@VCApplicationManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1801AB8CC (--$MakeAndInitialize@VCApplicationManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnkn.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800A8AF0 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ @ 0x1800FA538 (-_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ.c)
 *     ??$MakeAndInitialize@VCIAMSpecialWindow@@V1@AEBQEBUSPECIAL_WINDOW_INIT_DATA@@@Details@WRL@Microsoft@@YAJPEAPEAVCIAMSpecialWindow@@AEBQEBUSPECIAL_WINDOW_INIT_DATA@@@Z @ 0x180103394 (--$MakeAndInitialize@VCIAMSpecialWindow@@V1@AEBQEBUSPECIAL_WINDOW_INIT_DATA@@@Details@WRL@Micros.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x18010BDB8 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ @ 0x1801383A0 (-InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ.c)
 *     ?InitializePrivilegedOperationsForIam@PrivilegedOperationsService@@QEAAJPEAUIPrivilegedOperationsConsumer@@@Z @ 0x180197CE0 (-InitializePrivilegedOperationsForIam@PrivilegedOperationsService@@QEAAJPEAUIPrivilegedOperation.c)
 *     ??0CIAMGlobals@@QEAA@XZ @ 0x1801AAD08 (--0CIAMGlobals@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _Init_thread_footer @ 0x1801C9108 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1801C9170 (_Init_thread_header.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x18073D440 (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::RuntimeClassInitialize(CApplicationManager *this)
{
  CIAMGlobals *v2; // rax
  RTL_SRWLOCK *v3; // rax
  signed int inited; // ebx
  __int64 v5; // rcx
  int v6; // edx
  int v7; // eax
  HWND v8; // rsi
  CIAMGlobals *v9; // rax
  int v10; // edx
  LSTATUS DWORD; // eax
  LSTATUS v13; // eax
  LSTATUS v14; // eax
  LSTATUS v15; // eax
  __int64 v16; // r9
  __int64 v17; // rdx
  unsigned __int64 *v18; // [rsp+20h] [rbp-30h]
  unsigned __int64 *v19; // [rsp+28h] [rbp-28h]
  _QWORD v20[2]; // [rsp+30h] [rbp-20h] BYREF
  int v21; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  CIAMGlobals *v23; // [rsp+98h] [rbp+48h] BYREF
  _QWORD *v24; // [rsp+A0h] [rbp+50h] BYREF

  v2 = (CIAMGlobals *)operator new(0xB8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v23 = v2;
  if ( v2 )
    v3 = (RTL_SRWLOCK *)CIAMGlobals::CIAMGlobals(v2);
  else
    v3 = 0LL;
  CApplicationManagerUtility::g_pIAMGlobals = v3;
  inited = v3 == 0LL ? 0x8007000E : 0;
  LODWORD(v23) = inited;
  v5 = (unsigned int)inited;
  v6 = inited;
  if ( CRVPrivate::cfhImmersiveShellStartup )
    goto LABEL_4;
  DWORD = SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", (unsigned int *)&v24);
  v5 = (unsigned int)inited;
  v6 = inited;
  if ( DWORD >= 0 )
  {
    switch ( (_DWORD)v24 )
    {
      case 2:
        inited = -2023406815;
        v5 = 2271560481LL;
        v6 = -2023406815;
        break;
      case 3:
        inited = -2023406814;
        v5 = 2271560482LL;
        v6 = -2023406814;
        break;
      case 4:
        inited = -2147418094;
        v5 = 2147549202LL;
        v6 = -2147418094;
        break;
      case 5:
        inited = -2147022986;
        v5 = 2147944310LL;
        v6 = -2147022986;
        break;
      default:
        goto LABEL_37;
    }
    LODWORD(v23) = inited;
  }
LABEL_37:
  CRVPrivate::cfhImmersiveShellStartup = 1;
LABEL_4:
  if ( (int)v5 >= 0 )
    goto LABEL_5;
  if ( v6 != -2147024882 )
  {
    CCriticalFailureHandler::HandleFailure(
      (CCriticalFailureHandler *)v5,
      (int *)&v23,
      L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      0x12EFu,
      v18,
      v19);
    inited = (int)v23;
  }
  if ( inited >= 0 )
  {
LABEL_5:
    if ( PrivilegedOperationsService::s_this )
    {
      v7 = PrivilegedOperationsService::InitializePrivilegedOperationsForIam(
             (CApplicationManager *)((char *)this + 320),
             (struct IPrivilegedOperationsConsumer *)(((unsigned __int64)this + 320) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
      inited = v7;
      if ( v7 >= 0 )
        goto LABEL_7;
      v16 = (unsigned int)v7;
      v17 = 827LL;
    }
    else
    {
      inited = -2147467259;
      v16 = 2147500037LL;
      v17 = 826LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (unsigned int)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
      (const char *)v16,
      (int)v18);
LABEL_7:
    LODWORD(v23) = inited;
    v5 = (unsigned int)inited;
    if ( CRVPrivate::cfhImmersiveShellStartup )
    {
LABEL_8:
      if ( (int)v5 < 0 && (_DWORD)v5 != -2147024882 && inited != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          (CCriticalFailureHandler *)v5,
          (int *)&v23,
          L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          0x12F2u,
          v18,
          v19);
        inited = (int)v23;
      }
      goto LABEL_9;
    }
    v13 = SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", (unsigned int *)&v24);
    v5 = (unsigned int)inited;
    if ( v13 < 0 )
    {
LABEL_39:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_8;
    }
    switch ( (_DWORD)v24 )
    {
      case 2:
        inited = -2023406815;
        v5 = 2271560481LL;
        break;
      case 3:
        inited = -2023406814;
        v5 = 2271560482LL;
        break;
      case 4:
        inited = -2147418094;
        v5 = 2147549202LL;
        break;
      case 5:
        inited = -2147022986;
        v5 = 2147944310LL;
        break;
      default:
        goto LABEL_39;
    }
    LODWORD(v23) = inited;
    goto LABEL_39;
  }
LABEL_9:
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", (unsigned int *)&v24) < 0 )
    {
LABEL_41:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_10;
    }
    switch ( (_DWORD)v24 )
    {
      case 2:
        inited = -2023406815;
        break;
      case 3:
        inited = -2023406814;
        break;
      case 4:
        inited = -2147418094;
        break;
      case 5:
        inited = -2147022986;
        break;
      default:
        goto LABEL_41;
    }
    LODWORD(v23) = inited;
    goto LABEL_41;
  }
LABEL_10:
  if ( inited >= 0 )
    goto LABEL_11;
  if ( inited != -2147024882 && inited != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      (CCriticalFailureHandler *)v5,
      (int *)&v23,
      L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      0x12F5u,
      v18,
      v19);
    inited = (int)v23;
  }
  if ( inited >= 0 )
  {
LABEL_11:
    inited = CObjectWithThreadUseDetection::InitApartmentId((CApplicationManager *)((char *)this + 392));
    LODWORD(v23) = inited;
  }
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", (unsigned int *)&v24) < 0 )
    {
LABEL_43:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_13;
    }
    switch ( (_DWORD)v24 )
    {
      case 2:
        inited = -2023406815;
        break;
      case 3:
        inited = -2023406814;
        break;
      case 4:
        inited = -2147418094;
        break;
      case 5:
        inited = -2147022986;
        break;
      default:
        goto LABEL_43;
    }
    LODWORD(v23) = inited;
    goto LABEL_43;
  }
LABEL_13:
  if ( inited < 0 )
  {
    if ( inited != -2147024882 && inited != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        (CCriticalFailureHandler *)v5,
        (int *)&v23,
        L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        0x12FDu,
        v18,
        v19);
      inited = (int)v23;
    }
    if ( inited < 0 )
      goto LABEL_24;
  }
  v20[0] = L"ApplicationManager_DesktopShellWindow";
  v20[1] = ((unsigned __int64)this + 200) & -(__int64)(this != 0LL);
  v21 = 1;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 94);
  v24 = v20;
  *((_QWORD *)this + 94) = 0LL;
  v23 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v23);
  inited = Microsoft::WRL::Details::MakeAndInitialize<CIAMSpecialWindow,CIAMSpecialWindow,SPECIAL_WINDOW_INIT_DATA const * const &>(
             &v23,
             &v24);
  if ( inited >= 0 )
    inited = (**(__int64 (__fastcall ***)(CIAMGlobals *, GUID *, char *))v23)(
               v23,
               &GUID_fdcff85f_e2e4_4465_a2c5_810d6ec0ffee,
               (char *)this + 752);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v23);
  LODWORD(v23) = inited;
  v5 = (unsigned int)inited;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    v14 = SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", (unsigned int *)&v24);
    v5 = (unsigned int)inited;
    if ( v14 >= 0 )
    {
      v5 = (unsigned int)inited;
      if ( (_DWORD)v24 == 2 )
      {
        inited = -2023406815;
        v5 = 2271560481LL;
      }
      else if ( (_DWORD)v24 == 3 )
      {
        inited = -2023406814;
        v5 = 2271560482LL;
      }
      else
      {
        if ( (_DWORD)v24 != 4 )
        {
          if ( (_DWORD)v24 == 5 )
          {
            v5 = 2147944310LL;
            inited = -2147022986;
            LODWORD(v23) = -2147022986;
          }
          goto LABEL_45;
        }
        inited = -2147418094;
        v5 = 2147549202LL;
      }
      LODWORD(v23) = inited;
    }
LABEL_45:
    CRVPrivate::cfhImmersiveShellStartup = 1;
  }
  if ( (int)v5 < 0 && (_DWORD)v5 != -2147024882 && inited != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      (CCriticalFailureHandler *)v5,
      (int *)&v23,
      L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      0x130Cu,
      v18,
      v19);
    inited = (int)v23;
  }
  if ( inited >= 0 )
  {
    v8 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 94) + 24LL))(*((_QWORD *)this + 94));
    (*(void (__fastcall **)(PVOID, HWND, __int64))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[17].Ptr + 24LL))(
      CApplicationManagerUtility::g_pIAMGlobals[17].Ptr,
      v8,
      1LL);
    v9 = (CIAMGlobals *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
    v23 = v9;
    if ( v9 )
    {
      *(_DWORD *)v9 = 1;
      *((_QWORD *)v9 + 1) = 0LL;
      *((_QWORD *)v9 + 2) = v8;
      *((_QWORD *)v9 + 3) = 0LL;
      *((_QWORD *)v9 + 4) = 0LL;
      *((_QWORD *)v9 + 5) = 0LL;
      *((_QWORD *)v9 + 6) = 0LL;
      *((_DWORD *)v9 + 14) = 0;
    }
    else
    {
      v9 = 0LL;
    }
    *((_QWORD *)this + 100) = v9;
    inited = v9 == 0LL ? 0x8007000E : 0;
    LODWORD(v23) = inited;
    v5 = (unsigned int)inited;
    v10 = inited;
    if ( CRVPrivate::cfhImmersiveShellStartup )
      goto LABEL_22;
    v15 = SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", (unsigned int *)&v24);
    v5 = (unsigned int)inited;
    v10 = inited;
    if ( v15 >= 0 )
    {
      if ( (_DWORD)v24 == 2 )
      {
        inited = -2023406815;
        v5 = 2271560481LL;
        v10 = -2023406815;
      }
      else if ( (_DWORD)v24 == 3 )
      {
        inited = -2023406814;
        v5 = 2271560482LL;
        v10 = -2023406814;
      }
      else
      {
        if ( (_DWORD)v24 != 4 )
        {
          if ( (_DWORD)v24 == 5 )
          {
            inited = -2147022986;
            LODWORD(v23) = -2147022986;
            v5 = 2147944310LL;
            v10 = -2147022986;
          }
          goto LABEL_47;
        }
        inited = -2147418094;
        v5 = 2147549202LL;
        v10 = -2147418094;
      }
      LODWORD(v23) = inited;
    }
LABEL_47:
    CRVPrivate::cfhImmersiveShellStartup = 1;
LABEL_22:
    if ( (int)v5 >= 0 )
      goto LABEL_23;
    if ( v10 != -2147024882 )
    {
      CCriticalFailureHandler::HandleFailure(
        (CCriticalFailureHandler *)v5,
        (int *)&v23,
        L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        0x1315u,
        v18,
        v19);
      inited = (int)v23;
    }
    if ( inited >= 0 )
LABEL_23:
      SetPropW(v8, L"AllowConsentToStealFocus", HANDLE_FLAG_INHERIT);
  }
LABEL_24:
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", (unsigned int *)&v24) < 0 )
    {
LABEL_49:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_25;
    }
    switch ( (_DWORD)v24 )
    {
      case 2:
        inited = -2023406815;
        break;
      case 3:
        inited = -2023406814;
        break;
      case 4:
        inited = -2147418094;
        break;
      case 5:
        inited = -2147022986;
        break;
      default:
        goto LABEL_49;
    }
    LODWORD(v23) = inited;
    goto LABEL_49;
  }
LABEL_25:
  if ( inited >= 0 )
    goto LABEL_26;
  if ( inited != -2147024882 && inited != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      (CCriticalFailureHandler *)v5,
      (int *)&v23,
      L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      0x131Fu,
      v18,
      v19);
    inited = (int)v23;
  }
  if ( inited >= 0 )
  {
LABEL_26:
    inited = CApplicationManager::_InitializeIAMSubcomponents((IUnknown *)this);
    LODWORD(v23) = inited;
  }
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", (unsigned int *)&v24) < 0 )
    {
LABEL_51:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_28;
    }
    switch ( (_DWORD)v24 )
    {
      case 2:
        inited = -2023406815;
        break;
      case 3:
        inited = -2023406814;
        break;
      case 4:
        inited = -2147418094;
        break;
      case 5:
        inited = -2147022986;
        break;
      default:
        goto LABEL_51;
    }
    LODWORD(v23) = inited;
    goto LABEL_51;
  }
LABEL_28:
  if ( inited >= 0 )
    goto LABEL_179;
  if ( inited != -2147024882 && inited != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      (CCriticalFailureHandler *)v5,
      (int *)&v23,
      L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      0x1325u,
      v18,
      v19);
    inited = (int)v23;
  }
  if ( inited >= 0 )
  {
LABEL_179:
    if ( dword_18098F310 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                     + 16LL) )
    {
      Init_thread_header(&dword_18098F310);
      if ( dword_18098F310 == -1 )
      {
        xmmword_18098D110 = IID_IImmersiveApplicationManager;
        xmmword_18098D120 = 0LL;
        xmmword_18098D130 = *(_OWORD *)&SID_ImmersiveApplicationArrayService.Revision;
        xmmword_18098D140 = 0LL;
        xmmword_18098D150 = (__int128)IID_IImmersiveApplicationNotificationService;
        xmmword_18098D160 = 0LL;
        xmmword_18098D170 = (__int128)IID_IRequestTrustedComponentForegroundControlInitialization;
        xmmword_18098D180 = 0LL;
        xmmword_18098D190 = (__int128)IID_IImmersiveApplicationVisibilityOverride;
        xmmword_18098D1A0 = 0LL;
        xmmword_18098D1B0 = (__int128)IID_IAppSwitchingTestability;
        xmmword_18098D1C0 = 0LL;
        xmmword_18098D1D0 = xmmword_180834B78;
        xmmword_18098D1E0 = 0LL;
        xmmword_18098D1F0 = xmmword_180834B68;
        xmmword_18098D200 = 0LL;
        xmmword_18098D210 = xmmword_180834BE8;
        xmmword_18098D220 = 0LL;
        xmmword_18098D230 = (__int128)IID_IClassicWindowManager;
        qword_18098D240 = *((_QWORD *)this + 67);
        qword_18098D248 = 0LL;
        xmmword_18098D250 = (__int128)IID_IImmersiveSystemMode;
        qword_18098D260 = *((_QWORD *)this + 66);
        qword_18098D268 = 0LL;
        xmmword_18098D270 = (__int128)IID_IActiveZBand;
        qword_18098D280 = *((_QWORD *)this + 66);
        qword_18098D288 = 0LL;
        xmmword_18098D290 = *(_OWORD *)&SID_GlobalDesktopVisibilityService.Revision;
        qword_18098D2A0 = *((_QWORD *)this + 66);
        qword_18098D2A8 = 0LL;
        xmmword_18098D2B0 = (__int128)IID_IImmersiveCharmsWindowManager;
        qword_18098D2C0 = *((_QWORD *)this + 74);
        qword_18098D2C8 = 0LL;
        xmmword_18098D2D0 = (__int128)IID_IAppViewManager;
        qword_18098D2E0 = *((_QWORD *)this + 75);
        qword_18098D2E8 = 0LL;
        xmmword_18098D2F0 = (__int128)GUID_4b2a4af0_50dc_4266_b0ae_1d4013d069b7;
        qword_18098D300 = *((_QWORD *)this + 75);
        qword_18098D308 = 0LL;
        xmmword_18098D310 = (__int128)IID_IRealmActivationHistory;
        qword_18098D320 = *((_QWORD *)this + 65);
        qword_18098D328 = 0LL;
        xmmword_18098D330 = (__int128)GUID_d8c26227_b75e_4d8b_ac8c_c463a34ed11e;
        qword_18098D340 = *((_QWORD *)this + 77);
        qword_18098D348 = 0LL;
        xmmword_18098D350 = (__int128)GUID_6fdc29fe_42bd_4dc0_b783_b7854dcba425;
        qword_18098D360 = *((_QWORD *)this + 68);
        qword_18098D368 = 0LL;
        Init_thread_footer(&dword_18098F310);
      }
    }
    inited = CImmersiveShellComponent::RegisterServiceInformation(
               (CApplicationManager *)((char *)this + 88),
               (const struct CImmersiveShellComponent::ISC_SERVICE *)&xmmword_18098D110,
               0x13u);
    LODWORD(v23) = inited;
  }
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", (unsigned int *)&v24) < 0 )
    {
LABEL_53:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_34;
    }
    switch ( (_DWORD)v24 )
    {
      case 2:
        inited = -2023406815;
        break;
      case 3:
        inited = -2023406814;
        break;
      case 4:
        inited = -2147418094;
        break;
      case 5:
        inited = -2147022986;
        break;
      default:
        goto LABEL_53;
    }
    LODWORD(v23) = inited;
    goto LABEL_53;
  }
LABEL_34:
  if ( inited < 0 && inited != -2147024882 && inited != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      (CCriticalFailureHandler *)v5,
      (int *)&v23,
      L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      0x1342u,
      v18,
      v19);
    return (unsigned int)v23;
  }
  return (unsigned int)inited;
}
