/*
 * XREFs of ?ReplaceAll@?$vector_base@U?$vector_impl@Uhstring@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@Uhstring@3@@winrt@@QEAAXU?$array_view@$$CBUhstring@winrt@@@2@@Z @ 0x1806FC008
 * Callers:
 *     ?ReplaceAll@?$produce@U?$vector_impl@Uhstring@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IVector@Uhstring@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAPEAX@Z @ 0x1806FBF90 (-ReplaceAll@-$produce@U-$vector_impl@Uhstring@winrt@@V-$vector@Uhstring@winrt@@V-$allocator@Uhst.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Assign_range@PEBUhstring@winrt@@@?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@AEAAXPEBUhstring@winrt@@0Uforward_iterator_tag@1@@Z @ 0x1806F76F4 (--$_Assign_range@PEBUhstring@winrt@@@-$vector@Uhstring@winrt@@V-$allocator@Uhstring@winrt@@@std@.c)
 *     ??$_Destroy_range@V?$allocator@Uhstring@winrt@@@std@@@std@@YAXPEAUhstring@winrt@@QEAU12@AEAV?$allocator@Uhstring@winrt@@@0@@Z @ 0x1806F7800 (--$_Destroy_range@V-$allocator@Uhstring@winrt@@@std@@@std@@YAXPEAUhstring@winrt@@QEAU12@AEAV-$al.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::vector_base<winrt::impl::vector_impl<winrt::hstring,std::vector<winrt::hstring>,winrt::impl::single_threaded_collection_base>,winrt::hstring>::ReplaceAll(
        volatile signed __int32 *a1,
        __int64 a2)
{
  __int64 v4; // rax
  volatile signed __int32 **v5; // rdi
  volatile signed __int32 **v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
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
    v5 = *(volatile signed __int32 ***)v4;
    *(_QWORD *)&v11 = *(_QWORD *)v4;
    *(_QWORD *)v4 = 0LL;
    v6 = *(volatile signed __int32 ***)(v4 + 8);
    *((_QWORD *)&v11 + 1) = v6;
    *(_QWORD *)(v4 + 8) = 0LL;
    v7 = *(_QWORD *)(v4 + 16);
    v12 = v7;
    *(_QWORD *)(v4 + 16) = 0LL;
  }
  v8 = *(_QWORD *)a2;
  v9 = v8 + 8LL * *(unsigned int *)(a2 + 8);
  v10 = (__int64)(a1 + 2);
  if ( !a1 )
    v10 = 48LL;
  std::vector<winrt::hstring>::_Assign_range<winrt::hstring const *>((__int64 *)v10, v8, v9);
  if ( v5 )
  {
    std::_Destroy_range<std::allocator<winrt::hstring>>(v5, v6);
    std::_Deallocate<16,0>(v5, (v7 - (_QWORD)v5) & 0xFFFFFFFFFFFFFFF8uLL);
  }
}
