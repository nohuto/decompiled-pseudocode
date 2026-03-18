/*
 * XREFs of ?IsReadyForEvaluation@CExpression@@MEBA_NXZ @ 0x1800E2F50
 * Callers:
 *     <none>
 * Callees:
 *     ?IsReadyForEvaluation@CBaseExpression@@MEBA_NXZ @ 0x1800E2F80 (-IsReadyForEvaluation@CBaseExpression@@MEBA_NXZ.c)
 */

char __fastcall CExpression::IsReadyForEvaluation(CExpression *this)
{
  bool IsReadyForEvaluation; // al
  char v3; // dl

  IsReadyForEvaluation = CBaseExpression::IsReadyForEvaluation(this);
  v3 = 0;
  if ( IsReadyForEvaluation )
    return *((_QWORD *)this + 42) != 0LL;
  return v3;
}
