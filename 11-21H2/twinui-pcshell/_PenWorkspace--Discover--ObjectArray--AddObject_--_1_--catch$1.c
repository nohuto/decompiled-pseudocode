/*
 * XREFs of _PenWorkspace::Discover::ObjectArray::AddObject_::_1_::catch$1 @ 0x1803B3431
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18022A4B2 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall PenWorkspace::Discover::ObjectArray::AddObject_::_1_::catch_1(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 40),
    (void *)0x21,
    (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\ObjectArrayPenWorkspaceBroker.h",
    a4);
  return 0LL;
}
