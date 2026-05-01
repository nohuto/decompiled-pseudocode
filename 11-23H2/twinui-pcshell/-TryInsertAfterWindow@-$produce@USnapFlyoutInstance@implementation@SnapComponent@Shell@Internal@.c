/*
 * XREFs of ?TryInsertAfterWindow@?$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UIControlWindow@34567@@impl@winrt@@UEAAH_KPEA_N@Z @ 0x18067D100
 * Callers:
 *     <none>
 * Callees:
 *     ?TryInsertAfterWindow@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA_N_K@Z @ 0x180692010 (-TryInsertAfterWindow@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@win.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance,winrt::Windows::Internal::Shell::SnapComponent::IControlWindow>::TryInsertAfterWindow(
        __int64 a1,
        unsigned __int64 a2,
        _BYTE *a3)
{
  winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *v3; // rcx
  __int64 result; // rax
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v3 = (winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *)((a1 - 24) & -(__int64)(a1 != 0));
  try
  {
    *a3 = winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::TryInsertAfterWindow(
            v3,
            a2);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v5);
  }
  return result;
}
