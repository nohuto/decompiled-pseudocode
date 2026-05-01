/*
 * XREFs of _lambda_b87eacc4ab1787d6788f730647895d37_::operator() @ 0x180409F58
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_b87eacc4ab1787d6788f730647895d37___::Run @ 0x18040BFF0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_b87eacc4ab1787d6788f730647895d37___--.c)
 * Callees:
 *     ?Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x1800A3CA4 (-Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_b87eacc4ab1787d6788f730647895d37_::operator()(HSTRING **a1)
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
        (void *)0x932,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v2,
        v6);
    v3 = (*(__int64 (__fastcall **)(HSTRING, _QWORD, _QWORD))(*(_QWORD *)(*a1)[13] + 136LL))((*a1)[13], *a1[1], *a1[2]);
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x933,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v3,
        v6);
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x935,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v4);
  }
  return 0LL;
}
