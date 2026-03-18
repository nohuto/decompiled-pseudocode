/*
 * XREFs of KiCustomRecurseRoutine9 @ 0x14042B6B0
 * Callers:
 *     KiCustomRecurseRoutine8 @ 0x14042B5F0 (KiCustomRecurseRoutine8.c)
 *     KiCustomAccessRoutine9 @ 0x14042B6D0 (KiCustomAccessRoutine9.c)
 * Callees:
 *     KiCustomRecurseRoutine0 @ 0x14042B770 (KiCustomRecurseRoutine0.c)
 */

__int64 __fastcall KiCustomRecurseRoutine9(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine0();
  return *a2;
}
