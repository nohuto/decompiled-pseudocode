/*
 * XREFs of ??1GazeHidDevice@@UEAA@XZ @ 0x1800F5044
 * Callers:
 *     ??_EGazeHidDevice@@UEAAPEAXI@Z @ 0x1800F0460 (--_EGazeHidDevice@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A954 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x180057AD8 (--_V@YAXPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180057AE4 (--3@YAXPEAX@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBGI@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBGI@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBGI@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBGI@std@@PEAX@1@@Z @ 0x180064E4C (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBGI@std@@PEAX@std@@@std@@@-$_Tree_val@U-$_T.c)
 */

void __fastcall GazeHidDevice::~GazeHidDevice(GazeHidDevice *this)
{
  void *v2; // rcx
  void **v3; // rbx

  *(_QWORD *)this = &GazeHidDevice::`vftable';
  v2 = (void *)*((_QWORD *)this + 4);
  if ( v2 )
  {
    operator delete(v2);
    *((_QWORD *)this + 4) = 0LL;
  }
  v3 = (void **)*((_QWORD *)this + 28);
  if ( v3 )
  {
    if ( *v3 )
      operator delete[](*v3);
    operator delete(v3);
  }
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned short const,unsigned int>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned short const,unsigned int>,void *>>>(
    (__int64)this + 200,
    (__int64)this + 200,
    *(_QWORD *)(*((_QWORD *)this + 25) + 8LL));
  std::_Deallocate<16,0>(*((void **)this + 25), 0x28uLL);
  HIDDevice::~HIDDevice(this);
}
