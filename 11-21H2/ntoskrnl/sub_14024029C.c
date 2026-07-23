/*
 * XREFs of sub_14024029C @ 0x14024029C
 * Callers:
 *     sub_140240250 @ 0x140240250 (sub_140240250.c)
 *     sub_1407D9BE8 @ 0x1407D9BE8 (sub_1407D9BE8.c)
 * Callees:
 *     sub_14035FAE8 @ 0x14035FAE8 (sub_14035FAE8.c)
 *     ExpInterlockedPopEntrySList @ 0x140429880 (ExpInterlockedPopEntrySList.c)
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall sub_14024029C(PSLIST_ENTRY ListEntry)
{
  PSLIST_ENTRY result; // rax

  ExpInterlockedPushEntrySList(&stru_140C4EB40, ListEntry);
  while ( 1 )
  {
    result = (PSLIST_ENTRY)LOWORD(stru_140C4EB40.Alignment);
    if ( LOWORD(stru_140C4EB40.Alignment) <= (unsigned int)dword_140C4EB50 )
      break;
    result = ExpInterlockedPopEntrySList(&stru_140C4EB40);
    if ( !result )
      break;
    sub_14035FAE8(
      &unk_140C4EAC0,
      result,
      (unsigned int)(LODWORD(result[2].Next) - (_DWORD)result),
      *((unsigned int *)&result[2].Next + 3),
      1);
  }
  return result;
}
