/*
 * XREFs of MmUnmapViewOfSection @ 0x1407D73D0
 * Callers:
 *     PsDispatchIumService @ 0x1405A4E64 (PsDispatchIumService.c)
 * Callees:
 *     MiUnmapViewOfSection @ 0x14071EFC0 (MiUnmapViewOfSection.c)
 */

__int64 __fastcall MmUnmapViewOfSection(__int64 a1, unsigned __int64 a2)
{
  return MiUnmapViewOfSection(a1, a2, 0, 0);
}
