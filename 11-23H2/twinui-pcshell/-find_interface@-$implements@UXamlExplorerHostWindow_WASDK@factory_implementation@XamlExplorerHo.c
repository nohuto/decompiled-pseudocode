/*
 * XREFs of ?find_interface@?$implements@UXamlExplorerHostWindow_WASDK@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@67@UIXamlExplorerHostWindow_WASDKFactory@34567@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1804FC3C0
 * Callers:
 *     <none>
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlExplorerHostWindow_WASDK,winrt::Windows::Foundation::IActivationFactory,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow_WASDKFactory>::find_interface(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v2; // rcx
  __int64 v3; // r9
  __int64 v4; // rax
  __int64 v5; // r8

  if ( winrt::operator==(a2, L"5") )
  {
    v4 = v3 + 16;
    return v4 & -(__int64)(v3 != 0);
  }
  if ( winrt::operator==(
         v2,
         winrt::impl::guid_v<winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow_WASDKFactory>) )
  {
    v4 = v3 + 24;
    return v4 & -(__int64)(v3 != 0);
  }
  return v5;
}
