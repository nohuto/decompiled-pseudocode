/*
 * XREFs of sub_18002CCA0 @ 0x18002CCA0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18001D0F4 @ 0x18001D0F4 (sub_18001D0F4.c)
 *     sub_18001DE1C @ 0x18001DE1C (sub_18001DE1C.c)
 *     sub_180024C1C @ 0x180024C1C (sub_180024C1C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002CCA0(__int64 *a1, __int64 a2)
{
  __int64 *v4; // rcx
  __int64 v5; // rdx

  v4 = a1 + 16;
  if ( a1[17] == a1[18] )
  {
    sub_180024C1C(v4, a1[17], a2);
  }
  else
  {
    sub_18001D0F4(a1[17], a2);
    a1[17] += 64LL;
  }
  return sub_18001DE1C(a2, v5);
}
