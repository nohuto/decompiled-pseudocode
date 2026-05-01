/*
 * XREFs of ?GetXamlTypeByFullName@?$produce@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlMetadataProvider@Markup@Xaml@UI@67@@impl@winrt@@UEAAHPEAXPEAPEAX@Z @ 0x180154500
 * Callers:
 *     <none>
 * Callees:
 *     ?GetXamlType@?$consume_Windows_UI_Xaml_Markup_IXamlMetadataProvider@UIXamlMetadataProvider@Markup@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1801F9EC8 (-GetXamlType@-$consume_Windows_UI_Xaml_Markup_IXamlMetadataProvider@UIXamlMetadataP_ea_1801F9EC8.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication,winrt::Windows::UI::Xaml::Markup::IXamlMetadataProvider>::GetXamlTypeByFullName(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 result; // rax
  _QWORD v5[7]; // [rsp+20h] [rbp-38h] BYREF

  *a3 = 0LL;
  v5[1] = a2;
  try
  {
    winrt::impl::consume_Windows_UI_Xaml_Markup_IXamlMetadataProvider<winrt::Windows::UI::Xaml::Markup::IXamlMetadataProvider>::GetXamlType();
    *a3 = v5[0];
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(v5);
  }
  return result;
}
