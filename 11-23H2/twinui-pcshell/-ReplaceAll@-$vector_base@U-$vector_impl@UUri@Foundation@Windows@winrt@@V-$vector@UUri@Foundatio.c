/*
 * XREFs of ?ReplaceAll@?$vector_base@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUri@Foundation@Windows@3@@winrt@@QEAAXU?$array_view@$$CBUUri@Foundation@Windows@winrt@@@2@@Z @ 0x180241BF8
 * Callers:
 *     ?ReplaceAll@?$produce@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUri@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAPEAX@Z @ 0x180241B80 (-ReplaceAll@-$produce@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUri@Foundation@Wi.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Assign_range@PEBUUri@Foundation@Windows@winrt@@@?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@AEAAXPEBUUri@Foundation@Windows@winrt@@0Uforward_iterator_tag@1@@Z @ 0x18022F224 (--$_Assign_range@PEBUUri@Foundation@Windows@winrt@@@-$vector@UUri@Foundation@Windows@winrt@@V-$a.c)
 *     ??$_Destroy_range@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@YAXPEAUUri@Foundation@Windows@winrt@@QEAU1234@AEAV?$allocator@UUri@Foundation@Windows@winrt@@@0@@Z @ 0x18022F348 (--$_Destroy_range@V-$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@YAXPEAUUri@Foundation@.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::vector_base<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Uri>::ReplaceAll(
        volatile signed __int32 *a1,
        __int64 a2)
{
  __int64 v4; // rax
  winrt::Windows::Foundation::IUnknown *v5; // rdi
  winrt::Windows::Foundation::IUnknown *v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // rdx
  _QWORD *v9; // r8
  __int64 v10; // rcx
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+30h] [rbp-18h]

  v11 = 0LL;
  v12 = 0LL;
  _InterlockedIncrement(a1);
  v4 = (__int64)(a1 + 2);
  if ( !a1 )
    v4 = 48LL;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  if ( &v11 != (__int128 *)v4 )
  {
    v5 = *(winrt::Windows::Foundation::IUnknown **)v4;
    *(_QWORD *)&v11 = *(_QWORD *)v4;
    *(_QWORD *)v4 = 0LL;
    v6 = *(winrt::Windows::Foundation::IUnknown **)(v4 + 8);
    *((_QWORD *)&v11 + 1) = v6;
    *(_QWORD *)(v4 + 8) = 0LL;
    v7 = *(_QWORD *)(v4 + 16);
    v12 = v7;
    *(_QWORD *)(v4 + 16) = 0LL;
  }
  v8 = *(_QWORD *)a2;
  v9 = (_QWORD *)(v8 + 8LL * *(unsigned int *)(a2 + 8));
  v10 = (__int64)(a1 + 2);
  if ( !a1 )
    v10 = 48LL;
  std::vector<winrt::Windows::Foundation::Uri>::_Assign_range<winrt::Windows::Foundation::Uri const *>(
    (__int64 *)v10,
    v8,
    v9);
  if ( v5 )
  {
    std::_Destroy_range<std::allocator<winrt::Windows::Foundation::Uri>>(v5, v6);
    std::_Deallocate<16,0>(v5, (v7 - (_QWORD)v5) & 0xFFFFFFFFFFFFFFF8uLL);
  }
}
