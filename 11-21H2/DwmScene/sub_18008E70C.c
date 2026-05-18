/*
 * XREFs of sub_18008E70C @ 0x18008E70C
 * Callers:
 *     sub_1800487B0 @ 0x1800487B0 (sub_1800487B0.c)
 *     sub_1800523E0 @ 0x1800523E0 (sub_1800523E0.c)
 *     sub_1800589D4 @ 0x1800589D4 (sub_1800589D4.c)
 *     sub_180059480 @ 0x180059480 (sub_180059480.c)
 *     sub_180062060 @ 0x180062060 (sub_180062060.c)
 *     sub_180063ABC @ 0x180063ABC (sub_180063ABC.c)
 *     sub_180064450 @ 0x180064450 (sub_180064450.c)
 *     sub_180065080 @ 0x180065080 (sub_180065080.c)
 *     sub_18008E3B8 @ 0x18008E3B8 (sub_18008E3B8.c)
 *     sub_18008E828 @ 0x18008E828 (sub_18008E828.c)
 *     sub_18009CC54 @ 0x18009CC54 (sub_18009CC54.c)
 *     sub_18009D8E0 @ 0x18009D8E0 (sub_18009D8E0.c)
 *     sub_18009DECC @ 0x18009DECC (sub_18009DECC.c)
 *     sub_18009E008 @ 0x18009E008 (sub_18009E008.c)
 *     sub_18009E0D0 @ 0x18009E0D0 (sub_18009E0D0.c)
 *     sub_18009E1E0 @ 0x18009E1E0 (sub_18009E1E0.c)
 *     sub_18009F3E0 @ 0x18009F3E0 (sub_18009F3E0.c)
 *     sub_1800A2E10 @ 0x1800A2E10 (sub_1800A2E10.c)
 *     sub_1800A30A0 @ 0x1800A30A0 (sub_1800A30A0.c)
 *     sub_1800A70B0 @ 0x1800A70B0 (sub_1800A70B0.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180040B98 @ 0x180040B98 (sub_180040B98.c)
 *     sub_18004871C @ 0x18004871C (sub_18004871C.c)
 */

__int64 __fastcall sub_18008E70C(__int64 a1)
{
  __int64 *v1; // rax
  __int64 v2; // rbx
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  v1 = (__int64 *)sub_18004871C(a1, &v4);
  v2 = sub_180040B98(*v1);
  sub_180010910((__int64)&v4);
  return v2;
}
