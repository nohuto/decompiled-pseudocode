/*
 * XREFs of ??1MobileButtonDeviceCollection@@UEAA@XZ @ 0x1800DD4B0
 * Callers:
 *     ??_GMobileButtonDeviceCollection@@UEAAPEAXI@Z @ 0x1800DD5E0 (--_GMobileButtonDeviceCollection@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180098338 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800DCF54 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKUUsageList@ConsumerControlDeviceCollec.c)
 */

void __fastcall MobileButtonDeviceCollection::~MobileButtonDeviceCollection(MobileButtonDeviceCollection *this)
{
  char *v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  *((_QWORD *)this + 3) = 0LL;
  *(_QWORD *)this = &MobileButtonDeviceCollection::`vftable';
  v2 = (char *)*((_QWORD *)this + 361);
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v2);
  std::_Deallocate<16,0>(
    *((void **)this + 356),
    (*((_QWORD *)this + 357) - *((_QWORD *)this + 356)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 356) = 0LL;
  *((_QWORD *)this + 357) = 0LL;
  *((_QWORD *)this + 358) = 0LL;
  std::_List_node<std::pair<unsigned long const,enum ContextualProcessorState>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,enum ContextualProcessorState>,void *>>>(
    v3,
    *((_QWORD ***)this + 354));
  std::_Deallocate<16,0>(*((void **)this + 354), 0x18uLL);
  std::_Deallocate<16,0>(
    *((void **)this + 348),
    (*((_QWORD *)this + 349) - *((_QWORD *)this + 348)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 348) = 0LL;
  *((_QWORD *)this + 349) = 0LL;
  *((_QWORD *)this + 350) = 0LL;
  std::_List_node<std::pair<unsigned long const,ConsumerControlDeviceCollection::UsageList>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,ConsumerControlDeviceCollection::UsageList>,void *>>>(
    v4,
    *((_QWORD ***)this + 346));
  std::_Deallocate<16,0>(*((void **)this + 346), 0x28uLL);
  HIDDeviceCollection::~HIDDeviceCollection(this);
}
