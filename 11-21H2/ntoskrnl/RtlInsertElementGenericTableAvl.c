/*
 * XREFs of RtlInsertElementGenericTableAvl @ 0x1402DEF50
 * Callers:
 *     sub_1402D8234 @ 0x1402D8234 (sub_1402D8234.c)
 *     sub_1406DF8F0 @ 0x1406DF8F0 (sub_1406DF8F0.c)
 *     sub_14075E74C @ 0x14075E74C (sub_14075E74C.c)
 *     sub_140764970 @ 0x140764970 (sub_140764970.c)
 *     sub_140765DC0 @ 0x140765DC0 (sub_140765DC0.c)
 *     sub_14076ACE4 @ 0x14076ACE4 (sub_14076ACE4.c)
 *     sub_1407F0070 @ 0x1407F0070 (sub_1407F0070.c)
 *     sub_1407F0194 @ 0x1407F0194 (sub_1407F0194.c)
 *     sub_140818934 @ 0x140818934 (sub_140818934.c)
 *     sub_140826EF0 @ 0x140826EF0 (sub_140826EF0.c)
 *     sub_140844A24 @ 0x140844A24 (sub_140844A24.c)
 *     sub_140851328 @ 0x140851328 (sub_140851328.c)
 *     sub_1408515A8 @ 0x1408515A8 (sub_1408515A8.c)
 *     sub_140935790 @ 0x140935790 (sub_140935790.c)
 *     sub_14099EE9C @ 0x14099EE9C (sub_14099EE9C.c)
 *     sub_140A9D4F0 @ 0x140A9D4F0 (sub_140A9D4F0.c)
 *     sub_140A9D980 @ 0x140A9D980 (sub_140A9D980.c)
 * Callees:
 *     RtlInsertElementGenericTableFullAvl @ 0x1402DEFC0 (RtlInsertElementGenericTableFullAvl.c)
 *     sub_1402DF210 @ 0x1402DF210 (sub_1402DF210.c)
 */

PVOID __stdcall RtlInsertElementGenericTableAvl(
        PRTL_AVL_TABLE Table,
        PVOID Buffer,
        CLONG BufferSize,
        PBOOLEAN NewElement)
{
  TABLE_SEARCH_RESULT SearchResult; // eax
  PVOID NodeOrParent[3]; // [rsp+30h] [rbp-18h] BYREF

  NodeOrParent[0] = 0LL;
  SearchResult = (unsigned int)sub_1402DF210(Table, Buffer, NodeOrParent);
  return RtlInsertElementGenericTableFullAvl(Table, Buffer, BufferSize, NewElement, NodeOrParent[0], SearchResult);
}
