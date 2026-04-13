/*
 * XREFs of __lambda_141232aca07f559541c51213e97da677_::operator()_::_1_::catch$59 @ 0x1800F0F5D
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtExceptionMsg@in1diag3@details@wil@@YAJPEAXIPEBD1ZZ @ 0x18007979C (-Log_CaughtExceptionMsg@in1diag3@details@wil@@YAJPEAXIPEBD1ZZ.c)
 */

__int64 __fastcall _lambda_141232aca07f559541c51213e97da677_::operator()_::_1_::catch_59(__int64 a1, __int64 a2)
{
  const char *v3; // [rsp+20h] [rbp-28h]

  wil::details::in1diag3::Log_CaughtExceptionMsg(
    *(wil::details::in1diag3 **)(a2 + 696),
    (unsigned __int16 *)0x93,
    (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
    "Failed to handle an Activity Toast Notification",
    v3);
  return 0LL;
}
