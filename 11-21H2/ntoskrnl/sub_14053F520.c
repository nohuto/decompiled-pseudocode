/*
 * XREFs of sub_14053F520 @ 0x14053F520
 * Callers:
 *     sub_14068A7FC @ 0x14068A7FC (sub_14068A7FC.c)
 *     sub_14091972C @ 0x14091972C (sub_14091972C.c)
 * Callees:
 *     sub_14068B144 @ 0x14068B144 (sub_14068B144.c)
 *     sub_14079CF18 @ 0x14079CF18 (sub_14079CF18.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall sub_14053F520(SIZE_T NumberOfBytes, char a2, ULONG a3)
{
  SIZE_T v4; // rbx
  PVOID PoolWithTag; // rdi

  v4 = (unsigned int)NumberOfBytes;
  if ( !(unsigned __int8)sub_14068B144() )
    return 0LL;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)(a2 != 0 ? NonPagedPoolNxCacheAligned : NonPagedPoolNx), v4, a3);
  if ( !PoolWithTag )
    sub_14079CF18((unsigned int)v4);
  return PoolWithTag;
}
