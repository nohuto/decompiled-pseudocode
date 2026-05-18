/*
 * XREFs of sub_1800F161C @ 0x1800F161C
 * Callers:
 *     sub_1800F26AC @ 0x1800F26AC (sub_1800F26AC.c)
 * Callees:
 *     memset @ 0x18000C0CC (memset.c)
 *     sub_18000C8D4 @ 0x18000C8D4 (sub_18000C8D4.c)
 */

// Hidden C++ exception states: #wind=1
_UNKNOWN **__fastcall sub_1800F161C(void *a1)
{
  memset(a1, 0, 0x90uLL);
  return sub_18000C8D4((__int64)a1 + 48, 48LL, 2LL);
}
