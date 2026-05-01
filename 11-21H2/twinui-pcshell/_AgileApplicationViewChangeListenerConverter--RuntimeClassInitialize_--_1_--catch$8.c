/*
 * XREFs of _AgileApplicationViewChangeListenerConverter::RuntimeClassInitialize_::_1_::catch$8 @ 0x18021F892
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18012A46C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall AgileApplicationViewChangeListenerConverter::RuntimeClassInitialize_::_1_::catch_8(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 48) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 616),
                           (void *)0x7A,
                           (int)"pcshell\\twinui\\appviewmanager\\lib\\notificationdispatcher.cpp",
                           a4);
  return 0LL;
}
