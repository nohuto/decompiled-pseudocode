/*
 * XREFs of _CreativeFramework::Actions::SetLockScreenHotspotsService::DeleteLockScreenRegistryKeys_::_1_::catch$6 @ 0x1800DC0DA
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18003F208 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CreativeFramework::Actions::SetLockScreenHotspotsService::DeleteLockScreenRegistryKeys_::_1_::catch_6(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 96) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 1768),
                           (void *)0xBF,
                           (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
                           a4);
  return 0LL;
}
