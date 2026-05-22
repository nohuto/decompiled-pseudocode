/*
 * XREFs of ??1?$list@U?$pair@$$CBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@V?$allocator@U?$pair@$$CBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x1800CE634
 * Callers:
 *     _Win32kInterop::Win32kInterop_::_1_::dtor$36 @ 0x180056E2A (_Win32kInterop--Win32kInterop_--_1_--dtor$36.c)
 *     _InjectionRawInputProvider::InjectionRawInputProvider_::_1_::dtor$12 @ 0x1800CE532 (_InjectionRawInputProvider--InjectionRawInputProvider_--_1_--dtor$12.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBIV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBIV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBIV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800CDF78 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBIV-$unique_ptr@ULegacyDeviceInfo@@U-$de.c)
 */

void __fastcall std::list<std::pair<unsigned long const,std::unique_ptr<LegacyDeviceInfo>>>::~list<std::pair<unsigned long const,std::unique_ptr<LegacyDeviceInfo>>>(
        void **a1)
{
  std::_List_node<std::pair<unsigned int const,std::unique_ptr<LegacyDeviceInfo>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned int const,std::unique_ptr<LegacyDeviceInfo>>,void *>>>(
    (__int64)a1,
    (_QWORD **)*a1);
  std::_Deallocate<16,0>(*a1, 0x20uLL);
}
