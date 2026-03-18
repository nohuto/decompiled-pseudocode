/*
 * XREFs of EtwpDereferenceStackEntry @ 0x140469272
 * Callers:
 *     EtwpEventWriteFull @ 0x140258570 (EtwpEventWriteFull.c)
 *     EtwpStackRundown @ 0x1404692E0 (EtwpStackRundown.c)
 *     EtwpTraceStackKey @ 0x140469570 (EtwpTraceStackKey.c)
 *     EtwpGetCrimsonStackKey @ 0x140601C0C (EtwpGetCrimsonStackKey.c)
 *     EtwpWriteUserEvent @ 0x1406F4140 (EtwpWriteUserEvent.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x140428EF0 (RtlpInterlockedPushEntrySList.c)
 *     EtwpTraceCachedStack @ 0x140469498 (EtwpTraceCachedStack.c)
 */

PSLIST_ENTRY __fastcall EtwpDereferenceStackEntry(PSLIST_ENTRY ListEntry, unsigned int **a2)
{
  PSLIST_ENTRY v3; // rdi
  PSLIST_ENTRY result; // rax
  union _SLIST_HEADER *v5; // rsi
  struct _SLIST_ENTRY *Next; // rbx

  v3 = ListEntry;
  result = (PSLIST_ENTRY)(unsigned int)_InterlockedExchangeAdd(
                                         (volatile signed __int32 *)&ListEntry[1].Next + 2,
                                         0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    EtwpTraceCachedStack(*((_QWORD *)*a2 + 137), **a2, 6179LL, ListEntry);
    v5 = (union _SLIST_HEADER *)(a2 + 2);
    do
    {
      Next = v3[1].Next;
      result = RtlpInterlockedPushEntrySList(v5, v3);
      v3 = Next;
    }
    while ( Next );
  }
  return result;
}
