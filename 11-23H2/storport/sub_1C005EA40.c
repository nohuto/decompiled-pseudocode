/*
 * XREFs of sub_1C005EA40 @ 0x1C005EA40
 * Callers:
 *     sub_1C0004DF0 @ 0x1C0004DF0 (sub_1C0004DF0.c)
 * Callees:
 *     sub_1C005CBE4 @ 0x1C005CBE4 (sub_1C005CBE4.c)
 *     sub_1C0063710 @ 0x1C0063710 (sub_1C0063710.c)
 */

__int64 __fastcall sub_1C005EA40(__int64 a1, __int64 a2)
{
  if ( (byte_1C0093A04 & 2) != 0 )
    sub_1C005CBE4(
      a1,
      *(_QWORD *)(a1 + 24) + 5000LL,
      a1 + 169,
      *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 4656LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
      *(_QWORD *)(a1 + 24) + 5000LL,
      *(_BYTE *)(a1 + 96),
      a1 + 2024,
      (const char *)(a1 + 160),
      (const char *)(a1 + 169),
      (const char *)(a1 + 186),
      *(_BYTE *)(a1 + 450) & 1,
      1);
  return sub_1C0063710(a1, a2);
}
