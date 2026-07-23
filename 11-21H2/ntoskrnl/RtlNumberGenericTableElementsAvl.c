/*
 * XREFs of RtlNumberGenericTableElementsAvl @ 0x1402D8A70
 * Callers:
 *     sub_14075E74C @ 0x14075E74C (sub_14075E74C.c)
 *     sub_140948F60 @ 0x140948F60 (sub_140948F60.c)
 *     sub_140A9D738 @ 0x140A9D738 (sub_140A9D738.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlNumberGenericTableElementsAvl(PRTL_AVL_TABLE Table)
{
  return Table->NumberGenericTableElements;
}
