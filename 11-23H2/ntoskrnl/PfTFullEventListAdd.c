/*
 * XREFs of PfTFullEventListAdd @ 0x1402F506C
 * Callers:
 *     PfpEventHandleFullBuffer @ 0x1402F5020 (PfpEventHandleFullBuffer.c)
 *     PfpFlushEventBuffers @ 0x14074AECC (PfpFlushEventBuffers.c)
 * Callees:
 *     PfFbBufferListInsertInFree @ 0x1402F5924 (PfFbBufferListInsertInFree.c)
 *     RtlpInterlockedPopEntrySList @ 0x140429240 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140429280 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall PfTFullEventListAdd(PSLIST_ENTRY ListEntry)
{
  PSLIST_ENTRY result; // rax

  RtlpInterlockedPushEntrySList(&stru_140C65320, ListEntry);
  while ( 1 )
  {
    result = (PSLIST_ENTRY)LOWORD(stru_140C65320.Alignment);
    if ( LOWORD(stru_140C65320.Alignment) <= (unsigned int)dword_140C65330 )
      break;
    result = RtlpInterlockedPopEntrySList(&stru_140C65320);
    if ( !result )
      break;
    PfFbBufferListInsertInFree(&stru_140C652A0, result, 1);
  }
  return result;
}
