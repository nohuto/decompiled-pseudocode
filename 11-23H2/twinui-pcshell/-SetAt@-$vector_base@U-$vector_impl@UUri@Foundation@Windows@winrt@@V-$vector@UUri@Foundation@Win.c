/*
 * XREFs of ?SetAt@?$vector_base@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUri@Foundation@Windows@3@@winrt@@QEAAXIAEBUUri@Foundation@Windows@2@@Z @ 0x180242C48
 * Callers:
 *     ?SetAt@?$produce@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUri@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAX@Z @ 0x180242BE0 (-SetAt@-$produce@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUri@Foundation@Windows.c)
 * Callees:
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x180176D7C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??$assign@AEAUUri@Foundation@Windows@winrt@@@?$removed_value@UUri@Foundation@Windows@winrt@@X@impl@winrt@@QEAAXAEAUUri@Foundation@Windows@2@@Z @ 0x18022F908 (--$assign@AEAUUri@Foundation@Windows@winrt@@@-$removed_value@UUri@Foundation@Windows@winrt@@X@im.c)
 *     ??1?$_Optional_destruct_base@UUri@Foundation@Windows@winrt@@$0A@@std@@QEAA@XZ @ 0x180234FD8 (--1-$_Optional_destruct_base@UUri@Foundation@Windows@winrt@@$0A@@std@@QEAA@XZ.c)
 *     ??0hresult_out_of_bounds@winrt@@QEAA@XZ @ 0x18041D968 (--0hresult_out_of_bounds@winrt@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::vector_base<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Uri>::SetAt(
        volatile signed __int32 *a1,
        unsigned int a2,
        winrt::Windows::Foundation::IUnknown *a3)
{
  __int64 v4; // r9
  __int64 v5; // rax
  __int64 *v6; // rbx
  _BYTE v7[16]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE pExceptionObject[40]; // [rsp+30h] [rbp-28h] BYREF

  v7[8] = 0;
  v4 = (__int64)(a1 + 2);
  if ( !a1 )
    v4 = 48LL;
  if ( a2 >= (unsigned __int64)((__int64)(*(_QWORD *)(v4 + 8) - *(_QWORD *)v4) >> 3) )
  {
    winrt::hresult_out_of_bounds::hresult_out_of_bounds((winrt::hresult_out_of_bounds *)pExceptionObject);
    throw (winrt::hresult_out_of_bounds *)pExceptionObject;
  }
  _InterlockedIncrement(a1);
  v5 = (__int64)(a1 + 2);
  if ( !a1 )
    v5 = 48LL;
  v6 = (__int64 *)(*(_QWORD *)v5 + 8LL * a2);
  winrt::impl::removed_value<winrt::Windows::Foundation::Uri,void>::assign<winrt::Windows::Foundation::Uri &>(
    (winrt::Windows::Foundation::IUnknown *)v7,
    v6);
  winrt::Windows::Foundation::IUnknown::operator=((winrt::Windows::Foundation::IUnknown *)v6, a3);
  std::_Optional_destruct_base<winrt::Windows::Foundation::Uri,0>::~_Optional_destruct_base<winrt::Windows::Foundation::Uri,0>((winrt::Windows::Foundation::IUnknown *)v7);
}
