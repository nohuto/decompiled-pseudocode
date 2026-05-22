/*
 * XREFs of ??$_Emplace@AEBV?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@@?$list@V?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@@std@@@std@@QEAAPEAU?$_List_node@V?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@PEAX@1@QEAU21@AEBV?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@@Z @ 0x1801D0D78
 * Callers:
 *     ?RegisterHotKeyClient@HotKeyProcessor@@UEAAJUtagMsgRoutingInfo@@_NU_GUID@@@Z @ 0x1801D45A0 (-RegisterHotKeyClient@HotKeyProcessor@@UEAAJUtagMsgRoutingInfo@@_NU_GUID@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800044C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x180004EC0 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x18004905C (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@V?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1801D1C8C (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@V-$ComPtr@VHotkeyClientRegistration@@@WRL.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::list<Microsoft::WRL::ComPtr<HotkeyClientRegistration>>::_Emplace<Microsoft::WRL::ComPtr<HotkeyClientRegistration> const &>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  size_t size_of; // rax
  _QWORD *v7; // rbx
  _QWORD *v8; // rcx
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+28h] [rbp-10h]

  if ( *(_QWORD *)(a1 + 8) == 0xAAAAAAAAAAAAAAALL )
    std::_Xlength_error("list too long");
  v10 = a1;
  v11 = 0LL;
  size_of = std::_Get_size_of_n<24>(1uLL);
  v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v7[2] = *a3;
  Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(v7 + 2);
  ++*(_QWORD *)(a1 + 8);
  v8 = *(_QWORD **)(a2 + 8);
  *v7 = a2;
  v7[1] = v8;
  v11 = 0LL;
  *(_QWORD *)(a2 + 8) = v7;
  *v8 = v7;
  std::_List_node_emplace_op2<std::allocator<std::_List_node<Microsoft::WRL::ComPtr<HotkeyClientRegistration>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<Microsoft::WRL::ComPtr<HotkeyClientRegistration>,void *>>>(&v10);
  return v7;
}
