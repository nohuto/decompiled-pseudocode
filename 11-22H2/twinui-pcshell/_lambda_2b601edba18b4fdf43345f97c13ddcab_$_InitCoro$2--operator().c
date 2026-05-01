/*
 * XREFs of _lambda_2b601edba18b4fdf43345f97c13ddcab_$_InitCoro$2::operator() @ 0x18020DCAC
 * Callers:
 *     _lambda_2b601edba18b4fdf43345f97c13ddcab_::operator() @ 0x18020DF98 (_lambda_2b601edba18b4fdf43345f97c13ddcab_--operator().c)
 * Callees:
 *     _lambda_2b601edba18b4fdf43345f97c13ddcab_$_ResumeCoro$1::operator() @ 0x18020DDA0 (_lambda_2b601edba18b4fdf43345f97c13ddcab_$_ResumeCoro$1--operator().c)
 *     __lambda_2b601edba18b4fdf43345f97c13ddcab_::operator()_::_3_::_parameters_::_parameters_ @ 0x1805533CC (__lambda_2b601edba18b4fdf43345f97c13ddcab_--operator()_--_3_--_parameters_--_parameters_.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_2b601edba18b4fdf43345f97c13ddcab___InitCoro_2::operator()(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  _DWORD *v6; // r10
  _BYTE *v7; // r11

  _lambda_2b601edba18b4fdf43345f97c13ddcab_::operator()_::_3_::_parameters_::_parameters_(a2 + 106, a5, a4);
  *(_QWORD *)a2 = lambda_2b601edba18b4fdf43345f97c13ddcab___ResumeCoro_1::operator();
  *(_DWORD *)(a2 + 8) = *v6 != 0 ? 2 : 65538;
  *v7 = 0;
  *(_BYTE *)(a2 + 105) = 0;
  return lambda_2b601edba18b4fdf43345f97c13ddcab___ResumeCoro_1::operator()(a2);
}
