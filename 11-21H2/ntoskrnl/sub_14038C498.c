/*
 * XREFs of sub_14038C498 @ 0x14038C498
 * Callers:
 *     sub_14038C118 @ 0x14038C118 (sub_14038C118.c)
 *     sub_140A4CD9C @ 0x140A4CD9C (sub_140A4CD9C.c)
 *     sub_140A4E0E0 @ 0x140A4E0E0 (sub_140A4E0E0.c)
 * Callees:
 *     sub_14038C4CC @ 0x14038C4CC (sub_14038C4CC.c)
 */

__int64 __fastcall sub_14038C498(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  if ( (a4 & 0xFFFFFFFC) != 0 || (a4 & 3) == 3 )
    return 3221225714LL;
  sub_14038C4CC();
  return 0LL;
}
