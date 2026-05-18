/*
 * XREFs of sub_180093288 @ 0x180093288
 * Callers:
 *     sub_180057DD4 @ 0x180057DD4 (sub_180057DD4.c)
 *     sub_18008E1E0 @ 0x18008E1E0 (sub_18008E1E0.c)
 *     sub_1800AC370 @ 0x1800AC370 (sub_1800AC370.c)
 * Callees:
 *     sub_1800904EC @ 0x1800904EC (sub_1800904EC.c)
 */

int __fastcall sub_180093288(__int64 a1, _QWORD *a2, _OWORD *a3)
{
  unsigned __int16 v5; // ax

  v5 = sub_1800904EC(*(_QWORD *)(a1 + 16), a2);
  return sub_1800932C0(a1, v5, a3);
}
