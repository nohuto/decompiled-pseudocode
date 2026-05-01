/*
 * XREFs of ?RemoveAtEnd@?$vector_base@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUri@Foundation@Windows@3@@winrt@@QEAAXXZ @ 0x18024149C
 * Callers:
 *     ?RemoveAtEnd@?$produce@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUri@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHXZ @ 0x180241440 (-RemoveAtEnd@-$produce@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUri@Foundation@W.c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??$assign@AEAUUri@Foundation@Windows@winrt@@@?$removed_value@UUri@Foundation@Windows@winrt@@X@impl@winrt@@QEAAXAEAUUri@Foundation@Windows@2@@Z @ 0x18022F908 (--$assign@AEAUUri@Foundation@Windows@winrt@@@-$removed_value@UUri@Foundation@Windows@winrt@@X@im.c)
 *     ??1?$_Optional_destruct_base@UUri@Foundation@Windows@winrt@@$0A@@std@@QEAA@XZ @ 0x180234FD8 (--1-$_Optional_destruct_base@UUri@Foundation@Windows@winrt@@$0A@@std@@QEAA@XZ.c)
 *     ??0hresult_out_of_bounds@winrt@@QEAA@XZ @ 0x18041D968 (--0hresult_out_of_bounds@winrt@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::vector_base<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Uri>::RemoveAtEnd(
        volatile signed __int32 *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rbx
  _BYTE v5[16]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE pExceptionObject[40]; // [rsp+30h] [rbp-28h] BYREF

  v5[8] = 0;
  v2 = (__int64)(a1 + 2);
  if ( !a1 )
    v2 = 48LL;
  if ( *(_QWORD *)v2 == *(_QWORD *)(v2 + 8) )
  {
    winrt::hresult_out_of_bounds::hresult_out_of_bounds((winrt::hresult_out_of_bounds *)pExceptionObject);
    throw (winrt::hresult_out_of_bounds *)pExceptionObject;
  }
  _InterlockedIncrement(a1);
  v3 = (__int64)(a1 + 4);
  if ( !a1 )
    v3 = 56LL;
  winrt::impl::removed_value<winrt::Windows::Foundation::Uri,void>::assign<winrt::Windows::Foundation::Uri &>(
    (winrt::Windows::Foundation::IUnknown *)v5,
    (__int64 *)(*(_QWORD *)v3 - 8LL));
  v4 = (__int64)(a1 + 4);
  if ( !a1 )
    v4 = 56LL;
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(*(_QWORD *)v4 - 8LL));
  *(_QWORD *)v4 -= 8LL;
  std::_Optional_destruct_base<winrt::Windows::Foundation::Uri,0>::~_Optional_destruct_base<winrt::Windows::Foundation::Uri,0>((winrt::Windows::Foundation::IUnknown *)v5);
}
