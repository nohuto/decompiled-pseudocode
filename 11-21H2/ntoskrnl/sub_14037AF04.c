/*
 * XREFs of sub_14037AF04 @ 0x14037AF04
 * Callers:
 *     sub_14037ADB8 @ 0x14037ADB8 (sub_14037ADB8.c)
 *     sub_14037B44C @ 0x14037B44C (sub_14037B44C.c)
 * Callees:
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14037AF04(PSLIST_ENTRY ListEntry, _SLIST_HEADER *a2)
{
  if ( LOWORD(a2[78].Alignment) >= 0x100u )
    ExFreePoolWithTag(ListEntry, 0);
  else
    ExpInterlockedPushEntrySList(a2 + 78, ListEntry);
}
