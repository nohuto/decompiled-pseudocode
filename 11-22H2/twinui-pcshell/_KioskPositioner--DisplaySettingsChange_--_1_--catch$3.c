/*
 * XREFs of _KioskPositioner::DisplaySettingsChange_::_1_::catch$3 @ 0x1805A7E52
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180132134 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall KioskPositioner::DisplaySettingsChange_::_1_::catch_3(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 128) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 104),
                            (void *)0x35F,
                            (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
                            a4);
  return 0LL;
}
