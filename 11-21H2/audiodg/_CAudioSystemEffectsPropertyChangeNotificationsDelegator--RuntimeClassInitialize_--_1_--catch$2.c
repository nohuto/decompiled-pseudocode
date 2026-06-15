/*
 * XREFs of _CAudioSystemEffectsPropertyChangeNotificationsDelegator::RuntimeClassInitialize_::_1_::catch$2 @ 0x14006AF09
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1400663FC (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CAudioSystemEffectsPropertyChangeNotificationsDelegator::RuntimeClassInitialize_::_1_::catch_2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 64) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 40),
                           (void *)0xD,
                           (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiosystemeffectspropertychangenotificationshandler.cpp",
                           a4);
  return 0LL;
}
