/*
 * XREFs of ?SubscribeToServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800E01B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18003E8F0 (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180095E64 (--4-$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Initialize@ConnectedStandbyHelper@@QEAAJPEAUIWindowDispatcherConnectedStandby@@@Z @ 0x1800E12A8 (-Initialize@ConnectedStandbyHelper@@QEAAJPEAUIWindowDispatcherConnectedStandby@@@Z.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800E6FEC (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_shared@VConnectedStandbyHelper@@$$V@std@@YA?AV?$shared_ptr@VConnectedStandbyHelper@@@0@XZ @ 0x1801608E4 (--$make_shared@VConnectedStandbyHelper@@$$V@std@@YA-AV-$shared_ptr@VConnectedStandbyHelper@@@0@X.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x1805E8BC0 (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall WindowEventDispatcher::SubscribeToServices(WindowEventDispatcher *this, struct IServiceProvider *a2)
{
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  char *v4; // rbx
  unsigned int v5; // ebx
  __int64 v6; // rcx
  HRESULT (__stdcall *v7)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 *v8; // rbx
  unsigned int v9; // ebx
  __int64 v10; // rcx
  HRESULT (__stdcall *v11)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 *v12; // rbx
  __int64 v13; // rcx
  HRESULT (__stdcall *v14)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 *v15; // rbx
  __int64 v16; // rcx
  unsigned int v17; // ebx
  __int64 v18; // rcx
  struct IServiceProviderVtbl *lpVtbl; // rax
  unsigned int v20; // ebx
  __int64 v21; // rcx
  unsigned int v22; // ebx
  __int64 v23; // rcx
  struct IServiceProviderVtbl *v24; // rax
  unsigned int v25; // ebx
  __int64 v26; // rcx
  unsigned int v27; // ebx
  __int64 v28; // rcx
  __int64 *v29; // rax
  __int64 *v30; // rbx
  CCriticalFailureHandler *v31; // rcx
  int v32; // ebx
  int DWORD; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  unsigned __int64 *v41; // [rsp+20h] [rbp-68h]
  unsigned __int64 *v42; // [rsp+20h] [rbp-68h]
  unsigned __int64 *v43; // [rsp+28h] [rbp-60h]
  __int64 v44; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v45[8]; // [rsp+38h] [rbp-50h] BYREF
  std::_Ref_count_base *v46; // [rsp+40h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  __int64 *v48; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v49; // [rsp+98h] [rbp+10h] BYREF
  unsigned int v50; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v51; // [rsp+A8h] [rbp+20h] BYREF

  v48 = (__int64 *)this;
  QueryService = a2->lpVtbl->QueryService;
  v4 = (char *)this + 192;
  wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)this + 24);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))QueryService)(
         a2,
         &SID_ProcessLifetimeManagerControl,
         &GUID_69c083b1_7f6f_490d_9d77_c0219a95b25d,
         v4);
  v49 = v5;
  v6 = v5;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    DWORD = SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v50);
    v6 = v5;
    if ( DWORD >= 0 )
    {
      switch ( v50 )
      {
        case 2u:
          v5 = -2023406815;
          v49 = -2023406815;
          v6 = 2271560481LL;
          break;
        case 3u:
          v5 = -2023406814;
          v49 = -2023406814;
          v6 = 2271560482LL;
          break;
        case 4u:
          v5 = -2147418094;
          v49 = -2147418094;
          v6 = 2147549202LL;
          break;
        case 5u:
          v5 = -2147022986;
          v49 = -2147022986;
          v6 = 2147944310LL;
          break;
      }
    }
    CRVPrivate::cfhImmersiveShellStartup = 1;
  }
  if ( (int)v6 < 0 && (_DWORD)v6 != -2147024882 && (_DWORD)v6 != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      (CCriticalFailureHandler *)v6,
      (int *)&v49,
      L"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      0x54u,
      v41,
      v43);
    v5 = v49;
  }
  if ( (v5 & 0x80000000) != 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x55,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)v5,
      (int)v41);
  v7 = a2->lpVtbl->QueryService;
  v8 = v48;
  wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset(v48 + 25);
  v9 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v7)(
         a2,
         &CLSID_ImmersivePlaybackManager,
         &GUID_1fc98738_e0bf_4cb2_9de2_20ab31b23ce4,
         v8 + 25);
  v49 = v9;
  v10 = v9;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    v35 = SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v50);
    v10 = v9;
    if ( v35 < 0 )
    {
LABEL_34:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_5;
    }
    switch ( v50 )
    {
      case 2u:
        v9 = -2023406815;
        v10 = 2271560481LL;
        break;
      case 3u:
        v9 = -2023406814;
        v10 = 2271560482LL;
        break;
      case 4u:
        v9 = -2147418094;
        v10 = 2147549202LL;
        break;
      case 5u:
        v9 = -2147022986;
        v10 = 2147944310LL;
        break;
      default:
        goto LABEL_34;
    }
    v49 = v9;
    goto LABEL_34;
  }
LABEL_5:
  if ( (int)v10 < 0 && (_DWORD)v10 != -2147024882 && (_DWORD)v10 != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      (CCriticalFailureHandler *)v10,
      (int *)&v49,
      L"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      0x59u,
      v41,
      v43);
    v9 = v49;
  }
  if ( (v9 & 0x80000000) != 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x5A,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)v9,
      (int)v41);
  v11 = a2->lpVtbl->QueryService;
  v12 = v48;
  v13 = v48[26];
  v48[26] = 0LL;
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  ((void (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))v11)(
    a2,
    &SID_VirtualDesktopManager,
    &GUID_b2f925b9_5a0f_4d2e_9f4d_2b1507593c10,
    v12 + 26);
  v14 = a2->lpVtbl->QueryService;
  v15 = v48;
  v16 = v48[27];
  v48[27] = 0LL;
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  v17 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v14)(
          a2,
          &IID_IApplicationPositionPersistence,
          &GUID_f876b69a_7b8e_4f46_864c_a0b0ea3e49c2,
          v15 + 27);
  v49 = v17;
  v18 = v17;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    v36 = SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v50);
    v18 = v17;
    if ( v36 < 0 )
    {
LABEL_36:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_12;
    }
    switch ( v50 )
    {
      case 2u:
        v17 = -2023406815;
        v18 = 2271560481LL;
        break;
      case 3u:
        v17 = -2023406814;
        v18 = 2271560482LL;
        break;
      case 4u:
        v17 = -2147418094;
        v18 = 2147549202LL;
        break;
      case 5u:
        v17 = -2147022986;
        v18 = 2147944310LL;
        break;
      default:
        goto LABEL_36;
    }
    v49 = v17;
    goto LABEL_36;
  }
LABEL_12:
  if ( (int)v18 < 0 && (_DWORD)v18 != -2147024882 && (_DWORD)v18 != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      (CCriticalFailureHandler *)v18,
      (int *)&v49,
      L"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      0x60u,
      v41,
      v43);
    v17 = v49;
  }
  if ( (v17 & 0x80000000) != 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x61,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)v17,
      (int)v41);
  lpVtbl = a2->lpVtbl;
  v51 = 0LL;
  v20 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))lpVtbl->QueryService)(
          a2,
          &IID_IImmersiveSessionIdleDetector,
          &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29,
          &v51);
  v49 = v20;
  v21 = v20;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    v37 = SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v50);
    v21 = v20;
    if ( v37 < 0 )
    {
LABEL_38:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_15;
    }
    switch ( v50 )
    {
      case 2u:
        v20 = -2023406815;
        v21 = 2271560481LL;
        break;
      case 3u:
        v20 = -2023406814;
        v21 = 2271560482LL;
        break;
      case 4u:
        v20 = -2147418094;
        v21 = 2147549202LL;
        break;
      case 5u:
        v20 = -2147022986;
        v21 = 2147944310LL;
        break;
      default:
        goto LABEL_38;
    }
    v49 = v20;
    goto LABEL_38;
  }
LABEL_15:
  if ( (int)v21 < 0 && (_DWORD)v21 != -2147024882 && (_DWORD)v21 != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      (CCriticalFailureHandler *)v21,
      (int *)&v49,
      L"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      0x66u,
      v41,
      v43);
    v20 = v49;
  }
  if ( (v20 & 0x80000000) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x66,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)v20);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v51);
    return v20;
  }
  v22 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, __int64))(*(_QWORD *)v51 + 32LL))(
          v51,
          (unsigned __int64)(v48 + 9) & -(__int64)(v48 != (__int64 *)128),
          (__int64)v48 + 340);
  v49 = v22;
  v23 = v22;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    v38 = SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v50);
    v23 = v22;
    if ( v38 < 0 )
    {
LABEL_40:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_18;
    }
    switch ( v50 )
    {
      case 2u:
        v22 = -2023406815;
        v23 = 2271560481LL;
        break;
      case 3u:
        v22 = -2023406814;
        v23 = 2271560482LL;
        break;
      case 4u:
        v22 = -2147418094;
        v23 = 2147549202LL;
        break;
      case 5u:
        v22 = -2147022986;
        v23 = 2147944310LL;
        break;
      default:
        goto LABEL_40;
    }
    v49 = v22;
    goto LABEL_40;
  }
LABEL_18:
  if ( (int)v23 < 0 && (_DWORD)v23 != -2147024882 && (_DWORD)v23 != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      (CCriticalFailureHandler *)v23,
      (int *)&v49,
      L"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      0x68u,
      v41,
      v43);
    v22 = v49;
  }
  if ( (v22 & 0x80000000) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x68,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)v22);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v51);
    return v22;
  }
  v24 = a2->lpVtbl;
  v44 = 0LL;
  v25 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))v24->QueryService)(
          a2,
          &SID_ImmersiveShellHookService,
          &GUID_914d9b3a_5e53_4e14_bbba_46062acb35a4,
          &v44);
  v49 = v25;
  v26 = v25;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    v39 = SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v50);
    v26 = v25;
    if ( v39 < 0 )
    {
LABEL_42:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_21;
    }
    switch ( v50 )
    {
      case 2u:
        v25 = -2023406815;
        v26 = 2271560481LL;
        break;
      case 3u:
        v25 = -2023406814;
        v26 = 2271560482LL;
        break;
      case 4u:
        v25 = -2147418094;
        v26 = 2147549202LL;
        break;
      case 5u:
        v25 = -2147022986;
        v26 = 2147944310LL;
        break;
      default:
        goto LABEL_42;
    }
    v49 = v25;
    goto LABEL_42;
  }
LABEL_21:
  if ( (int)v26 < 0 && (_DWORD)v26 != -2147024882 && (_DWORD)v26 != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      (CCriticalFailureHandler *)v26,
      (int *)&v49,
      L"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      0x73u,
      v41,
      v43);
    v25 = v49;
  }
  if ( (v25 & 0x80000000) != 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x74,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)v25,
      (int)v41);
  v42 = (unsigned __int64 *)(v48 + 42);
  v27 = (*(__int64 (__fastcall **)(__int64, void *, __int64, unsigned __int64))(*(_QWORD *)v44 + 24LL))(
          v44,
          &unk_180689CE0,
          11LL,
          (unsigned __int64)(v48 - 6) & -(__int64)(v48 != (__int64 *)128));
  v49 = v27;
  v28 = v27;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    v40 = SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v50);
    v28 = v27;
    if ( v40 < 0 )
    {
LABEL_44:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_24;
    }
    switch ( v50 )
    {
      case 2u:
        v27 = -2023406815;
        v28 = 2271560481LL;
        break;
      case 3u:
        v27 = -2023406814;
        v28 = 2271560482LL;
        break;
      case 4u:
        v27 = -2147418094;
        v28 = 2147549202LL;
        break;
      case 5u:
        v27 = -2147022986;
        v28 = 2147944310LL;
        break;
      default:
        goto LABEL_44;
    }
    v49 = v27;
    goto LABEL_44;
  }
LABEL_24:
  if ( (int)v28 < 0 && (_DWORD)v28 != -2147024882 && (_DWORD)v28 != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      (CCriticalFailureHandler *)v28,
      (int *)&v49,
      L"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      0x8Cu,
      v42,
      v43);
    v27 = v49;
  }
  if ( (v27 & 0x80000000) != 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x8D,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)v27,
      (int)v42);
  v29 = (__int64 *)std::make_shared<ConnectedStandbyHelper,>(v45);
  v30 = v48;
  std::shared_ptr<ViewEventRegistration>::operator=(v48 + 28, v29);
  if ( v46 )
    std::_Ref_count_base::_Decref(v46);
  v32 = ConnectedStandbyHelper::Initialize(
          (ConnectedStandbyHelper *)v30[28],
          (struct IWindowDispatcherConnectedStandby *)((unsigned __int64)(v48 - 11) & -(__int64)(v48 != (__int64 *)128)));
  LODWORD(v48) = v32;
  if ( CRVPrivate::cfhImmersiveShellStartup )
    goto LABEL_29;
  if ( (int)SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v49) >= 0 )
  {
    switch ( v49 )
    {
      case 2u:
        v32 = -2023406815;
        break;
      case 3u:
        v32 = -2023406814;
        break;
      case 4u:
        v32 = -2147418094;
        break;
      case 5u:
        v32 = -2147022986;
        break;
      default:
        goto LABEL_46;
    }
    LODWORD(v48) = v32;
  }
LABEL_46:
  CRVPrivate::cfhImmersiveShellStartup = 1;
LABEL_29:
  if ( v32 >= 0 )
    goto LABEL_30;
  if ( v32 != -2147024882 && v32 != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v31,
      (int *)&v48,
      L"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      0x94u,
      v42,
      v43);
    v32 = (int)v48;
  }
  if ( v32 >= 0 )
  {
LABEL_30:
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v44);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v51);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x94,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v32);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v44);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v51);
    return (unsigned int)v32;
  }
}
