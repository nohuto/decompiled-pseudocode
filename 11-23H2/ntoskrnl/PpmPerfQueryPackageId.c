/*
 * XREFs of PpmPerfQueryPackageId @ 0x1403B68D0
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x140257330 (KeGetPrcb.c)
 */

__int64 __fastcall PpmPerfQueryPackageId(unsigned int a1)
{
  return *(unsigned int *)(KeGetPrcb(a1) + 34856);
}
