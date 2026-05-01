/*
 * XREFs of ??$_Emplace_back_with_unused_capacity@AEBUMenuItem@UI@WindowsUdk@winrt@@@?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@AEAAAEAUMenuItem@UI@WindowsUdk@winrt@@AEBU2345@@Z @ 0x1805D7264
 * Callers:
 *     ??$emplace@AEBUMenuItem@UI@WindowsUdk@winrt@@@?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@@1@AEBUMenuItem@UI@WindowsUdk@winrt@@@Z @ 0x1805D7A1C (--$emplace@AEBUMenuItem@UI@WindowsUdk@winrt@@@-$vector@UMenuItem@UI@WindowsUdk@winrt@@V-$allocat.c)
 *     ?Append@?$produce@U?$vector_impl@UMenuItem@UI@WindowsUdk@winrt@@V?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UMenuItem@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAX@Z @ 0x1805D87E0 (-Append@-$produce@U-$vector_impl@UMenuItem@UI@WindowsUdk@winrt@@V-$vector@UMenuItem@UI@WindowsUd.c)
 * Callees:
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x1800F4BD8 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 */

__int64 __fastcall std::vector<winrt::WindowsUdk::UI::MenuItem>::_Emplace_back_with_unused_capacity<winrt::WindowsUdk::UI::MenuItem const &>(
        __int64 a1,
        _QWORD *a2)
{
  winrt::Windows::Foundation::IUnknown *v3; // rcx
  __int64 result; // rax

  v3 = *(winrt::Windows::Foundation::IUnknown **)(a1 + 8);
  *(_QWORD *)v3 = *a2;
  winrt::Windows::Foundation::IUnknown::add_ref(v3);
  result = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = result + 8;
  return result;
}
