/*
 * XREFs of _lambda_b826e61a9471a58a2220c80ea84bd06a_::_lambda_invoker_cdecl_ @ 0x1806E52E0
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1801FA5AC (-unconditional_release_ref@-$com_ptr@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUr.c)
 *     ?XamlHostThreadProc@SharedDesktopBackgroundVisualHost@@AEAAKXZ @ 0x1806EC214 (-XamlHostThreadProc@SharedDesktopBackgroundVisualHost@@AEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_b826e61a9471a58a2220c80ea84bd06a_::_lambda_invoker_cdecl_(volatile __int64 *Parameter)
{
  unsigned int v2; // edi
  volatile __int64 *v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = Parameter;
  v2 = SharedDesktopBackgroundVisualHost::XamlHostThreadProc((SharedDesktopBackgroundVisualHost *)Parameter);
  if ( Parameter )
    winrt::com_ptr<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref(&v4);
  return v2;
}
