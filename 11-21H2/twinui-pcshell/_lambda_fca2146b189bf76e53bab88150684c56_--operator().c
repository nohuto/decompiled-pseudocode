/*
 * XREFs of _lambda_fca2146b189bf76e53bab88150684c56_::operator() @ 0x180413CC0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fca2146b189bf76e53bab88150684c56___::Run @ 0x180416D20 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_fca2146b189bf76e53bab88150684c56___--Run.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ??$?0$0DM@@StringReference@Internal@Windows@@QEAA@AEAY0DM@$$CBG@Z @ 0x180022A68 (--$-0$0DM@@StringReference@Internal@Windows@@QEAA@AEAY0DM@$$CBG@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_fca2146b189bf76e53bab88150684c56_::operator()(HWND *a1)
{
  DWORD WindowThreadProcessId; // ebx
  const unsigned __int16 (*v2)[60]; // rdx
  HSTRING *v3; // rax
  int ActivationFactory; // eax
  __int64 v5; // rax
  int v6; // eax
  int v7; // eax
  const char *v8; // r9
  __int64 result; // rax
  int v10; // [rsp+20h] [rbp-68h]
  DWORD dwProcessId; // [rsp+30h] [rbp-58h] BYREF
  __int64 v12; // [rsp+38h] [rbp-50h] BYREF
  __int64 *v13; // [rsp+40h] [rbp-48h] BYREF
  _BYTE v14[8]; // [rsp+48h] [rbp-40h] BYREF
  HSTRING string; // [rsp+50h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  WindowThreadProcessId = GetWindowThreadProcessId(*a1, &dwProcessId);
  v13 = 0LL;
  v3 = Windows::Internal::StringReference::StringReference(&string, v2);
  ActivationFactory = RoGetActivationFactory(*v3, &GUID_365b4229_bffa_4446_8dc8_a293bebbe536, &v13);
  try
  {
    if ( ActivationFactory < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xABE,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
        (const char *)(unsigned int)ActivationFactory,
        v10);
    v12 = 0LL;
    v5 = *v13;
    v12 = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, __int64 *))(v5 + 48))(
           v13,
           dwProcessId,
           WindowThreadProcessId,
           &v12);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xAC4,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
        (const char *)(unsigned int)v6,
        v10);
    v7 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v12 + 48LL))(v12, v14);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xAC7,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
        (const char *)(unsigned int)v7,
        v10);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v12);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v13);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xAC9,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                           v8);
  }
  return result;
}
