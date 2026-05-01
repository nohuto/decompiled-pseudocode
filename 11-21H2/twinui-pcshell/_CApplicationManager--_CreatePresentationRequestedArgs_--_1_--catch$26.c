/*
 * XREFs of _CApplicationManager::_CreatePresentationRequestedArgs_::_1_::catch$26 @ 0x180215A58
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18012A46C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CApplicationManager::_CreatePresentationRequestedArgs_::_1_::catch_26(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 184) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 168),
                            (void *)0x2171,
                            (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                            a4);
  return 0LL;
}
