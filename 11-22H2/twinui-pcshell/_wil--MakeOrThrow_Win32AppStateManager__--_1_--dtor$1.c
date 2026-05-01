/*
 * XREFs of _wil::MakeOrThrow_Win32AppStateManager__::_1_::dtor$1 @ 0x1802B8C20
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VWin32AppStateManager@@@WRL@Microsoft@@QEAA@XZ @ 0x180622D40 (--1-$ComPtr@VWin32AppStateManager@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall wil::MakeOrThrow_Win32AppStateManager__::_1_::dtor_1(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 2;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~2u;
    return Microsoft::WRL::ComPtr<Win32AppStateManager>::~ComPtr<Win32AppStateManager>(*(_QWORD *)(a2 + 80));
  }
  return result;
}
