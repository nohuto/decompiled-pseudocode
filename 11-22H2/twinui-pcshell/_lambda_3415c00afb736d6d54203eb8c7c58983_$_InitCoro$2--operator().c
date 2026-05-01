/*
 * XREFs of _lambda_3415c00afb736d6d54203eb8c7c58983_$_InitCoro$2::operator() @ 0x180221A80
 * Callers:
 *     _lambda_3415c00afb736d6d54203eb8c7c58983_::operator() @ 0x180221CC8 (_lambda_3415c00afb736d6d54203eb8c7c58983_--operator().c)
 * Callees:
 *     _lambda_3415c00afb736d6d54203eb8c7c58983_$_ResumeCoro$1::operator() @ 0x180221B40 (_lambda_3415c00afb736d6d54203eb8c7c58983_$_ResumeCoro$1--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_3415c00afb736d6d54203eb8c7c58983___InitCoro_2::operator()(
        _DWORD *a1,
        __int64 a2,
        _BYTE *a3,
        __int64 a4,
        __int64 a5)
{
  *(_QWORD *)(a2 + 58) = a5;
  *(_QWORD *)(a2 + 66) = a4;
  *(_QWORD *)a2 = lambda_3415c00afb736d6d54203eb8c7c58983___ResumeCoro_1::operator();
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  *(_BYTE *)(a2 + 57) = 0;
  return lambda_3415c00afb736d6d54203eb8c7c58983___ResumeCoro_1::operator()(a2);
}
