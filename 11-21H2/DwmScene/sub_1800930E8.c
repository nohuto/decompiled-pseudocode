/*
 * XREFs of sub_1800930E8 @ 0x1800930E8
 * Callers:
 *     sub_180049AB8 @ 0x180049AB8 (sub_180049AB8.c)
 *     sub_180073DCC @ 0x180073DCC (sub_180073DCC.c)
 * Callees:
 *     sub_1800904EC @ 0x1800904EC (sub_1800904EC.c)
 */

__int64 __fastcall sub_1800930E8(__int64 a1, _QWORD *a2, char a3)
{
  unsigned __int16 v5; // ax
  __int64 v6; // r8

  v5 = sub_1800904EC(*(_QWORD *)(a1 + 16), a2);
  LOBYTE(v6) = a3;
  return sub_180093120(a1, v5, v6);
}
