/*
 * XREFs of CrmComparisonRoutineSimpleLogical @ 0x18006CED0
 * Callers:
 *     CrmComparisonRoutineSuspended @ 0x18006CEE0 (CrmComparisonRoutineSuspended.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmComparisonRoutineSimpleLogical(__int64 a1, int *a2)
{
  return CrmStateRoutineLogicalToComparisonState(*a2);
}
