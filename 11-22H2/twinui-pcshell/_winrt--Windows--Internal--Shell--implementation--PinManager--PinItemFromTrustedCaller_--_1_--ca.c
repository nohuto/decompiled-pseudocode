/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::PinManager::PinItemFromTrustedCaller_::_1_::catch$37 @ 0x1806A4509
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180132134 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::PinManager::PinItemFromTrustedCaller_::_1_::catch_37(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 32) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 936),
                           (void *)0x3B0,
                           (int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
                           a4);
  return 0LL;
}
