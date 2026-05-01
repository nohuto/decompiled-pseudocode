/*
 * XREFs of ?find_interface@?$implements@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIClosable@Foundation@67@Unon_agile@7@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1800FAE70
 * Callers:
 *     <none>
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800F96D0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostChildWindow,winrt::Windows::Foundation::IClosable,winrt::non_agile>::find_interface(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v2; // rcx
  __int64 v3; // r9
  __int64 v4; // r8
  __int64 v6; // rax

  if ( winrt::operator==(
         a2,
         winrt::impl::guid_v<winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow>) )
  {
    v6 = v3 + 16;
    return v6 & -(__int64)(v3 != 0);
  }
  if ( winrt::operator==(v2, winrt::impl::guid_v<winrt::Windows::Foundation::IClosable>) )
  {
    v6 = v3 + 24;
    return v6 & -(__int64)(v3 != 0);
  }
  return v4;
}
