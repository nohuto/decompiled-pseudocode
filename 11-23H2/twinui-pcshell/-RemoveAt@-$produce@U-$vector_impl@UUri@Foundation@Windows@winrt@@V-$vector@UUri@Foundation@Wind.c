/*
 * XREFs of ?RemoveAt@?$produce@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUri@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHI@Z @ 0x180241320
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveAt@?$vector_base@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUri@Foundation@Windows@3@@winrt@@QEAAXI@Z @ 0x180241380 (-RemoveAt@-$vector_base@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUri@Foundation@.c)
 */

__int64 winrt::impl::produce<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Foundation::Uri>>::RemoveAt()
{
  __int64 result; // rax
  int v1; // [rsp+30h] [rbp+8h] BYREF

  try
  {
    winrt::vector_base<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Uri>::RemoveAt();
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v1);
  }
  return result;
}
