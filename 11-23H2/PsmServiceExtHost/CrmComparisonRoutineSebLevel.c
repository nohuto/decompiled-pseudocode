/*
 * XREFs of CrmComparisonRoutineSebLevel @ 0x1800428B0
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateRoutineSebLevel @ 0x18004B9F0 (CrmStateRoutineSebLevel.c)
 */

__int64 __fastcall CrmComparisonRoutineSebLevel(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax

  v2 = CrmStateRoutineSebLevel(a2);
  return CrmStateRoutineLogicalToComparisonState(v2);
}
