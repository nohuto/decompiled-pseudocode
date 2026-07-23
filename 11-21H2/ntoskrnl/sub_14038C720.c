/*
 * XREFs of sub_14038C720 @ 0x14038C720
 * Callers:
 *     sub_140A4CD9C @ 0x140A4CD9C (sub_140A4CD9C.c)
 * Callees:
 *     sub_14038C7A0 @ 0x14038C7A0 (sub_14038C7A0.c)
 *     sub_1405F1474 @ 0x1405F1474 (sub_1405F1474.c)
 */

__int64 __fastcall sub_14038C720(
        char a1,
        int a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  if ( a1 == 3 )
    return sub_14038C7A0(a2, a3, a4, a5, a6, a8, a9);
  if ( a1 == 4 )
    return sub_1405F1474(a2, a3, a4, a5, a6, a7, a8, a9, 4096);
  return 3221226079LL;
}
