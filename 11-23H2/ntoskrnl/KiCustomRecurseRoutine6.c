/*
 * XREFs of KiCustomRecurseRoutine6 @ 0x14042B3B0
 * Callers:
 *     KiCustomAccessRoutine6 @ 0x14042B3D0 (KiCustomAccessRoutine6.c)
 *     KiCustomRecurseRoutine5 @ 0x14042B8F0 (KiCustomRecurseRoutine5.c)
 * Callees:
 *     KiCustomRecurseRoutine7 @ 0x14042B530 (KiCustomRecurseRoutine7.c)
 */

__int64 __fastcall KiCustomRecurseRoutine6(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine7();
  return *a2;
}
