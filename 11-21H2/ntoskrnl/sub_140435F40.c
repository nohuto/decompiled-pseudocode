/*
 * XREFs of sub_140435F40 @ 0x140435F40
 * Callers:
 *     memset @ 0x140435E00 (memset.c)
 * Callees:
 *     sub_140435FC0 @ 0x140435FC0 (sub_140435FC0.c)
 */

__int64 __fastcall sub_140435F40(_OWORD *a1, __int64 a2, __int64 a3)
{
  __int128 v3; // xmm0
  __int64 result; // rax

  if ( (byte_140C094C0 & 1) == 0 )
    result = sub_140435FC0();
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
