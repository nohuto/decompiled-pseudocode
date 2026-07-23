/*
 * XREFs of sub_140398900 @ 0x140398900
 * Callers:
 *     sub_140215E54 @ 0x140215E54 (sub_140215E54.c)
 * Callees:
 *     sub_140398948 @ 0x140398948 (sub_140398948.c)
 */

__int64 __fastcall sub_140398900(__int64 a1, int a2)
{
  unsigned int v2; // edx

  v2 = a2 << 12;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_WORD *)(a1 + 8) = 8 * ((v2 >> 12) + 6);
  *(_WORD *)(a1 + 10) = 2;
  *(_QWORD *)(a1 + 40) = v2;
  ++dword_140C53198;
  return sub_140398948();
}
