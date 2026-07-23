/*
 * XREFs of sub_14039CE24 @ 0x14039CE24
 * Callers:
 *     sub_14039CBAC @ 0x14039CBAC (sub_14039CBAC.c)
 *     sub_14063CF10 @ 0x14063CF10 (sub_14063CF10.c)
 * Callees:
 *     sub_14039CE58 @ 0x14039CE58 (sub_14039CE58.c)
 */

__int64 __fastcall sub_14039CE24(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  if ( (a2 & 1) != 0 )
    a2 = a3 + 96LL * (unsigned __int8)(a2 >> 1) + 1696;
  return sub_14039CE58(a1, a2);
}
