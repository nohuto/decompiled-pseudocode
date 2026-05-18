/*
 * XREFs of sub_180025A48 @ 0x180025A48
 * Callers:
 *     sub_180025D50 @ 0x180025D50 (sub_180025D50.c)
 * Callees:
 *     sub_180024D9C @ 0x180024D9C (sub_180024D9C.c)
 */

__int64 __fastcall sub_180025A48(void **a1)
{
  sub_180024D9C((__int64)a1, (__int64)a1, *((_QWORD *)*a1 + 1));
  return sub_1800100E8(*a1, 0x68uLL);
}
