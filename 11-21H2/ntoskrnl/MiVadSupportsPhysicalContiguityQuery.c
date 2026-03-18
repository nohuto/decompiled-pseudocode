/*
 * XREFs of MiVadSupportsPhysicalContiguityQuery @ 0x14097896C
 * Callers:
 *     MiProcessVaContiguityInformation @ 0x1405B4EA0 (MiProcessVaContiguityInformation.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiVadSupportsPhysicalContiguityQuery(__int64 a1)
{
  return (*(_DWORD *)(a1 + 48) & 0x70) == 0 && (*(_DWORD *)(a1 + 48) & 0x200000) != 0;
}
