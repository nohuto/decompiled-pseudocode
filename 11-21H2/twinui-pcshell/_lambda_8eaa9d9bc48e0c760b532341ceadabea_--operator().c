/*
 * XREFs of _lambda_8eaa9d9bc48e0c760b532341ceadabea_::operator() @ 0x180129B38
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_8eaa9d9bc48e0c760b532341ceadabea___::Run @ 0x180129B10 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_8eaa9d9bc48e0c760b532341ceadabea___--.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180017530 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18003E8F0 (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@V?$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@details@@V12@AEBW4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@Details@WRL@Microsoft@@YAJPEAPEAV?$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@details@@AEBW4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180141A2C (--$MakeAndInitialize@V-$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationModel@Inter.c)
 *     ?reset@?$com_ptr_t@UIViewPresentationMediator@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180171E08 (-reset@-$com_ptr_t@UIViewPresentationMediator@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     atexit @ 0x18018879C (atexit.c)
 *     ??$query@UIAppViewBehaviorStatics@WindowManagement@ApplicationModel@Internal@Windows@@@?$com_ptr_t@UIAppViewStatics@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIAppViewBehaviorStatics@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1801A8FD0 (--$query@UIAppViewBehaviorStatics@WindowManagement@ApplicationModel@Internal@Windows@@@-$com_ptr.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall lambda_8eaa9d9bc48e0c760b532341ceadabea_::operator()(__int64 a1)
{
  _DWORD *v2; // rsi
  unsigned int v3; // edi
  __int64 v4; // r15
  __int64 **v5; // r14
  int *v6; // r12
  int v7; // r13d
  __int64 v8; // rbx
  __int64 *v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  int v12; // eax
  __int64 v13; // rcx
  __int64 *v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  int v18; // esi
  int v19; // eax
  __int64 *v20; // rsi
  __int64 (__fastcall *v21)(__int64 *, _QWORD, _QWORD, __int64 *); // rbx
  int v22; // eax
  __int64 *v23; // rcx
  __int64 v24; // rax
  int v25; // eax
  unsigned int v26; // eax
  __int64 v27; // rbx
  __int64 (__fastcall *v28)(__int64, __int64 *); // rsi
  int v29; // eax
  int v30; // eax
  __int64 v31; // rsi
  __int64 (__fastcall *v32)(__int64, _QWORD, __int64 *); // rbx
  int v33; // eax
  __int64 v34; // rdx
  void (*v35)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  ULONG UserDataCount; // [rsp+20h] [rbp-E8h]
  unsigned int v37; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v38; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v39; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v40; // [rsp+48h] [rbp-C0h] BYREF
  LPVOID Context; // [rsp+50h] [rbp-B8h] BYREF
  WINBOOL fPending; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v43; // [rsp+60h] [rbp-A8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+68h] [rbp-A0h] BYREF
  LPINIT_ONCE v45; // [rsp+78h] [rbp-90h] BYREF
  int v46; // [rsp+80h] [rbp-88h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp-78h] BYREF
  void *v48; // [rsp+A0h] [rbp-68h]
  int v49; // [rsp+A8h] [rbp-60h]
  int v50; // [rsp+ACh] [rbp-5Ch]
  __int64 *v51; // [rsp+B0h] [rbp-58h]
  __int64 v52; // [rsp+B8h] [rbp-50h]
  unsigned int *v53; // [rsp+C0h] [rbp-48h]
  __int64 v54; // [rsp+C8h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+0h]

  v2 = *(_DWORD **)a1;
  Context = v2;
  v3 = *v2;
  v4 = *(_QWORD *)(a1 + 8);
  v5 = (__int64 **)(v4 + 48);
  wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics,wil::err_exception_policy>::query<Windows::Internal::ApplicationModel::WindowManagement::IAppViewBehaviorStatics>(
    v4 + 48,
    &v43);
  v6 = *(int **)(a1 + 16);
  v7 = *v6;
  v8 = 0LL;
  v40 = 0LL;
  if ( !*v6 )
  {
    (*(void (__fastcall **)(_QWORD, EVENT_DESCRIPTOR *, _QWORD))(**(_QWORD **)(v4 + 280) + 192LL))(
      *(_QWORD *)(v4 + 280),
      &EventDescriptor,
      v3);
    v37 = 0;
    if ( *(_QWORD *)&EventDescriptor.Id )
    {
      v26 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)&EventDescriptor.Id + 256LL))(*(_QWORD *)&EventDescriptor.Id);
      v37 = v26;
    }
    else
    {
      v38 = 0LL;
      v23 = *v5;
      v24 = **v5;
      v38 = 0LL;
      v25 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v24 + 80))(v23, v3, &v38);
      if ( v25 >= 0 )
      {
        v39 = 0LL;
        v27 = v38;
        v28 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v38 + 64LL);
        wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset(&v39);
        v29 = v28(v27, &v39);
        if ( v29 >= 0 )
        {
          if ( v39 )
          {
            v30 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v39 + 80LL))(v39, &v37);
            if ( v30 < 0 )
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                (void *)0x9A,
                (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
                (const char *)(unsigned int)v30,
                UserDataCount);
          }
        }
        else
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x97,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
            (const char *)(unsigned int)v29);
        }
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v39);
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x94,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
          (const char *)(unsigned int)v25);
      }
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v38);
      v26 = v37;
    }
    if ( v26 )
    {
      v31 = *(_QWORD *)(v4 + 184);
      v32 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v31 + 56LL);
      wil::com_ptr_t<IViewPresentationMediator,wil::err_returncode_policy>::reset(&v40);
      v33 = v32(v31, v37, &v40);
      if ( v33 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xA6,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
          (const char *)(unsigned int)v33,
          UserDataCount);
    }
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&EventDescriptor);
    goto LABEL_29;
  }
  if ( *v6 <= 0 )
LABEL_38:
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xCB,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
      (const char *)0x8000FFFFLL,
      UserDataCount);
  if ( *v6 > 2 )
  {
    switch ( *v6 )
    {
      case 4:
        v9 = *v5;
        v10 = **v5;
        v40 = 0LL;
        v11 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64, __int64 *))(v10 + 48))(v9, v3, 1LL, &v40);
        if ( v11 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0xBE,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
            (const char *)(unsigned int)v11,
            UserDataCount);
        goto LABEL_6;
      case 3:
        v37 = 1;
        v38 = 0LL;
        v39 = 0LL;
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v39);
        v18 = Microsoft::WRL::Details::MakeAndInitialize<details::Nullable<enum Windows::Internal::ApplicationModel::WindowManagement::AppViewExecutionState>,details::Nullable<enum Windows::Internal::ApplicationModel::WindowManagement::AppViewExecutionState>,enum Windows::Internal::ApplicationModel::WindowManagement::AppViewExecutionState const &>(
                &v39,
                &v37);
        if ( v18 >= 0 )
        {
          v8 = v39;
          v39 = 0LL;
          v38 = v8;
          v18 = 0;
        }
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v39);
        if ( v18 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0xB5,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
            (const char *)(unsigned int)v18,
            UserDataCount);
        v19 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v43 + 56LL))(v43, v3, v8);
        if ( v19 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0xB6,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
            (const char *)(unsigned int)v19,
            UserDataCount);
        v20 = *v5;
        v21 = *(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, __int64 *))(**v5 + 48);
        wil::com_ptr_t<IViewPresentationMediator,wil::err_returncode_policy>::reset(&v40);
        v22 = v21(v20, v3, 0LL, &v40);
        if ( v22 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0xB9,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
            (const char *)(unsigned int)v22,
            UserDataCount);
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v38);
LABEL_29:
        v2 = Context;
        goto LABEL_6;
      case 5:
        goto LABEL_6;
    }
    goto LABEL_38;
  }
  v15 = *v5;
  v16 = **v5;
  v40 = 0LL;
  v17 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, __int64 *))(v16 + 48))(v15, v3, 0LL, &v40);
  if ( v17 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xAE,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
      (const char *)(unsigned int)v17,
      UserDataCount);
LABEL_6:
  if ( v7 != 3 )
  {
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v43 + 56LL))(v43, v3, 0LL);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xD3,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v12,
        UserDataCount);
  }
  Context = 0LL;
  if ( __std_init_once_begin_initialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    v45 = &`ViewManagerInteropLogging::Instance'::`2'::wrapper;
    Context = &qword_1807B4348;
    qword_1807B4348 = (__int64)&ShellScreenClippingLogging::`vftable';
    qword_1807B4360 = (__int64)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    v46 = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v45, v34, v35);
  }
  v13 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v13 > 5u
    && (*(_QWORD *)(v13 + 16) & 0x200000000000LL) != 0
    && (*(_QWORD *)(v13 + 24) & 0x200000000000LL) == *(_QWORD *)(v13 + 24) )
  {
    v37 = *v6;
    LODWORD(v38) = *v2;
    v53 = &v37;
    v54 = 4LL;
    v51 = &v38;
    v52 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    *(_DWORD *)&EventDescriptor.Level = 5;
    EventDescriptor.Keyword = 0x200000000000LL;
    UserData.Ptr = *(_QWORD *)(v13 + 8);
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    UserData.Reserved = 2;
    v48 = &unk_1806B1F63;
    v49 = 49;
    v50 = 1;
    LODWORD(v39) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(*(_QWORD *)(v13 + 32), &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
  if ( v40 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
  if ( v43 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
  return 0LL;
}
