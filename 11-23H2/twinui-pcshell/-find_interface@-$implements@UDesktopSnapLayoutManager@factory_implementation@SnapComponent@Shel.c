/*
 * XREFs of ?find_interface@?$implements@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@67@UIDesktopSnapLayoutManagerFactory@34567@UIDesktopSnapLayoutManagerStatics@34567@UISnapLayoutManagerExtensionStatics@PlatformExtensions@4567@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180111A20
 * Callers:
 *     <none>
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::SnapComponent::factory_implementation::DesktopSnapLayoutManager,winrt::Windows::Foundation::IActivationFactory,winrt::Windows::Internal::Shell::SnapComponent::IDesktopSnapLayoutManagerFactory,winrt::Windows::Internal::Shell::SnapComponent::IDesktopSnapLayoutManagerStatics,winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtensionStatics>::find_interface(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v2; // rcx
  __int64 v3; // r9
  _QWORD *v4; // rcx
  _QWORD *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // r8

  if ( winrt::operator==(a2, L"5") )
  {
    v6 = v3 + 16;
  }
  else if ( winrt::operator==(
              v2,
              winrt::impl::guid_v<winrt::Windows::Internal::Shell::SnapComponent::IDesktopSnapLayoutManagerFactory>) )
  {
    v6 = v3 + 24;
  }
  else if ( winrt::operator==(
              v4,
              winrt::impl::guid_v<winrt::Windows::Internal::Shell::SnapComponent::IDesktopSnapLayoutManagerStatics>) )
  {
    v6 = v3 + 32;
  }
  else
  {
    if ( !winrt::operator==(
            v5,
            &winrt::impl::guid_v<winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtensionStatics>) )
      return v7;
    v6 = v3 + 40;
  }
  return v6 & -(__int64)(v3 != 0);
}
