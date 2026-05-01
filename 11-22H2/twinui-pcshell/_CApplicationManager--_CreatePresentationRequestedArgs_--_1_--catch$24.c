/*
 * XREFs of _CApplicationManager::_CreatePresentationRequestedArgs_::_1_::catch$24 @ 0x1803A204E
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180132134 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CApplicationManager::_CreatePresentationRequestedArgs_::_1_::catch_24(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 184) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 168),
                            (void *)0x2101,
                            (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                            a4);
  return 0LL;
}
