/*
 * XREFs of _Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::IsAppActive_::_1_::catch$6 @ 0x18061F04C
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180132134 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::IsAppActive_::_1_::catch_6(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 32) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 104),
                           (void *)0xA1,
                           (int)"pcshell\\twinui\\familyappusagemanager\\lib\\familyappusagemanager.cpp",
                           a4);
  return 0LL;
}
