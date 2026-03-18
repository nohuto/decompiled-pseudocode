/*
 * XREFs of MiWriteWsle @ 0x140216174
 * Callers:
 *     MiSetPagingOfDriver @ 0x140290D84 (MiSetPagingOfDriver.c)
 *     MiRemoveWsleList @ 0x1402A7DD0 (MiRemoveWsleList.c)
 *     MiDeleteSystemPagableVm @ 0x1402E9440 (MiDeleteSystemPagableVm.c)
 *     MiUnmapRetpolineStubs @ 0x140641214 (MiUnmapRetpolineStubs.c)
 *     MiClearDriverHotPatchPtes @ 0x140641DEC (MiClearDriverHotPatchPtes.c)
 *     MmFreeLoaderBlock @ 0x140B5B894 (MmFreeLoaderBlock.c)
 *     MiCreatePteWsle @ 0x140B5BF10 (MiCreatePteWsle.c)
 * Callees:
 *     MiWriteValidPteVolatile @ 0x140217020 (MiWriteValidPteVolatile.c)
 */

__int64 __fastcall MiWriteWsle(__int64 a1, unsigned __int64 a2)
{
  return MiWriteValidPteVolatile(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 0x80000000LL);
}
