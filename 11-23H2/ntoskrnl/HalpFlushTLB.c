/*
 * XREFs of HalpFlushTLB @ 0x14037E63C
 * Callers:
 *     HalpUnmapVirtualAddress @ 0x14037E320 (HalpUnmapVirtualAddress.c)
 *     HalpMap @ 0x14037E3C8 (HalpMap.c)
 *     HalpMmZeroPageWithTemporaryMapping @ 0x14037E678 (HalpMmZeroPageWithTemporaryMapping.c)
 * Callees:
 *     KeFlushCurrentTbImmediately @ 0x14039AFB0 (KeFlushCurrentTbImmediately.c)
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
