/*
 * XREFs of _KioskPositioner::GetChromeConfigurationForView_::_1_::catch$1 @ 0x1804F03E8
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18012A46C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall KioskPositioner::GetChromeConfigurationForView_::_1_::catch_1(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 48) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 40),
                           (void *)0x26C,
                           (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
                           a4);
  return 0LL;
}
