/*
 * XREFs of sub_18002CE1C @ 0x18002CE1C
 * Callers:
 *     sub_18002E0C0 @ 0x18002E0C0 (sub_18002E0C0.c)
 *     sub_18007FDAC @ 0x18007FDAC (sub_18007FDAC.c)
 * Callees:
 *     sub_18002CC9C @ 0x18002CC9C (sub_18002CC9C.c)
 *     sub_18002D448 @ 0x18002D448 (sub_18002D448.c)
 */

// Hidden C++ exception states: #wind=1
char **__fastcall sub_18002CE1C(__int64 a1, __int64 a2, char **a3)
{
  __int64 i; // rdi

  for ( i = a1; i != a2; i += 152LL )
  {
    sub_18002D448(a3, i);
    a3 += 19;
  }
  sub_18002CC9C(a3, a3);
  return a3;
}
