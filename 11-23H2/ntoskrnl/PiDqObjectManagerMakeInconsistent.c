/*
 * XREFs of PiDqObjectManagerMakeInconsistent @ 0x14095C688
 * Callers:
 *     PiPnpRtlObjectEventWorker @ 0x1407886C0 (PiPnpRtlObjectEventWorker.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140230810 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230950 (ExReleaseFastMutex.c)
 *     ExQueueWorkItem @ 0x1402B7EC0 (ExQueueWorkItem.c)
 */

void __fastcall PiDqObjectManagerMakeInconsistent(__int64 a1)
{
  char v2; // di
  int v3; // r8d

  v2 = 0;
  ExAcquireFastMutex((PFAST_MUTEX)(a1 + 104));
  v3 = *(_DWORD *)(a1 + 228);
  if ( (v3 & 2) == 0 && *(_QWORD *)(a1 + 192) != a1 + 192 )
  {
    *(_DWORD *)(a1 + 228) = v3 | 2;
    if ( (v3 & 1) == 0 )
    {
      v2 = 1;
      *(_DWORD *)(a1 + 228) = v3 | 3;
    }
  }
  ExReleaseFastMutex((PFAST_MUTEX)(a1 + 104));
  if ( v2 )
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 160), NormalWorkQueue);
}
