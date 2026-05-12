/*
 * XREFs of sub_1C0024E80 @ 0x1C0024E80
 * Callers:
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 * Callees:
 *     sub_1C0024F00 @ 0x1C0024F00 (sub_1C0024F00.c)
 */

__int64 __fastcall sub_1C0024E80(_OWORD *a1, __int64 a2, __int64 a3)
{
  __int128 v3; // xmm0
  __int64 result; // rax

  if ( (byte_1C00933C0 & 1) == 0 )
    result = sub_1C0024F00();
  *a1 = v3;
  a1[1] = v3;
  a1[2] = v3;
  a1[3] = v3;
  memset(
    (void *)((unsigned __int64)(a1 + 4) & 0xFFFFFFFFFFFFFFC0uLL),
    v3,
    (unsigned __int64)a1 + a3 - ((unsigned __int64)(a1 + 4) & 0xFFFFFFFFFFFFFFC0uLL));
  return result;
}
