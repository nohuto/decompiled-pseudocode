/*
 * XREFs of KiCustomRecurseRoutine6 @ 0x14042B740
 * Callers:
 *     KiCustomAccessRoutine6 @ 0x14042B760 (KiCustomAccessRoutine6.c)
 *     KiCustomRecurseRoutine5 @ 0x14042BC80 (KiCustomRecurseRoutine5.c)
 * Callees:
 *     KiCustomRecurseRoutine7 @ 0x14042B8C0 (KiCustomRecurseRoutine7.c)
 */

__int64 __fastcall KiCustomRecurseRoutine6(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine7();
  return *a2;
}
