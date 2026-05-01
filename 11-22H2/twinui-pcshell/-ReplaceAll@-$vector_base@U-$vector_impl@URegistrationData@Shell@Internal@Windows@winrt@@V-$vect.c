/*
 * XREFs of ?ReplaceAll@?$vector_base@U?$vector_impl@URegistrationData@Shell@Internal@Windows@winrt@@V?$vector@URegistrationData@Shell@Internal@Windows@winrt@@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@URegistrationData@Shell@Internal@Windows@3@@winrt@@QEAAXU?$array_view@$$CBURegistrationData@Shell@Internal@Windows@winrt@@@2@@Z @ 0x180707428
 * Callers:
 *     ?ReplaceAll@?$produce@U?$vector_impl@URegistrationData@Shell@Internal@Windows@winrt@@V?$vector@URegistrationData@Shell@Internal@Windows@winrt@@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@U?$IVector@URegistrationData@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAPEAX@Z @ 0x1807073B0 (-ReplaceAll@-$produce@U-$vector_impl@URegistrationData@Shell@Internal@Windows@winrt@@V-$vector@U.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@YAXPEAURegistrationData@Shell@Internal@Windows@winrt@@QEAU12345@AEAV?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@0@@Z @ 0x1801C61D0 (--$_Destroy_range@V-$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@YAXPE.c)
 *     ??$_Assign_range@PEBURegistrationData@Shell@Internal@Windows@winrt@@@?$vector@URegistrationData@Shell@Internal@Windows@winrt@@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAXPEBURegistrationData@Shell@Internal@Windows@winrt@@0Uforward_iterator_tag@1@@Z @ 0x180702090 (--$_Assign_range@PEBURegistrationData@Shell@Internal@Windows@winrt@@@-$vector@URegistrationData@.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::vector_base<winrt::impl::vector_impl<winrt::Windows::Internal::Shell::RegistrationData,std::vector<winrt::Windows::Internal::Shell::RegistrationData>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Internal::Shell::RegistrationData>::ReplaceAll(
        volatile signed __int32 *a1,
        __int64 a2)
{
  __int64 v4; // rax
  winrt::Windows::Internal::Shell::RegistrationData *v5; // rdi
  winrt::Windows::Internal::Shell::RegistrationData *v6; // rsi
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
    v5 = *(winrt::Windows::Internal::Shell::RegistrationData **)v4;
    *(_QWORD *)&v11 = *(_QWORD *)v4;
    *(_QWORD *)v4 = 0LL;
    v6 = *(winrt::Windows::Internal::Shell::RegistrationData **)(v4 + 8);
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
  std::vector<winrt::Windows::Internal::Shell::RegistrationData>::_Assign_range<winrt::Windows::Internal::Shell::RegistrationData const *>(
    (__int64 *)v10,
    v8,
    v9);
  if ( v5 )
  {
    std::_Destroy_range<std::allocator<winrt::Windows::Internal::Shell::RegistrationData>>(v5, v6);
    std::_Deallocate<16,0>(v5, (v7 - (_QWORD)v5) & 0xFFFFFFFFFFFFFFF8uLL);
  }
}
