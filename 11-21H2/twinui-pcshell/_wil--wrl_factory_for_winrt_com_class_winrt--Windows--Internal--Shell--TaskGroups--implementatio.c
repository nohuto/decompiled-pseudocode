/*
 * XREFs of _wil::wrl_factory_for_winrt_com_class_winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent_::CreateInstance_::_1_::catch$1 @ 0x18021C437
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18012A46C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall wil::wrl_factory_for_winrt_com_class_winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent_::CreateInstance_::_1_::catch_1(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 32) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 88),
                           (void *)0x44,
                           (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\cppwinrt_wrl.h",
                           a4);
  return 0LL;
}
