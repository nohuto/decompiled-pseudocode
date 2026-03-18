/*
 * XREFs of KiCustomRecurseRoutine2 @ 0x14042B2F0
 * Callers:
 *     KiCustomRecurseRoutine1 @ 0x14042B230 (KiCustomRecurseRoutine1.c)
 *     KiCustomAccessRoutine2 @ 0x14042B310 (KiCustomAccessRoutine2.c)
 * Callees:
 *     KiCustomRecurseRoutine3 @ 0x14042B470 (KiCustomRecurseRoutine3.c)
 */

__int64 __fastcall KiCustomRecurseRoutine2(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine3();
  return *a2;
}
