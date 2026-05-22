/*
 * XREFs of ??1?$list@U?$pair@$$CB_KV?$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Microsoft@@@std@@@2@@std@@QEAA@XZ @ 0x1801AF584
 * Callers:
 *     _MagnifierProcessor::MagnifierProcessor_::_1_::dtor$9 @ 0x1801AF51F (_MagnifierProcessor--MagnifierProcessor_--_1_--dtor$9.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CB_KV?$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KV?$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Microsoft@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KV?$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Microsoft@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1801AF118 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CB_KV-$ComPtr@UDeviceState@MagnifierProce.c)
 */

void __fastcall std::list<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<MagnifierProcessor::DeviceState>>>::~list<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<MagnifierProcessor::DeviceState>>>(
        void **a1)
{
  std::_List_node<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<MagnifierProcessor::DeviceState>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<MagnifierProcessor::DeviceState>>,void *>>>(
    (__int64)a1,
    (_QWORD **)*a1);
  std::_Deallocate<16,0>(*a1, 0x20uLL);
}
