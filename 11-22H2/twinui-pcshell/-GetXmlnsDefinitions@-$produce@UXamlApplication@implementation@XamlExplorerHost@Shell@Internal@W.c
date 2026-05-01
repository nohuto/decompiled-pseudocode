/*
 * XREFs of ?GetXmlnsDefinitions@?$produce@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlMetadataProvider@Markup@Xaml@UI@67@@impl@winrt@@UEAAHPEAIPEAPEAUstruct_Windows_UI_Xaml_Markup_XmlnsDefinition@23@@Z @ 0x1804F5960
 * Callers:
 *     <none>
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     CoTaskMemFree_0 @ 0x1801C7A7D (CoTaskMemFree_0.c)
 *     ?GetXmlnsDefinitions@?$consume_Windows_UI_Xaml_Markup_IXamlMetadataProvider@UIXamlMetadataProvider@Markup@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1804F58D8 (-GetXmlnsDefinitions@-$consume_Windows_UI_Xaml_Markup_IXamlMetadataProvider@UIXamlMetadataProvid.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication,winrt::Windows::UI::Xaml::Markup::IXamlMetadataProvider>::GetXmlnsDefinitions(
        __int64 a1,
        unsigned int *a2,
        _QWORD *a3)
{
  __int64 v6; // rcx
  unsigned int v7; // ebx
  LPVOID v8; // rdi
  volatile signed __int32 **v9; // rbx
  char *v10; // rdi
  __int64 result; // rax
  int v12; // [rsp+20h] [rbp-38h] BYREF
  LPVOID pv; // [rsp+28h] [rbp-30h] BYREF
  unsigned int v14; // [rsp+30h] [rbp-28h]

  *a3 = 0LL;
  v6 = a1 + 32;
  if ( !a1 )
    v6 = 64LL;
  try
  {
    winrt::impl::consume_Windows_UI_Xaml_Markup_IXamlMetadataProvider<winrt::Windows::UI::Xaml::Markup::IXamlMetadataProvider>::GetXmlnsDefinitions(
      (__int64 *)v6,
      (__int64)&pv);
    v7 = v14;
    v8 = pv;
    memset_0(&pv, 0, 0x10uLL);
    *a2 = v7;
    *a3 = v8;
    v9 = (volatile signed __int32 **)pv;
    if ( pv )
    {
      v10 = (char *)pv + 16 * v14;
      if ( pv != v10 )
      {
        do
        {
          winrt::handle_type<winrt::impl::hstring_traits>::close(v9 + 1);
          winrt::handle_type<winrt::impl::hstring_traits>::close(v9);
          v9 += 2;
        }
        while ( v9 != (volatile signed __int32 **)v10 );
        v9 = (volatile signed __int32 **)pv;
      }
      CoTaskMemFree_0(v9);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v12);
  }
  return result;
}
