/*
 * XREFs of MiGetNextPageColor @ 0x14029265C
 * Callers:
 *     MiPfPrepareReadList @ 0x1406F64B0 (MiPfPrepareReadList.c)
 *     MiAllocateTopLevelPage @ 0x1407063A4 (MiAllocateTopLevelPage.c)
 *     MiAllocateDriverPage @ 0x140706534 (MiAllocateDriverPage.c)
 *     MiPfPrepareSequentialReadList @ 0x1407448D0 (MiPfPrepareSequentialReadList.c)
 *     MiComputeCacheAttributeSpeeds @ 0x1408256A8 (MiComputeCacheAttributeSpeeds.c)
 *     MmAllocateIndependentPagesEx @ 0x14086C47C (MmAllocateIndependentPagesEx.c)
 *     MiFillPerSessionProtos @ 0x140A4A25C (MiFillPerSessionProtos.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetNextPageColor(__int64 a1)
{
  return *(_DWORD *)(a1 + 12) | (unsigned int)_InterlockedExchangeAdd(*(volatile signed __int32 **)a1, 1u) & *(_DWORD *)(a1 + 8);
}
