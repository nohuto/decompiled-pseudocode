/*
 * XREFs of sub_180055754 @ 0x180055754
 * Callers:
 *     sub_1800557E0 @ 0x1800557E0 (sub_1800557E0.c)
 *     sub_1800558D4 @ 0x1800558D4 (sub_1800558D4.c)
 *     sub_180055AE8 @ 0x180055AE8 (sub_180055AE8.c)
 *     sub_180055EA0 @ 0x180055EA0 (sub_180055EA0.c)
 *     sub_1800CC268 @ 0x1800CC268 (sub_1800CC268.c)
 *     sub_1800CC384 @ 0x1800CC384 (sub_1800CC384.c)
 *     sub_1800CD8AC @ 0x1800CD8AC (sub_1800CD8AC.c)
 *     sub_1800F19A2 @ 0x1800F19A2 (sub_1800F19A2.c)
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 */

__int64 __fastcall sub_180055754(void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_18000B988(v1);
  return result;
}
