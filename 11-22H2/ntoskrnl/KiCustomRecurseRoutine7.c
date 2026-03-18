/*
 * XREFs of KiCustomRecurseRoutine7 @ 0x14042AE70
 * Callers:
 *     KiCustomRecurseRoutine6 @ 0x14042ACF0 (KiCustomRecurseRoutine6.c)
 *     KiCustomAccessRoutine7 @ 0x14042AE90 (KiCustomAccessRoutine7.c)
 * Callees:
 *     KiCustomRecurseRoutine8 @ 0x14042AF30 (KiCustomRecurseRoutine8.c)
 */

__int64 __fastcall KiCustomRecurseRoutine7(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine8();
  return *a2;
}
