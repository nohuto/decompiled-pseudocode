/*
 * XREFs of ??_ECallControlDeviceCollection@@UEAAPEAXI@Z @ 0x1800E06C0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18002A1C4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800DFB78 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKV-$array@G$0BE@@std@@@std@@PEAX@std@@@.c)
 *     ??1HIDDeviceCollection@@UEAA@XZ @ 0x1800E4EA0 (--1HIDDeviceCollection@@UEAA@XZ.c)
 */

void **__fastcall CallControlDeviceCollection::`vector deleting destructor'(void **this, char a2)
{
  __int64 v4; // rcx

  std::_Deallocate<16,0>(this[348], ((_BYTE *)this[349] - (_BYTE *)this[348]) & 0xFFFFFFFFFFFFFFF8uLL);
  this[348] = 0LL;
  this[349] = 0LL;
  this[350] = 0LL;
  std::_List_node<std::pair<unsigned long const,std::array<unsigned short,20>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,std::array<unsigned short,20>>,void *>>>(
    v4,
    (_QWORD **)this[346]);
  std::_Deallocate<16,0>(this[346], 0x40uLL);
  HIDDeviceCollection::~HIDDeviceCollection((HIDDeviceCollection *)this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      free(this);
  }
  return this;
}
