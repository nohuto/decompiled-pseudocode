/*
 * XREFs of _CLockedList_CMasterVolumeNotificationProcess_1_0_::AddInterface_::_1_::catch$16 @ 0x1800788BE
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800D2C74 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CLockedList_CMasterVolumeNotificationProcess_1_0_::AddInterface_::_1_::catch_16(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 48) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 40),
                           (void *)0x89,
                           (unsigned int)"avcore\\audiocore\\Include\\LockedList.h",
                           a4);
  return 0LL;
}
