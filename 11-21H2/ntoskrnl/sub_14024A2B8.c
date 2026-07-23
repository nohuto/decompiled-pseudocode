/*
 * XREFs of sub_14024A2B8 @ 0x14024A2B8
 * Callers:
 *     sub_1402003C0 @ 0x1402003C0 (sub_1402003C0.c)
 *     sub_140249930 @ 0x140249930 (sub_140249930.c)
 * Callees:
 *     sub_14024A35C @ 0x14024A35C (sub_14024A35C.c)
 */

_BOOL8 __fastcall sub_14024A2B8(__int64 a1, __int64 a2)
{
  __int64 v2; // r8

  v2 = a1;
  return 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4) <= qword_140C50840
      && ((*(_QWORD *)(16 * ((a1 + 0x220000000000LL) >> 4) - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0
      && ((*(_QWORD *)(a1 + 40) >> 60) & 7) == 2
      && ((byte_140C506CE & 1) != 0 || ((sub_14024A35C(a1, a2) + 32) & 0xFFFFFFFFFFFFFFDFuLL) != 0)
      && (*(_BYTE *)(v2 + 34) & 7) == 6
      && *(_WORD *)(v2 + 32) == (_WORD)a2;
}
