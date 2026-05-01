/*
 * XREFs of _lambda_d5e5a917ee3a3ff55152befa6d529e5a_::operator() @ 0x1804E836C
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_d5e5a917ee3a3ff55152befa6d529e5a___::Run @ 0x1804EBFC0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_d5e5a917ee3a3ff55152befa6d529e5a___--.c)
 * Callees:
 *     ?Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x1800EBDE4 (-Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_d5e5a917ee3a3ff55152befa6d529e5a_::operator()(HSTRING **a1)
{
  int v2; // eax
  int v3; // eax
  const char *v4; // r9
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = Windows::Internal::String::Initialize(*a1 + 34, a1[1]);
  try
  {
    if ( v2 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x941,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v2,
        v6);
    v3 = (*(__int64 (__fastcall **)(HSTRING, _QWORD, _QWORD))(*(_QWORD *)(*a1)[13] + 136LL))((*a1)[13], *a1[1], *a1[2]);
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x942,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v3,
        v6);
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x944,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v4);
  }
  return 0LL;
}
