/*
 * XREFs of ??1TestCommandHost@@QEAA@XZ @ 0x180124904
 * Callers:
 *     ?Initialize@TestCommandHost@@SAXXZ @ 0x180035CD8 (-Initialize@TestCommandHost@@SAXXZ.c)
 *     ??1?$unique_ptr@VTestCommandHost@@U?$default_delete@VTestCommandHost@@@std@@@std@@QEAA@XZ @ 0x1800563FC (--1-$unique_ptr@VTestCommandHost@@U-$default_delete@VTestCommandHost@@@std@@@std@@QEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015894 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A954 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800EBEB4 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKUUsageList@ConsumerControlDeviceCollec.c)
 */

void __fastcall TestCommandHost::~TestCommandHost(TestCommandHost *this)
{
  __int64 v2; // rcx

  std::_Deallocate<16,0>(
    *((void **)this + 12),
    (*((_QWORD *)this + 13) - *((_QWORD *)this + 12)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  std::_List_node<std::pair<unsigned long const,ConsumerControlDeviceCollection::UsageList>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,ConsumerControlDeviceCollection::UsageList>,void *>>>(
    v2,
    *((_QWORD ***)this + 10));
  std::_Deallocate<16,0>(*((void **)this + 10), 0x28uLL);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 2);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this);
}
