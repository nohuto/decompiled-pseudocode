/*
 * XREFs of sub_1405B7728 @ 0x1405B7728
 * Callers:
 *     sub_1402BE8E0 @ 0x1402BE8E0 (sub_1402BE8E0.c)
 *     sub_14031C860 @ 0x14031C860 (sub_14031C860.c)
 *     sub_140328690 @ 0x140328690 (sub_140328690.c)
 * Callees:
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1405B7728(PSLIST_ENTRY ListEntry)
{
  if ( LOWORD(stru_140C52E60.Alignment) >= 0x40u )
    ExFreePoolWithTag(ListEntry, 0);
  else
    ExpInterlockedPushEntrySList(&stru_140C52E60, ListEntry);
}
