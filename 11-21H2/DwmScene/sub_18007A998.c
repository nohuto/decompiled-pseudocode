/*
 * XREFs of sub_18007A998 @ 0x18007A998
 * Callers:
 *     sub_18007A1F8 @ 0x18007A1F8 (sub_18007A1F8.c)
 * Callees:
 *     sub_180017428 @ 0x180017428 (sub_180017428.c)
 *     sub_18002BCC0 @ 0x18002BCC0 (sub_18002BCC0.c)
 *     sub_18005C210 @ 0x18005C210 (sub_18005C210.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_18007A998(__int64 *a1, __int64 *a2, _DWORD *a3)
{
  int v5; // r8d
  int v6; // r8d
  __int64 v7; // r8

  sub_180017428(a2, a1);
  sub_18002BCC0(*a1, 1, 0);
  sub_18002BCC0(*a1, v5 + 2, v5);
  sub_18002BCC0(*a1, v6 + 4, v6);
  sub_18005C210((_QWORD *)*a1, a3, v7);
  return a1;
}
