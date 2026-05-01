/*
 * XREFs of _lambda_7f99cf75152af1ff2ebde7d1303c0d37_::operator() @ 0x1804E714C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7f99cf75152af1ff2ebde7d1303c0d37___::Run @ 0x1804EC1A0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_7f99cf75152af1ff2ebde7d1303c0d37___--Run.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0$0DM@@StringReference@Internal@Windows@@QEAA@AEAY0DM@$$CBG@Z @ 0x1801AC23C (--$-0$0DM@@StringReference@Internal@Windows@@QEAA@AEAY0DM@$$CBG@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_7f99cf75152af1ff2ebde7d1303c0d37_::operator()(HWND *a1)
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
        (void *)0xA3C,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
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
        (void *)0xA42,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v6,
        v10);
    v7 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v12 + 48LL))(v12, v14);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xA45,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v7,
        v10);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v12);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v13);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xA47,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v8);
  }
  return result;
}
