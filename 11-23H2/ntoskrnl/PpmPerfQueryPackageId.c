/*
 * XREFs of PpmPerfQueryPackageId @ 0x1403B6AB0
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x1402573F0 (KeGetPrcb.c)
 */

__int64 __fastcall PpmPerfQueryPackageId(unsigned int a1)
{
  return *(unsigned int *)(KeGetPrcb(a1) + 34856);
}
