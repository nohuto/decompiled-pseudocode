/*
 * XREFs of sub_1409B18CC @ 0x1409B18CC
 * Callers:
 *     sub_1406B4E90 @ 0x1406B4E90 (sub_1406B4E90.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireRundownProtectionEx @ 0x1402F6A40 (ExAcquireRundownProtectionEx.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 */

void __fastcall sub_1409B18CC(signed __int64 Object)
{
  struct _WORK_QUEUE_ITEM *v2; // rcx

  if ( ExAcquireRundownProtectionEx((PEX_RUNDOWN_REF)(Object + 1112), 0) )
  {
    ObfReferenceObjectWithTag((PVOID)Object, 0x77537350u);
    if ( !_InterlockedCompareExchange64(&qword_140D3B138, Object, 0LL) )
    {
      if ( _InterlockedIncrement(&dword_140D3B10C) != 1 )
        return;
      v2 = &stru_140C1BFC0;
      goto LABEL_9;
    }
    if ( _interlockedbittestandset((volatile signed __int32 *)(Object + 1120), 8u) )
    {
      ObfDereferenceObjectWithTag((PVOID)Object, 0x77537350u);
      return;
    }
    if ( _InterlockedIncrement(&dword_140D3B108) == 1 )
    {
      v2 = (struct _WORK_QUEUE_ITEM *)&qword_140C1BFA0;
LABEL_9:
      ExQueueWorkItem(v2, NormalWorkQueue);
    }
  }
}
