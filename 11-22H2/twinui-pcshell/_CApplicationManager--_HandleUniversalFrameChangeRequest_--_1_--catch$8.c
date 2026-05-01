/*
 * XREFs of _CApplicationManager::_HandleUniversalFrameChangeRequest_::_1_::catch$8 @ 0x1803A31C5
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180132134 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CApplicationManager::_HandleUniversalFrameChangeRequest_::_1_::catch_8(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 96) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 72),
                           (void *)0x6B7,
                           (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                           a4);
  return 0LL;
}
