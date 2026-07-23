/*
 * XREFs of sub_140A9B1BC @ 0x140A9B1BC
 * Callers:
 *     sub_140A9F094 @ 0x140A9F094 (sub_140A9F094.c)
 *     sub_140AA1678 @ 0x140AA1678 (sub_140AA1678.c)
 * Callees:
 *     sub_1402D81DC @ 0x1402D81DC (sub_1402D81DC.c)
 *     sub_1402D82D0 @ 0x1402D82D0 (sub_1402D82D0.c)
 *     sub_1402D8304 @ 0x1402D8304 (sub_1402D8304.c)
 *     sub_1402D8360 @ 0x1402D8360 (sub_1402D8360.c)
 *     RtlEnumerateGenericTableAvl @ 0x1402DE820 (RtlEnumerateGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1402DECF0 (RtlDeleteElementGenericTableAvl.c)
 *     sub_14045F6C8 @ 0x14045F6C8 (sub_14045F6C8.c)
 */

char __fastcall sub_140A9B1BC(PRTL_AVL_TABLE Table)
{
  PVOID v2; // rax
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0LL;
  sub_14045F6C8((__int64)&v4, 0);
  sub_1402D8360((__int64)&v4);
  sub_1402D8304((__int64)Table, (__int64)&v4);
  while ( 1 )
  {
    v2 = RtlEnumerateGenericTableAvl(Table, 1u);
    if ( !v2 )
      break;
    RtlDeleteElementGenericTableAvl(Table, v2);
  }
  sub_1402D82D0((__int64)Table, (__int64)&v4);
  return sub_1402D81DC((__int64)&v4);
}
