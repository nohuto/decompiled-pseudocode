/*
 * XREFs of ??$LambdaEnumWindowsProc@V_lambda_4bda98b3a01c558fc217a4a30bde81e2_@@@EnumWindowsHelpers@@YAHPEAUHWND__@@_J@Z @ 0x18049B800
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_cab7c03a2b5ac7190be81e45414ea272_::operator() @ 0x18049BC60 (_lambda_cab7c03a2b5ac7190be81e45414ea272_--operator().c)
 */

_BOOL8 __fastcall EnumWindowsHelpers::LambdaEnumWindowsProc<_lambda_4bda98b3a01c558fc217a4a30bde81e2_>(
        HWND a1,
        __int64 a2)
{
  **(_DWORD **)a2 = lambda_cab7c03a2b5ac7190be81e45414ea272_::operator()(*(_QWORD *)(a2 + 8), a1);
  return **(_DWORD **)a2 >= 0;
}
