/*
 * XREFs of _lambda_ead74eb18ddaf5d60afd1f95853bb976_$_InitCoro$2::operator() @ 0x1801D7FB0
 * Callers:
 *     _lambda_ead74eb18ddaf5d60afd1f95853bb976_::operator() @ 0x1801D8288 (_lambda_ead74eb18ddaf5d60afd1f95853bb976_--operator().c)
 * Callees:
 *     _lambda_ead74eb18ddaf5d60afd1f95853bb976_$_ResumeCoro$1::operator() @ 0x1801D8080 (_lambda_ead74eb18ddaf5d60afd1f95853bb976_$_ResumeCoro$1--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_ead74eb18ddaf5d60afd1f95853bb976___InitCoro_2::operator()(
        _DWORD *a1,
        char *a2,
        _BYTE *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  *(_QWORD *)(a2 + 465) = a6;
  *(_QWORD *)(a2 + 473) = a4;
  *(_QWORD *)(a2 + 481) = a5;
  *(_QWORD *)a2 = lambda_ead74eb18ddaf5d60afd1f95853bb976___ResumeCoro_1::operator();
  *((_DWORD *)a2 + 2) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  a2[464] = 0;
  return lambda_ead74eb18ddaf5d60afd1f95853bb976___ResumeCoro_1::operator()(a2);
}
