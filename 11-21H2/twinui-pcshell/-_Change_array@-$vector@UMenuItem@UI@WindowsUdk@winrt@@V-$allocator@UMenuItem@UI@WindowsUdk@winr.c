/*
 * XREFs of ?_Change_array@?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@AEAAXQEAUMenuItem@UI@WindowsUdk@winrt@@_K1@Z @ 0x1805DAC98
 * Callers:
 *     ??$_Emplace_reallocate@AEBUMenuItem@UI@WindowsUdk@winrt@@@?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@QEAAPEAUMenuItem@UI@WindowsUdk@winrt@@QEAU2345@AEBU2345@@Z @ 0x1805D7298 (--$_Emplace_reallocate@AEBUMenuItem@UI@WindowsUdk@winrt@@@-$vector@UMenuItem@UI@WindowsUdk@winrt.c)
 *     ??$_Emplace_reallocate@UMenuItem@UI@WindowsUdk@winrt@@@?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@QEAAPEAUMenuItem@UI@WindowsUdk@winrt@@QEAU2345@$$QEAU2345@@Z @ 0x1805D73C0 (--$_Emplace_reallocate@UMenuItem@UI@WindowsUdk@winrt@@@-$vector@UMenuItem@UI@WindowsUdk@winrt@@V.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@YAXPEAUMenuItem@UI@WindowsUdk@winrt@@QEAU1234@AEAV?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@0@@Z @ 0x1805D722C (--$_Destroy_range@V-$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@YAXPEAUMenuItem@UI@Win.c)
 */

__int64 __fastcall std::vector<winrt::WindowsUdk::UI::MenuItem>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  winrt::WindowsUdk::UI::MenuItem *v6; // rcx
  __int64 result; // rax

  v6 = *(winrt::WindowsUdk::UI::MenuItem **)a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<winrt::WindowsUdk::UI::MenuItem>>(
      v6,
      *(winrt::WindowsUdk::UI::MenuItem **)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 8 * a3;
  result = a2 + 8 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
