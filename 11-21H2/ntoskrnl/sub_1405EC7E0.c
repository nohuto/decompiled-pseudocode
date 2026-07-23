/*
 * XREFs of sub_1405EC7E0 @ 0x1405EC7E0
 * Callers:
 *     sub_1405EC854 @ 0x1405EC854 (sub_1405EC854.c)
 *     RtlIdnToUnicode @ 0x1409BBC80 (RtlIdnToUnicode.c)
 *     sub_1409BBD10 @ 0x1409BBD10 (sub_1409BBD10.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall sub_1405EC7E0(size_t Size)
{
  PVOID PoolWithTag; // rax
  PVOID v3; // rbx

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, Size, 0x456E6449u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, Size);
  return v3;
}
