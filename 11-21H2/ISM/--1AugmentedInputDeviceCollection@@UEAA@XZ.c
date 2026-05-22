/*
 * XREFs of ??1AugmentedInputDeviceCollection@@UEAA@XZ @ 0x1800BACD8
 * Callers:
 *     ??_GAugmentedInputDeviceCollection@@UEAAPEAXI@Z @ 0x1800BADB0 (--_GAugmentedInputDeviceCollection@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KPEAUBufferStream@BamoImpl@Microsoft@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KPEAUBufferStream@BamoImpl@Microsoft@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CB_KPEAUBufferStream@BamoImpl@Microsoft@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_KPEAUBufferStream@BamoImpl@Microsoft@@@std@@PEAX@1@@Z @ 0x180089614 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CB_KPEAUBufferStream@BamoImpl@Microsoft@@@st.c)
 */

void __fastcall AugmentedInputDeviceCollection::~AugmentedInputDeviceCollection(AugmentedInputDeviceCollection *this)
{
  void **v1; // rbx

  v1 = (void **)((char *)this + 2760);
  *(_QWORD *)this = &AugmentedInputDeviceCollection::`vftable';
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,Microsoft::BamoImpl::BufferStream *>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,Microsoft::BamoImpl::BufferStream *>,void *>>>(
    (__int64)this + 2760,
    (__int64)v1,
    *((_QWORD *)*v1 + 1));
  std::_Deallocate<16,0>(*v1, 0x30uLL);
  HIDDeviceCollection::~HIDDeviceCollection(this);
}
