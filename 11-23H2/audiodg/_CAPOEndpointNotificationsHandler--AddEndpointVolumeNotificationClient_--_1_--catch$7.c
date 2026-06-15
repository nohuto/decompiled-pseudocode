/*
 * XREFs of _CAPOEndpointNotificationsHandler::AddEndpointVolumeNotificationClient_::_1_::catch$7 @ 0x140071A0E
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x140065DA4 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CAPOEndpointNotificationsHandler::AddEndpointVolumeNotificationClient_::_1_::catch_7(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 56),
    (void *)0x96,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpointnotificationshandler.cpp",
    a4);
  return 0LL;
}
