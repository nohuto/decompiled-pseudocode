/*
 * XREFs of _ApplicationContainerActivationPolicy::OnCreating_::_1_::catch$10 @ 0x180573A55
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18012A46C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall ApplicationContainerActivationPolicy::OnCreating_::_1_::catch_10(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 48) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 664),
                           (void *)0x6A,
                           (int)"pcshell\\twinui\\vailactivation\\lib\\applicationcontaineractivation.cpp",
                           a4);
  return 0LL;
}
