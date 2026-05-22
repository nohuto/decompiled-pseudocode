/*
 * XREFs of ??1SystemControlDeviceCollection@@UEAA@XZ @ 0x1800C6B54
 * Callers:
 *     ??_GSystemControlDeviceCollection@@UEAAPEAXI@Z @ 0x1800C6C10 (--_GSystemControlDeviceCollection@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800C690C (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKV-$array@G$0BE@@std@@@std@@PEAX@std@@@.c)
 */

void __fastcall SystemControlDeviceCollection::~SystemControlDeviceCollection(SystemControlDeviceCollection *this)
{
  __int64 v2; // rcx

  *((_QWORD *)this + 3) = 0LL;
  *(_QWORD *)this = &SystemControlDeviceCollection::`vftable';
  std::_Deallocate<16,0>(
    *((void **)this + 348),
    (*((_QWORD *)this + 349) - *((_QWORD *)this + 348)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 348) = 0LL;
  *((_QWORD *)this + 349) = 0LL;
  *((_QWORD *)this + 350) = 0LL;
  std::_List_node<std::pair<unsigned long const,std::array<unsigned short,20>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,std::array<unsigned short,20>>,void *>>>(
    v2,
    *((_QWORD ***)this + 346));
  std::_Deallocate<16,0>(*((void **)this + 346), 0x40uLL);
  HIDDeviceCollection::~HIDDeviceCollection(this);
}
