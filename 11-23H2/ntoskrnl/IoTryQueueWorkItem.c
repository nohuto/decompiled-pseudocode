/*
 * XREFs of IoTryQueueWorkItem @ 0x14036BF90
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     IopQueueWorkItemProlog @ 0x1402B9690 (IopQueueWorkItemProlog.c)
 *     ExpTryQueueWorkItem @ 0x1402B9BCC (ExpTryQueueWorkItem.c)
 */

char __fastcall IoTryQueueWorkItem(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 *v6; // rax
  char v7; // bl
  void *v9; // rcx

  v6 = (__int64 *)IopQueueWorkItemProlog(a1, a2, a4);
  v7 = ExpTryQueueWorkItem(*((_QWORD *)PspSystemPartition + 2), v6, a3, 1);
  if ( !v7 )
  {
    ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 40), 0x746C6644u);
    v9 = *(void **)(a1 + 56);
    if ( v9 )
    {
      ObfDereferenceObjectWithTag(v9, 0x746C6644u);
      *(_QWORD *)(a1 + 56) = 0LL;
    }
  }
  return v7;
}
