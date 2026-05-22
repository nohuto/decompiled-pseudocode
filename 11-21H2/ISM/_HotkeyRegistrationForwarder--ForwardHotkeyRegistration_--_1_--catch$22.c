/*
 * XREFs of _HotkeyRegistrationForwarder::ForwardHotkeyRegistration_::_1_::catch$22 @ 0x1800F9020
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800C1EB4 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall HotkeyRegistrationForwarder::ForwardHotkeyRegistration_::_1_::catch_22(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 32) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 88),
                           (void *)0x4A,
                           (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\hotkeyregistrationforwarder\\hotkey"
                                "registrationforwarder.cpp",
                           a4);
  return 0LL;
}
