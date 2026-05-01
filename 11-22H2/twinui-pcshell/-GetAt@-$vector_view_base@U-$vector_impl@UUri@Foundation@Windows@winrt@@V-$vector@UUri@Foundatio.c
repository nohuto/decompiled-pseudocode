/*
 * XREFs of ?GetAt@?$vector_view_base@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUri@Foundation@Windows@3@Ucollection_version@23@@winrt@@QEBA?AUUri@Foundation@Windows@2@I@Z @ 0x18023A874
 * Callers:
 *     ?GetAt@?$produce@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUri@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAPEAX@Z @ 0x18023A760 (-GetAt@-$produce@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUri@Foundation@Windows.c)
 *     ?GetAt@?$produce@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVectorView@UUri@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAPEAX@Z @ 0x18023A7F0 (-GetAt@-$produce@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUri@Found_ea_18023A7F0.c)
 * Callees:
 *     ??0?$AsyncOperationCompletedHandler@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@AEBU0123@@Z @ 0x180190BA0 (--0-$AsyncOperationCompletedHandler@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@Q.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??0hresult_out_of_bounds@winrt@@QEAA@XZ @ 0x18041D968 (--0hresult_out_of_bounds@winrt@@QEAA@XZ.c)
 */

winrt::Windows::Foundation::IUnknown *__fastcall winrt::vector_view_base<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Uri,winrt::impl::collection_version>::GetAt(
        __int64 a1,
        winrt::Windows::Foundation::IUnknown *a2,
        unsigned int a3)
{
  __int64 v3; // r9
  __int64 v4; // rax
  __int64 v6; // rax
  _BYTE pExceptionObject[32]; // [rsp+28h] [rbp-20h] BYREF

  v3 = a1 + 8;
  v4 = a1 + 16;
  if ( !a1 )
  {
    v3 = 48LL;
    v4 = 56LL;
  }
  if ( a3 >= (unsigned int)((__int64)(*(_QWORD *)v4 - *(_QWORD *)v3) >> 3) )
  {
    winrt::hresult_out_of_bounds::hresult_out_of_bounds((winrt::hresult_out_of_bounds *)pExceptionObject);
    throw (winrt::hresult_out_of_bounds *)pExceptionObject;
  }
  v6 = a1 + 8;
  if ( !a1 )
    v6 = 48LL;
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Rect>::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Rect>(
    a2,
    (_QWORD *)(*(_QWORD *)v6 + 8LL * a3));
  return a2;
}
