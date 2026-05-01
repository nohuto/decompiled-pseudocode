/*
 * XREFs of ?remove_ActiveTabChanged@?$produce@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UIWindowTabExtension@3UI@456@@impl@winrt@@UEAAHUevent_token@3@@Z @ 0x180638B90
 * Callers:
 *     <none>
 * Callees:
 *     ?ActiveTabChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUevent_token@6@@Z @ 0x180636CD0 (-ActiveTabChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUevent_toke.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::WindowTabHost,winrt::Windows::Internal::UI::Shell::IWindowTabExtension>::remove_ActiveTabChanged(
        __int64 a1,
        void *a2)
{
  void *v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  winrt::Windows::Internal::Shell::implementation::WindowTabHost::ActiveTabChanged(
    (winrt::Windows::Internal::Shell::implementation::WindowTabHost *)((a1 - 32) & -(__int64)(a1 != 0)),
    &v3);
  return 0LL;
}
