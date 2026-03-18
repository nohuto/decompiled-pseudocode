/*
 * XREFs of PpmPerfQueryPhysicalCoreId @ 0x1403B68B0
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x140257330 (KeGetPrcb.c)
 */

__int64 __fastcall PpmPerfQueryPhysicalCoreId(unsigned int a1)
{
  return *(unsigned int *)(KeGetPrcb(a1) + 34844);
}
