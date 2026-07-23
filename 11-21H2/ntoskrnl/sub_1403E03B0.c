/*
 * XREFs of sub_1403E03B0 @ 0x1403E03B0
 * Callers:
 *     sub_1403E0320 @ 0x1403E0320 (sub_1403E0320.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1403E03B0(_OWORD *a1, __int64 a2)
{
  __int128 v2; // xmm0
  __int64 result; // rax

  *a1 = v2;
  a1[1] = v2;
  result = 0LL;
  a1[2] = v2;
  memset(
    (void *)(((unsigned __int64)a1 + 63) & 0xFFFFFFFFFFFFFFC0uLL),
    0,
    (unsigned __int64)a1 + a2 - (((unsigned __int64)a1 + 63) & 0xFFFFFFFFFFFFFFC0uLL));
  return result;
}
