/*
 * XREFs of _HotkeyRegistrationForwarder::ForwardHotkeyRegistration_::_1_::catch$26 @ 0x180114F6E
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800DAE74 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall HotkeyRegistrationForwarder::ForwardHotkeyRegistration_::_1_::catch_26(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 32) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 88),
                           (void *)0x5B,
                           (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\hotkeyregistrationforwarder\\hotkey"
                                "registrationforwarder.cpp",
                           a4);
  return 0LL;
}
