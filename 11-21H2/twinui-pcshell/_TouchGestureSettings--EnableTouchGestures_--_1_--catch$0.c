/*
 * XREFs of _TouchGestureSettings::EnableTouchGestures_::_1_::catch$0 @ 0x180216442
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18022A4B2 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall TouchGestureSettings::EnableTouchGestures_::_1_::catch_0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 40),
    (void *)0xA2,
    (unsigned int)"pcshell\\twinui\\touchgestures\\lib\\touchgesturesettings.cpp",
    a4);
  return 0LL;
}
