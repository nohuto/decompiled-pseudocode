/*
 * XREFs of CrmStateRoutineUserAway @ 0x18004BA2C
 * Callers:
 *     CrmComparisonRoutineUserAway @ 0x1800140C0 (CrmComparisonRoutineUserAway.c)
 *     CrmComparisonRoutineUserPresent @ 0x180042F90 (CrmComparisonRoutineUserPresent.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CrmStateRoutineUserAway(_DWORD *a1)
{
  return *a1 == 2;
}
