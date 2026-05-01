/*
 * XREFs of ?Shutdown@?$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapFlyoutInstance@34567@@impl@winrt@@UEAAHXZ @ 0x1805B04F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Shutdown@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x1805BA8B4 (-Shutdown@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXXZ.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance,winrt::Windows::Internal::Shell::SnapComponent::ISnapFlyoutInstance>::Shutdown(
        __int64 a1)
{
  winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *v1; // rcx
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = (winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *)((a1 - 16) & -(__int64)(a1 != 0));
  try
  {
    winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::Shutdown(v1);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v3);
  }
  return result;
}
