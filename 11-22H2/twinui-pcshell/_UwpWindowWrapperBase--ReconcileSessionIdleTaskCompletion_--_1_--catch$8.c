/*
 * XREFs of _UwpWindowWrapperBase::ReconcileSessionIdleTaskCompletion_::_1_::catch$8 @ 0x1802B8256
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802CED10 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall UwpWindowWrapperBase::ReconcileSessionIdleTaskCompletion_::_1_::catch_8(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 744),
    (void *)0xBA0,
    (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
    a4);
  return 0LL;
}
