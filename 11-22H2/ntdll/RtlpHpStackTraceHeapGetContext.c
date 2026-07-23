/*
 * XREFs of RtlpHpStackTraceHeapGetContext @ 0x18011639C
 * Callers:
 *     RtlpHpStackTraceAddStack @ 0x1801159D0 (RtlpHpStackTraceAddStack.c)
 *     RtlpHpStackTraceHeapSerialize @ 0x180116410 (RtlpHpStackTraceHeapSerialize.c)
 *     RtlpHpStackTraceRemoveStack @ 0x180116620 (RtlpHpStackTraceRemoveStack.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x180032A30 (RtlRunOnceExecuteOnce.c)
 *     RtlRunOnceBeginInitialize @ 0x18005B6C0 (RtlRunOnceBeginInitialize.c)
 */

NTSTATUS __fastcall RtlpHpStackTraceHeapGetContext(__int64 a1, int a2, PVOID *a3)
{
  __int64 v4; // rax
  _RTL_RUN_ONCE *v5; // rcx
  NTSTATUS result; // eax
  PVOID Context; // [rsp+30h] [rbp+8h] BYREF

  v4 = 112LL;
  if ( *(_DWORD *)(a1 + 16) != -571548178 )
    v4 = 368LL;
  v5 = (_RTL_RUN_ONCE *)(v4 + a1);
  if ( a2 )
    result = RtlRunOnceExecuteOnce(v5, (PRTL_RUN_ONCE_INIT_FN)RtlpHpPerHeapStackTraceInitialize, 0LL, &Context);
  else
    result = RtlRunOnceBeginInitialize(v5, 1u, &Context);
  if ( result >= 0 )
  {
    *a3 = Context;
    return 0;
  }
  return result;
}
