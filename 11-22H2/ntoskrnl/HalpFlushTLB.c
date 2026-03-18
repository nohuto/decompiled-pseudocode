/*
 * XREFs of HalpFlushTLB @ 0x14037EAEC
 * Callers:
 *     HalpUnmapVirtualAddress @ 0x14037E7D0 (HalpUnmapVirtualAddress.c)
 *     HalpMap @ 0x14037E878 (HalpMap.c)
 *     HalpMmZeroPageWithTemporaryMapping @ 0x14037EB28 (HalpMmZeroPageWithTemporaryMapping.c)
 * Callees:
 *     KeFlushCurrentTbImmediately @ 0x14039AAE0 (KeFlushCurrentTbImmediately.c)
 */

__int64 HalpFlushTLB()
{
  __int64 result; // rax
  __int16 v1; // [rsp+20h] [rbp-8h]

  _disable();
  result = KeFlushCurrentTbImmediately();
  if ( (v1 & 0x200) != 0 )
    _enable();
  return result;
}
