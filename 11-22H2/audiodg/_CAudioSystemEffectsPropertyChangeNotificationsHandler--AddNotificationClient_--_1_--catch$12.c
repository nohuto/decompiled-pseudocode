/*
 * XREFs of _CAudioSystemEffectsPropertyChangeNotificationsHandler::AddNotificationClient_::_1_::catch$12 @ 0x140072DE3
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x140065DF4 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CAudioSystemEffectsPropertyChangeNotificationsHandler::AddNotificationClient_::_1_::catch_12(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 56),
    (void *)0x4B,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiosystemeffectspropertychangenotificationshandler.cpp",
    a4);
  return 0LL;
}
