/*
 * XREFs of ??1?$list@U?$pair@$$CBIV?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@@std@@V?$allocator@U?$pair@$$CBIV?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@@std@@@2@@std@@QEAA@XZ @ 0x1800A1038
 * Callers:
 *     _ForegroundManager::ForegroundManager_::_1_::dtor$14 @ 0x18006E6C4 (_ForegroundManager--ForegroundManager_--_1_--dtor$14.c)
 *     _ContextualProcessorBuffer::DeliverInputToTarget_::_1_::dtor$21 @ 0x1801C0EFA (_ContextualProcessorBuffer--DeliverInputToTarget_--_1_--dtor$21.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@QEAUIInputTarget@@V?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEAUIInputTarget@@V?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEAUIInputTarget@@V?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800A0968 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@QEAUIInputTarget@@V-$unordered_set@KU-$hash.c)
 */

void __fastcall std::list<std::pair<unsigned int const,std::unordered_set<unsigned __int64>>>::~list<std::pair<unsigned int const,std::unordered_set<unsigned __int64>>>(
        __int64 *a1)
{
  std::_List_node<std::pair<IInputTarget * const,std::unordered_set<unsigned long>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<IInputTarget * const,std::unordered_set<unsigned long>>,void *>>>(
    (__int64)a1,
    *a1);
  std::_Deallocate<16,0>((void *)*a1, 0x58uLL);
}
