/*
 * XREFs of sub_140A30C68 @ 0x140A30C68
 * Callers:
 *     sub_1406B074C @ 0x1406B074C (sub_1406B074C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140A30C68(_QWORD *a1, _QWORD *a2)
{
  if ( *a1 >= *a2 )
    return *a1 > *a2;
  else
    return 0xFFFFFFFFLL;
}
