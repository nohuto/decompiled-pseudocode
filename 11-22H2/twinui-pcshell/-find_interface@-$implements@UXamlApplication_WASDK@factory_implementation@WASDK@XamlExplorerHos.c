/*
 * XREFs of ?find_interface@?$implements@UXamlApplication_WASDK@factory_implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@78@UIXamlApplication_WASDKStatics@345678@Ustatic_lifetime@8@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x18004A4E0
 * Callers:
 *     <none>
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::factory_implementation::XamlApplication_WASDK,winrt::Windows::Foundation::IActivationFactory,winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::IXamlApplication_WASDKStatics,winrt::static_lifetime>::find_interface(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // r9
  __int64 v4; // r8
  __int64 v5; // rax

  if ( (unsigned __int8)winrt::operator==(a2, L"5") )
  {
    v5 = v3 + 16;
    return v5 & -(__int64)(v3 != 0);
  }
  if ( (unsigned __int8)winrt::operator==(
                          v2,
                          &winrt::impl::guid_v<winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::IXamlApplication_WASDKStatics>) )
  {
    v5 = v3 + 24;
    return v5 & -(__int64)(v3 != 0);
  }
  return v4;
}
