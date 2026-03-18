/*
 * XREFs of ?PrepareForCalculation@CExpression@@MEAAXPEA_N@Z @ 0x1800C9330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CExpression::PrepareForCalculation(CExpression *this, bool *a2)
{
  if ( CCommonRegistryData::OptimizeForDirtyExpressions )
  {
    if ( *((_QWORD *)this + 56) )
      *a2 = 1;
    else
      *a2 = *((_QWORD *)this + 37) > *((_QWORD *)this + 21);
  }
  else
  {
    *a2 = 1;
  }
}
