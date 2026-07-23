/*
 * XREFs of sub_14054D9C4 @ 0x14054D9C4
 * Callers:
 *     sub_14093C2FC @ 0x14093C2FC (sub_14093C2FC.c)
 * Callees:
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 sub_14054D9C4()
{
  _BYTE v1[112]; // [rsp+20h] [rbp-88h] BYREF

  memset(v1, 0, 0x68uLL);
  return sub_140358A20(2u, 60, 0, (__int64)v1);
}
