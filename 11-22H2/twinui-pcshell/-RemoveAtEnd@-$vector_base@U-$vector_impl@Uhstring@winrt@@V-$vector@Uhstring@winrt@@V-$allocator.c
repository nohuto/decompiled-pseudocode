/*
 * XREFs of ?RemoveAtEnd@?$vector_base@U?$vector_impl@Uhstring@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@Uhstring@3@@winrt@@QEAAXXZ @ 0x1806FBE8C
 * Callers:
 *     ?RemoveAtEnd@?$produce@U?$vector_impl@Uhstring@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IVector@Uhstring@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHXZ @ 0x1806FBE30 (-RemoveAtEnd@-$produce@U-$vector_impl@Uhstring@winrt@@V-$vector@Uhstring@winrt@@V-$allocator@Uhs.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??0hresult_out_of_bounds@winrt@@QEAA@XZ @ 0x18041D968 (--0hresult_out_of_bounds@winrt@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::vector_base<winrt::impl::vector_impl<winrt::hstring,std::vector<winrt::hstring>,winrt::impl::single_threaded_collection_base>,winrt::hstring>::RemoveAtEnd(
        volatile signed __int32 *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rbx
  volatile signed __int32 *v4; // rax
  __int64 v5; // rbx
  volatile signed __int32 *v6; // [rsp+20h] [rbp-38h] BYREF
  char v7; // [rsp+28h] [rbp-30h]
  _BYTE pExceptionObject[40]; // [rsp+30h] [rbp-28h] BYREF

  v7 = 0;
  v1 = (__int64)(a1 + 2);
  if ( !a1 )
    v1 = 48LL;
  if ( *(_QWORD *)v1 == *(_QWORD *)(v1 + 8) )
  {
    winrt::hresult_out_of_bounds::hresult_out_of_bounds((winrt::hresult_out_of_bounds *)pExceptionObject);
    throw (winrt::hresult_out_of_bounds *)pExceptionObject;
  }
  _InterlockedIncrement(a1);
  v2 = (__int64)(a1 + 4);
  if ( !a1 )
    v2 = 56LL;
  v3 = *(_QWORD *)v2;
  v4 = *(volatile signed __int32 **)(*(_QWORD *)v2 - 8LL);
  *(_QWORD *)(v3 - 8) = 0LL;
  v6 = v4;
  v7 = 1;
  v5 = (__int64)(a1 + 4);
  if ( !a1 )
    v5 = 56LL;
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)(*(_QWORD *)v5 - 8LL));
  *(_QWORD *)v5 -= 8LL;
  if ( v7 )
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v6);
}
