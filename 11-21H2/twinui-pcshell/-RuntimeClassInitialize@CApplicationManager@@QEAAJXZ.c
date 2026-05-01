/*
 * XREFs of ?RuntimeClassInitialize@CApplicationManager@@QEAAJXZ @ 0x1800DC650
 * Callers:
 *     ??$MakeAndInitialize@VCApplicationManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180172C2C (--$MakeAndInitialize@VCApplicationManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnkn.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InitializePrivilegedOperationsForIam@PrivilegedOperationsService@@QEAAJPEAUIPrivilegedOperationsConsumer@@@Z @ 0x18006EE10 (-InitializePrivilegedOperationsForIam@PrivilegedOperationsService@@QEAAJPEAUIPrivilegedOperation.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x1800B0B20 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ??$MakeAndInitialize@VCIAMSpecialWindow@@V1@AEBQEBUSPECIAL_WINDOW_INIT_DATA@@@Details@WRL@Microsoft@@YAJPEAPEAVCIAMSpecialWindow@@AEBQEBUSPECIAL_WINDOW_INIT_DATA@@@Z @ 0x1800D3FF0 (--$MakeAndInitialize@VCIAMSpecialWindow@@V1@AEBQEBUSPECIAL_WINDOW_INIT_DATA@@@Details@WRL@Micros.c)
 *     ?_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ @ 0x1800DCE30 (-_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800E6FEC (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ @ 0x180103744 (-InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ.c)
 *     ??0CIAMGlobals@@QEAA@XZ @ 0x1801721E8 (--0CIAMGlobals@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _Init_thread_footer @ 0x180189828 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180189890 (_Init_thread_header.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x1805E8BC0 (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::RuntimeClassInitialize(CApplicationManager *this)
{
  CIAMSpecialWindowBase *v2; // rax
  RTL_SRWLOCK *v3; // rax
  signed int inited; // ebx
  __int64 v5; // rcx
  int v6; // eax
  HWND v7; // rsi
  CIAMSpecialWindowBase *v8; // rax
  int DWORD; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  __int64 v14; // r9
  __int64 v15; // rdx
  unsigned int v16; // eax
  unsigned __int64 *v17; // [rsp+20h] [rbp-30h]
  unsigned __int64 *v18; // [rsp+28h] [rbp-28h]
  _QWORD v19[2]; // [rsp+30h] [rbp-20h] BYREF
  int v20; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  CIAMSpecialWindowBase *v22; // [rsp+98h] [rbp+48h] BYREF
  const struct SPECIAL_WINDOW_INIT_DATA *v23; // [rsp+A0h] [rbp+50h] BYREF

  v2 = (CIAMSpecialWindowBase *)operator new(0xB8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v22 = v2;
  if ( v2 )
    v3 = (RTL_SRWLOCK *)CIAMGlobals::CIAMGlobals(v2);
  else
    v3 = 0LL;
  CApplicationManagerUtility::g_pIAMGlobals = v3;
  inited = v3 == 0LL ? 0x8007000E : 0;
  LODWORD(v22) = inited;
  v5 = (unsigned int)inited;
  if ( CRVPrivate::cfhImmersiveShellStartup )
    goto LABEL_4;
  DWORD = SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", (unsigned int *)&v23);
  v5 = (unsigned int)inited;
  if ( DWORD >= 0 )
  {
    if ( (_DWORD)v23 == 2 )
    {
      inited = -2023406815;
      v5 = 2271560481LL;
    }
    else if ( (_DWORD)v23 == 3 )
    {
      inited = -2023406814;
      v5 = 2271560482LL;
    }
    else
    {
      if ( (_DWORD)v23 != 4 )
      {
        if ( (_DWORD)v23 == 5 )
        {
          inited = -2147022986;
          LODWORD(v22) = -2147022986;
          v5 = 2147944310LL;
        }
        goto LABEL_40;
      }
      inited = -2147418094;
      v5 = 2147549202LL;
    }
    LODWORD(v22) = inited;
  }
LABEL_40:
  CRVPrivate::cfhImmersiveShellStartup = 1;
LABEL_4:
  if ( (int)v5 >= 0 )
    goto LABEL_5;
  if ( (_DWORD)v5 != -2147024882 )
  {
    CCriticalFailureHandler::HandleFailure(
      (CCriticalFailureHandler *)v5,
      (int *)&v22,
      L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      0x132Du,
      v17,
      v18);
    inited = (int)v22;
  }
  if ( inited >= 0 )
  {
LABEL_5:
    if ( PrivilegedOperationsService::s_this )
    {
      v6 = PrivilegedOperationsService::InitializePrivilegedOperationsForIam(
             (CApplicationManager *)((char *)this + 320),
             (struct IPrivilegedOperationsConsumer *)(((unsigned __int64)this + 320) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
      inited = v6;
      if ( v6 >= 0 )
        goto LABEL_7;
      v14 = (unsigned int)v6;
      v15 = 822LL;
    }
    else
    {
      inited = -2147467259;
      v14 = 2147500037LL;
      v15 = 821LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
      (const char *)v14);
LABEL_7:
    LODWORD(v22) = inited;
    v5 = (unsigned int)inited;
    if ( CRVPrivate::cfhImmersiveShellStartup )
    {
LABEL_8:
      if ( (int)v5 < 0 && (_DWORD)v5 != -2147024882 && (_DWORD)v5 != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          (CCriticalFailureHandler *)v5,
          (int *)&v22,
          L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          0x1330u,
          v17,
          v18);
        inited = (int)v22;
      }
      goto LABEL_9;
    }
    v11 = SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", (unsigned int *)&v23);
    v5 = (unsigned int)inited;
    if ( v11 >= 0 )
    {
      if ( (_DWORD)v23 == 2 )
      {
        inited = -2023406815;
        v5 = 2271560481LL;
      }
      else if ( (_DWORD)v23 == 3 )
      {
        inited = -2023406814;
        v5 = 2271560482LL;
      }
      else
      {
        if ( (_DWORD)v23 != 4 )
        {
          if ( (_DWORD)v23 == 5 )
          {
            inited = -2147022986;
            LODWORD(v22) = -2147022986;
            v5 = 2147944310LL;
          }
          goto LABEL_42;
        }
        inited = -2147418094;
        v5 = 2147549202LL;
      }
      LODWORD(v22) = inited;
    }
LABEL_42:
    CRVPrivate::cfhImmersiveShellStartup = 1;
    goto LABEL_8;
  }
LABEL_9:
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( (int)SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", (unsigned int *)&v23) < 0 )
    {
LABEL_44:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_10;
    }
    switch ( (_DWORD)v23 )
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
        goto LABEL_44;
    }
    LODWORD(v22) = inited;
    goto LABEL_44;
  }
LABEL_10:
  if ( inited >= 0 )
    goto LABEL_11;
  if ( inited != -2147024882 && inited != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      (CCriticalFailureHandler *)v5,
      (int *)&v22,
      L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      0x1333u,
      v17,
      v18);
    inited = (int)v22;
  }
  if ( inited >= 0 )
  {
LABEL_11:
    inited = CObjectWithThreadUseDetection::InitApartmentId((CApplicationManager *)((char *)this + 392));
    LODWORD(v22) = inited;
  }
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( (int)SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", (unsigned int *)&v23) < 0 )
    {
LABEL_46:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_13;
    }
    switch ( (_DWORD)v23 )
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
        goto LABEL_46;
    }
    LODWORD(v22) = inited;
    goto LABEL_46;
  }
LABEL_13:
  if ( inited < 0 )
  {
    if ( inited != -2147024882 && inited != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        (CCriticalFailureHandler *)v5,
        (int *)&v22,
        L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        0x133Bu,
        v17,
        v18);
      inited = (int)v22;
    }
    if ( inited < 0 )
      goto LABEL_27;
  }
  v19[0] = L"ApplicationManager_DesktopShellWindow";
  v19[1] = ((unsigned __int64)this + 200) & -(__int64)(this != 0LL);
  v20 = 1;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 94);
  v23 = (const struct SPECIAL_WINDOW_INIT_DATA *)v19;
  *((_QWORD *)this + 94) = 0LL;
  v22 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v22);
  inited = Microsoft::WRL::Details::MakeAndInitialize<CIAMSpecialWindow,CIAMSpecialWindow,SPECIAL_WINDOW_INIT_DATA const * const &>(
             &v22,
             &v23);
  if ( inited >= 0 )
    inited = (**(__int64 (__fastcall ***)(CIAMSpecialWindowBase *, GUID *, char *))v22)(
               v22,
               &GUID_fdcff85f_e2e4_4465_a2c5_810d6ec0ffee,
               (char *)this + 752);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v22);
  LODWORD(v22) = inited;
  v5 = (unsigned int)inited;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    v12 = SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", (unsigned int *)&v23);
    v5 = (unsigned int)inited;
    if ( v12 >= 0 )
    {
      v5 = (unsigned int)inited;
      if ( (_DWORD)v23 == 2 )
      {
        inited = -2023406815;
        v5 = 2271560481LL;
      }
      else
      {
        if ( (_DWORD)v23 != 3 )
        {
          if ( (_DWORD)v23 == 4 )
          {
            v5 = 2147549202LL;
            inited = -2147418094;
            LODWORD(v22) = -2147418094;
          }
          else if ( (_DWORD)v23 == 5 )
          {
            inited = -2147022986;
            LODWORD(v22) = -2147022986;
            v5 = 2147944310LL;
          }
          goto LABEL_48;
        }
        inited = -2023406814;
        v5 = 2271560482LL;
      }
      LODWORD(v22) = inited;
    }
LABEL_48:
    CRVPrivate::cfhImmersiveShellStartup = 1;
  }
  if ( (int)v5 < 0 && (_DWORD)v5 != -2147024882 && (_DWORD)v5 != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      (CCriticalFailureHandler *)v5,
      (int *)&v22,
      L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      0x134Au,
      v17,
      v18);
    inited = (int)v22;
  }
  if ( inited >= 0 )
  {
    v7 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 94) + 24LL))(*((_QWORD *)this + 94));
    (*(void (__fastcall **)(PVOID, HWND, __int64))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[17].Ptr + 24LL))(
      CApplicationManagerUtility::g_pIAMGlobals[17].Ptr,
      v7,
      1LL);
    v8 = (CIAMSpecialWindowBase *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
    v22 = v8;
    if ( v8 )
    {
      *(_DWORD *)v8 = 1;
      *((_QWORD *)v8 + 1) = 0LL;
      *((_QWORD *)v8 + 2) = v7;
      *((_QWORD *)v8 + 3) = 0LL;
      *((_QWORD *)v8 + 4) = 0LL;
      *((_QWORD *)v8 + 5) = 0LL;
      *((_QWORD *)v8 + 6) = 0LL;
      *((_DWORD *)v8 + 14) = 0;
    }
    else
    {
      v8 = 0LL;
    }
    *((_QWORD *)this + 100) = v8;
    inited = v8 == 0LL ? 0x8007000E : 0;
    LODWORD(v22) = inited;
    v5 = (unsigned int)inited;
    if ( CRVPrivate::cfhImmersiveShellStartup )
      goto LABEL_22;
    v13 = SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", (unsigned int *)&v23);
    v5 = (unsigned int)inited;
    if ( v13 < 0 )
    {
LABEL_50:
      CRVPrivate::cfhImmersiveShellStartup = 1;
LABEL_22:
      if ( (int)v5 >= 0 )
        goto LABEL_23;
      if ( (_DWORD)v5 != -2147024882 )
      {
        CCriticalFailureHandler::HandleFailure(
          (CCriticalFailureHandler *)v5,
          (int *)&v22,
          L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          0x1353u,
          v17,
          v18);
        inited = (int)v22;
      }
      if ( inited >= 0 )
      {
LABEL_23:
        CApplicationManager::_uMsgWindowServiceRegister = RegisterWindowMessageW(L"WindowServiceRegistered");
        if ( CApplicationManager::_uMsgWindowServiceRegister )
        {
          CApplicationManager::_uMsgWindowServiceUnregister = RegisterWindowMessageW(L"WindowServiceUnregistered");
          if ( CApplicationManager::_uMsgWindowServiceUnregister )
          {
            ChangeWindowMessageFilterEx(v7, CApplicationManager::_uMsgWindowServiceRegister, 1u, 0LL);
            ChangeWindowMessageFilterEx(v7, CApplicationManager::_uMsgWindowServiceUnregister, 1u, 0LL);
          }
        }
        SetPropW(v7, L"AllowConsentToStealFocus", HANDLE_FLAG_INHERIT);
      }
      goto LABEL_27;
    }
    if ( (_DWORD)v23 == 2 )
    {
      inited = -2023406815;
      v5 = 2271560481LL;
    }
    else
    {
      if ( (_DWORD)v23 != 3 )
      {
        if ( (_DWORD)v23 == 4 )
        {
          v16 = -2147418094;
        }
        else
        {
          if ( (_DWORD)v23 != 5 )
            goto LABEL_50;
          v16 = -2147022986;
        }
        inited = v16;
        LODWORD(v22) = v16;
        v5 = v16;
        goto LABEL_50;
      }
      inited = -2023406814;
      v5 = 2271560482LL;
    }
    LODWORD(v22) = inited;
    goto LABEL_50;
  }
LABEL_27:
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( (int)SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", (unsigned int *)&v23) < 0 )
    {
LABEL_52:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_28;
    }
    switch ( (_DWORD)v23 )
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
        goto LABEL_52;
    }
    LODWORD(v22) = inited;
    goto LABEL_52;
  }
LABEL_28:
  if ( inited >= 0 )
    goto LABEL_29;
  if ( inited != -2147024882 && inited != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      (CCriticalFailureHandler *)v5,
      (int *)&v22,
      L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      0x1373u,
      v17,
      v18);
    inited = (int)v22;
  }
  if ( inited >= 0 )
  {
LABEL_29:
    inited = CApplicationManager::_InitializeIAMSubcomponents((IUnknown *)this);
    LODWORD(v22) = inited;
  }
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( (int)SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", (unsigned int *)&v23) < 0 )
    {
LABEL_54:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_31;
    }
    switch ( (_DWORD)v23 )
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
        goto LABEL_54;
    }
    LODWORD(v22) = inited;
    goto LABEL_54;
  }
LABEL_31:
  if ( inited >= 0 )
    goto LABEL_183;
  if ( inited != -2147024882 && inited != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      (CCriticalFailureHandler *)v5,
      (int *)&v22,
      L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      0x1379u,
      v17,
      v18);
    inited = (int)v22;
  }
  if ( inited >= 0 )
  {
LABEL_183:
    if ( dword_1807B4BC0 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                     + 16LL) )
    {
      Init_thread_header(&dword_1807B4BC0);
      if ( dword_1807B4BC0 == -1 )
      {
        xmmword_1807B34D0 = IID_IImmersiveApplicationManager;
        xmmword_1807B34E0 = 0LL;
        xmmword_1807B34F0 = *(_OWORD *)&SID_ImmersiveApplicationArrayService.Revision;
        xmmword_1807B3500 = 0LL;
        xmmword_1807B3510 = (__int128)IID_IImmersiveApplicationNotificationService;
        xmmword_1807B3520 = 0LL;
        xmmword_1807B3530 = (__int128)IID_IRequestTrustedComponentForegroundControlInitialization;
        xmmword_1807B3540 = 0LL;
        xmmword_1807B3550 = (__int128)IID_IImmersiveApplicationVisibilityOverride;
        xmmword_1807B3560 = 0LL;
        xmmword_1807B3570 = (__int128)IID_IAppSwitchingTestability;
        xmmword_1807B3580 = 0LL;
        xmmword_1807B3590 = xmmword_180699D08;
        xmmword_1807B35A0 = 0LL;
        xmmword_1807B35B0 = xmmword_180699CB8;
        xmmword_1807B35C0 = 0LL;
        xmmword_1807B35D0 = xmmword_180699D78;
        xmmword_1807B35E0 = 0LL;
        xmmword_1807B35F0 = (__int128)IID_IClassicWindowManager;
        qword_1807B3600 = *((_QWORD *)this + 67);
        qword_1807B3608 = 0LL;
        xmmword_1807B3610 = (__int128)IID_IImmersiveSystemMode;
        qword_1807B3620 = *((_QWORD *)this + 66);
        qword_1807B3628 = 0LL;
        xmmword_1807B3630 = (__int128)IID_IActiveZBand;
        qword_1807B3640 = *((_QWORD *)this + 66);
        qword_1807B3648 = 0LL;
        xmmword_1807B3650 = *(_OWORD *)&SID_GlobalDesktopVisibilityService.Revision;
        qword_1807B3660 = *((_QWORD *)this + 66);
        qword_1807B3668 = 0LL;
        xmmword_1807B3670 = (__int128)IID_IImmersiveCharmsWindowManager;
        qword_1807B3680 = *((_QWORD *)this + 74);
        qword_1807B3688 = 0LL;
        xmmword_1807B3690 = (__int128)IID_IAppViewManager;
        qword_1807B36A0 = *((_QWORD *)this + 75);
        qword_1807B36A8 = 0LL;
        xmmword_1807B36B0 = (__int128)GUID_4b2a4af0_50dc_4266_b0ae_1d4013d069b7;
        qword_1807B36C0 = *((_QWORD *)this + 75);
        qword_1807B36C8 = 0LL;
        xmmword_1807B36D0 = (__int128)IID_IRealmActivationHistory;
        qword_1807B36E0 = *((_QWORD *)this + 65);
        qword_1807B36E8 = 0LL;
        xmmword_1807B36F0 = (__int128)GUID_d8c26227_b75e_4d8b_ac8c_c463a34ed11e;
        qword_1807B3700 = *((_QWORD *)this + 77);
        qword_1807B3708 = 0LL;
        xmmword_1807B3710 = (__int128)GUID_6fdc29fe_42bd_4dc0_b783_b7854dcba425;
        qword_1807B3720 = *((_QWORD *)this + 68);
        qword_1807B3728 = 0LL;
        Init_thread_footer(&dword_1807B4BC0);
      }
    }
    inited = CImmersiveShellComponent::RegisterServiceInformation(
               (CApplicationManager *)((char *)this + 88),
               (const struct CImmersiveShellComponent::ISC_SERVICE *)&xmmword_1807B34D0,
               0x13uLL);
    LODWORD(v22) = inited;
  }
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( (int)SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", (unsigned int *)&v23) < 0 )
    {
LABEL_56:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_37;
    }
    switch ( (_DWORD)v23 )
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
        goto LABEL_56;
    }
    LODWORD(v22) = inited;
    goto LABEL_56;
  }
LABEL_37:
  if ( inited < 0 && inited != -2147024882 && inited != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      (CCriticalFailureHandler *)v5,
      (int *)&v22,
      L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      0x1396u,
      v17,
      v18);
    return (unsigned int)v22;
  }
  return (unsigned int)inited;
}
