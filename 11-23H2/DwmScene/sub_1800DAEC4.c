/*
 * XREFs of sub_1800DAEC4 @ 0x1800DAEC4
 * Callers:
 *     sub_1800DB0A0 @ 0x1800DB0A0 (sub_1800DB0A0.c)
 *     sub_1800DB0F0 @ 0x1800DB0F0 (sub_1800DB0F0.c)
 * Callees:
 *     sub_1800DAEF4 @ 0x1800DAEF4 (sub_1800DAEF4.c)
 */

__int64 __fastcall sub_1800DAEC4(void **a1, __int64 a2)
{
  sub_1800DAEF4(a1, a2, *((_QWORD *)*a1 + 1));
  return sub_1800100E8(*a1, 0x30uLL);
}
