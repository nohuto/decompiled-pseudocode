/*
 * XREFs of sub_18005F1F4 @ 0x18005F1F4
 * Callers:
 *     sub_18005FB6C @ 0x18005FB6C (sub_18005FB6C.c)
 *     sub_18005FC54 @ 0x18005FC54 (sub_18005FC54.c)
 *     sub_18005FCC0 @ 0x18005FCC0 (sub_18005FCC0.c)
 *     sub_18006102C @ 0x18006102C (sub_18006102C.c)
 * Callees:
 *     sub_18005F298 @ 0x18005F298 (sub_18005F298.c)
 */

__int64 __fastcall sub_18005F1F4(void **a1, __int64 a2)
{
  sub_18005F298(a1, a2, *((_QWORD *)*a1 + 1));
  return sub_1800100E8(*a1, 0x30uLL);
}
