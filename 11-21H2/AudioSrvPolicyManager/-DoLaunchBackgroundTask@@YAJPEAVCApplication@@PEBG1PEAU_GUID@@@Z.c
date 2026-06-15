/*
 * XREFs of ?DoLaunchBackgroundTask@@YAJPEAVCApplication@@PEBG1PEAU_GUID@@@Z @ 0x18002BD5C
 * Callers:
 *     ?TsSessionLaunchBackgroundTask@@YAJKPEBG0PEAU_GUID@@@Z @ 0x18002FD10 (-TsSessionLaunchBackgroundTask@@YAJKPEBG0PEAU_GUID@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180002430 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180002B0C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800226D0 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z @ 0x18002DF74 (-TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall DoLaunchBackgroundTask(
        struct CApplication *a1,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        struct _GUID *a4)
{
  struct TSSession *v8; // rdi
  int v9; // eax
  unsigned int v10; // ebx
  RPC_STATUS v12; // eax
  HANDLE CurrentThread; // rax
  NTSTATUS v14; // eax
  NTSTATUS v15; // eax
  struct TSSession *v16; // rsi
  _QWORD *v17; // r14
  int v18; // eax
  _QWORD *v19; // rax
  _QWORD *v20; // rbx
  __int64 v21; // rcx
  int v22; // eax
  int v23; // eax
  int v24; // [rsp+70h] [rbp-90h] BYREF
  void *TokenHandle; // [rsp+78h] [rbp-88h] BYREF
  ULONG ReturnLength; // [rsp+80h] [rbp-80h] BYREF
  struct TSSession *v27[3]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD TokenInformation[12]; // [rsp+A0h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+58h]

  v8 = (CApplicationManager *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v27[1] = v8;
  v9 = TsSessionFromSessionId(*((_DWORD *)a1 + 53), 0, v27);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1CE,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)(unsigned int)v9);
    if ( !v8 )
      return v10;
LABEL_3:
    LeaveCriticalSection((LPCRITICAL_SECTION)v8);
    return v10;
  }
  v12 = RpcImpersonateClient(0LL);
  if ( v12 && v12 != 1725 )
  {
    v10 = v12 | 0x80010000;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1DD,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)(v12 | 0x80010000));
    if ( !v8 )
      return v10;
    goto LABEL_3;
  }
  TokenHandle = 0LL;
  CurrentThread = GetCurrentThread();
  v14 = NtOpenThreadToken(CurrentThread, 8u, 1u, &TokenHandle);
  if ( v14 < 0 )
  {
    v10 = wil::details::in1diag3::Return_NtStatus(
            retaddr,
            (void *)0x1E2,
            (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
            (const char *)(unsigned int)v14);
    if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(TokenHandle);
    RpcRevertToSelf();
    if ( !v8 )
      return v10;
    goto LABEL_35;
  }
  ReturnLength = 0;
  v15 = NtQueryInformationToken(TokenHandle, TokenUser, TokenInformation, 0x58u, &ReturnLength);
  if ( v15 < 0 )
  {
    v10 = wil::details::in1diag3::Return_NtStatus(
            retaddr,
            (void *)0x1E6,
            (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
            (const char *)(unsigned int)v15);
    if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(TokenHandle);
    RpcRevertToSelf();
    if ( !v8 )
      return v10;
    goto LABEL_35;
  }
  if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(TokenHandle);
  RpcRevertToSelf();
  v16 = v27[0];
  v17 = (_QWORD *)((char *)v27[0] + 1048);
  if ( !*((_QWORD *)v27[0] + 131) )
  {
    *v17 = 0LL;
    v18 = CreateOnDemandBrokerClient(L"AudioSrv", v17);
    v10 = v18;
    if ( v18 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1EB,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)(unsigned int)v18);
      if ( !v8 )
        return v10;
LABEL_35:
      LeaveCriticalSection((LPCRITICAL_SECTION)v8);
      return v10;
    }
  }
  if ( !*((_QWORD *)v16 + 132) )
  {
    v19 = operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
    v20 = v19;
    if ( v19 )
    {
      *(_OWORD *)v19 = 0LL;
      *((_DWORD *)v19 + 3) = 1;
      *v19 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IBackgroundSessionCallbacks>::`vftable';
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      *v20 = &CBackgroundSessionCallbacks::`vftable';
      v19 = v20;
    }
    else
    {
      v20 = 0LL;
    }
    v21 = *((_QWORD *)v16 + 132);
    *((_QWORD *)v16 + 132) = v20;
    if ( v21 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
      v19 = (_QWORD *)*((_QWORD *)v16 + 132);
    }
    if ( !v19 )
    {
      v10 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1F2,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)0x8007000ELL);
      if ( !v8 )
        return v10;
      goto LABEL_35;
    }
  }
  v24 = 0;
  v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD, int *))(*(_QWORD *)*v17 + 24LL))(
          *v17,
          TokenInformation[0],
          702LL,
          *((_QWORD *)v16 + 132),
          &v24);
  v10 = v22;
  if ( v22 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F9,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)(unsigned int)v22);
    if ( !v8 )
      return v10;
LABEL_38:
    LeaveCriticalSection((LPCRITICAL_SECTION)v8);
    return v10;
  }
  v23 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, const unsigned __int16 *, const unsigned __int16 *, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD, struct _GUID *))(*(_QWORD *)*v17 + 56LL))(
          *v17,
          TokenInformation[0],
          0LL,
          (unsigned int)v24,
          a2,
          a3,
          0LL,
          0LL,
          0,
          0LL,
          0LL,
          a4);
  v10 = v23;
  if ( v23 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x206,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)(unsigned int)v23);
    if ( !v8 )
      return v10;
    goto LABEL_38;
  }
  if ( v8 )
    LeaveCriticalSection((LPCRITICAL_SECTION)v8);
  return 0LL;
}
