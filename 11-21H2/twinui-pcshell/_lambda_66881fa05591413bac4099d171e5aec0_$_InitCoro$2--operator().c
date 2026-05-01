/*
 * XREFs of _lambda_66881fa05591413bac4099d171e5aec0_$_InitCoro$2::operator() @ 0x1801D7C90
 * Callers:
 *     _lambda_66881fa05591413bac4099d171e5aec0_::operator() @ 0x1801D7F34 (_lambda_66881fa05591413bac4099d171e5aec0_--operator().c)
 * Callees:
 *     _lambda_66881fa05591413bac4099d171e5aec0_$_ResumeCoro$1::operator() @ 0x1801D7D60 (_lambda_66881fa05591413bac4099d171e5aec0_$_ResumeCoro$1--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_66881fa05591413bac4099d171e5aec0___InitCoro_2::operator()(
        _DWORD *a1,
        char *a2,
        _BYTE *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  *(_QWORD *)(a2 + 401) = a6;
  *(_QWORD *)(a2 + 409) = a4;
  *(_QWORD *)(a2 + 417) = a5;
  *(_QWORD *)a2 = lambda_66881fa05591413bac4099d171e5aec0___ResumeCoro_1::operator();
  *((_DWORD *)a2 + 2) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  a2[400] = 0;
  return lambda_66881fa05591413bac4099d171e5aec0___ResumeCoro_1::operator()(a2);
}
