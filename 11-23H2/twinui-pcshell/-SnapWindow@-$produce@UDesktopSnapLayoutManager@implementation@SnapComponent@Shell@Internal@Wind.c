/*
 * XREFs of ?SnapWindow@?$produce@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapLayoutManagerExtension@PlatformExtensions@4567@@impl@winrt@@UEAAH_KURect@Foundation@Windows@3@IPEAU4563@@Z @ 0x180685230
 * Callers:
 *     <none>
 * Callees:
 *     ?SnapWindow@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAX_KAEBURect@Foundation@67@U?$array_view@$$CBURect@Foundation@Windows@winrt@@@7@@Z @ 0x1806852A8 (-SnapWindow@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension>::SnapWindow(
        __int64 a1)
{
  winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager *v1; // rcx
  __int64 result; // rax
  int v3; // [rsp+58h] [rbp+20h] BYREF

  v1 = (winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager *)((a1 - 48) & -(__int64)(a1 != 0));
  try
  {
    winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::SnapWindow(v1);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v3);
  }
  return result;
}
