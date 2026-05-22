/*
 * XREFs of ??1?$list@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0M@@@@std@@V?$allocator@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0M@@@@std@@@2@@std@@QEAA@XZ @ 0x18012E12C
 * Callers:
 *     _CBaseInputObserverServer_12_::CBaseInputObserverServer_12__::_1_::dtor$12 @ 0x1800584CB (_CBaseInputObserverServer_12_--CBaseInputObserverServer_12__--_1_--dtor$12.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0M@@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0M@@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0M@@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18012DEC4 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CB_KUInputObserverClient@-$CBaseInputObse.c)
 */

void __fastcall std::list<std::pair<unsigned __int64 const,CBaseInputObserverServer<12>::InputObserverClient>>::~list<std::pair<unsigned __int64 const,CBaseInputObserverServer<12>::InputObserverClient>>(
        void **a1)
{
  std::_List_node<std::pair<unsigned __int64 const,CBaseInputObserverServer<12>::InputObserverClient>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned __int64 const,CBaseInputObserverServer<12>::InputObserverClient>,void *>>>(
    (__int64)a1,
    (_QWORD **)*a1);
  std::_Deallocate<16,0>(*a1, 0x28uLL);
}
