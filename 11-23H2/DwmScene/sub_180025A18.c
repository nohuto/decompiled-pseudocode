/*
 * XREFs of sub_180025A18 @ 0x180025A18
 * Callers:
 *     sub_180025BEC @ 0x180025BEC (sub_180025BEC.c)
 * Callees:
 *     sub_180024D28 @ 0x180024D28 (sub_180024D28.c)
 */

__int64 __fastcall sub_180025A18(void **a1)
{
  sub_180024D28((__int64)a1, (__int64)a1, *((_QWORD *)*a1 + 1));
  return sub_1800100E8(*a1, 0x40uLL);
}
