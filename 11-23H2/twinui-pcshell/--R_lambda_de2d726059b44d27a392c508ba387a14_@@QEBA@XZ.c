/*
 * XREFs of ??R_lambda_de2d726059b44d27a392c508ba387a14_@@QEBA@XZ @ 0x1802502D8
 * Callers:
 *     _anonymous_namespace_::RunSynchronousInSTA__lambda_de2d726059b44d27a392c508ba387a14___ @ 0x18024F204 (_anonymous_namespace_--RunSynchronousInSTA__lambda_de2d726059b44d27a392c508ba387a14___.c)
 *     _lambda_bcfbc8e9dbb18e4ddb6540cdb574c293_::operator() @ 0x180250188 (_lambda_bcfbc8e9dbb18e4ddb6540cdb574c293_--operator().c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?CTaskbandPin_CreateInstance@@YAJPEAPEAVCPinnedList@@@Z @ 0x1801041A8 (-CTaskbandPin_CreateInstance@@YAJPEAPEAVCPinnedList@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_DWORD *__fastcall _lambda_de2d726059b44d27a392c508ba387a14_::operator()(__int64 a1)
{
  int v2; // eax
  _DWORD *result; // rax
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CPinnedList *v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0LL;
  v2 = CTaskbandPin_CreateInstance(&v6);
  if ( v2 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x3C0,
      (int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
      (const char *)(unsigned int)v2,
      v4);
  result = (_DWORD *)(**(__int64 (__fastcall ***)(char *, _QWORD))a1)(
                       (char *)v6 + *(int *)(*(_QWORD *)a1 + 8LL),
                       **(unsigned int **)(a1 + 8));
  if ( (_DWORD)result == -2147019873 )
  {
    result = *(_DWORD **)(a1 + 16);
    *result = -2147019873;
  }
  else if ( (int)result < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x3C4,
      (int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
      (const char *)(unsigned int)result,
      v4);
  }
  if ( v6 )
    return (_DWORD *)winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v6);
  return result;
}
