/*
 * XREFs of ?GetXamlType@?$consume_Windows_UI_Xaml_Markup_IXamlMetadataProvider@UIXamlMetadataProvider@Markup@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1801F9EC8
 * Callers:
 *     ?GetXamlTypeByFullName@?$produce@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlMetadataProvider@Markup@Xaml@UI@67@@impl@winrt@@UEAAHPEAXPEAPEAX@Z @ 0x180154500 (-GetXamlTypeByFullName@-$produce@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_UI_Xaml_Markup_IXamlMetadataProvider<winrt::Windows::UI::Xaml::Markup::IXamlMetadataProvider>::GetXamlType(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // rcx
  int v5; // eax
  _QWORD *result; // rax
  _QWORD *v7; // [rsp+28h] [rbp-20h] BYREF

  v7 = a2;
  v3 = *a1;
  v7 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD **))(*(_QWORD *)v3 + 56LL))(v3, *a3, &v7);
  if ( v5 < 0 )
    winrt::throw_hresult((unsigned int)v5);
  result = a2;
  *a2 = v7;
  return result;
}
