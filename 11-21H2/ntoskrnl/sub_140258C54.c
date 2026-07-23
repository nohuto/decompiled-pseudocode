/*
 * XREFs of sub_140258C54 @ 0x140258C54
 * Callers:
 *     sub_14025D7D0 @ 0x14025D7D0 (sub_14025D7D0.c)
 *     sub_1402664E8 @ 0x1402664E8 (sub_1402664E8.c)
 *     sub_1405F71B0 @ 0x1405F71B0 (sub_1405F71B0.c)
 * Callees:
 *     ExpInterlockedFlushSList @ 0x140429900 (ExpInterlockedFlushSList.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140258C54(_SLIST_HEADER *a1, int a2)
{
  PSLIST_ENTRY v2; // rbx
  PSLIST_ENTRY v3; // rcx

  if ( a2 || LOWORD(a1->Alignment) )
  {
    v2 = ExpInterlockedFlushSList(a1);
    while ( v2 )
    {
      v3 = v2;
      v2 = v2->Next;
      ExFreePoolWithTag(v3, 0);
    }
  }
}
