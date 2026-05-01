/*
 * XREFs of ?SubscribeToServices@UwpWindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x1803F1710
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
__int64 __fastcall UwpWindowEventDispatcher::SubscribeToServices(
        UwpWindowEventDispatcher *this,
        struct IServiceProvider *a2)
{
  __int64 (*QueryService)(void); // rdi
  unsigned int v3; // ebx
  __int64 v4; // rcx
  LSTATUS DWORD; // eax
  HRESULT (__stdcall *v6)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 *v7; // rbx
  unsigned int v8; // ebx
  __int64 v9; // rcx
  LSTATUS v10; // eax
  HRESULT (__stdcall *v11)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 *v12; // rbx
  __int64 v13; // rcx
  unsigned int v14; // ebx
  __int64 v15; // rcx
  LSTATUS v16; // eax
  HRESULT (__stdcall *v17)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 *v18; // rbx
  __int64 v19; // rcx
  unsigned int v20; // ebx
  __int64 v21; // rcx
  LSTATUS v22; // eax
  struct IServiceProvider *v23; // rdi
  struct IServiceProviderVtbl *lpVtbl; // rax
  unsigned int v25; // ebx
  __int64 v26; // rcx
  LSTATUS v27; // eax
  const char *v28; // r9
  __int64 result; // rax
  unsigned int v30; // ebx
  __int64 v31; // rcx
  LSTATUS v32; // eax
  struct IServiceProviderVtbl *v33; // rax
  unsigned int v34; // ebx
  __int64 v35; // rcx
  LSTATUS v36; // eax
  __int64 *v37; // rdi
  unsigned int v38; // ebx
  __int64 v39; // rcx
  LSTATUS v40; // eax
  __int64 *v41; // rax
  __int64 *v42; // rbx
  CCriticalFailureHandler *v43; // rcx
  int v44; // ebx
  unsigned __int64 *v45; // [rsp+20h] [rbp-68h]
  unsigned __int64 *v46; // [rsp+20h] [rbp-68h]
  unsigned __int64 *v47; // [rsp+28h] [rbp-60h]
  __int64 v48; // [rsp+30h] [rbp-58h] BYREF
  __int64 v49; // [rsp+38h] [rbp-50h] BYREF
  __int64 v50; // [rsp+40h] [rbp-48h] BYREF
  std::_Ref_count_base *v51; // [rsp+48h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  __int64 *v53; // [rsp+90h] [rbp+8h] BYREF
  struct IServiceProvider *v54; // [rsp+98h] [rbp+10h] BYREF
  unsigned int v55; // [rsp+A0h] [rbp+18h] BYREF
  unsigned int v56; // [rsp+A8h] [rbp+20h] BYREF

  v54 = a2;
  v53 = (__int64 *)this;
  QueryService = (__int64 (*)(void))a2->lpVtbl->QueryService;
  wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)this + 24);
  try
  {
    v3 = QueryService();
    v55 = v3;
    v4 = v3;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      DWORD = SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v56);
      v4 = v3;
      if ( DWORD >= 0 )
      {
        switch ( v56 )
        {
          case 2u:
            v3 = -2023406815;
            v55 = -2023406815;
            v4 = 2271560481LL;
            break;
          case 3u:
            v3 = -2023406814;
            v55 = -2023406814;
            v4 = 2271560482LL;
            break;
          case 4u:
            v3 = -2147418094;
            v55 = -2147418094;
            v4 = 2147549202LL;
            break;
          case 5u:
            v3 = -2147022986;
            v55 = -2147022986;
            v4 = 2147944310LL;
            break;
        }
      }
      CRVPrivate::cfhImmersiveShellStartup = 1;
    }
    if ( (int)v4 < 0 && (_DWORD)v4 != -2147024882 && (_DWORD)v4 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        (CCriticalFailureHandler *)v4,
        (int *)&v55,
        L"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        0x45u,
        v45,
        v47);
      v3 = v55;
    }
    if ( (v3 & 0x80000000) != 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x45,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)v3,
        (int)v45);
    v6 = v54->lpVtbl->QueryService;
    v7 = v53;
    wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset(v53 + 25);
    v8 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v6)(
           v54,
           &CLSID_ImmersivePlaybackManager,
           &GUID_1fc98738_e0bf_4cb2_9de2_20ab31b23ce4,
           v7 + 25);
    v55 = v8;
    v9 = v8;
    if ( CRVPrivate::cfhImmersiveShellStartup )
    {
LABEL_31:
      if ( (int)v9 < 0 && (_DWORD)v9 != -2147024882 && (_DWORD)v9 != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          (CCriticalFailureHandler *)v9,
          (int *)&v55,
          L"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
          0x48u,
          v45,
          v47);
        v8 = v55;
      }
      if ( (v8 & 0x80000000) != 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x48,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
          (const char *)v8,
          (int)v45);
      v11 = v54->lpVtbl->QueryService;
      v12 = v53;
      v13 = v53[26];
      v53[26] = 0LL;
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      v14 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))v11)(
              v54,
              &SID_VirtualDesktopManager,
              &GUID_b2f925b9_5a0f_4d2e_9f4d_2b1507593c10,
              v12 + 26);
      v55 = v14;
      v15 = v14;
      if ( CRVPrivate::cfhImmersiveShellStartup )
      {
LABEL_51:
        if ( (int)v15 < 0 && (_DWORD)v15 != -2147024882 && (_DWORD)v15 != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            (CCriticalFailureHandler *)v15,
            (int *)&v55,
            L"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
            0x4Bu,
            v45,
            v47);
          v14 = v55;
        }
        if ( (v14 & 0x80000000) != 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x4B,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
            (const char *)v14,
            (int)v45);
        v17 = v54->lpVtbl->QueryService;
        v18 = v53;
        v19 = v53[27];
        v53[27] = 0LL;
        if ( v19 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
        v20 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v17)(
                v54,
                &IID_IApplicationPositionPersistence,
                &GUID_f876b69a_7b8e_4f46_864c_a0b0ea3e49c2,
                v18 + 27);
        v55 = v20;
        v21 = v20;
        if ( CRVPrivate::cfhImmersiveShellStartup )
        {
LABEL_71:
          if ( (int)v21 < 0 && (_DWORD)v21 != -2147024882 && (_DWORD)v21 != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              (CCriticalFailureHandler *)v21,
              (int *)&v55,
              L"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
              0x4Du,
              v45,
              v47);
            v20 = v55;
          }
          if ( (v20 & 0x80000000) != 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0x4D,
              (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
              (const char *)v20,
              (int)v45);
          v23 = v54;
          lpVtbl = v54->lpVtbl;
          v48 = 0LL;
          v25 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))lpVtbl->QueryService)(
                  v54,
                  &IID_IImmersiveSessionIdleDetector,
                  &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29,
                  &v48);
          LODWORD(v54) = v25;
          v26 = v25;
          if ( CRVPrivate::cfhImmersiveShellStartup )
          {
LABEL_89:
            if ( (int)v26 < 0 && (_DWORD)v26 != -2147024882 && (_DWORD)v26 != -2144862209 )
            {
              CCriticalFailureHandler::HandleFailure(
                (CCriticalFailureHandler *)v26,
                (int *)&v54,
                L"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                0x52u,
                v45,
                v47);
              v25 = (unsigned int)v54;
            }
            if ( (v25 & 0x80000000) != 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x52,
                (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                (const char *)v25);
              wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v48);
              return v25;
            }
            v30 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, __int64))(*(_QWORD *)v48 + 32LL))(
                    v48,
                    (unsigned __int64)(v53 + 9) & -(__int64)(v53 != (__int64 *)128),
                    (__int64)v53 + 340);
            LODWORD(v54) = v30;
            v31 = v30;
            if ( CRVPrivate::cfhImmersiveShellStartup )
            {
LABEL_107:
              if ( (int)v31 < 0 && (_DWORD)v31 != -2147024882 && (_DWORD)v31 != -2144862209 )
              {
                CCriticalFailureHandler::HandleFailure(
                  (CCriticalFailureHandler *)v31,
                  (int *)&v54,
                  L"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                  0x54u,
                  v45,
                  v47);
                v30 = (unsigned int)v54;
              }
              if ( (v30 & 0x80000000) != 0 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x54,
                  (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                  (const char *)v30);
                wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v48);
                return v30;
              }
              v33 = v23->lpVtbl;
              v49 = 0LL;
              v34 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))v33->QueryService)(
                      v23,
                      &SID_ImmersiveShellHookService,
                      &GUID_914d9b3a_5e53_4e14_bbba_46062acb35a4,
                      &v49);
              LODWORD(v54) = v34;
              v35 = v34;
              if ( CRVPrivate::cfhImmersiveShellStartup )
              {
LABEL_125:
                if ( (int)v35 < 0 && (_DWORD)v35 != -2147024882 && (_DWORD)v35 != -2144862209 )
                {
                  CCriticalFailureHandler::HandleFailure(
                    (CCriticalFailureHandler *)v35,
                    (int *)&v54,
                    L"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                    0x5Eu,
                    v45,
                    v47);
                  v34 = (unsigned int)v54;
                }
                if ( (v34 & 0x80000000) != 0 )
                  wil::details::in1diag3::Throw_Hr(
                    retaddr,
                    (void *)0x5E,
                    (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                    (const char *)v34,
                    (int)v45);
                v37 = v53 - 16;
                v46 = (unsigned __int64 *)(v53 + 42);
                v38 = (*(__int64 (__fastcall **)(__int64, void *, __int64, unsigned __int64))(*(_QWORD *)v49 + 24LL))(
                        v49,
                        &unk_1806E1E50,
                        11LL,
                        (unsigned __int64)(v53 - 6) & -(__int64)(v53 != (__int64 *)128));
                LODWORD(v54) = v38;
                v39 = v38;
                if ( CRVPrivate::cfhImmersiveShellStartup )
                {
LABEL_143:
                  if ( (int)v39 < 0 && (_DWORD)v39 != -2147024882 && (_DWORD)v39 != -2144862209 )
                  {
                    CCriticalFailureHandler::HandleFailure(
                      (CCriticalFailureHandler *)v39,
                      (int *)&v54,
                      L"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                      0x71u,
                      v46,
                      v47);
                    v38 = (unsigned int)v54;
                  }
                  if ( (v38 & 0x80000000) != 0 )
                    wil::details::in1diag3::Throw_Hr(
                      retaddr,
                      (void *)0x71,
                      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                      (const char *)v38,
                      (int)v46);
                  v41 = std::make_shared<ConnectedStandbyHelper,>(&v50);
                  v42 = v53;
                  std::shared_ptr<ViewEventRegistration>::operator=(v53 + 28, v41);
                  if ( v51 )
                    std::_Ref_count_base::_Decref(v51);
                  v44 = ConnectedStandbyHelper::Initialize(
                          (ConnectedStandbyHelper *)v42[28],
                          (struct IWindowDispatcherConnectedStandby *)((unsigned __int64)(v53 - 11) & -(__int64)(v37 != 0LL)));
                  LODWORD(v54) = v44;
                  if ( CRVPrivate::cfhImmersiveShellStartup )
                    goto LABEL_163;
                  if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", (unsigned int *)&v53) >= 0 )
                  {
                    switch ( (_DWORD)v53 )
                    {
                      case 2:
                        v44 = -2023406815;
                        goto LABEL_161;
                      case 3:
                        v44 = -2023406814;
                        goto LABEL_161;
                      case 4:
                        v44 = -2147418094;
                        goto LABEL_161;
                      case 5:
                        v44 = -2147022986;
LABEL_161:
                        LODWORD(v54) = v44;
                        break;
                    }
                  }
                  CRVPrivate::cfhImmersiveShellStartup = 1;
LABEL_163:
                  if ( v44 >= 0 )
                    goto LABEL_169;
                  if ( v44 != -2147024882 && v44 != -2144862209 )
                  {
                    CCriticalFailureHandler::HandleFailure(
                      v43,
                      (int *)&v54,
                      L"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                      0x74u,
                      v46,
                      v47);
                    v44 = (int)v54;
                  }
                  if ( v44 >= 0 )
                  {
LABEL_169:
                    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v49);
                    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v48);
                    return 0LL;
                  }
                  else
                  {
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0x74,
                      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                      (const char *)(unsigned int)v44);
                    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v49);
                    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v48);
                    return (unsigned int)v44;
                  }
                }
                v40 = SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v55);
                v39 = v38;
                if ( v40 >= 0 )
                {
                  switch ( v55 )
                  {
                    case 2u:
                      v38 = -2023406815;
                      v39 = 2271560481LL;
                      goto LABEL_141;
                    case 3u:
                      v38 = -2023406814;
                      v39 = 2271560482LL;
                      goto LABEL_141;
                    case 4u:
                      v38 = -2147418094;
                      v39 = 2147549202LL;
                      goto LABEL_141;
                    case 5u:
                      v38 = -2147022986;
                      v39 = 2147944310LL;
LABEL_141:
                      LODWORD(v54) = v38;
                      break;
                  }
                }
                CRVPrivate::cfhImmersiveShellStartup = 1;
                goto LABEL_143;
              }
              v36 = SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v55);
              v35 = v34;
              if ( v36 >= 0 )
              {
                switch ( v55 )
                {
                  case 2u:
                    v34 = -2023406815;
                    v35 = 2271560481LL;
                    goto LABEL_123;
                  case 3u:
                    v34 = -2023406814;
                    v35 = 2271560482LL;
                    goto LABEL_123;
                  case 4u:
                    v34 = -2147418094;
                    v35 = 2147549202LL;
                    goto LABEL_123;
                  case 5u:
                    v34 = -2147022986;
                    v35 = 2147944310LL;
LABEL_123:
                    LODWORD(v54) = v34;
                    break;
                }
              }
              CRVPrivate::cfhImmersiveShellStartup = 1;
              goto LABEL_125;
            }
            v32 = SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v55);
            v31 = v30;
            if ( v32 >= 0 )
            {
              switch ( v55 )
              {
                case 2u:
                  v30 = -2023406815;
                  v31 = 2271560481LL;
                  goto LABEL_105;
                case 3u:
                  v30 = -2023406814;
                  v31 = 2271560482LL;
                  goto LABEL_105;
                case 4u:
                  v30 = -2147418094;
                  v31 = 2147549202LL;
                  goto LABEL_105;
                case 5u:
                  v30 = -2147022986;
                  v31 = 2147944310LL;
LABEL_105:
                  LODWORD(v54) = v30;
                  break;
              }
            }
            CRVPrivate::cfhImmersiveShellStartup = 1;
            goto LABEL_107;
          }
          v27 = SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v55);
          v26 = v25;
          if ( v27 >= 0 )
          {
            switch ( v55 )
            {
              case 2u:
                v25 = -2023406815;
                v26 = 2271560481LL;
                goto LABEL_87;
              case 3u:
                v25 = -2023406814;
                v26 = 2271560482LL;
                goto LABEL_87;
              case 4u:
                v25 = -2147418094;
                v26 = 2147549202LL;
                goto LABEL_87;
              case 5u:
                v25 = -2147022986;
                v26 = 2147944310LL;
LABEL_87:
                LODWORD(v54) = v25;
                break;
            }
          }
          CRVPrivate::cfhImmersiveShellStartup = 1;
          goto LABEL_89;
        }
        v22 = SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v56);
        v21 = v20;
        if ( v22 >= 0 )
        {
          switch ( v56 )
          {
            case 2u:
              v20 = -2023406815;
              v21 = 2271560481LL;
              goto LABEL_69;
            case 3u:
              v20 = -2023406814;
              v21 = 2271560482LL;
              goto LABEL_69;
            case 4u:
              v20 = -2147418094;
              v21 = 2147549202LL;
              goto LABEL_69;
            case 5u:
              v20 = -2147022986;
              v21 = 2147944310LL;
LABEL_69:
              v55 = v20;
              break;
          }
        }
        CRVPrivate::cfhImmersiveShellStartup = 1;
        goto LABEL_71;
      }
      v16 = SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v56);
      v15 = v14;
      if ( v16 >= 0 )
      {
        switch ( v56 )
        {
          case 2u:
            v14 = -2023406815;
            v15 = 2271560481LL;
            goto LABEL_49;
          case 3u:
            v14 = -2023406814;
            v15 = 2271560482LL;
            goto LABEL_49;
          case 4u:
            v14 = -2147418094;
            v15 = 2147549202LL;
            goto LABEL_49;
          case 5u:
            v14 = -2147022986;
            v15 = 2147944310LL;
LABEL_49:
            v55 = v14;
            break;
        }
      }
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_51;
    }
    v10 = SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v56);
    v9 = v8;
    if ( v10 >= 0 )
    {
      switch ( v56 )
      {
        case 2u:
          v8 = -2023406815;
          v9 = 2271560481LL;
          goto LABEL_29;
        case 3u:
          v8 = -2023406814;
          v9 = 2271560482LL;
          goto LABEL_29;
        case 4u:
          v8 = -2147418094;
          v9 = 2147549202LL;
          goto LABEL_29;
        case 5u:
          v8 = -2147022986;
          v9 = 2147944310LL;
LABEL_29:
          v55 = v8;
          break;
      }
    }
    CRVPrivate::cfhImmersiveShellStartup = 1;
    goto LABEL_31;
  }
  catch ( ... )
  {
    LODWORD(v54) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x78,
                     (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                     v28);
    return (unsigned int)v54;
  }
  return result;
}
