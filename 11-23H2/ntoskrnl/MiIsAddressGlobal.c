/*
 * XREFs of MiIsAddressGlobal @ 0x140347DB8
 * Callers:
 *     MiResolveTransitionFault @ 0x140262760 (MiResolveTransitionFault.c)
 *     MiGetPageChain @ 0x14026C990 (MiGetPageChain.c)
 *     MiMakePageAvoidRead @ 0x1402CE290 (MiMakePageAvoidRead.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140284B00 (MiGetSystemRegionType.c)
 */

__int64 __fastcall MiIsAddressGlobal(unsigned __int64 a1)
{
  if ( a1 < 0xFFFF800000000000uLL )
    return HIBYTE(word_140C66CFC);
  if ( (unsigned int)MiGetSystemRegionType(a1) == 1 || a1 >= 0xFFFFF68000000000uLL && a1 <= 0xFFFFF6FFFFFFFFFFuLL )
    return 0LL;
  if ( a1 <= qword_140C67070 && a1 >= qword_140C6A558 )
    return HIBYTE(word_140C66CFC);
  return (unsigned __int8)word_140C66CFC;
}
