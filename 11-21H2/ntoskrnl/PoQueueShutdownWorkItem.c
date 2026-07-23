/*
 * XREFs of PoQueueShutdownWorkItem @ 0x14098EF60
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 */

NTSTATUS __stdcall PoQueueShutdownWorkItem(PWORK_QUEUE_ITEM WorkItem)
{
  NTSTATUS v2; // ebx
  struct _LIST_ENTRY *v3; // rax

  ExAcquireFastMutex(&stru_140C23920);
  v2 = 0;
  if ( byte_140C5AD33 )
  {
    v3 = (struct _LIST_ENTRY *)qword_140C23988;
    if ( *(__int64 **)qword_140C23988 != &qword_140C23980 )
      __fastfail(3u);
    WorkItem->List.Flink = (struct _LIST_ENTRY *)&qword_140C23980;
    WorkItem->List.Blink = v3;
    v3->Flink = &WorkItem->List;
    qword_140C23988 = (__int64)WorkItem;
  }
  else
  {
    v2 = -1073741077;
  }
  KeReleaseGuardedMutex(&stru_140C23920);
  return v2;
}
