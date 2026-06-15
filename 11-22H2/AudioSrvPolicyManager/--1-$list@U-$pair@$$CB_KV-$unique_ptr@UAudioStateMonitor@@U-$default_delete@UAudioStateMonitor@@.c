/*
 * XREFs of ??1?$list@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@V?$allocator@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@2@@std@@QEAA@XZ @ 0x180024F40
 * Callers:
 *     _AudioStateMonitorManager::AudioStateMonitorManager_::_1_::dtor$4 @ 0x18004A4D9 (_AudioStateMonitorManager--AudioStateMonitorManager_--_1_--dtor$4.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180024878 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CB_KV-$unique_ptr@UAudioStateMonitor@@U-$.c)
 */

void __fastcall std::list<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>>::~list<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>>(
        void **a1)
{
  std::_List_node<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>,void *>>>(
    (__int64)a1,
    (_QWORD **)*a1);
  std::_Deallocate<16,0>(*a1, 0x20uLL);
}
