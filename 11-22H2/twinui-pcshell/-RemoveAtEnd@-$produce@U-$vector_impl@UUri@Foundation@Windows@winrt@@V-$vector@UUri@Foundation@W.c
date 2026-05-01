/*
 * XREFs of ?RemoveAtEnd@?$produce@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUri@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHXZ @ 0x180241440
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveAtEnd@?$vector_base@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUri@Foundation@Windows@3@@winrt@@QEAAXXZ @ 0x18024149C (-RemoveAtEnd@-$vector_base@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUri@Foundati.c)
 */

__int64 winrt::impl::produce<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Foundation::Uri>>::RemoveAtEnd()
{
  __int64 result; // rax
  int v1; // [rsp+30h] [rbp+8h] BYREF

  try
  {
    winrt::vector_base<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Uri>::RemoveAtEnd();
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v1);
  }
  return result;
}
