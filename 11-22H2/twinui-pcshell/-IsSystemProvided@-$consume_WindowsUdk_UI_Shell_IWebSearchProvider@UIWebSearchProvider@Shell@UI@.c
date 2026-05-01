/*
 * XREFs of ?IsSystemProvided@?$consume_WindowsUdk_UI_Shell_IWebSearchProvider@UIWebSearchProvider@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1801ED8A4
 * Callers:
 *     _lambda_9e570927e665d205f933b0ae213f3c70_::operator() @ 0x1801E932C (_lambda_9e570927e665d205f933b0ae213f3c70_--operator().c)
 *     ?InstallWebSearchPackage@@YAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0V?$tip_test@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@@tip2@@@Z @ 0x1804682C8 (-InstallWebSearchPackage@@YAXAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@0V.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

char __fastcall winrt::impl::consume_WindowsUdk_UI_Shell_IWebSearchProvider<winrt::WindowsUdk::UI::Shell::IWebSearchProvider>::IsSystemProvided(
        __int64 *a1)
{
  __int64 v1; // rcx
  int v2; // eax
  char v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  v4 = 0;
  v2 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v1 + 48LL))(v1, &v4);
  if ( v2 < 0 )
    winrt::throw_hresult((unsigned int)v2);
  return v4;
}
