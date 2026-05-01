/*
 * XREFs of ?AppViewClearPersistedStateRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewClearPersistedStateRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1803E0750
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall WindowEventDispatcher::AppViewClearPersistedStateRequested(
        WindowEventDispatcher *this,
        __int64 (***a2)(void))
{
  __int64 (**v4)(void); // rax
  __int64 (*v5)(void); // rax
  int v6; // eax
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, HSTRING *); // rdi
  int v13; // eax
  __int64 (*v14)(void); // rbx
  int v15; // eax
  __int64 v16; // rsi
  void (__fastcall *v17)(__int64, PCWSTR, PCWSTR); // rdi
  PCWSTR StringRawBuffer; // rbx
  PCWSTR v19; // rax
  const char *v20; // r9
  __int64 result; // rax
  __int64 *v22; // [rsp+20h] [rbp-28h] BYREF
  __int64 v23[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  HSTRING string; // [rsp+58h] [rbp+10h] BYREF
  HSTRING v26; // [rsp+60h] [rbp+18h] BYREF
  __int64 v27; // [rsp+68h] [rbp+20h] BYREF

  v4 = *a2;
  v23[0] = 0LL;
  v5 = *v4;
  try
  {
    v6 = v5();
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x59F,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v6,
        (int)v22);
    v22 = 0LL;
    v7 = *(_QWORD *)v23[0];
    v22 = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64, __int64 **))(v7 + 48))(v23[0], &v22);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5A2,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v8,
        (int)v22);
    v27 = 0LL;
    v9 = *v22;
    v27 = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v9 + 56))(v22, &v27);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5A5,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v10,
        (int)v22);
    v26 = 0LL;
    v11 = v27;
    v12 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v27 + 48LL);
    WindowsDeleteString(0LL);
    v26 = 0LL;
    v13 = v12(v11, &v26);
    if ( v13 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5A8,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v13,
        (int)v22);
    string = 0LL;
    v14 = (*a2)[6];
    WindowsDeleteString(0LL);
    string = 0LL;
    v15 = ((__int64 (__fastcall *)(__int64 (***)(void), HSTRING *))v14)(a2, &string);
    if ( v15 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5AB,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v15,
        (int)v22);
    v16 = *((_QWORD *)this + 41);
    v17 = *(void (__fastcall **)(__int64, PCWSTR, PCWSTR))(*(_QWORD *)v16 + 40LL);
    StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
    v19 = WindowsGetStringRawBuffer(v26, 0LL);
    v17(v16, v19, StringRawBuffer);
    WindowsDeleteString(string);
    string = 0LL;
    WindowsDeleteString(v26);
    v26 = 0LL;
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v27);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v22);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(v23);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x5B1,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                           v20);
  }
  return result;
}
