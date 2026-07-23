/*
 * XREFs of RtlIsGenericTableEmptyAvl @ 0x1402DECE0
 * Callers:
 *     sub_14075EB84 @ 0x14075EB84 (sub_14075EB84.c)
 *     sub_140776E5C @ 0x140776E5C (sub_140776E5C.c)
 *     sub_140779A50 @ 0x140779A50 (sub_140779A50.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlIsGenericTableEmptyAvl(PRTL_AVL_TABLE Table)
{
  return Table->NumberGenericTableElements == 0;
}
