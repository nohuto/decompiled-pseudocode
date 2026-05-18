/*
 * XREFs of sub_18002CE90 @ 0x18002CE90
 * Callers:
 *     sub_18002E0C0 @ 0x18002E0C0 (sub_18002E0C0.c)
 * Callees:
 *     sub_18002CC9C @ 0x18002CC9C (sub_18002CC9C.c)
 *     sub_18002CF04 @ 0x18002CF04 (sub_18002CF04.c)
 */

char **__fastcall sub_18002CE90(__int64 a1, __int64 a2, char **a3)
{
  __int64 i; // rdi

  for ( i = a1; i != a2; i += 152LL )
  {
    sub_18002CF04(a1, a3, i);
    a3 += 19;
  }
  sub_18002CC9C(a3, a3);
  return a3;
}
