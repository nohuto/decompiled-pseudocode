/*
 * XREFs of _lambda_d3ff8420f9d0990347eff683fb5dd9d1_::operator() @ 0x18041335C
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_d3ff8420f9d0990347eff683fb5dd9d1___::Run @ 0x180416B90 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_d3ff8420f9d0990347eff683fb5dd9d1___--.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_d3ff8420f9d0990347eff683fb5dd9d1_::operator()(
        _BYTE **a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // rcx
  int v6; // eax
  _QWORD *v7; // rax
  int v8; // eax
  __int64 result; // rax
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v12; // [rsp+30h] [rbp+8h] BYREF
  __int64 v13; // [rsp+38h] [rbp+10h] BYREF
  __int64 v14; // [rsp+40h] [rbp+18h] BYREF

  try
  {
    v5 = *((_QWORD *)*a1 + 15);
    if ( v5 )
    {
      v6 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v5 + 80LL))(v5, &v12);
      if ( v6 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x4CB,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
          (const char *)(unsigned int)v6,
          v10);
      v7 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)*a1 + 34) + 152LL))(
                       *((_QWORD *)*a1 + 34),
                       &v14);
      (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v7 + 48LL))(*v7, &v13);
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v14);
      v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, bool))(*(_QWORD *)v13 + 112LL))(v13, v12, *a1[1] != 0);
      if ( v8 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x4CF,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
          (const char *)(unsigned int)v8,
          v10);
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v13);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x4D2,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                           a4);
  }
  return result;
}
