/*
 * XREFs of sub_140590A18 @ 0x140590A18
 * Callers:
 *     sub_140249930 @ 0x140249930 (sub_140249930.c)
 *     sub_140590E20 @ 0x140590E20 (sub_140590E20.c)
 * Callees:
 *     sub_14026EDE4 @ 0x14026EDE4 (sub_14026EDE4.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_14033C300 @ 0x14033C300 (sub_14033C300.c)
 *     sub_140424FF0 @ 0x140424FF0 (sub_140424FF0.c)
 */

__int64 __fastcall sub_140590A18(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rdi
  __int64 v6; // rax

  v3 = *(_QWORD *)(a2 + 8) | 0x8000000000000000uLL;
  sub_140424FF0(a3 << 25 >> 16, (__int64)(v3 << 25) >> 16);
  v6 = sub_140317A10(v3);
  sub_14026EDE4(
    (__int64 *)v3,
    (((0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4)) & 0xFFFFFFFFFFLL) << 12) | v6 & 0xFFF0000000000FFFuLL,
    0);
  *(_BYTE *)(a2 + 34) = *(_BYTE *)(a2 + 34) & 0xF8 | 5;
  sub_14033C300(a2, 0);
  return (__int64)(v3 << 25) >> 16;
}
