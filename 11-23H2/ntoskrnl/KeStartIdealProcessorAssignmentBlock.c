/*
 * XREFs of KeStartIdealProcessorAssignmentBlock @ 0x140223D00
 * Callers:
 *     PspAllocateProcess @ 0x1406B45D8 (PspAllocateProcess.c)
 * Callees:
 *     KiSelectIdealProcessorSetsForProcess @ 0x1402247E8 (KiSelectIdealProcessorSetsForProcess.c)
 *     KiInitializeProcessConcurrencyCount @ 0x140576FF0 (KiInitializeProcessConcurrencyCount.c)
 */

__int64 __fastcall KeStartIdealProcessorAssignmentBlock(__int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 v3; // r10

  v3 = a2;
  if ( a3 )
  {
    KiInitializeProcessConcurrencyCount(a1, *a3);
    *(_DWORD *)(a1 + 12) |= 1u;
  }
  return KiSelectIdealProcessorSetsForProcess(v3, a1, a1 + 16, a1 + 4);
}
