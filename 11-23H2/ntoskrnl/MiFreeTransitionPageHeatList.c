/*
 * XREFs of MiFreeTransitionPageHeatList @ 0x140653EA8
 * Callers:
 *     MmAccessFault @ 0x140235370 (MmAccessFault.c)
 *     MmCheckCachedPageStates @ 0x140265320 (MmCheckCachedPageStates.c)
 *     MmCopyToCachedPage @ 0x1402CD7D0 (MmCopyToCachedPage.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x140428EF0 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeTransitionPageHeatList(PSLIST_ENTRY ListEntry)
{
  if ( LOWORD(stru_140C682E0.Alignment) >= 0x40u )
    ExFreePoolWithTag(ListEntry, 0);
  else
    RtlpInterlockedPushEntrySList(&stru_140C682E0, ListEntry);
}
