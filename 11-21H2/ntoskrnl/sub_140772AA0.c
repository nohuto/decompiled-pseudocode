/*
 * XREFs of sub_140772AA0 @ 0x140772AA0
 * Callers:
 *     sub_1403C5610 @ 0x1403C5610 (sub_1403C5610.c)
 *     sub_1406998CC @ 0x1406998CC (sub_1406998CC.c)
 *     sub_1406C1D24 @ 0x1406C1D24 (sub_1406C1D24.c)
 *     sub_14076D4A4 @ 0x14076D4A4 (sub_14076D4A4.c)
 *     sub_14077EF20 @ 0x14077EF20 (sub_14077EF20.c)
 *     sub_14077F420 @ 0x14077F420 (sub_14077F420.c)
 *     sub_140781268 @ 0x140781268 (sub_140781268.c)
 *     sub_140781A70 @ 0x140781A70 (sub_140781A70.c)
 *     sub_1407827F0 @ 0x1407827F0 (sub_1407827F0.c)
 *     sub_1407829F8 @ 0x1407829F8 (sub_1407829F8.c)
 *     sub_14095CDBC @ 0x14095CDBC (sub_14095CDBC.c)
 *     sub_140A28FC4 @ 0x140A28FC4 (sub_140A28FC4.c)
 * Callees:
 *     sub_140772AF8 @ 0x140772AF8 (sub_140772AF8.c)
 */

__int64 __fastcall sub_140772AA0(__int64 a1)
{
  __int64 v2; // rcx

  v2 = 0LL;
  if ( a1 )
    v2 = *(_QWORD *)(a1 + 224);
  return sub_140772AF8(v2);
}
