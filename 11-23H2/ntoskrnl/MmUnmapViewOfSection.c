/*
 * XREFs of MmUnmapViewOfSection @ 0x1407D76A0
 * Callers:
 *     PsDispatchIumService @ 0x1405A53D4 (PsDispatchIumService.c)
 * Callees:
 *     MiUnmapViewOfSection @ 0x14071F1C0 (MiUnmapViewOfSection.c)
 */

__int64 __fastcall MmUnmapViewOfSection(__int64 a1, unsigned __int64 a2)
{
  return MiUnmapViewOfSection(a1, a2, 0, 0);
}
