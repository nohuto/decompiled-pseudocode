/*
 * XREFs of sub_1403765BC @ 0x1403765BC
 * Callers:
 *     sub_140735760 @ 0x140735760 (sub_140735760.c)
 * Callees:
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1403765BC(PSLIST_ENTRY ListEntry)
{
  unsigned int v1; // edx

  v1 = dword_140C54CA8 * dword_140D06884;
  if ( (unsigned int)(dword_140C54CA8 * dword_140D06884) > 0x40 )
    v1 = 64;
  if ( LOWORD(stru_140CE23D0.Alignment) >= v1 )
    ExFreePoolWithTag(ListEntry, 0);
  else
    ExpInterlockedPushEntrySList(&stru_140CE23D0, ListEntry);
}
