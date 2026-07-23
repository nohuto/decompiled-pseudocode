/*
 * XREFs of CmpAllocatePoolLookaside @ 0x140358D00
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall CmpAllocatePoolLookaside(
        POOL_TYPE PoolType,
        SIZE_T NumberOfBytes,
        __int64 Tag,
        PLOOKASIDE_LIST_EX Lookaside)
{
  if ( PoolType != PagedPool )
    NT_ASSERT("PoolType == PagedPool");
  return ExAllocatePool2(256LL, NumberOfBytes, Tag);
}
