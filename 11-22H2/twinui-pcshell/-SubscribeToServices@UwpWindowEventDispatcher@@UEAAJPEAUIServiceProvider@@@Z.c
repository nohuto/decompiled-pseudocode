/*
 * XREFs of ?SubscribeToServices@UwpWindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x180129BA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18008D264 (--4-$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Initialize@ConnectedStandbyHelper@@QEAAJPEAUIWindowDispatcherConnectedStandby@@@Z @ 0x1800A26DC (-Initialize@ConnectedStandbyHelper@@QEAAJPEAUIWindowDispatcherConnectedStandby@@@Z.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800A8AF0 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800D4E4C (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$make_shared@VConnectedStandbyHelper@@$$V@std@@YA?AV?$shared_ptr@VConnectedStandbyHelper@@@0@XZ @ 0x18012A724 (--$make_shared@VConnectedStandbyHelper@@$$V@std@@YA-AV-$shared_ptr@VConnectedStandbyHelper@@@0@X.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x18038CA80 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x18073D440 (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall UwpWindowEventDispatcher::SubscribeToServices(
        UwpWindowEventDispatcher *this,
        struct IServiceProvider *a2)
{
  __int64 (*QueryService)(void); // rdi
  unsigned int v4; // ebx
  __int64 v5; // rcx
  LSTATUS DWORD; // eax
  HRESULT (__stdcall *v7)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 *v8; // rbx
  unsigned int v9; // ebx
  __int64 v10; // rcx
  LSTATUS v11; // eax
  HRESULT (__stdcall *v12)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 *v13; // rbx
  __int64 v14; // rcx
  HRESULT (__stdcall *v15)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 *v16; // rbx
  __int64 v17; // rcx
  unsigned int v18; // ebx
  __int64 v19; // rcx
  LSTATUS v20; // eax
  HRESULT (__stdcall *v21)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 *v22; // rbx
  unsigned int v23; // ebx
  __int64 v24; // rcx
  LSTATUS v25; // eax
  struct IServiceProviderVtbl *lpVtbl; // rax
  unsigned int v27; // ebx
  __int64 v28; // rcx
  LSTATUS v29; // eax
  const char *v30; // r9
  __int64 result; // rax
  unsigned int v32; // ebx
  __int64 v33; // rcx
  LSTATUS v34; // eax
  struct IServiceProviderVtbl *v35; // rax
  unsigned int v36; // ebx
  __int64 v37; // rcx
  LSTATUS v38; // eax
  __int64 *v39; // r13
  unsigned int v40; // ebx
  __int64 v41; // rcx
  LSTATUS v42; // eax
  __int64 *v43; // rax
  __int64 *v44; // rbx
  CCriticalFailureHandler *v45; // rcx
  int v46; // ebx
  const char *v47; // r9
  unsigned int v48; // eax
  unsigned int v49; // eax
  unsigned int v50; // eax
  unsigned int v51; // eax
  unsigned int v52; // eax
  unsigned __int64 *v53; // [rsp+20h] [rbp-68h]
  unsigned __int64 *v54; // [rsp+20h] [rbp-68h]
  unsigned __int64 *v55; // [rsp+28h] [rbp-60h]
  __int64 v56; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v57[8]; // [rsp+38h] [rbp-50h] BYREF
  std::_Ref_count_base *v58; // [rsp+40h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  __int64 *v60; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v61; // [rsp+98h] [rbp+10h] BYREF
  unsigned int v62; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v63; // [rsp+A8h] [rbp+20h] BYREF

  v60 = (__int64 *)this;
  QueryService = (__int64 (*)(void))a2->lpVtbl->QueryService;
  wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)this + 25);
  try
  {
    v4 = QueryService();
    v61 = v4;
    v5 = v4;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      DWORD = SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v62);
      v5 = v4;
      if ( DWORD >= 0 )
      {
        switch ( v62 )
        {
          case 2u:
            v4 = -2023406815;
            v61 = -2023406815;
            v5 = 2271560481LL;
            break;
          case 3u:
            v4 = -2023406814;
            v61 = -2023406814;
            v5 = 2271560482LL;
            break;
          case 4u:
            v4 = -2147418094;
            v61 = -2147418094;
            v5 = 2147549202LL;
            break;
          case 5u:
            v4 = -2147022986;
            v61 = -2147022986;
            v5 = 2147944310LL;
            break;
        }
      }
      CRVPrivate::cfhImmersiveShellStartup = 1;
    }
    if ( (int)v5 < 0 && (_DWORD)v5 != -2147024882 && v4 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        (CCriticalFailureHandler *)v5,
        (int *)&v61,
        L"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        0x4Fu,
        v53,
        v55);
      v4 = v61;
    }
    if ( (v4 & 0x80000000) != 0 )
    {
      v47 = (const char *)(unsigned int)wil::verify_hresult<long>(v4);
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x4F,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        v47,
        (int)v53);
    }
    v7 = a2->lpVtbl->QueryService;
    v8 = v60;
    wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset(v60 + 26);
    v9 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v7)(
           a2,
           &CLSID_ImmersivePlaybackManager,
           &GUID_1fc98738_e0bf_4cb2_9de2_20ab31b23ce4,
           v8 + 26);
    v61 = v9;
    v10 = v9;
    if ( CRVPrivate::cfhImmersiveShellStartup )
    {
LABEL_30:
      if ( (int)v10 < 0 && (_DWORD)v10 != -2147024882 && v9 != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          (CCriticalFailureHandler *)v10,
          (int *)&v61,
          L"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
          0x52u,
          v53,
          v55);
        v9 = v61;
      }
      if ( (v9 & 0x80000000) != 0 )
      {
        v48 = wil::verify_hresult<long>(v9);
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x52,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
          (const char *)v48,
          (int)v53);
      }
      v12 = a2->lpVtbl->QueryService;
      v13 = v60;
      v14 = v60[27];
      v60[27] = 0LL;
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      ((void (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))v12)(
        a2,
        &SID_VirtualDesktopManager,
        &GUID_4970ba3d_fd4e_4647_bea3_d89076ef4b9c,
        v13 + 27);
      v15 = a2->lpVtbl->QueryService;
      v16 = v60;
      v17 = v60[28];
      v60[28] = 0LL;
      if ( v17 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      v18 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v15)(
              a2,
              &IID_IApplicationPositionPersistence,
              &GUID_f876b69a_7b8e_4f46_864c_a0b0ea3e49c2,
              v16 + 28);
      v61 = v18;
      v19 = v18;
      if ( CRVPrivate::cfhImmersiveShellStartup )
      {
LABEL_51:
        if ( (int)v19 < 0 && (_DWORD)v19 != -2147024882 && v18 != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            (CCriticalFailureHandler *)v19,
            (int *)&v61,
            L"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
            0x57u,
            v53,
            v55);
          v18 = v61;
        }
        if ( (v18 & 0x80000000) != 0 )
        {
          v49 = wil::verify_hresult<long>(v18);
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x57,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
            (const char *)v49,
            (int)v53);
        }
        v21 = a2->lpVtbl->QueryService;
        v22 = v60;
        wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset(v60 + 29);
        v23 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v21)(
                a2,
                &IID_IAppViewManager,
                &GUID_f81a7068_dd6a_4e0f_89cb_c0040f4c5086,
                v22 + 29);
        v61 = v23;
        v24 = v23;
        if ( CRVPrivate::cfhImmersiveShellStartup )
        {
LABEL_68:
          if ( (int)v24 < 0 && (_DWORD)v24 != -2147024882 && v23 != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              (CCriticalFailureHandler *)v24,
              (int *)&v61,
              L"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
              0x58u,
              v53,
              v55);
            v23 = v61;
          }
          if ( (v23 & 0x80000000) != 0 )
          {
            v50 = wil::verify_hresult<long>(v23);
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0x58,
              (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
              (const char *)v50,
              (int)v53);
          }
          lpVtbl = a2->lpVtbl;
          v63 = 0LL;
          v27 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))lpVtbl->QueryService)(
                  a2,
                  &IID_IImmersiveSessionIdleDetector,
                  &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29,
                  &v63);
          v61 = v27;
          v28 = v27;
          if ( CRVPrivate::cfhImmersiveShellStartup )
          {
LABEL_85:
            if ( (int)v28 < 0 && (_DWORD)v28 != -2147024882 && v27 != -2144862209 )
            {
              CCriticalFailureHandler::HandleFailure(
                (CCriticalFailureHandler *)v28,
                (int *)&v61,
                L"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                0x5Du,
                v53,
                v55);
              v27 = v61;
            }
            if ( (v27 & 0x80000000) != 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x5D,
                (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                (const char *)v27,
                (int)v53);
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v63);
              return v27;
            }
            v32 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, __int64))(*(_QWORD *)v63 + 32LL))(
                    v63,
                    (unsigned __int64)(v60 + 9) & -(__int64)(v60 != (__int64 *)128),
                    (__int64)v60 + 356);
            v61 = v32;
            v33 = v32;
            if ( CRVPrivate::cfhImmersiveShellStartup )
            {
LABEL_103:
              if ( (int)v33 < 0 && (_DWORD)v33 != -2147024882 && v32 != -2144862209 )
              {
                CCriticalFailureHandler::HandleFailure(
                  (CCriticalFailureHandler *)v33,
                  (int *)&v61,
                  L"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                  0x5Fu,
                  v53,
                  v55);
                v32 = v61;
              }
              if ( (v32 & 0x80000000) != 0 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x5F,
                  (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                  (const char *)v32,
                  (int)v53);
                wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v63);
                return v32;
              }
              v35 = a2->lpVtbl;
              v56 = 0LL;
              v36 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))v35->QueryService)(
                      a2,
                      &SID_ImmersiveShellHookService,
                      &GUID_914d9b3a_5e53_4e14_bbba_46062acb35a4,
                      &v56);
              v61 = v36;
              v37 = v36;
              if ( CRVPrivate::cfhImmersiveShellStartup )
              {
LABEL_121:
                if ( (int)v37 < 0 && (_DWORD)v37 != -2147024882 && v36 != -2144862209 )
                {
                  CCriticalFailureHandler::HandleFailure(
                    (CCriticalFailureHandler *)v37,
                    (int *)&v61,
                    L"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                    0x69u,
                    v53,
                    v55);
                  v36 = v61;
                }
                if ( (v36 & 0x80000000) != 0 )
                {
                  v51 = wil::verify_hresult<long>(v36);
                  wil::details::in1diag3::Throw_Hr(
                    retaddr,
                    (void *)0x69,
                    (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                    (const char *)v51,
                    (int)v53);
                }
                v39 = v60 - 16;
                v54 = (unsigned __int64 *)(v60 + 44);
                v40 = (*(__int64 (__fastcall **)(__int64, void *, __int64, unsigned __int64))(*(_QWORD *)v56 + 24LL))(
                        v56,
                        &unk_180825850,
                        11LL,
                        (unsigned __int64)(v60 - 6) & -(__int64)(v60 != (__int64 *)128));
                v61 = v40;
                v41 = v40;
                if ( CRVPrivate::cfhImmersiveShellStartup )
                {
LABEL_138:
                  if ( (int)v41 < 0 && (_DWORD)v41 != -2147024882 && v40 != -2144862209 )
                  {
                    CCriticalFailureHandler::HandleFailure(
                      (CCriticalFailureHandler *)v41,
                      (int *)&v61,
                      L"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                      0x7Cu,
                      v54,
                      v55);
                    v40 = v61;
                  }
                  if ( (v40 & 0x80000000) != 0 )
                  {
                    v52 = wil::verify_hresult<long>(v40);
                    wil::details::in1diag3::Throw_Hr(
                      retaddr,
                      (void *)0x7C,
                      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                      (const char *)v52,
                      (int)v54);
                  }
                  v43 = (__int64 *)std::make_shared<ConnectedStandbyHelper,>(v57);
                  v44 = v60;
                  std::shared_ptr<ViewEventRegistration>::operator=(v60 + 30, v43);
                  if ( v58 )
                    std::_Ref_count_base::_Decref(v58);
                  v46 = ConnectedStandbyHelper::Initialize(
                          (ConnectedStandbyHelper *)v44[30],
                          (struct IWindowDispatcherConnectedStandby *)((unsigned __int64)(v60 - 11) & -(__int64)(v39 != 0LL)));
                  LODWORD(v60) = v46;
                  if ( CRVPrivate::cfhImmersiveShellStartup )
                    goto LABEL_157;
                  if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v61) >= 0 )
                  {
                    switch ( v61 )
                    {
                      case 2u:
                        v46 = -2023406815;
                        goto LABEL_155;
                      case 3u:
                        v46 = -2023406814;
                        goto LABEL_155;
                      case 4u:
                        v46 = -2147418094;
                        goto LABEL_155;
                      case 5u:
                        v46 = -2147022986;
LABEL_155:
                        LODWORD(v60) = v46;
                        break;
                    }
                  }
                  CRVPrivate::cfhImmersiveShellStartup = 1;
LABEL_157:
                  if ( v46 >= 0 )
                    goto LABEL_163;
                  if ( v46 != -2147024882 && v46 != -2144862209 )
                  {
                    CCriticalFailureHandler::HandleFailure(
                      v45,
                      (int *)&v60,
                      L"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                      0x7Fu,
                      v54,
                      v55);
                    v46 = (int)v60;
                  }
                  if ( v46 >= 0 )
                  {
LABEL_163:
                    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v56);
                    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v63);
                    return 0LL;
                  }
                  else
                  {
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0x7F,
                      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                      (const char *)(unsigned int)v46,
                      (int)v54);
                    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v56);
                    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v63);
                    return (unsigned int)v46;
                  }
                }
                v42 = SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v62);
                v41 = v40;
                if ( v42 >= 0 )
                {
                  switch ( v62 )
                  {
                    case 2u:
                      v40 = -2023406815;
                      v41 = 2271560481LL;
                      goto LABEL_136;
                    case 3u:
                      v40 = -2023406814;
                      v41 = 2271560482LL;
                      goto LABEL_136;
                    case 4u:
                      v40 = -2147418094;
                      v41 = 2147549202LL;
                      goto LABEL_136;
                    case 5u:
                      v40 = -2147022986;
                      v41 = 2147944310LL;
LABEL_136:
                      v61 = v40;
                      break;
                  }
                }
                CRVPrivate::cfhImmersiveShellStartup = 1;
                goto LABEL_138;
              }
              v38 = SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v62);
              v37 = v36;
              if ( v38 >= 0 )
              {
                switch ( v62 )
                {
                  case 2u:
                    v36 = -2023406815;
                    v37 = 2271560481LL;
                    goto LABEL_119;
                  case 3u:
                    v36 = -2023406814;
                    v37 = 2271560482LL;
                    goto LABEL_119;
                  case 4u:
                    v36 = -2147418094;
                    v37 = 2147549202LL;
                    goto LABEL_119;
                  case 5u:
                    v36 = -2147022986;
                    v37 = 2147944310LL;
LABEL_119:
                    v61 = v36;
                    break;
                }
              }
              CRVPrivate::cfhImmersiveShellStartup = 1;
              goto LABEL_121;
            }
            v34 = SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v62);
            v33 = v32;
            if ( v34 >= 0 )
            {
              switch ( v62 )
              {
                case 2u:
                  v32 = -2023406815;
                  v33 = 2271560481LL;
                  goto LABEL_101;
                case 3u:
                  v32 = -2023406814;
                  v33 = 2271560482LL;
                  goto LABEL_101;
                case 4u:
                  v32 = -2147418094;
                  v33 = 2147549202LL;
                  goto LABEL_101;
                case 5u:
                  v32 = -2147022986;
                  v33 = 2147944310LL;
LABEL_101:
                  v61 = v32;
                  break;
              }
            }
            CRVPrivate::cfhImmersiveShellStartup = 1;
            goto LABEL_103;
          }
          v29 = SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v62);
          v28 = v27;
          if ( v29 >= 0 )
          {
            switch ( v62 )
            {
              case 2u:
                v27 = -2023406815;
                v28 = 2271560481LL;
                goto LABEL_83;
              case 3u:
                v27 = -2023406814;
                v28 = 2271560482LL;
                goto LABEL_83;
              case 4u:
                v27 = -2147418094;
                v28 = 2147549202LL;
                goto LABEL_83;
              case 5u:
                v27 = -2147022986;
                v28 = 2147944310LL;
LABEL_83:
                v61 = v27;
                break;
            }
          }
          CRVPrivate::cfhImmersiveShellStartup = 1;
          goto LABEL_85;
        }
        v25 = SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v62);
        v24 = v23;
        if ( v25 >= 0 )
        {
          switch ( v62 )
          {
            case 2u:
              v23 = -2023406815;
              v24 = 2271560481LL;
              goto LABEL_66;
            case 3u:
              v23 = -2023406814;
              v24 = 2271560482LL;
              goto LABEL_66;
            case 4u:
              v23 = -2147418094;
              v24 = 2147549202LL;
              goto LABEL_66;
            case 5u:
              v23 = -2147022986;
              v24 = 2147944310LL;
LABEL_66:
              v61 = v23;
              break;
          }
        }
        CRVPrivate::cfhImmersiveShellStartup = 1;
        goto LABEL_68;
      }
      v20 = SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v62);
      v19 = v18;
      if ( v20 >= 0 )
      {
        switch ( v62 )
        {
          case 2u:
            v18 = -2023406815;
            v19 = 2271560481LL;
            goto LABEL_49;
          case 3u:
            v18 = -2023406814;
            v19 = 2271560482LL;
            goto LABEL_49;
          case 4u:
            v18 = -2147418094;
            v19 = 2147549202LL;
            goto LABEL_49;
          case 5u:
            v18 = -2147022986;
            v19 = 2147944310LL;
LABEL_49:
            v61 = v18;
            break;
        }
      }
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_51;
    }
    v11 = SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v62);
    v10 = v9;
    if ( v11 >= 0 )
    {
      switch ( v62 )
      {
        case 2u:
          v9 = -2023406815;
          v10 = 2271560481LL;
          goto LABEL_28;
        case 3u:
          v9 = -2023406814;
          v10 = 2271560482LL;
          goto LABEL_28;
        case 4u:
          v9 = -2147418094;
          v10 = 2147549202LL;
          goto LABEL_28;
        case 5u:
          v9 = -2147022986;
          v10 = 2147944310LL;
LABEL_28:
          v61 = v9;
          break;
      }
    }
    CRVPrivate::cfhImmersiveShellStartup = 1;
    goto LABEL_30;
  }
  catch ( ... )
  {
    LODWORD(v60) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x83,
                     (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                     v30);
    return (unsigned int)v60;
  }
  return result;
}
