/*
 * XREFs of ?SubscribeToServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x1804CA040
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
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x18073D440 (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall WindowEventDispatcher::SubscribeToServices(WindowEventDispatcher *this, struct IServiceProvider *a2)
{
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  char *v4; // rbx
  unsigned int v5; // ebx
  __int64 v6; // rcx
  LSTATUS DWORD; // eax
  HRESULT (__stdcall *v8)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 *v9; // rbx
  unsigned int v10; // ebx
  __int64 v11; // rcx
  LSTATUS v12; // eax
  HRESULT (__stdcall *v13)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 *v14; // rbx
  __int64 v15; // rcx
  HRESULT (__stdcall *v16)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 *v17; // rbx
  __int64 v18; // rcx
  unsigned int v19; // ebx
  __int64 v20; // rcx
  LSTATUS v21; // eax
  struct IServiceProviderVtbl *lpVtbl; // rax
  unsigned int v23; // ebx
  __int64 v24; // rcx
  LSTATUS v25; // eax
  unsigned int v27; // ebx
  __int64 v28; // rcx
  LSTATUS v29; // eax
  struct IServiceProviderVtbl *v30; // rax
  unsigned int v31; // ebx
  __int64 v32; // rcx
  LSTATUS v33; // eax
  unsigned int v34; // ebx
  __int64 v35; // rcx
  LSTATUS v36; // eax
  __int64 *v37; // rax
  __int64 *v38; // rbx
  CCriticalFailureHandler *v39; // rcx
  int v40; // ebx
  unsigned __int64 *v41; // [rsp+20h] [rbp-68h]
  unsigned __int64 *v42; // [rsp+20h] [rbp-68h]
  unsigned __int64 *v43; // [rsp+28h] [rbp-60h]
  __int64 v44; // [rsp+30h] [rbp-58h] BYREF
  __int64 v45; // [rsp+38h] [rbp-50h] BYREF
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
  if ( (int)v6 < 0 && (_DWORD)v6 != -2147024882 && v5 != -2144862209 )
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
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)v5,
      (int)v41);
  v8 = a2->lpVtbl->QueryService;
  v9 = v48;
  wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset(v48 + 25);
  v10 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v8)(
          a2,
          &CLSID_ImmersivePlaybackManager,
          &GUID_1fc98738_e0bf_4cb2_9de2_20ab31b23ce4,
          v9 + 25);
  v49 = v10;
  v11 = v10;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    v12 = SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v50);
    v11 = v10;
    if ( v12 >= 0 )
    {
      switch ( v50 )
      {
        case 2u:
          v10 = -2023406815;
          v11 = 2271560481LL;
          goto LABEL_27;
        case 3u:
          v10 = -2023406814;
          v11 = 2271560482LL;
          goto LABEL_27;
        case 4u:
          v10 = -2147418094;
          v11 = 2147549202LL;
          goto LABEL_27;
        case 5u:
          v10 = -2147022986;
          v11 = 2147944310LL;
LABEL_27:
          v49 = v10;
          break;
      }
    }
    CRVPrivate::cfhImmersiveShellStartup = 1;
  }
  if ( (int)v11 < 0 && (_DWORD)v11 != -2147024882 && v10 != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      (CCriticalFailureHandler *)v11,
      (int *)&v49,
      L"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      0x59u,
      v41,
      v43);
    v10 = v49;
  }
  if ( (v10 & 0x80000000) != 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x5A,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)v10,
      (int)v41);
  v13 = a2->lpVtbl->QueryService;
  v14 = v48;
  v15 = v48[26];
  v48[26] = 0LL;
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  ((void (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))v13)(
    a2,
    &SID_VirtualDesktopManager,
    &GUID_4970ba3d_fd4e_4647_bea3_d89076ef4b9c,
    v14 + 26);
  v16 = a2->lpVtbl->QueryService;
  v17 = v48;
  v18 = v48[27];
  v48[27] = 0LL;
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  v19 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v16)(
          a2,
          &IID_IApplicationPositionPersistence,
          &GUID_f876b69a_7b8e_4f46_864c_a0b0ea3e49c2,
          v17 + 27);
  v49 = v19;
  v20 = v19;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    v21 = SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v50);
    v20 = v19;
    if ( v21 >= 0 )
    {
      switch ( v50 )
      {
        case 2u:
          v19 = -2023406815;
          v20 = 2271560481LL;
          goto LABEL_48;
        case 3u:
          v19 = -2023406814;
          v20 = 2271560482LL;
          goto LABEL_48;
        case 4u:
          v19 = -2147418094;
          v20 = 2147549202LL;
          goto LABEL_48;
        case 5u:
          v19 = -2147022986;
          v20 = 2147944310LL;
LABEL_48:
          v49 = v19;
          break;
      }
    }
    CRVPrivate::cfhImmersiveShellStartup = 1;
  }
  if ( (int)v20 < 0 && (_DWORD)v20 != -2147024882 && v19 != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      (CCriticalFailureHandler *)v20,
      (int *)&v49,
      L"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      0x60u,
      v41,
      v43);
    v19 = v49;
  }
  if ( (v19 & 0x80000000) != 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x61,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)v19,
      (int)v41);
  lpVtbl = a2->lpVtbl;
  v51 = 0LL;
  v23 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))lpVtbl->QueryService)(
          a2,
          &IID_IImmersiveSessionIdleDetector,
          &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29,
          &v51);
  v49 = v23;
  v24 = v23;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    v25 = SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v50);
    v24 = v23;
    if ( v25 >= 0 )
    {
      switch ( v50 )
      {
        case 2u:
          v23 = -2023406815;
          v24 = 2271560481LL;
          goto LABEL_65;
        case 3u:
          v23 = -2023406814;
          v24 = 2271560482LL;
          goto LABEL_65;
        case 4u:
          v23 = -2147418094;
          v24 = 2147549202LL;
          goto LABEL_65;
        case 5u:
          v23 = -2147022986;
          v24 = 2147944310LL;
LABEL_65:
          v49 = v23;
          break;
      }
    }
    CRVPrivate::cfhImmersiveShellStartup = 1;
  }
  if ( (int)v24 < 0 && (_DWORD)v24 != -2147024882 && v23 != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      (CCriticalFailureHandler *)v24,
      (int *)&v49,
      L"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      0x66u,
      v41,
      v43);
    v23 = v49;
  }
  if ( (v23 & 0x80000000) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x66,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)v23);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v51);
    return v23;
  }
  v27 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, __int64))(*(_QWORD *)v51 + 32LL))(
          v51,
          (unsigned __int64)(v48 + 9) & -(__int64)(v48 != (__int64 *)128),
          (__int64)v48 + 340);
  v49 = v27;
  v28 = v27;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    v29 = SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v50);
    v28 = v27;
    if ( v29 >= 0 )
    {
      switch ( v50 )
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
          v49 = v27;
          break;
      }
    }
    CRVPrivate::cfhImmersiveShellStartup = 1;
  }
  if ( (int)v28 < 0 && (_DWORD)v28 != -2147024882 && v27 != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      (CCriticalFailureHandler *)v28,
      (int *)&v49,
      L"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      0x68u,
      v41,
      v43);
    v27 = v49;
  }
  if ( (v27 & 0x80000000) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x68,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)v27);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v51);
    return v27;
  }
  v30 = a2->lpVtbl;
  v44 = 0LL;
  v31 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))v30->QueryService)(
          a2,
          &SID_ImmersiveShellHookService,
          &GUID_914d9b3a_5e53_4e14_bbba_46062acb35a4,
          &v44);
  v49 = v31;
  v32 = v31;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    v33 = SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v50);
    v32 = v31;
    if ( v33 >= 0 )
    {
      switch ( v50 )
      {
        case 2u:
          v31 = -2023406815;
          v32 = 2271560481LL;
          goto LABEL_101;
        case 3u:
          v31 = -2023406814;
          v32 = 2271560482LL;
          goto LABEL_101;
        case 4u:
          v31 = -2147418094;
          v32 = 2147549202LL;
          goto LABEL_101;
        case 5u:
          v31 = -2147022986;
          v32 = 2147944310LL;
LABEL_101:
          v49 = v31;
          break;
      }
    }
    CRVPrivate::cfhImmersiveShellStartup = 1;
  }
  if ( (int)v32 < 0 && (_DWORD)v32 != -2147024882 && v31 != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      (CCriticalFailureHandler *)v32,
      (int *)&v49,
      L"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      0x73u,
      v41,
      v43);
    v31 = v49;
  }
  if ( (v31 & 0x80000000) != 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x74,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)v31,
      (int)v41);
  v42 = (unsigned __int64 *)(v48 + 42);
  v34 = (*(__int64 (__fastcall **)(__int64, void *, __int64, unsigned __int64))(*(_QWORD *)v44 + 24LL))(
          v44,
          &unk_180825850,
          11LL,
          (unsigned __int64)(v48 - 6) & -(__int64)(v48 != (__int64 *)128));
  v49 = v34;
  v35 = v34;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    v36 = SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v50);
    v35 = v34;
    if ( v36 >= 0 )
    {
      switch ( v50 )
      {
        case 2u:
          v34 = -2023406815;
          v35 = 2271560481LL;
          goto LABEL_118;
        case 3u:
          v34 = -2023406814;
          v35 = 2271560482LL;
          goto LABEL_118;
        case 4u:
          v34 = -2147418094;
          v35 = 2147549202LL;
          goto LABEL_118;
        case 5u:
          v34 = -2147022986;
          v35 = 2147944310LL;
LABEL_118:
          v49 = v34;
          break;
      }
    }
    CRVPrivate::cfhImmersiveShellStartup = 1;
  }
  if ( (int)v35 < 0 && (_DWORD)v35 != -2147024882 && v34 != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      (CCriticalFailureHandler *)v35,
      (int *)&v49,
      L"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      0x8Cu,
      v42,
      v43);
    v34 = v49;
  }
  if ( (v34 & 0x80000000) != 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x8D,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)v34,
      (int)v42);
  v37 = std::make_shared<ConnectedStandbyHelper,>(&v45);
  v38 = v48;
  std::shared_ptr<ViewEventRegistration>::operator=(v48 + 28, v37);
  if ( v46 )
    std::_Ref_count_base::_Decref(v46);
  v40 = ConnectedStandbyHelper::Initialize(
          (ConnectedStandbyHelper *)v38[28],
          (struct IWindowDispatcherConnectedStandby *)((unsigned __int64)(v48 - 11) & -(__int64)(v48 != (__int64 *)128)));
  LODWORD(v48) = v40;
  if ( CRVPrivate::cfhImmersiveShellStartup )
    goto LABEL_139;
  if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v49) >= 0 )
  {
    switch ( v49 )
    {
      case 2u:
        v40 = -2023406815;
        goto LABEL_137;
      case 3u:
        v40 = -2023406814;
        goto LABEL_137;
      case 4u:
        v40 = -2147418094;
        goto LABEL_137;
      case 5u:
        v40 = -2147022986;
LABEL_137:
        LODWORD(v48) = v40;
        break;
    }
  }
  CRVPrivate::cfhImmersiveShellStartup = 1;
LABEL_139:
  if ( v40 >= 0 )
    goto LABEL_145;
  if ( v40 != -2147024882 && v40 != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v39,
      (int *)&v48,
      L"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      0x94u,
      v42,
      v43);
    v40 = (int)v48;
  }
  if ( v40 >= 0 )
  {
LABEL_145:
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v44);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v51);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x94,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v40);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v44);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v51);
    return (unsigned int)v40;
  }
}
