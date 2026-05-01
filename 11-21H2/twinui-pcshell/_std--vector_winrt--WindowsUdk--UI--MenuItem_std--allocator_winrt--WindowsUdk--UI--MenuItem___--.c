/*
 * XREFs of _std::vector_winrt::WindowsUdk::UI::MenuItem_std::allocator_winrt::WindowsUdk::UI::MenuItem___::_Emplace_reallocate_winrt::WindowsUdk::UI::MenuItem_const_&__::_1_::catch$3 @ 0x1805D7380
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@YAXPEAUMenuItem@UI@WindowsUdk@winrt@@QEAU1234@AEAV?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@0@@Z @ 0x1805D722C (--$_Destroy_range@V-$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@YAXPEAUMenuItem@UI@Win.c)
 */

void __fastcall __noreturn std::vector_winrt::WindowsUdk::UI::MenuItem_std::allocator_winrt::WindowsUdk::UI::MenuItem___::_Emplace_reallocate_winrt::WindowsUdk::UI::MenuItem_const____::_1_::catch_3(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<winrt::WindowsUdk::UI::MenuItem>>(
    *(winrt::WindowsUdk::UI::MenuItem **)(a2 + 112),
    *(winrt::WindowsUdk::UI::MenuItem **)(a2 + 120));
  std::_Deallocate<16,0>(*(void **)(a2 + 32), 8LL * *(_QWORD *)(a2 + 136));
  throw;
}
