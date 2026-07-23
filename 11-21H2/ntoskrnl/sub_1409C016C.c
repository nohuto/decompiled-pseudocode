/*
 * XREFs of sub_1409C016C @ 0x1409C016C
 * Callers:
 *     sub_1409BFD4C @ 0x1409BFD4C (sub_1409BFD4C.c)
 *     sub_1409BFE14 @ 0x1409BFE14 (sub_1409BFE14.c)
 *     sub_1409BFEC8 @ 0x1409BFEC8 (sub_1409BFEC8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1409C016C(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // r9

  v2 = *(_QWORD *)(a1 + 24);
  v3 = *(_QWORD *)(a2 + 24);
  if ( v2 + *(_QWORD *)(a1 + 32) > v3 )
    return v2 >= v3 + *(_QWORD *)(a2 + 32);
  else
    return 0xFFFFFFFFLL;
}
