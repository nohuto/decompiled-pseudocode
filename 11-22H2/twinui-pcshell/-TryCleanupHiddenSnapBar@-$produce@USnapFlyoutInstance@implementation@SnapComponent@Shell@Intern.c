/*
 * XREFs of ?TryCleanupHiddenSnapBar@?$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapFlyoutInstance@34567@@impl@winrt@@UEAAHPEA_N@Z @ 0x18067CFA0
 * Callers:
 *     <none>
 * Callees:
 *     ?TryCleanupHiddenSnapBar@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x180691BA0 (-TryCleanupHiddenSnapBar@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance,winrt::Windows::Internal::Shell::SnapComponent::ISnapFlyoutInstance>::TryCleanupHiddenSnapBar(
        __int64 a1,
        _BYTE *a2)
{
  winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *v2; // rcx
  __int64 result; // rax
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = (winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *)((a1 - 16) & -(__int64)(a1 != 0));
  try
  {
    *a2 = winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::TryCleanupHiddenSnapBar(v2);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v4);
  }
  return result;
}
