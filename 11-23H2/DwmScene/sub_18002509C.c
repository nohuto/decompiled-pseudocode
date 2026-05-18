/*
 * XREFs of sub_18002509C @ 0x18002509C
 * Callers:
 *     sub_1800587AC @ 0x1800587AC (sub_1800587AC.c)
 * Callees:
 *     sub_180012440 @ 0x180012440 (sub_180012440.c)
 *     sub_18001E9BC @ 0x18001E9BC (sub_18001E9BC.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18002509C(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 i; // rdi

  for ( i = a1; i != a2; i += 32LL )
  {
    sub_180012440(a3, i);
    a3 += 4;
  }
  sub_18001E9BC((__int64)a3, (__int64)a3);
  return a3;
}
