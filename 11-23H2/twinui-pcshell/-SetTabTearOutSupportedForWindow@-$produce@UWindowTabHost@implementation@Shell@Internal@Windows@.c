/*
 * XREFs of ?SetTabTearOutSupportedForWindow@?$produce@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UIWindowTabExtension@3UI@456@@impl@winrt@@UEAAH_K@Z @ 0x180032F30
 * Callers:
 *     <none>
 * Callees:
 *     ?SetTabTearOutSupportedForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z @ 0x1800332C8 (-SetTabTearOutSupportedForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::WindowTabHost,winrt::Windows::Internal::UI::Shell::IWindowTabExtension>::SetTabTearOutSupportedForWindow(
        __int64 a1,
        unsigned __int64 a2)
{
  winrt::Windows::Internal::Shell::implementation::WindowTabHost::SetTabTearOutSupportedForWindow(
    (winrt::Windows::Internal::Shell::implementation::WindowTabHost *)((a1 - 32) & -(__int64)(a1 != 0)),
    a2);
  return 0LL;
}
