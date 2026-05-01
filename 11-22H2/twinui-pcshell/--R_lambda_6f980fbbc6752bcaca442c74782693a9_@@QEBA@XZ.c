/*
 * XREFs of ??R_lambda_6f980fbbc6752bcaca442c74782693a9_@@QEBA@XZ @ 0x18024FF24
 * Callers:
 *     _anonymous_namespace_::RunSynchronousInSTA__lambda_6f980fbbc6752bcaca442c74782693a9___ @ 0x18024EF7C (_anonymous_namespace_--RunSynchronousInSTA__lambda_6f980fbbc6752bcaca442c74782693a9___.c)
 *     _lambda_32e8f84988e4294a1229b4d4483bb0b7_::operator() @ 0x18024FB74 (_lambda_32e8f84988e4294a1229b4d4483bb0b7_--operator().c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?CTaskbandPin_CreateInstance@@YAJPEAPEAVCPinnedList@@@Z @ 0x1801041A8 (-CTaskbandPin_CreateInstance@@YAJPEAPEAVCPinnedList@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall _lambda_6f980fbbc6752bcaca442c74782693a9_::operator()(__int64 a1)
{
  int v2; // eax
  struct CPinnedList *v3; // rbx
  __int64 result; // rax
  int v5; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct CPinnedList *v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = 0LL;
  v2 = CTaskbandPin_CreateInstance(&v7);
  if ( v2 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x428,
      (int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
      (const char *)(unsigned int)v2,
      v5);
  v3 = v7;
  result = (*(__int64 (__fastcall **)(char *, _QWORD, _QWORD, _QWORD))(*((_QWORD *)v7 + 3) + 128LL))(
             (char *)v7 + 24,
             **(_QWORD **)a1,
             (unsigned __int16)(**(_WORD **)(a1 + 8) + 1),
             **(unsigned int **)(a1 + 16));
  if ( (int)result < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x429,
      (int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
      (const char *)(unsigned int)result,
      v5);
  if ( v3 )
    return winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v7);
  return result;
}
