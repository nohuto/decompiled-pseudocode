/*
 * XREFs of ExpDeleteMutant @ 0x14028CE20
 * Callers:
 *     <none>
 * Callees:
 *     KeDeleteMutant @ 0x14028CE38 (KeDeleteMutant.c)
 */

__int64 __fastcall ExpDeleteMutant(ULONG_PTR a1)
{
  return KeDeleteMutant(a1);
}
