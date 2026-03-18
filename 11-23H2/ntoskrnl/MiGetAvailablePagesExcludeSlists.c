/*
 * XREFs of MiGetAvailablePagesExcludeSlists @ 0x14035E05C
 * Callers:
 *     MiPfPrepareSequentialReadList @ 0x1407446E0 (MiPfPrepareSequentialReadList.c)
 *     MiAddPhysicalMemoryChunks @ 0x140A2BE8C (MiAddPhysicalMemoryChunks.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetAvailablePagesExcludeSlists(__int64 a1)
{
  return *(_QWORD *)(a1 + 17216);
}
