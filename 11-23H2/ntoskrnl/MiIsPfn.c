/*
 * XREFs of MiIsPfn @ 0x14023F190
 * Callers:
 *     MiTradePage @ 0x1403BAB40 (MiTradePage.c)
 *     MmQueryPfnList @ 0x1406EF470 (MmQueryPfnList.c)
 *     MiMapLockedPagesInUserSpace @ 0x140748764 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x140A30F90 (MiMapViewOfPhysicalSection.c)
 *     MiReplaceRotateWithDemandZero @ 0x140A316B8 (MiReplaceRotateWithDemandZero.c)
 *     MiRotateToFrameBuffer @ 0x140A31950 (MiRotateToFrameBuffer.c)
 *     MiRotateToFrameBufferNoCopy @ 0x140A31C54 (MiRotateToFrameBufferNoCopy.c)
 *     MiIsExtentDangling @ 0x140A341F4 (MiIsExtentDangling.c)
 *     MmRelocatePfnList @ 0x140A3CC38 (MmRelocatePfnList.c)
 *     MiConvertHiberPhasePte @ 0x140AABF90 (MiConvertHiberPhasePte.c)
 *     MiMarkHiberNotCachedPte @ 0x140AAC1B0 (MiMarkHiberNotCachedPte.c)
 *     MiMarkNonPagedHiberPhasePte @ 0x140AAC3B0 (MiMarkNonPagedHiberPhasePte.c)
 *     MmAreMdlPagesLocked @ 0x140AE81B8 (MmAreMdlPagesLocked.c)
 *     MmCheckMdlPages @ 0x140AE8284 (MmCheckMdlPages.c)
 *     MmCheckMapIoSpace @ 0x140AE838C (MmCheckMapIoSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsPfn(unsigned __int64 a1)
{
  if ( a1 > qword_140C65BA0 )
    return 0LL;
  else
    return (*(_QWORD *)(48 * a1 - 0x21FFFFFFFFD8LL) >> 54) & 1LL;
}
