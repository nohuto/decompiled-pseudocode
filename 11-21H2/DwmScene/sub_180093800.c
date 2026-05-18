/*
 * XREFs of sub_180093800 @ 0x180093800
 * Callers:
 *     sub_18004A0C8 @ 0x18004A0C8 (sub_18004A0C8.c)
 *     sub_180057EA4 @ 0x180057EA4 (sub_180057EA4.c)
 *     sub_180073DCC @ 0x180073DCC (sub_180073DCC.c)
 *     sub_180074FB4 @ 0x180074FB4 (sub_180074FB4.c)
 *     sub_180076154 @ 0x180076154 (sub_180076154.c)
 *     sub_18008A6B0 @ 0x18008A6B0 (sub_18008A6B0.c)
 * Callees:
 *     sub_1800904EC @ 0x1800904EC (sub_1800904EC.c)
 */

__int64 __fastcall sub_180093800(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned __int16 v5; // ax

  v5 = sub_1800904EC(*(_QWORD *)(a1 + 16), a2);
  return sub_180093838(a1, v5, a3);
}
