/*
 * XREFs of sub_18002E8A4 @ 0x18002E8A4
 * Callers:
 *     sub_180031B20 @ 0x180031B20 (sub_180031B20.c)
 *     sub_180034AB0 @ 0x180034AB0 (sub_180034AB0.c)
 *     sub_18007C058 @ 0x18007C058 (sub_18007C058.c)
 *     sub_18007C100 @ 0x18007C100 (sub_18007C100.c)
 * Callees:
 *     sub_18002E8D4 @ 0x18002E8D4 (sub_18002E8D4.c)
 */

__int64 __fastcall sub_18002E8A4(void **a1, __int64 a2)
{
  sub_18002E8D4(a1, a2, *((_QWORD *)*a1 + 1));
  return sub_1800100E8(*a1, 0x60uLL);
}
