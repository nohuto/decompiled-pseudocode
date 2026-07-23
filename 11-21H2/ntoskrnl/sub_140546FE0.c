/*
 * XREFs of sub_140546FE0 @ 0x140546FE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1405458A0 @ 0x1405458A0 (sub_1405458A0.c)
 *     sub_140932C50 @ 0x140932C50 (sub_140932C50.c)
 */

__int64 __fastcall sub_140546FE0(int a1, _OWORD *a2)
{
  if ( byte_140D06888 )
    return sub_140932C50();
  else
    return sub_1405458A0(a1, a2);
}
