/*
 * XREFs of ??1?$unordered_map@IUContactData@PointerInputMediator@@U?$hash@I@std@@U?$equal_to@I@4@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@4@@std@@QEAA@XZ @ 0x18010B714
 * Callers:
 *     _PointerInputMediator::PointerFrame::PointerFrame_::_1_::dtor$2 @ 0x18010B65B (_PointerInputMediator--PointerFrame--PointerFrame_--_1_--dtor$2.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A954 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18010AF50 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBIUContactData@PointerInputMediator@@@st.c)
 */

void __fastcall std::unordered_map<unsigned int,PointerInputMediator::ContactData>::~unordered_map<unsigned int,PointerInputMediator::ContactData>(
        __int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9

  std::_Deallocate<16,0>(*(void **)(a1 + 24), (*(_QWORD *)(a1 + 32) - *(_QWORD *)(a1 + 24)) & 0xFFFFFFFFFFFFFFF8uLL);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  std::_List_node<std::pair<unsigned int const,PointerInputMediator::ContactData>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned int const,PointerInputMediator::ContactData>,void *>>>(
    v2,
    *(_QWORD ***)(a1 + 8),
    v3,
    v4);
  std::_Deallocate<16,0>(*(void **)(a1 + 8), 0x30uLL);
}
