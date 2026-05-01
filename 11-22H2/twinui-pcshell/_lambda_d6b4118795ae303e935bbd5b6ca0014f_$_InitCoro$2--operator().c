/*
 * XREFs of _lambda_d6b4118795ae303e935bbd5b6ca0014f_$_InitCoro$2::operator() @ 0x180256F80
 * Callers:
 *     _lambda_d6b4118795ae303e935bbd5b6ca0014f_::operator() @ 0x1802571BC (_lambda_d6b4118795ae303e935bbd5b6ca0014f_--operator().c)
 * Callees:
 *     _lambda_d6b4118795ae303e935bbd5b6ca0014f_$_ResumeCoro$1::operator() @ 0x180257050 (_lambda_d6b4118795ae303e935bbd5b6ca0014f_$_ResumeCoro$1--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_d6b4118795ae303e935bbd5b6ca0014f___InitCoro_2::operator()(
        _DWORD *a1,
        __int64 a2,
        _BYTE *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  *(_QWORD *)(a2 + 58) = a6;
  *(_QWORD *)(a2 + 66) = a4;
  *(_QWORD *)(a2 + 74) = a5;
  *(_QWORD *)a2 = lambda_d6b4118795ae303e935bbd5b6ca0014f___ResumeCoro_1::operator();
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  *(_BYTE *)(a2 + 57) = 0;
  return lambda_d6b4118795ae303e935bbd5b6ca0014f___ResumeCoro_1::operator()(a2);
}
