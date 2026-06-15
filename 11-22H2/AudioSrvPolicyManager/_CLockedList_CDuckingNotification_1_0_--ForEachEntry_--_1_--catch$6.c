/*
 * XREFs of _CLockedList_CDuckingNotification_1_0_::ForEachEntry_::_1_::catch$6 @ 0x18004A0E3
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18001E19C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CLockedList_CDuckingNotification_1_0_::ForEachEntry_::_1_::catch_6(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 128) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 120),
                            (void *)0xDF,
                            (int)"onecoreuap\\internal\\avcore\\inc\\audiocore\\LockedList.h",
                            a4);
  return 0LL;
}
