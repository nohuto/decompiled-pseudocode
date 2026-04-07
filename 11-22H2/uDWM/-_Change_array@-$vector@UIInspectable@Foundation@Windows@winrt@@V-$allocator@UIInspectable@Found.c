/*
 * XREFs of ?_Change_array@?$vector@UIInspectable@Foundation@Windows@winrt@@V?$allocator@UIInspectable@Foundation@Windows@winrt@@@std@@@std@@AEAAXQEAUIInspectable@Foundation@Windows@winrt@@_K1@Z @ 0x180103C2C
 * Callers:
 *     ??$_Emplace_reallocate@AEBUIInspectable@Foundation@Windows@winrt@@@?$vector@UIInspectable@Foundation@Windows@winrt@@V?$allocator@UIInspectable@Foundation@Windows@winrt@@@std@@@std@@QEAAPEAUIInspectable@Foundation@Windows@winrt@@QEAU2345@AEBU2345@@Z @ 0x18010049C (--$_Emplace_reallocate@AEBUIInspectable@Foundation@Windows@winrt@@@-$vector@UIInspectable@Founda.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800558D4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UIInspectable@Foundation@Windows@winrt@@@std@@@std@@YAXPEAUIInspectable@Foundation@Windows@winrt@@QEAU1234@AEAV?$allocator@UIInspectable@Foundation@Windows@winrt@@@0@@Z @ 0x1801003E4 (--$_Destroy_range@V-$allocator@UIInspectable@Foundation@Windows@winrt@@@std@@@std@@YAXPEAUIInspe.c)
 */

__int64 __fastcall std::vector<winrt::Windows::Foundation::IInspectable>::_Change_array(
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
    std::_Destroy_range<std::allocator<winrt::Windows::Foundation::IInspectable>>(
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
