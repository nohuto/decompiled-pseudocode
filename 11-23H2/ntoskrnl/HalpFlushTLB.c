/*
 * XREFs of HalpFlushTLB @ 0x14037E49C
 * Callers:
 *     HalpUnmapVirtualAddress @ 0x14037E180 (HalpUnmapVirtualAddress.c)
 *     HalpMap @ 0x14037E228 (HalpMap.c)
 *     HalpMmZeroPageWithTemporaryMapping @ 0x14037E4D8 (HalpMmZeroPageWithTemporaryMapping.c)
 * Callees:
 *     KeFlushCurrentTbImmediately @ 0x14039ADD0 (KeFlushCurrentTbImmediately.c)
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
