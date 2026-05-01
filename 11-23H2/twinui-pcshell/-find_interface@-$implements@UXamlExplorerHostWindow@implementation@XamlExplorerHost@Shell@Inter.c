/*
 * XREFs of ?find_interface@?$implements@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIClosable@Foundation@67@UIXamlExplorerHostWindowLocal@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180081810
 * Callers:
 *     <none>
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow,winrt::Windows::Foundation::IClosable,IXamlExplorerHostWindowLocal>::find_interface(
        __int64 a1,
        __int64 a2)
{
  char v2; // al
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r11
  __int64 result; // rax
  __int64 v7; // rcx
  char v8; // al
  __int64 v9; // r10

  v2 = winrt::operator==(
         a2,
         &winrt::impl::guid_v<winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow>);
  v5 = 0LL;
  if ( v2 )
  {
    result = v4 - 16;
  }
  else
  {
    if ( !(unsigned __int8)winrt::operator==(v3, &winrt::impl::guid_v<winrt::Windows::Foundation::IClosable>) )
    {
      v8 = winrt::operator==(v7, &winrt::impl::guid_v<IXamlExplorerHostWindowLocal>);
      return v9 & -(__int64)(v8 != 0);
    }
    result = v4 - 8;
  }
  if ( v4 == 24 )
    return v5;
  return result;
}
