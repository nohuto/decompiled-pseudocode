/*
 * XREFs of ??1?$list@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@2@@std@@QEAA@XZ @ 0x18010B6C0
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned_int_PointerInputMediator::ContactData_std::_Uhash_compare_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int____std::allocator_std::pair_unsigned_int_const__PointerInputMediator::ContactData____0___::_Hash_std::_Umap_traits_unsigned_int_PointerInputMediator::ContactData_std::_Uhash_compare_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int____std::allocator_std::pair_unsigned_int_const__PointerInputMediator::ContactData____0____::_1_::dtor$0 @ 0x18010B3D1 (_std--_Hash_std--_Umap_traits_unsigned_int_PointerInputMediator--ContactData_std--__ea_18010B3D1.c)
 *     _PointerInputMediator::PointerFrame::PointerFrame_::_1_::dtor$17 @ 0x18010B63B (_PointerInputMediator--PointerFrame--PointerFrame_--_1_--dtor$17.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18010AF50 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBIUContactData@PointerInputMediator@@@st.c)
 */

void __fastcall std::list<std::pair<unsigned int const,PointerInputMediator::ContactData>>::~list<std::pair<unsigned int const,PointerInputMediator::ContactData>>(
        void **a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  std::_List_node<std::pair<unsigned int const,PointerInputMediator::ContactData>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned int const,PointerInputMediator::ContactData>,void *>>>(
    (__int64)a1,
    (_QWORD **)*a1,
    a3,
    a4);
  std::_Deallocate<16,0>(*a1, 0x30uLL);
}
