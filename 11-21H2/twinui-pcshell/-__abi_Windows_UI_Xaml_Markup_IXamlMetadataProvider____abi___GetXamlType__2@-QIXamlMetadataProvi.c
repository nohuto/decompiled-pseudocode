/*
 * XREFs of ?__abi_Windows_UI_Xaml_Markup_IXamlMetadataProvider____abi___GetXamlType__2@?QIXamlMetadataProvider@Markup@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@UE$AAAJVTypeName@Interop@345@PEAPE$AAUIXamlType@2345@@Z @ 0x1801655DC
 * Callers:
 *     ?__abi_Windows_UI_Xaml_Markup_IXamlMetadataProvider____abi___GetXamlType__2@?QIXamlMetadataProvider@Markup@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@WEA@E$AAAJVTypeName@Interop@345@PEAPE$AAUIXamlType@2345@@Z @ 0x1801FF100 (-__abi_Windows_UI_Xaml_Markup_IXamlMetadataProvider____abi___GetXamlType__2@-QIXaml_ea_1801FF100.c)
 * Callees:
 *     ?GetXamlType@?QIXamlMetadataProvider@Markup@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@UE$AAAPE$AAUIXamlType@2345@VTypeName@Interop@345@@Z @ 0x18016562C (-GetXamlType@-QIXamlMetadataProvider@Markup@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@Composa.c)
 */

__int64 __fastcall ___abi_Windows_UI_Xaml_Markup_IXamlMetadataProvider____abi___GetXamlType__2__QIXamlMetadataProvider_Markup_Xaml_UI_Windows__XamlExplorerHostApp_Desktop_ComposableShell_WindowsInternal__UE_AAAJVTypeName_Interop_345_PEAPE_AAUIXamlType_2345__Z(
        __int64 a1,
        __int128 *a2,
        _QWORD *a3)
{
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  if ( *(_BYTE *)(a1 + 264) )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
    JUMPOUT(0x1802CCDEDLL);
  }
  *a3 = 0LL;
  v4 = *a2;
  *a3 = _GetXamlType__QIXamlMetadataProvider_Markup_Xaml_UI_Windows__XamlExplorerHostApp_Desktop_ComposableShell_WindowsInternal__UE_AAAPE_AAUIXamlType_2345_VTypeName_Interop_345__Z(
          a1,
          &v4);
  return 0LL;
}
