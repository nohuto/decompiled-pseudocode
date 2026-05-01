/*
 * XREFs of _lambda_c3da97c916334404fe04f41838399863_::operator() @ 0x180405944
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_c3da97c916334404fe04f41838399863___::Run @ 0x1804061D0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_c3da97c916334404fe04f41838399863___--.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_c3da97c916334404fe04f41838399863_::operator()(__int64 a1)
{
  __int64 v1; // rcx
  int v2; // eax
  const char *v3; // r9
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *(_QWORD *)(*(_QWORD *)a1 + 616LL);
  try
  {
    v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 96LL))(v1);
    if ( v2 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x74,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
        (const char *)(unsigned int)v2,
        v5);
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x76,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
                           v3);
  }
  return 0LL;
}
