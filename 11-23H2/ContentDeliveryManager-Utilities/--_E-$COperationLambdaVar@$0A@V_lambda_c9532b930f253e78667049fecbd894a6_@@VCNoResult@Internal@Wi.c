/*
 * XREFs of ??_E?$COperationLambdaVar@$0A@V_lambda_c9532b930f253e78667049fecbd894a6_@@VCNoResult@Internal@Windows@@$$V@Internal@Windows@@UEAAPEAXI@Z @ 0x18002EE30
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$COperationLambdaVar@$0A@V_lambda_c9532b930f253e78667049fecbd894a6_@@VCNoResult@Internal@Windows@@$$V@Internal@Windows@@UEAA@XZ @ 0x18002B9E4 (--1-$COperationLambdaVar@$0A@V_lambda_c9532b930f253e78667049fecbd894a6_@@VCNoResult@Internal@Win.c)
 */

_QWORD *__fastcall Windows::Internal::COperationLambdaVar<0,_lambda_c9532b930f253e78667049fecbd894a6_,Windows::Internal::CNoResult,>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  Windows::Internal::COperationLambdaVar<0,_lambda_c9532b930f253e78667049fecbd894a6_,Windows::Internal::CNoResult,>::~COperationLambdaVar<0,_lambda_c9532b930f253e78667049fecbd894a6_,Windows::Internal::CNoResult,>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
