/*
 * XREFs of _winrt::immersive_shell_component::PublishServices_::_1_::catch$41 @ 0x1802184E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18012A46C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall winrt::immersive_shell_component::PublishServices_::_1_::catch_41(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 144) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 136),
                            (void *)0x14D,
                            (int)"internal\\shellcommonshell\\inc\\winrt/immersive_shell_component.h",
                            a4);
  return 0LL;
}
