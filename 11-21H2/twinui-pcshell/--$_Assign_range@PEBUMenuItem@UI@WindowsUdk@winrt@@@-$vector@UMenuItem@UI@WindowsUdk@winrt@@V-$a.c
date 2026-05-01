/*
 * XREFs of ??$_Assign_range@PEBUMenuItem@UI@WindowsUdk@winrt@@@?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@AEAAXPEBUMenuItem@UI@WindowsUdk@winrt@@0Uforward_iterator_tag@1@@Z @ 0x1805D7004
 * Callers:
 *     ?ReplaceAll@?$vector_base@U?$vector_impl@UMenuItem@UI@WindowsUdk@winrt@@V?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UMenuItem@UI@WindowsUdk@3@@winrt@@QEAAXU?$array_view@$$CBUMenuItem@UI@WindowsUdk@winrt@@@2@@Z @ 0x1805D9D98 (-ReplaceAll@-$vector_base@U-$vector_impl@UMenuItem@UI@WindowsUdk@winrt@@V-$vector@UMenuItem@UI@W.c)
 * Callees:
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x1800F4BD8 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ??$_Copy_unchecked@PEBUMenuItem@UI@WindowsUdk@winrt@@PEAU1234@@std@@YAPEAUMenuItem@UI@WindowsUdk@winrt@@PEBU1234@0PEAU1234@@Z @ 0x1805D70DC (--$_Copy_unchecked@PEBUMenuItem@UI@WindowsUdk@winrt@@PEAU1234@@std@@YAPEAUMenuItem@UI@WindowsUdk.c)
 *     ??$_Destroy_range@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@YAXPEAUMenuItem@UI@WindowsUdk@winrt@@QEAU1234@AEAV?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@0@@Z @ 0x1805D722C (--$_Destroy_range@V-$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@YAXPEAUMenuItem@UI@Win.c)
 *     ?_Clear_and_reserve_geometric@?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@AEAAX_K@Z @ 0x1805DAD0C (-_Clear_and_reserve_geometric@-$vector@UMenuItem@UI@WindowsUdk@winrt@@V-$allocator@UMenuItem@UI@.c)
 */

__int64 __fastcall std::vector<winrt::WindowsUdk::UI::MenuItem>::_Assign_range<winrt::WindowsUdk::UI::MenuItem const *>(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned __int64 v6; // rcx
  __int64 v7; // r8
  unsigned __int64 v8; // r9
  _QWORD *v9; // rdi
  winrt::Windows::Foundation::IUnknown *i; // rbx
  winrt::WindowsUdk::UI::MenuItem *v11; // rcx
  __int64 result; // rax

  v6 = ((__int64)a3 - a2) >> 3;
  v7 = *a1;
  v8 = (a1[1] - *a1) >> 3;
  if ( v6 <= v8 )
  {
    i = (winrt::Windows::Foundation::IUnknown *)(v7 + 8 * v6);
    std::_Copy_unchecked<winrt::WindowsUdk::UI::MenuItem const *,winrt::WindowsUdk::UI::MenuItem *>(a2, a3);
    v11 = i;
  }
  else
  {
    if ( v6 > (a1[2] - v7) >> 3 )
    {
      std::vector<winrt::WindowsUdk::UI::MenuItem>::_Clear_and_reserve_geometric(a1, v6);
      v8 = 0LL;
    }
    v9 = (_QWORD *)(a2 + 8 * v8);
    std::_Copy_unchecked<winrt::WindowsUdk::UI::MenuItem const *,winrt::WindowsUdk::UI::MenuItem *>(a2, v9);
    for ( i = (winrt::Windows::Foundation::IUnknown *)a1[1]; ; i = (winrt::Windows::Foundation::IUnknown *)((char *)i + 8) )
    {
      v11 = i;
      if ( v9 == a3 )
        break;
      *(_QWORD *)i = *v9;
      winrt::Windows::Foundation::IUnknown::add_ref(i);
      ++v9;
    }
  }
  result = std::_Destroy_range<std::allocator<winrt::WindowsUdk::UI::MenuItem>>(v11);
  a1[1] = (__int64)i;
  return result;
}
