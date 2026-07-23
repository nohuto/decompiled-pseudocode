/*
 * XREFs of MiDereferencePageChains @ 0x14032F8BC
 * Callers:
 *     MiZeroInParallelWorker @ 0x1402D1590 (MiZeroInParallelWorker.c)
 *     MiInitializeMdlOneNodeBatchPages @ 0x1402F9AA0 (MiInitializeMdlOneNodeBatchPages.c)
 *     MiProcessPageGroupInfo @ 0x14032F7A0 (MiProcessPageGroupInfo.c)
 *     MiFindLargePageMemory @ 0x140A49A18 (MiFindLargePageMemory.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall MiDereferencePageChains(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 20, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
