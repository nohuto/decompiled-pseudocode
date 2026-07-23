/*
 * XREFs of sub_14067F280 @ 0x14067F280
 * Callers:
 *     sub_1407362A0 @ 0x1407362A0 (sub_1407362A0.c)
 * Callees:
 *     sub_14067F2D4 @ 0x14067F2D4 (sub_14067F2D4.c)
 *     sub_14067F34C @ 0x14067F34C (sub_14067F34C.c)
 */

__int64 __fastcall sub_14067F280(__int64 a1, __int64 a2, int a3, unsigned int a4, __int64 a5)
{
  if ( !a1 )
    return 3221225485LL;
  if ( (a2 & 1) != 0 )
    return sub_14067F34C(a2, a1, a4, a5);
  return sub_14067F2D4(*(_QWORD *)(a1 + 4152), a2, a3, a4, a5);
}
