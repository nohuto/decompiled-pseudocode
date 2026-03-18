/*
 * XREFs of MiDereferencePageChains @ 0x1402646FC
 * Callers:
 *     MiInitializeMdlOneNodeBatchPages @ 0x140265D40 (MiInitializeMdlOneNodeBatchPages.c)
 *     MiZeroInParallelWorker @ 0x14026C240 (MiZeroInParallelWorker.c)
 *     MiAllocateLargeZeroPages @ 0x1405C0D40 (MiAllocateLargeZeroPages.c)
 *     MiFindLargePageMemory @ 0x140982F64 (MiFindLargePageMemory.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall MiDereferencePageChains(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 14, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
