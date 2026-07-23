/*
 * XREFs of sub_1403C2D6C @ 0x1403C2D6C
 * Callers:
 *     sub_140B05B1C @ 0x140B05B1C (sub_140B05B1C.c)
 * Callees:
 *     sub_1402F50C0 @ 0x1402F50C0 (sub_1402F50C0.c)
 *     sub_14033C300 @ 0x14033C300 (sub_14033C300.c)
 */

char __fastcall sub_1403C2D6C(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  char v5; // al
  char result; // al

  sub_14033C300(a2, 2);
  sub_1402F50C0((__int64 *)a2, a3);
  v5 = *(_BYTE *)(a2 + 35);
  *(_QWORD *)(a2 + 16) |= 0x3E0uLL;
  result = v5 & 0xF8 | 5;
  *(_BYTE *)(a2 + 35) = result;
  return result;
}
