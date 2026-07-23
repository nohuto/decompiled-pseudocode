/*
 * XREFs of sub_140238294 @ 0x140238294
 * Callers:
 *     sub_140237A0C @ 0x140237A0C (sub_140237A0C.c)
 *     sub_140238330 @ 0x140238330 (sub_140238330.c)
 *     sub_14037556C @ 0x14037556C (sub_14037556C.c)
 * Callees:
 *     ExpInterlockedFlushSList @ 0x140429900 (ExpInterlockedFlushSList.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140238294(_SLIST_HEADER *a1)
{
  PSLIST_ENTRY v1; // rbx
  PSLIST_ENTRY v2; // rcx

  v1 = ExpInterlockedFlushSList(a1 + 253);
  while ( v1 )
  {
    v2 = v1;
    v1 = v1->Next;
    ExFreePoolWithTag(v2, 0);
  }
}
