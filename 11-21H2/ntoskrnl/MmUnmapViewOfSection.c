/*
 * XREFs of MmUnmapViewOfSection @ 0x1406CD150
 * Callers:
 *     PsDispatchIumService @ 0x1405E1764 (PsDispatchIumService.c)
 *     IopCloseIoRing @ 0x140658870 (IopCloseIoRing.c)
 *     PsShutdownSystem @ 0x1409B1074 (PsShutdownSystem.c)
 * Callees:
 *     MiUnmapViewOfSection @ 0x1406F8D30 (MiUnmapViewOfSection.c)
 */

__int64 __fastcall MmUnmapViewOfSection(ULONG_PTR a1)
{
  return MiUnmapViewOfSection(a1);
}
