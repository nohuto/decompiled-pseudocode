/*
 * XREFs of _BroadcastDVRComponent::CompleteInitializationTask_::_1_::catch$75 @ 0x1802B610F
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802CED10 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall BroadcastDVRComponent::CompleteInitializationTask_::_1_::catch_75(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 552),
    (void *)0x122,
    (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
    a4);
  return 0LL;
}
