/*
 * XREFs of ?ReplaceAll@?$produce@U?$vector_impl@UWindowId@UI@Windows@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UWindowId@UI@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAUstruct_Windows_UI_WindowId@23@@Z @ 0x18072A010
 * Callers:
 *     <none>
 * Callees:
 *     memmove_0 @ 0x1801C9357 (memmove_0.c)
 *     ?_Clear_and_reserve_geometric@?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@AEAAX_K@Z @ 0x18072A194 (-_Clear_and_reserve_geometric@-$vector@UWindowId@UI@Windows@winrt@@V-$allocator@UWindowId@UI@Win.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::vector_impl<winrt::Windows::UI::WindowId,std::vector<winrt::Windows::UI::WindowId>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::WindowId>>::ReplaceAll(
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
    v5 = 8LL * a2;
    v6 = (v4 & -(__int64)(v4 != -40)) + 48;
    if ( a2 > (unsigned __int64)((__int64)(*(_QWORD *)((v4 & -(__int64)(v4 != -40)) + 0x40)
                                         - *(_QWORD *)((v4 & -(__int64)(v4 != -40)) + 0x30)) >> 3) )
      std::vector<winrt::Windows::UI::WindowId>::_Clear_and_reserve_geometric(
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
