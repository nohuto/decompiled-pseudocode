/*
 * XREFs of RtlpHpStackTraceHeapGetContext @ 0x180115FAC
 * Callers:
 *     RtlpHpStackTraceAddStack @ 0x1801155F0 (RtlpHpStackTraceAddStack.c)
 *     RtlpHpStackTraceHeapSerialize @ 0x180116020 (RtlpHpStackTraceHeapSerialize.c)
 *     RtlpHpStackTraceRemoveStack @ 0x180116230 (RtlpHpStackTraceRemoveStack.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x1800163A0 (RtlRunOnceExecuteOnce.c)
 *     RtlRunOnceBeginInitialize @ 0x180059A60 (RtlRunOnceBeginInitialize.c)
 */

__int64 __fastcall RtlpHpStackTraceHeapGetContext(__int64 a1, int a2, _QWORD *a3)
{
  __int64 v4; // rax
  volatile signed __int64 *v5; // rcx
  __int64 result; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v4 = 112LL;
  if ( *(_DWORD *)(a1 + 16) != -571548178 )
    v4 = 368LL;
  v5 = (volatile signed __int64 *)(v4 + a1);
  if ( a2 )
    result = RtlRunOnceExecuteOnce(
               v5,
               (unsigned int (__fastcall *)(volatile signed __int64 *, __int64, __int64 *))RtlpHpPerHeapStackTraceInitialize,
               0LL,
               &v7);
  else
    result = RtlRunOnceBeginInitialize(v5, 1, (unsigned __int64 *)&v7);
  if ( (int)result >= 0 )
  {
    *a3 = v7;
    return 0LL;
  }
  return result;
}
