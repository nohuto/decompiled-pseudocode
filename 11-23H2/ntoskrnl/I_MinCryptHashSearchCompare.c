/*
 * XREFs of I_MinCryptHashSearchCompare @ 0x140A705A0
 * Callers:
 *     <none>
 * Callees:
 *     memcmp @ 0x1403DA530 (memcmp.c)
 */

int __fastcall I_MinCryptHashSearchCompare(size_t a1, const void *a2, const void *a3)
{
  return memcmp(a2, a3, a1);
}
