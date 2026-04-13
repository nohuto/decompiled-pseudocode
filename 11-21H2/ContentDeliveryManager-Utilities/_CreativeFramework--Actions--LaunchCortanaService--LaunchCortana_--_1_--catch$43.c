/*
 * XREFs of _CreativeFramework::Actions::LaunchCortanaService::LaunchCortana_::_1_::catch$43 @ 0x1800F59B4
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18003B334 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CreativeFramework::Actions::LaunchCortanaService::LaunchCortana_::_1_::catch_43(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 744),
    (void *)0x41,
    (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\launchcortana.cpp",
    a4);
  return 0LL;
}
