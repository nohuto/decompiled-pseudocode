/*
 * XREFs of sub_140460740 @ 0x140460740
 * Callers:
 *     sub_140300E50 @ 0x140300E50 (sub_140300E50.c)
 *     sub_140631A8C @ 0x140631A8C (sub_140631A8C.c)
 *     sub_1407B4D70 @ 0x1407B4D70 (sub_1407B4D70.c)
 * Callees:
 *     ExpInterlockedPopEntrySList @ 0x140429880 (ExpInterlockedPopEntrySList.c)
 */

PSLIST_ENTRY sub_140460740()
{
  PSLIST_ENTRY v0; // rax

  v0 = ExpInterlockedPopEntrySList(&stru_140C5A6B0);
  if ( v0 )
    return v0 + 1;
  else
    return 0LL;
}
