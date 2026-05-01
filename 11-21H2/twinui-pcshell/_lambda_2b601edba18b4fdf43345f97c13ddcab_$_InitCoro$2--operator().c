/*
 * XREFs of _lambda_2b601edba18b4fdf43345f97c13ddcab_$_InitCoro$2::operator() @ 0x1801B1AA0
 * Callers:
 *     _lambda_2b601edba18b4fdf43345f97c13ddcab_::operator() @ 0x1801B1DE8 (_lambda_2b601edba18b4fdf43345f97c13ddcab_--operator().c)
 * Callees:
 *     _lambda_2b601edba18b4fdf43345f97c13ddcab_$_ResumeCoro$1::operator() @ 0x1801B1B90 (_lambda_2b601edba18b4fdf43345f97c13ddcab_$_ResumeCoro$1--operator().c)
 *     __lambda_2b601edba18b4fdf43345f97c13ddcab_::operator()_::_3_::_parameters_::_parameters_ @ 0x18049A0FC (__lambda_2b601edba18b4fdf43345f97c13ddcab_--operator()_--_3_--_parameters_--_parameters_.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_2b601edba18b4fdf43345f97c13ddcab___InitCoro_2::operator()(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  _DWORD *v6; // r10
  _BYTE *v7; // r11

  _lambda_2b601edba18b4fdf43345f97c13ddcab_::operator()_::_3_::_parameters_::_parameters_((char *)a2 + 289, a5, a4);
  *(_QWORD *)a2 = lambda_2b601edba18b4fdf43345f97c13ddcab___ResumeCoro_1::operator();
  a2[2] = *v6 != 0 ? 2 : 65538;
  *v7 = 0;
  *((_BYTE *)a2 + 288) = 0;
  return lambda_2b601edba18b4fdf43345f97c13ddcab___ResumeCoro_1::operator()(a2);
}
