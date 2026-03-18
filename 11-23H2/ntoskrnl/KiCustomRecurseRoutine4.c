/*
 * XREFs of KiCustomRecurseRoutine4 @ 0x14042B830
 * Callers:
 *     KiCustomRecurseRoutine3 @ 0x14042B470 (KiCustomRecurseRoutine3.c)
 *     KiCustomAccessRoutine4 @ 0x14042B850 (KiCustomAccessRoutine4.c)
 * Callees:
 *     KiCustomRecurseRoutine5 @ 0x14042B8F0 (KiCustomRecurseRoutine5.c)
 */

__int64 __fastcall KiCustomRecurseRoutine4(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine5();
  return *a2;
}
