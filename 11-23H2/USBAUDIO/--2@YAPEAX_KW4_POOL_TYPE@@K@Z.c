/*
 * XREFs of ??2@YAPEAX_KW4_POOL_TYPE@@K@Z @ 0x1C000B7CC
 * Callers:
 *     InitializeSideband @ 0x1C000B83C (InitializeSideband.c)
 *     ?AddFileToOpenHandles@CSidebandDevice@@AEAAJPEAU_FILE_OBJECT@@@Z @ 0x1C000C124 (-AddFileToOpenHandles@CSidebandDevice@@AEAAJPEAU_FILE_OBJECT@@@Z.c)
 * Callees:
 *     memset @ 0x1C001AF80 (memset.c)
 */

PVOID __fastcall operator new(size_t Size, enum _POOL_TYPE a2, ULONG a3)
{
  PVOID PoolWithTag; // rax
  PVOID v5; // rbx

  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, Size, a3);
  v5 = PoolWithTag;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, Size);
  return v5;
}
