/*
 * XREFs of ??1?$list@U?$pair@$$CB_KUHeatDisplayOcclusionRect@@@std@@V?$allocator@U?$pair@$$CB_KUHeatDisplayOcclusionRect@@@std@@@2@@std@@QEAA@XZ @ 0x1801B0E70
 * Callers:
 *     _ISMHeatFrameworkHost::BroadcastContextMessage_::_1_::dtor$15 @ 0x1801B14F2 (_ISMHeatFrameworkHost--BroadcastContextMessage_--_1_--dtor$15.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CB_KUHeatDisplayOcclusionRect@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KUHeatDisplayOcclusionRect@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KUHeatDisplayOcclusionRect@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1801B031C (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CB_KUHeatDisplayOcclusionRect@@@std@@PEAX.c)
 */

void __fastcall std::list<std::pair<unsigned __int64 const,HeatDisplayOcclusionRect>>::~list<std::pair<unsigned __int64 const,HeatDisplayOcclusionRect>>(
        void **a1)
{
  std::_List_node<std::pair<unsigned __int64 const,HeatDisplayOcclusionRect>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned __int64 const,HeatDisplayOcclusionRect>,void *>>>(
    (__int64)a1,
    (_QWORD **)*a1);
  std::_Deallocate<16,0>(*a1, 0xB0uLL);
}
