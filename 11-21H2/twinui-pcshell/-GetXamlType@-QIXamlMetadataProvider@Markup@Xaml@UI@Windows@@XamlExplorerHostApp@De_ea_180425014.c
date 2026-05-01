/*
 * XREFs of ?GetXamlType@?QIXamlMetadataProvider@Markup@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@UE$AAAPE$AAUIXamlType@2345@PE$AAVString@Platform@@@Z @ 0x180425014
 * Callers:
 *     ?GetXamlType@?QIXamlMetadataProvider@Markup@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@WEA@E$AAAPE$AAUIXamlType@2345@PE$AAVString@Platform@@@Z @ 0x1801FDB40 (-GetXamlType@-QIXamlMetadataProvider@Markup@Xaml@UI@Windows@@XamlExplorerHostApp@De_ea_1801FDB40.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1800F6658 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetXamlType@IXamlMetadataProvider@Markup@Xaml@UI@Windows@@UE$AAAPE$AAUIXamlType@2345@PE$AAVString@Platform@@@Z @ 0x18042507C (-GetXamlType@IXamlMetadataProvider@Markup@Xaml@UI@Windows@@UE$AAAPE$AAUIXamlType@2345@PE$AAVStri.c)
 */

__int64 __fastcall _GetXamlType__QIXamlMetadataProvider_Markup_Xaml_UI_Windows__XamlExplorerHostApp_Desktop_ComposableShell_WindowsInternal__UE_AAAPE_AAUIXamlType_2345_PE_AAVString_Platform___Z(
        __int64 a1)
{
  __int64 XamlType; // rbx
  __int64 v2; // rdi

  XamlType = Windows::UI::Xaml::Markup::IXamlMetadataProvider::GetXamlType(*(_QWORD *)(a1 + 112));
  v2 = __abi_winrt_ptr_ctor(XamlType);
  if ( XamlType )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)XamlType + 16LL))(XamlType);
  return v2;
}
