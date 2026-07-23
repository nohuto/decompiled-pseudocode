/*
 * XREFs of MiRemovePendingBadPageNode @ 0x14062AE58
 * Callers:
 *     MiSetPfnRemovalRequested @ 0x14064E404 (MiSetPfnRemovalRequested.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028ABC0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     RtlAvlRemoveNode @ 0x14028B1E0 (RtlAvlRemoveNode.c)
 *     ExQueueWorkItem @ 0x1402B7EC0 (ExQueueWorkItem.c)
 */

void __fastcall MiRemovePendingBadPageNode(unsigned __int64 a1)
{
  unsigned __int64 *v2; // rbx
  unsigned __int64 **v3; // rax

  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C67310);
  v2 = (unsigned __int64 *)qword_140C67300;
  while ( v2 )
  {
    if ( a1 <= v2[3] )
    {
      if ( a1 >= v2[3] )
        break;
      v2 = (unsigned __int64 *)*v2;
    }
    else
    {
      v2 = (unsigned __int64 *)v2[1];
    }
  }
  if ( v2 )
  {
    RtlAvlRemoveNode((unsigned __int64 *)&qword_140C67300, v2);
    v3 = (unsigned __int64 **)qword_140C67328;
    if ( *(PVOID **)qword_140C67328 != &qword_140C67320 )
      __fastfail(3u);
    v2[1] = qword_140C67328;
    *v2 = (unsigned __int64)&qword_140C67320;
    *v3 = v2;
    qword_140C67328 = (__int64)v2;
    if ( (unsigned __int64)++qword_140C67330 >= 0x20 && !byte_140C67338 )
    {
      stru_140C67340.Parameter = 0LL;
      stru_140C67340.List.Flink = 0LL;
      stru_140C67340.WorkerRoutine = (void (__fastcall *)(void *))MiDeletePendingBadPageNodesAwaitingDeleteList;
      ExQueueWorkItem(&stru_140C67340, DelayedWorkQueue);
      byte_140C67338 = 1;
    }
  }
  else
  {
    --qword_140C67318;
  }
  --qword_140C67308;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C67310);
}
