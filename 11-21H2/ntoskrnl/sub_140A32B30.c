/*
 * XREFs of sub_140A32B30 @ 0x140A32B30
 * Callers:
 *     <none>
 * Callees:
 *     memcmp @ 0x1403E1D90 (memcmp.c)
 */

int __fastcall sub_140A32B30(size_t a1, const void *a2, const void *a3)
{
  return memcmp(a2, a3, a1);
}
