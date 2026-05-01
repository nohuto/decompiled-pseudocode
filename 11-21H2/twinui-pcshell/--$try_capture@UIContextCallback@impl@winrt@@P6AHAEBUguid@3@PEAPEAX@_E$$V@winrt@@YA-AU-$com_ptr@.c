/*
 * XREFs of ??$try_capture@UIContextCallback@impl@winrt@@P6AHAEBUguid@3@PEAPEAX@_E$$V@winrt@@YA?AU?$com_ptr@UIContextCallback@impl@winrt@@@0@P6AHAEBUguid@0@PEAPEAX@_E@Z @ 0x1801019D4
 * Callers:
 *     ?resume_apartment@impl@winrt@@YAXAEBUresume_apartment_context@12@U?$coroutine_handle@X@experimental@std@@@Z @ 0x1800296A4 (-resume_apartment@impl@winrt@@YAXAEBUresume_apartment_context@12@U-$coroutine_handle@X@experimen.c)
 *     ??0XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUIXamlMetadataProvider@Markup@Xaml@UI@Windows@@PEAUIPrivilegedPresentationOperations@@@Z @ 0x180064220 (--0XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUIXamlMetadataProvid.c)
 * Callees:
 *     WINRT_IMPL_CoGetObjectContext @ 0x18018F6F7 (WINRT_IMPL_CoGetObjectContext.c)
 */

LPVOID *__fastcall ___try_capture_UIContextCallback_impl_winrt__P6AHAEBUguid_3_PEAPEAX__E__V_winrt__YA_AU__com_ptr_UIContextCallback_impl_winrt___0_P6AHAEBUguid_0_PEAPEAX__E_Z(
        LPVOID *a1)
{
  LPVOID ppv; // [rsp+38h] [rbp+10h] BYREF

  ppv = 0LL;
  WINRT_IMPL_CoGetObjectContext(&winrt::impl::guid_v<winrt::impl::IContextCallback>, &ppv);
  *a1 = ppv;
  return a1;
}
