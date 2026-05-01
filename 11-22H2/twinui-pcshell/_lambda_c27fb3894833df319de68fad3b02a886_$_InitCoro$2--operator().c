/*
 * XREFs of _lambda_c27fb3894833df319de68fad3b02a886_$_InitCoro$2::operator() @ 0x180276C5C
 * Callers:
 *     _lambda_c27fb3894833df319de68fad3b02a886_::operator() @ 0x18027742C (_lambda_c27fb3894833df319de68fad3b02a886_--operator().c)
 * Callees:
 *     _lambda_c27fb3894833df319de68fad3b02a886_$_ResumeCoro$1::operator() @ 0x180276D10 (_lambda_c27fb3894833df319de68fad3b02a886_$_ResumeCoro$1--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_c27fb3894833df319de68fad3b02a886___InitCoro_2::operator()(
        _DWORD *a1,
        char *a2,
        _BYTE *a3,
        __int64 a4)
{
  *(_QWORD *)(a2 + 306) = a4;
  *(_QWORD *)a2 = lambda_c27fb3894833df319de68fad3b02a886___ResumeCoro_1::operator();
  *((_DWORD *)a2 + 2) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  a2[305] = 0;
  return lambda_c27fb3894833df319de68fad3b02a886___ResumeCoro_1::operator()(a2);
}
