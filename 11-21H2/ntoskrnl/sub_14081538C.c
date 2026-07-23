/*
 * XREFs of sub_14081538C @ 0x14081538C
 * Callers:
 *     sub_140815088 @ 0x140815088 (sub_140815088.c)
 *     sub_140815178 @ 0x140815178 (sub_140815178.c)
 *     sub_14083FE80 @ 0x14083FE80 (sub_14083FE80.c)
 *     sub_14084028C @ 0x14084028C (sub_14084028C.c)
 *     sub_140840AEC @ 0x140840AEC (sub_140840AEC.c)
 *     sub_140840E70 @ 0x140840E70 (sub_140840E70.c)
 *     sub_140840F30 @ 0x140840F30 (sub_140840F30.c)
 *     sub_1409DAACC @ 0x1409DAACC (sub_1409DAACC.c)
 *     sub_1409DAB80 @ 0x1409DAB80 (sub_1409DAB80.c)
 * Callees:
 *     ExpInterlockedPopEntrySList @ 0x140429880 (ExpInterlockedPopEntrySList.c)
 *     sub_1408153C8 @ 0x1408153C8 (sub_1408153C8.c)
 */

PSLIST_ENTRY __fastcall sub_14081538C(int a1, unsigned int a2)
{
  PSLIST_ENTRY result; // rax

  result = ExpInterlockedPopEntrySList(&SListHead + a1);
  if ( !result )
    return (PSLIST_ENTRY)sub_1408153C8(a2);
  return result;
}
