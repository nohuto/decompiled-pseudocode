/*
 * XREFs of ?_Change_array@?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@AEAAXQEAUUri@Foundation@Windows@winrt@@_K1@Z @ 0x180247E00
 * Callers:
 *     ??$_Emplace_reallocate@AEBUUri@Foundation@Windows@winrt@@@?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@QEAAPEAUUri@Foundation@Windows@winrt@@QEAU2345@AEBU2345@@Z @ 0x18022F3AC (--$_Emplace_reallocate@AEBUUri@Foundation@Windows@winrt@@@-$vector@UUri@Foundation@Windows@winrt.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@YAXPEAUUri@Foundation@Windows@winrt@@QEAU1234@AEAV?$allocator@UUri@Foundation@Windows@winrt@@@0@@Z @ 0x18022F348 (--$_Destroy_range@V-$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@YAXPEAUUri@Foundation@.c)
 */

__int64 __fastcall std::vector<winrt::Windows::Foundation::Uri>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  winrt::Windows::Foundation::IUnknown *v6; // rcx
  __int64 result; // rax

  v6 = *(winrt::Windows::Foundation::IUnknown **)a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<winrt::Windows::Foundation::Uri>>(
      v6,
      *(winrt::Windows::Foundation::IUnknown **)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 8 * a3;
  result = a2 + 8 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
