/*
 * XREFs of ?find_interface@?$implements@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@67@UIDesktopSnapLayoutManagerFactory@34567@UISnapLayoutManagerExtensionStatics@PlatformExtensions@4567@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1805B4CF0
 * Callers:
 *     <none>
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800F96D0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::SnapComponent::factory_implementation::DesktopSnapLayoutManager,winrt::Windows::Foundation::IActivationFactory,winrt::Windows::Internal::Shell::SnapComponent::IDesktopSnapLayoutManagerFactory,winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtensionStatics>::find_interface(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v2; // rcx
  __int64 v3; // r9
  __int64 v4; // rax
  _QWORD *v5; // rcx
  __int64 v6; // r8

  if ( winrt::operator==(a2, winrt::impl::guid_v<winrt::Windows::Foundation::IActivationFactory>) )
  {
    v4 = v3 + 16;
    return v4 & -(__int64)(v3 != 0);
  }
  if ( winrt::operator==(
         v2,
         winrt::impl::guid_v<winrt::Windows::Internal::Shell::SnapComponent::IDesktopSnapLayoutManagerFactory>) )
  {
    v4 = v3 + 24;
    return v4 & -(__int64)(v3 != 0);
  }
  if ( winrt::operator==(
         v5,
         winrt::impl::guid_v<winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtensionStatics>) )
  {
    v4 = v3 + 32;
    return v4 & -(__int64)(v3 != 0);
  }
  return v6;
}
