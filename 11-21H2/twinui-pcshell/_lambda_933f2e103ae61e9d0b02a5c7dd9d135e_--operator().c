/*
 * XREFs of _lambda_933f2e103ae61e9d0b02a5c7dd9d135e_::operator() @ 0x180405454
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_933f2e103ae61e9d0b02a5c7dd9d135e___::Run @ 0x1804061A0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_933f2e103ae61e9d0b02a5c7dd9d135e___--.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_933f2e103ae61e9d0b02a5c7dd9d135e_::operator()(_QWORD *a1)
{
  int v2; // eax
  const char *v3; // r9
  int v5[4]; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *(_OWORD *)v5 = *(_OWORD *)a1[1];
  try
  {
    v2 = (*(__int64 (**)(void))(**(_QWORD **)(*a1 + 288LL) + 48LL))();
    if ( v2 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1A2,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
        (const char *)(unsigned int)v2,
        v5[0]);
    *(_OWORD *)(*a1 + 708LL) = *(_OWORD *)a1[1];
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1A5,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
                           v3);
  }
  return 0LL;
}
