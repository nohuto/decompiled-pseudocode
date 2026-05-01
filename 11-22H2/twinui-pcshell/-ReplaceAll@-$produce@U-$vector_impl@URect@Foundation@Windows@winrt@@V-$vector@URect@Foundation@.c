/*
 * XREFs of ?ReplaceAll@?$produce@U?$vector_impl@URect@Foundation@Windows@winrt@@V?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@URect@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAURect@Foundation@Windows@3@@Z @ 0x18052A940
 * Callers:
 *     <none>
 * Callees:
 *     memmove_0 @ 0x1801C9357 (memmove_0.c)
 *     ?_Clear_and_reserve_geometric@?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@AEAAX_K@Z @ 0x18052E5EC (-_Clear_and_reserve_geometric@-$vector@URect@Foundation@Windows@winrt@@V-$allocator@URect@Founda.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::vector_impl<winrt::Windows::Foundation::Rect,std::vector<winrt::Windows::Foundation::Rect>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Foundation::Rect>>::ReplaceAll(
        __int64 a1,
        unsigned int a2,
        const void *a3)
{
  __int64 v4; // r10
  size_t v5; // rsi
  __int64 v6; // rdi
  char *v7; // rbx
  __int64 result; // rax
  int v9; // [rsp+38h] [rbp+10h] BYREF

  try
  {
    v4 = (a1 - 16) & -(__int64)(a1 != 0);
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 40));
    *(_QWORD *)((v4 & -(__int64)(v4 != -40)) + 0x38) = *(_QWORD *)((v4 & -(__int64)(v4 != -40)) + 0x30);
    v5 = 16LL * a2;
    v6 = (v4 & -(__int64)(v4 != -40)) + 48;
    if ( a2 > (unsigned __int64)((__int64)(*(_QWORD *)((v4 & -(__int64)(v4 != -40)) + 0x40)
                                         - *(_QWORD *)((v4 & -(__int64)(v4 != -40)) + 0x30)) >> 4) )
      std::vector<winrt::Windows::Foundation::Rect>::_Clear_and_reserve_geometric(
        (v4 & -(__int64)(v4 != -40)) + 48,
        a2,
        a3,
        -(v4 + 40));
    v7 = *(char **)v6;
    memmove_0(*(void **)v6, a3, v5);
    *(_QWORD *)(v6 + 8) = &v7[v5];
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v9);
  }
  return result;
}
