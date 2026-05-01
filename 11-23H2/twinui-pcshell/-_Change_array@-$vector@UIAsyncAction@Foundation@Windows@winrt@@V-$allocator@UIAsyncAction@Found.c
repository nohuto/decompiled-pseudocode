/*
 * XREFs of ?_Change_array@?$vector@UIAsyncAction@Foundation@Windows@winrt@@V?$allocator@UIAsyncAction@Foundation@Windows@winrt@@@std@@@std@@AEAAXQEAUIAsyncAction@Foundation@Windows@winrt@@_K1@Z @ 0x1806C8694
 * Callers:
 *     ??$_Emplace_reallocate@UIAsyncAction@Foundation@Windows@winrt@@@?$vector@UIAsyncAction@Foundation@Windows@winrt@@V?$allocator@UIAsyncAction@Foundation@Windows@winrt@@@std@@@std@@QEAAPEAUIAsyncAction@Foundation@Windows@winrt@@QEAU2345@$$QEAU2345@@Z @ 0x1806C6D44 (--$_Emplace_reallocate@UIAsyncAction@Foundation@Windows@winrt@@@-$vector@UIAsyncAction@Foundatio.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UIAsyncAction@Foundation@Windows@winrt@@@std@@@std@@YAXPEAUIAsyncAction@Foundation@Windows@winrt@@QEAU1234@AEAV?$allocator@UIAsyncAction@Foundation@Windows@winrt@@@0@@Z @ 0x1806C6B98 (--$_Destroy_range@V-$allocator@UIAsyncAction@Foundation@Windows@winrt@@@std@@@std@@YAXPEAUIAsync.c)
 */

__int64 __fastcall std::vector<winrt::Windows::Foundation::IAsyncAction>::_Change_array(
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
    std::_Destroy_range<std::allocator<winrt::Windows::Foundation::IAsyncAction>>(
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
