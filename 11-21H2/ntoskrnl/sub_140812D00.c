/*
 * XREFs of sub_140812D00 @ 0x140812D00
 * Callers:
 *     sub_140644D30 @ 0x140644D30 (sub_140644D30.c)
 *     sub_140800680 @ 0x140800680 (sub_140800680.c)
 *     sub_140800808 @ 0x140800808 (sub_140800808.c)
 *     sub_140800968 @ 0x140800968 (sub_140800968.c)
 *     sub_140802068 @ 0x140802068 (sub_140802068.c)
 *     sub_14099C7F4 @ 0x14099C7F4 (sub_14099C7F4.c)
 *     sub_14099C9CC @ 0x14099C9CC (sub_14099C9CC.c)
 *     sub_14099D244 @ 0x14099D244 (sub_14099D244.c)
 *     sub_1409CDCC8 @ 0x1409CDCC8 (sub_1409CDCC8.c)
 *     sub_140A1D134 @ 0x140A1D134 (sub_140A1D134.c)
 *     sub_140A1E118 @ 0x140A1E118 (sub_140A1E118.c)
 *     sub_140A1E354 @ 0x140A1E354 (sub_140A1E354.c)
 *     sub_140A1E6EC @ 0x140A1E6EC (sub_140A1E6EC.c)
 *     sub_140A1E890 @ 0x140A1E890 (sub_140A1E890.c)
 *     sub_140A1F234 @ 0x140A1F234 (sub_140A1F234.c)
 *     sub_140A1FB1C @ 0x140A1FB1C (sub_140A1FB1C.c)
 *     sub_140A20DF8 @ 0x140A20DF8 (sub_140A20DF8.c)
 *     sub_140A210D4 @ 0x140A210D4 (sub_140A210D4.c)
 *     sub_140AF3434 @ 0x140AF3434 (sub_140AF3434.c)
 * Callees:
 *     sub_1403A7864 @ 0x1403A7864 (sub_1403A7864.c)
 *     sub_1408132F0 @ 0x1408132F0 (sub_1408132F0.c)
 *     sub_1408134D8 @ 0x1408134D8 (sub_1408134D8.c)
 *     sub_14081369C @ 0x14081369C (sub_14081369C.c)
 */

__int64 __fastcall sub_140812D00(__int64 a1)
{
  __int64 v2; // rcx
  char v3; // di
  __int64 result; // rax
  __int64 v5; // rcx

  LOBYTE(v2) = sub_1403A7864(a1);
  v3 = v2;
  result = sub_14081369C(v2);
  if ( (int)result >= 0 )
  {
    sub_1408132F0(a1);
    LOBYTE(v5) = v3;
    return sub_1408134D8(v5);
  }
  return result;
}
