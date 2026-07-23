/*
 * XREFs of MiStoreFreeWriteSupport @ 0x14065C314
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x14046D44A (MiStoreWriteModifiedPages.c)
 *     MiStoreModifiedWriteComplete @ 0x14065C7B8 (MiStoreModifiedWriteComplete.c)
 * Callees:
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402A8BC0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     RtlpInterlockedPushEntrySList @ 0x140428830 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall MiStoreFreeWriteSupport(_SLIST_ENTRY *P, _SLIST_HEADER *a2)
{
  _SLIST_ENTRY *Next; // rcx

  Next = P[4].Next;
  if ( Next )
  {
    ObDereferenceObjectDeferDeleteWithTag(Next, 0x746C6644u);
    P[4].Next = 0LL;
  }
  if ( LOWORD(a2[81].Alignment) >= 0x100u )
    ExFreePoolWithTag(P, 0);
  else
    RtlpInterlockedPushEntrySList(a2 + 81, P);
}
