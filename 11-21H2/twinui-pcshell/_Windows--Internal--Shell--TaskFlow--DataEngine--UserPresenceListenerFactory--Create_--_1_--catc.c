/*
 * XREFs of _Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListenerFactory::Create_::_1_::catch$1 @ 0x18021B1D2
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18012A46C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListenerFactory::Create_::_1_::catch_1(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 64) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 40),
                           (void *)0x3D,
                           (int)"pcshell\\twinui\\taskflowbroker\\lib\\userpresencelistener.cpp",
                           a4);
  return 0LL;
}
