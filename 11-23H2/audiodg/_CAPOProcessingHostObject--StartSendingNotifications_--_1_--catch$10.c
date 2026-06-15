/*
 * XREFs of _CAPOProcessingHostObject::StartSendingNotifications_::_1_::catch$10 @ 0x140070465
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x140068BE0 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CAPOProcessingHostObject::StartSendingNotifications_::_1_::catch_10(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 64) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 56),
                           (void *)0x64,
                           (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghostobject.cpp",
                           a4);
  return 0LL;
}
