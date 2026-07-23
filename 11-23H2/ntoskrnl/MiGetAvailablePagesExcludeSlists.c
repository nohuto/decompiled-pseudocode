/*
 * XREFs of MiGetAvailablePagesExcludeSlists @ 0x14035E1FC
 * Callers:
 *     MiPfPrepareSequentialReadList @ 0x1407448D0 (MiPfPrepareSequentialReadList.c)
 *     MiAddPhysicalMemoryChunks @ 0x140A2C13C (MiAddPhysicalMemoryChunks.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetAvailablePagesExcludeSlists(__int64 a1)
{
  return *(_QWORD *)(a1 + 17216);
}
