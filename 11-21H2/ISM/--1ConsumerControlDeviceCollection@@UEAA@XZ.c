/*
 * XREFs of ??1ConsumerControlDeviceCollection@@UEAA@XZ @ 0x1800C5CE8
 * Callers:
 *     ??_GConsumerControlDeviceCollection@@UEAAPEAXI@Z @ 0x1800C5DA0 (--_GConsumerControlDeviceCollection@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800C3EB4 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKUUsageList@ConsumerControlDeviceCollec.c)
 */

void __fastcall ConsumerControlDeviceCollection::~ConsumerControlDeviceCollection(
        ConsumerControlDeviceCollection *this)
{
  __int64 v2; // rcx

  *((_QWORD *)this + 3) = 0LL;
  *(_QWORD *)this = &ConsumerControlDeviceCollection::`vftable';
  std::_Deallocate<16,0>(
    *((void **)this + 348),
    (*((_QWORD *)this + 349) - *((_QWORD *)this + 348)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 348) = 0LL;
  *((_QWORD *)this + 349) = 0LL;
  *((_QWORD *)this + 350) = 0LL;
  std::_List_node<std::pair<unsigned long const,ConsumerControlDeviceCollection::UsageList>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,ConsumerControlDeviceCollection::UsageList>,void *>>>(
    v2,
    *((_QWORD ***)this + 346));
  std::_Deallocate<16,0>(*((void **)this + 346), 0x28uLL);
  HIDDeviceCollection::~HIDDeviceCollection(this);
}
