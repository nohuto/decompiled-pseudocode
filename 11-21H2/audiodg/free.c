/*
 * XREFs of free @ 0x14003093C
 * Callers:
 *     ??1CAtlBaseModule@ATL@@QEAA@XZ @ 0x14002F054 (--1CAtlBaseModule@ATL@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x14002F558 (--3@YAXPEAX@Z.c)
 *     ?RemoveAll@?$CSimpleArray@GV?$CSimpleArrayEqualHelper@G@ATL@@@ATL@@QEAAXXZ @ 0x14006DEE0 (-RemoveAll@-$CSimpleArray@GV-$CSimpleArrayEqualHelper@G@ATL@@@ATL@@QEAAXXZ.c)
 *     ??1?$CAtlSafeAllocBufferManager@VCCRTAllocator@ATL@@@_ATL_SAFE_ALLOCA_IMPL@ATL@@QEAA@XZ @ 0x14006DF44 (--1-$CAtlSafeAllocBufferManager@VCCRTAllocator@ATL@@@_ATL_SAFE_ALLOCA_IMPL@ATL@@QEAA@XZ.c)
 *     ?FreeHeap@?$CTempBuffer@G$0EAA@VCCRTAllocator@ATL@@@ATL@@AEAAXXZ @ 0x1400852C4 (-FreeHeap@-$CTempBuffer@G$0EAA@VCCRTAllocator@ATL@@@ATL@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl free(void *Block)
{
  __imp_free(Block);
}
