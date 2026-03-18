/*
 * XREFs of MiIsAddressGlobal @ 0x14027DAD4
 * Callers:
 *     MiMakePageAvoidRead @ 0x1402BBEE0 (MiMakePageAvoidRead.c)
 *     MiPfnShareCountIsZero @ 0x1402BF640 (MiPfnShareCountIsZero.c)
 *     MiGetPageChain @ 0x140323D70 (MiGetPageChain.c)
 *     MiResolveTransitionFault @ 0x140325B30 (MiResolveTransitionFault.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14027B080 (MiGetSystemRegionType.c)
 */

__int64 __fastcall MiIsAddressGlobal(unsigned __int64 a1)
{
  if ( a1 < 0xFFFF800000000000uLL )
    return HIBYTE(word_140C51864);
  if ( (unsigned int)MiGetSystemRegionType(a1) == 1 || a1 >= 0xFFFFF68000000000uLL && a1 <= 0xFFFFF6FFFFFFFFFFuLL )
    return 0LL;
  if ( a1 >= qword_140C540C0 && a1 <= qword_140C51BF0 )
    return HIBYTE(word_140C51864);
  return (unsigned __int8)word_140C51864;
}
