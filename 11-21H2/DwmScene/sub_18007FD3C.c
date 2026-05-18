/*
 * XREFs of sub_18007FD3C @ 0x18007FD3C
 * Callers:
 *     sub_18007FDAC @ 0x18007FDAC (sub_18007FDAC.c)
 * Callees:
 *     memset @ 0x18000C0CC (memset.c)
 *     sub_18002CC9C @ 0x18002CC9C (sub_18002CC9C.c)
 *     sub_18002D554 @ 0x18002D554 (sub_18002D554.c)
 */

// Hidden C++ exception states: #wind=1
char *__fastcall sub_18007FD3C(char *a1, __int64 a2)
{
  __int64 i; // rdi

  for ( i = a2; i; --i )
  {
    memset(a1, 0, 0x98uLL);
    sub_18002D554((__int64)a1);
    a1 += 152;
  }
  sub_18002CC9C((char **)a1, (char **)a1);
  return a1;
}
