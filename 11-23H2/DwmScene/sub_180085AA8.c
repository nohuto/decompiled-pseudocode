/*
 * XREFs of sub_180085AA8 @ 0x180085AA8
 * Callers:
 *     sub_18007E000 @ 0x18007E000 (sub_18007E000.c)
 *     sub_180080CB0 @ 0x180080CB0 (sub_180080CB0.c)
 * Callees:
 *     sub_180082D18 @ 0x180082D18 (sub_180082D18.c)
 */

__int64 __fastcall sub_180085AA8(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned __int16 v5; // ax

  v5 = sub_180082D18(*(_QWORD *)(a1 + 16), a2);
  return sub_180085AE0(a1, v5, a3);
}
