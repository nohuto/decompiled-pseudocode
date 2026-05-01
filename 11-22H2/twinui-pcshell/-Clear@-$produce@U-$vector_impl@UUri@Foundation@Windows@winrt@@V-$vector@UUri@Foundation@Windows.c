/*
 * XREFs of ?Clear@?$produce@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUri@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHXZ @ 0x1802382C0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@YAXPEAUUri@Foundation@Windows@winrt@@QEAU1234@AEAV?$allocator@UUri@Foundation@Windows@winrt@@@0@@Z @ 0x18022F348 (--$_Destroy_range@V-$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@YAXPEAUUri@Foundation@.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Foundation::Uri>>::Clear(
        __int64 a1)
{
  __int64 v1; // rcx
  winrt::Windows::Foundation::IUnknown *v2; // rdi
  winrt::Windows::Foundation::IUnknown *v3; // rdx
  __int64 v4; // rbx
  char v6; // [rsp+20h] [rbp-28h] BYREF

  v1 = (a1 - 16) & -(__int64)(a1 != 0);
  _InterlockedIncrement((volatile signed __int32 *)(v1 + 40));
  if ( &v6 != (char *)((v1 & -(__int64)(v1 != -40)) + 48) )
  {
    v2 = *(winrt::Windows::Foundation::IUnknown **)((v1 & -(__int64)(v1 != -40)) + 0x30);
    *(_QWORD *)((v1 & -(__int64)(v1 != -40)) + 0x30) = 0LL;
    v3 = *(winrt::Windows::Foundation::IUnknown **)((v1 & -(__int64)(v1 != -40)) + 0x38);
    *(_QWORD *)((v1 & -(__int64)(v1 != -40)) + 0x38) = 0LL;
    v4 = *(_QWORD *)((v1 & -(__int64)(v1 != -40)) + 0x40);
    *(_QWORD *)((v1 & -(__int64)(v1 != -40)) + 0x40) = 0LL;
    if ( v2 )
    {
      std::_Destroy_range<std::allocator<winrt::Windows::Foundation::Uri>>(v2, v3);
      std::_Deallocate<16,0>(v2, 8 * ((v4 - (__int64)v2) >> 3));
    }
  }
  return 0LL;
}
