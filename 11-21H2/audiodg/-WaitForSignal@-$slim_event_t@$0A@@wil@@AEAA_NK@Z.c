/*
 * XREFs of ?WaitForSignal@?$slim_event_t@$0A@@wil@@AEAA_NK@Z @ 0x14006C998
 * Callers:
 *     ?Wait@CRtwqAsyncCallback@@QEAAJK@Z @ 0x14006C8F4 (-Wait@CRtwqAsyncCallback@@QEAAJK@Z.c)
 * Callees:
 *     ?FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x14004DBFC (-FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

char __fastcall wil::slim_event_t<0>::WaitForSignal(volatile void *a1, DWORD a2)
{
  char v2; // bl
  __int64 v3; // r8
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int CompareAddress; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  CompareAddress = 0;
  if ( WaitOnAddress(a1, &CompareAddress, 4uLL, a2) )
    return 1;
  if ( GetLastError() != 1460 )
    wil::details::in1diag3::FailFast_Unexpected(retaddr, 2835LL, v3, v4);
  return v2;
}
