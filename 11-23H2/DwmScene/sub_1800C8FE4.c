/*
 * XREFs of sub_1800C8FE4 @ 0x1800C8FE4
 * Callers:
 *     sub_1800C9014 @ 0x1800C9014 (sub_1800C9014.c)
 *     sub_1800C9020 @ 0x1800C9020 (sub_1800C9020.c)
 * Callees:
 *     sub_1800C8870 @ 0x1800C8870 (sub_1800C8870.c)
 */

__int64 __fastcall sub_1800C8FE4(void **a1)
{
  sub_1800C8870((__int64)a1, (__int64)a1, *((_QWORD *)*a1 + 1));
  return sub_1800100E8(*a1, 0x48uLL);
}
