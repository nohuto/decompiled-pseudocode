/*
 * XREFs of ?InsertAt@?$produce@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUri@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAX@Z @ 0x18023DB00
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??$emplace@AEBUUri@Foundation@Windows@winrt@@@?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UUri@Foundation@Windows@winrt@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UUri@Foundation@Windows@winrt@@@std@@@std@@@1@AEBUUri@Foundation@Windows@winrt@@@Z @ 0x18022FF64 (--$emplace@AEBUUri@Foundation@Windows@winrt@@@-$vector@UUri@Foundation@Windows@winrt@@V-$allocat.c)
 *     ??0hresult_out_of_bounds@winrt@@QEAA@XZ @ 0x18041D968 (--0hresult_out_of_bounds@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Foundation::Uri>>::InsertAt(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v3; // r8
  __int64 v4; // rcx
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  __int64 v8; // [rsp+60h] [rbp+18h] BYREF

  v8 = a3;
  v3 = (a1 - 16) & -(__int64)(a1 != 0);
  if ( a2 > (unsigned __int64)((__int64)(*(_QWORD *)((v3 & -(__int64)(v3 != -40)) + 0x38)
                                       - *(_QWORD *)((v3 & -(__int64)(v3 != -40)) + 0x30)) >> 3) )
  {
    winrt::hresult_out_of_bounds::hresult_out_of_bounds((winrt::hresult_out_of_bounds *)pExceptionObject);
    throw (winrt::hresult_out_of_bounds *)pExceptionObject;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v3 + 40));
  if ( v3 == -40 )
  {
    v4 = 48LL;
    v3 = 0LL;
  }
  else
  {
    v4 = v3 + 48;
  }
  std::vector<winrt::Windows::Foundation::Uri>::emplace<winrt::Windows::Foundation::Uri const &>(
    (__int64 *)v4,
    &v7,
    (winrt::Windows::Foundation::IUnknown *)(*(_QWORD *)(v3 + 48) + 8LL * a2),
    &v8);
  return 0LL;
}
