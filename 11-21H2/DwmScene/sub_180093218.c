/*
 * XREFs of sub_180093218 @ 0x180093218
 * Callers:
 *     sub_180049AD8 @ 0x180049AD8 (sub_180049AD8.c)
 *     sub_180073DCC @ 0x180073DCC (sub_180073DCC.c)
 * Callees:
 *     sub_1800904EC @ 0x1800904EC (sub_1800904EC.c)
 */

__int64 __fastcall sub_180093218(__int64 a1, _QWORD *a2, unsigned int a3)
{
  unsigned __int16 v5; // ax

  v5 = sub_1800904EC(*(_QWORD *)(a1 + 16), a2);
  return sub_180093250(a1, v5, a3);
}
