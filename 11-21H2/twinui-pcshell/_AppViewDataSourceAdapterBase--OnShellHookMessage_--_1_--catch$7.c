/*
 * XREFs of _AppViewDataSourceAdapterBase::OnShellHookMessage_::_1_::catch$7 @ 0x180454DFE
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18012A46C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall AppViewDataSourceAdapterBase::OnShellHookMessage_::_1_::catch_7(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 80) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 72),
                           (void *)0x5C,
                           (int)"pcshell\\private\\shell\\inc\\AppViewDataSource\\AppViewDataSourceAdapterBase.h",
                           a4);
  return 0LL;
}
