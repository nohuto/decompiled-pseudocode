/*
 * XREFs of _CAPOEndpointNotificationsHandler::AddEndpointPropertyChangeNotificationClient_::_1_::catch$12 @ 0x14007198B
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x140065DF4 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CAPOEndpointNotificationsHandler::AddEndpointPropertyChangeNotificationClient_::_1_::catch_12(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 56),
    (void *)0x38,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpointnotificationshandler.cpp",
    a4);
  return 0LL;
}
