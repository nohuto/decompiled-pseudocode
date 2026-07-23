/*
 * XREFs of MiCheckForConflictingVadExistence @ 0x140214E20
 * Callers:
 *     MiIsVaRangeAvailable @ 0x1406AF82C (MiIsVaRangeAvailable.c)
 * Callees:
 *     MiCheckForConflictingVad @ 0x140214E40 (MiCheckForConflictingVad.c)
 */

_BOOL8 MiCheckForConflictingVadExistence()
{
  return MiCheckForConflictingVad() != 0;
}
