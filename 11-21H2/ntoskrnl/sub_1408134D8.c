/*
 * XREFs of sub_1408134D8 @ 0x1408134D8
 * Callers:
 *     sub_1408009E0 @ 0x1408009E0 (sub_1408009E0.c)
 *     sub_140800A38 @ 0x140800A38 (sub_140800A38.c)
 *     sub_14080271C @ 0x14080271C (sub_14080271C.c)
 *     sub_140803250 @ 0x140803250 (sub_140803250.c)
 *     sub_1408072C0 @ 0x1408072C0 (sub_1408072C0.c)
 *     sub_1408124A0 @ 0x1408124A0 (sub_1408124A0.c)
 *     sub_1408125C4 @ 0x1408125C4 (sub_1408125C4.c)
 *     sub_140812B74 @ 0x140812B74 (sub_140812B74.c)
 *     sub_140812D00 @ 0x140812D00 (sub_140812D00.c)
 *     sub_140812D44 @ 0x140812D44 (sub_140812D44.c)
 *     sub_1409CDCC8 @ 0x1409CDCC8 (sub_1409CDCC8.c)
 *     sub_140A1CAC4 @ 0x140A1CAC4 (sub_140A1CAC4.c)
 *     sub_140A1CB84 @ 0x140A1CB84 (sub_140A1CB84.c)
 *     sub_140A1CC1C @ 0x140A1CC1C (sub_140A1CC1C.c)
 *     sub_140A1CC78 @ 0x140A1CC78 (sub_140A1CC78.c)
 * Callees:
 *     sub_14041BB60 @ 0x14041BB60 (sub_14041BB60.c)
 */

__int64 __fastcall sub_1408134D8(char a1)
{
  __int64 result; // rax

  if ( !a1 && qword_140C0E120 != (HANDLE)-1LL )
    return sub_14041BB60((__int64)qword_140C0E120, 0LL);
  return result;
}
