/*
 * XREFs of ??1?$list@U?$pair@$$CBHURect@Foundation@Windows@@@std@@V?$allocator@U?$pair@$$CBHURect@Foundation@Windows@@@std@@@2@@std@@QEAA@XZ @ 0x18065EEEC
 * Callers:
 *     _CShellSnapComponent::CShellSnapComponent_::_1_::dtor$75 @ 0x1802BD391 (_CShellSnapComponent--CShellSnapComponent_--_1_--dtor$75.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBHURect@Foundation@Windows@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBHURect@Foundation@Windows@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBHURect@Foundation@Windows@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18065E79C (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBHURect@Foundation@Windows@@@std@@PEAX@s.c)
 */

void __fastcall std::list<std::pair<int const,Windows::Foundation::Rect>>::~list<std::pair<int const,Windows::Foundation::Rect>>(
        void **a1)
{
  std::_List_node<std::pair<int const,Windows::Foundation::Rect>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<int const,Windows::Foundation::Rect>,void *>>>(
    (__int64)a1,
    (_QWORD **)*a1);
  std::_Deallocate<16,0>(*a1, 0x28uLL);
}
