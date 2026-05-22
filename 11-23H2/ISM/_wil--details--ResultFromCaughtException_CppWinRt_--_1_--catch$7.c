/*
 * XREFs of _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$7 @ 0x1800E4556
 * Callers:
 *     <none>
 * Callees:
 *     ?to_abi@hresult_error@winrt@@QEBA?AUhresult@2@XZ @ 0x18009A9F0 (-to_abi@hresult_error@winrt@@QEBA-AUhresult@2@XZ.c)
 *     ?MaybeGetExceptionString@details@wil@@YAXAEBUhresult_error@winrt@@PEAG_K@Z @ 0x1800E3710 (-MaybeGetExceptionString@details@wil@@YAXAEBUhresult_error@winrt@@PEAG_K@Z.c)
 */

__int64 __fastcall wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch_7(__int64 a1, __int64 a2)
{
  wil::details::MaybeGetExceptionString(
    *(wil::details **)(a2 + 40),
    *(wchar_t **)(a2 + 144),
    *(unsigned __int16 **)(a2 + 152));
  *(_DWORD *)(a2 + 168) = *winrt::hresult_error::to_abi(*(_QWORD *)(a2 + 40), (_DWORD *)(a2 + 168));
  return 0LL;
}
