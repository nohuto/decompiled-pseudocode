/*
 * XREFs of MiIsPfn @ 0x14023F0C0
 * Callers:
 *     MiTradePage @ 0x1403BA960 (MiTradePage.c)
 *     MmQueryPfnList @ 0x1406EF440 (MmQueryPfnList.c)
 *     MiMapLockedPagesInUserSpace @ 0x140748574 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x140A30CE0 (MiMapViewOfPhysicalSection.c)
 *     MiReplaceRotateWithDemandZero @ 0x140A31408 (MiReplaceRotateWithDemandZero.c)
 *     MiRotateToFrameBuffer @ 0x140A316A0 (MiRotateToFrameBuffer.c)
 *     MiRotateToFrameBufferNoCopy @ 0x140A319A4 (MiRotateToFrameBufferNoCopy.c)
 *     MiIsExtentDangling @ 0x140A33F44 (MiIsExtentDangling.c)
 *     MmRelocatePfnList @ 0x140A3C988 (MmRelocatePfnList.c)
 *     MiConvertHiberPhasePte @ 0x140AAC120 (MiConvertHiberPhasePte.c)
 *     MiMarkHiberNotCachedPte @ 0x140AAC340 (MiMarkHiberNotCachedPte.c)
 *     MiMarkNonPagedHiberPhasePte @ 0x140AAC540 (MiMarkNonPagedHiberPhasePte.c)
 *     MmAreMdlPagesLocked @ 0x140AE81C8 (MmAreMdlPagesLocked.c)
 *     MmCheckMdlPages @ 0x140AE8294 (MmCheckMdlPages.c)
 *     MmCheckMapIoSpace @ 0x140AE839C (MmCheckMapIoSpace.c)
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
