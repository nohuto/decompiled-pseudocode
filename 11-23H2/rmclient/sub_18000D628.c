/*
 * XREFs of sub_18000D628 @ 0x18000D628
 * Callers:
 *     sub_18000DB68 @ 0x18000DB68 (sub_18000DB68.c)
 *     sub_18000EFDC @ 0x18000EFDC (sub_18000EFDC.c)
 *     sub_18000FDC4 @ 0x18000FDC4 (sub_18000FDC4.c)
 * Callees:
 *     memcmp @ 0x180016A46 (memcmp.c)
 */

__int64 __fastcall sub_18000D628(__int64 a1, const void *a2, size_t a3)
{
  __int64 v3; // rax

  v3 = *(unsigned __int16 *)(a1 + 8);
  if ( a3 == v3 )
    return (unsigned int)memcmp(a2, *(const void **)(a1 + 24), a3);
  else
    return (unsigned int)(a3 - v3);
}
