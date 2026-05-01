/*
 * XREFs of ?ReplaceAll@?$vector_base@U?$vector_impl@UMenuItem@UI@WindowsUdk@winrt@@V?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UMenuItem@UI@WindowsUdk@3@@winrt@@QEAAXU?$array_view@$$CBUMenuItem@UI@WindowsUdk@winrt@@@2@@Z @ 0x1805D9D98
 * Callers:
 *     ?ReplaceAll@?$produce@U?$vector_impl@UMenuItem@UI@WindowsUdk@winrt@@V?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UMenuItem@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAPEAX@Z @ 0x1805D9D20 (-ReplaceAll@-$produce@U-$vector_impl@UMenuItem@UI@WindowsUdk@winrt@@V-$vector@UMenuItem@UI@Windo.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Assign_range@PEBUMenuItem@UI@WindowsUdk@winrt@@@?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@AEAAXPEBUMenuItem@UI@WindowsUdk@winrt@@0Uforward_iterator_tag@1@@Z @ 0x1805D7004 (--$_Assign_range@PEBUMenuItem@UI@WindowsUdk@winrt@@@-$vector@UMenuItem@UI@WindowsUdk@winrt@@V-$a.c)
 *     ??$_Destroy_range@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@YAXPEAUMenuItem@UI@WindowsUdk@winrt@@QEAU1234@AEAV?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@0@@Z @ 0x1805D722C (--$_Destroy_range@V-$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@YAXPEAUMenuItem@UI@Win.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::vector_base<winrt::impl::vector_impl<winrt::WindowsUdk::UI::MenuItem,std::vector<winrt::WindowsUdk::UI::MenuItem>,winrt::impl::single_threaded_collection_base>,winrt::WindowsUdk::UI::MenuItem>::ReplaceAll(
        volatile signed __int32 *a1,
        __int64 a2)
{
  __int64 v4; // rax
  winrt::WindowsUdk::UI::MenuItem *v5; // rdi
  winrt::WindowsUdk::UI::MenuItem *v6; // rsi
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
    v5 = *(winrt::WindowsUdk::UI::MenuItem **)v4;
    *(_QWORD *)&v11 = *(_QWORD *)v4;
    *(_QWORD *)v4 = 0LL;
    v6 = *(winrt::WindowsUdk::UI::MenuItem **)(v4 + 8);
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
  std::vector<winrt::WindowsUdk::UI::MenuItem>::_Assign_range<winrt::WindowsUdk::UI::MenuItem const *>(
    (__int64 *)v10,
    v8,
    v9);
  if ( v5 )
  {
    std::_Destroy_range<std::allocator<winrt::WindowsUdk::UI::MenuItem>>(v5, v6);
    std::_Deallocate<16,0>(v5, (v7 - (_QWORD)v5) & 0xFFFFFFFFFFFFFFF8uLL);
  }
}
