/*
 * XREFs of KiCustomRecurseRoutine1 @ 0x14042BD70
 * Callers:
 *     KiCustomAccessRoutine1 @ 0x14042BD90 (KiCustomAccessRoutine1.c)
 *     KiCustomRecurseRoutine0 @ 0x14042C2B0 (KiCustomRecurseRoutine0.c)
 * Callees:
 *     KiCustomRecurseRoutine2 @ 0x14042BE30 (KiCustomRecurseRoutine2.c)
 */

__int64 __fastcall KiCustomRecurseRoutine1(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine2();
  return *a2;
}
