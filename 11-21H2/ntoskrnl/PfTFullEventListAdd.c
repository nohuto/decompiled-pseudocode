/*
 * XREFs of PfTFullEventListAdd @ 0x14024029C
 * Callers:
 *     PfpEventHandleFullBuffer @ 0x140240250 (PfpEventHandleFullBuffer.c)
 *     PfpFlushEventBuffers @ 0x1407D9BE8 (PfpFlushEventBuffers.c)
 * Callees:
 *     PfFbBufferListInsertInFree @ 0x14035FAE8 (PfFbBufferListInsertInFree.c)
 *     RtlpInterlockedPopEntrySList @ 0x140429880 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404298C0 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall PfTFullEventListAdd(PSLIST_ENTRY ListEntry)
{
  PSLIST_ENTRY result; // rax

  RtlpInterlockedPushEntrySList(&stru_140C4EB40, ListEntry);
  while ( 1 )
  {
    result = (PSLIST_ENTRY)LOWORD(stru_140C4EB40.Alignment);
    if ( LOWORD(stru_140C4EB40.Alignment) <= (unsigned int)dword_140C4EB50 )
      break;
    result = RtlpInterlockedPopEntrySList(&stru_140C4EB40);
    if ( !result )
      break;
    PfFbBufferListInsertInFree(&stru_140C4EAC0, result, 1);
  }
  return result;
}
