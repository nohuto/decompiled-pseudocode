/*
 * XREFs of _CProcessSubmixManager::GetAppSubmixClientContextHelper_::_1_::catch$76 @ 0x180108038
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800C76BC (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CProcessSubmixManager::GetAppSubmixClientContextHelper_::_1_::catch_76(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 88) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 376),
                           (void *)0x1EF,
                           (int)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
                           a4);
  return 0LL;
}
