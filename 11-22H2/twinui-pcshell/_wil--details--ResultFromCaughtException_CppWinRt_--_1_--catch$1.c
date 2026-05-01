/*
 * XREFs of _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$1 @ 0x1802C7327
 * Callers:
 *     <none>
 * Callees:
 *     ?MaybeGetExceptionString@details@wil@@YAXAEBUhresult_error@winrt@@PEAG_K@Z @ 0x1802CEDBA (-MaybeGetExceptionString@details@wil@@YAXAEBUhresult_error@winrt@@PEAG_K@Z.c)
 *     ?to_abi@hresult_error@winrt@@QEBA?AUhresult@2@XZ @ 0x18039048C (-to_abi@hresult_error@winrt@@QEBA-AUhresult@2@XZ.c)
 */

__int64 __fastcall wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch_1(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4)
{
  wil::details::MaybeGetExceptionString(
    *(wil::details **)(a2 + 32),
    *(const struct winrt::hresult_error **)(a2 + 144),
    *(unsigned __int16 **)(a2 + 152),
    a4);
  *(_DWORD *)(a2 + 168) = *(_DWORD *)winrt::hresult_error::to_abi(*(_QWORD *)(a2 + 32), a2 + 168);
  return 0LL;
}
