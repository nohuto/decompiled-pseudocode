/*
 * XREFs of _Utils::ProtocolLauncher::TryEnsurePackageRegistered_::_1_::catch$10 @ 0x1806C351A
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802CED10 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall Utils::ProtocolLauncher::TryEnsurePackageRegistered_::_1_::catch_10(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 40),
    (void *)0x153,
    (int)"pcshell\\twinui\\meetandchatmanager\\lib\\utils.cpp",
    a4);
  return 0LL;
}
