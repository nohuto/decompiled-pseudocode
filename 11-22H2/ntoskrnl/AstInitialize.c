/*
 * XREFs of AstInitialize @ 0x140B75974
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140B4F014 (IoInitSystemPreDrivers.c)
 * Callees:
 *     RtlGetNtProductType @ 0x1402F7F40 (RtlGetNtProductType.c)
 *     AstInitializeBloomFilter @ 0x140863DE8 (AstInitializeBloomFilter.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 AstInitialize()
{
  __int64 Pool2; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  _NT_PRODUCT_TYPE NtProductType; // [rsp+30h] [rbp+8h] BYREF

  NtProductType = 0;
  if ( !RtlGetNtProductType(&NtProductType) || NtProductType != NtProductWinNt )
  {
    AstIsActive = 0;
    return 0LL;
  }
  AstIsActive = 1;
  Pool2 = ExAllocatePool2(256LL, 0x1000uLL, 0x6E446341u);
  if ( Pool2 )
  {
    AstInitializeBloomFilter(v2, v1, Pool2);
    return 0LL;
  }
  return 3221225495LL;
}
