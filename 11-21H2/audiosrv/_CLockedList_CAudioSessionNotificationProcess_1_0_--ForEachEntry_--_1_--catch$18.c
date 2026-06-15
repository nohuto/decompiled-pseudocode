/*
 * XREFs of _CLockedList_CAudioSessionNotificationProcess_1_0_::ForEachEntry_::_1_::catch$18 @ 0x18006E240
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800C76BC (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CLockedList_CAudioSessionNotificationProcess_1_0_::ForEachEntry_::_1_::catch_18(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 112) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 104),
                            (void *)0xDF,
                            (unsigned int)"avcore\\audiocore\\Include\\LockedList.h",
                            a4);
  return 0LL;
}
