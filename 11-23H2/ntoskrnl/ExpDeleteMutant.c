/*
 * XREFs of ExpDeleteMutant @ 0x14028CB90
 * Callers:
 *     <none>
 * Callees:
 *     KeDeleteMutant @ 0x14028CBA8 (KeDeleteMutant.c)
 */

__int64 __fastcall ExpDeleteMutant(ULONG_PTR a1)
{
  return KeDeleteMutant(a1);
}
