/*
 * XREFs of ??1DockableDeviceCollection@@UEAA@XZ @ 0x1800C9A20
 * Callers:
 *     ??_EDockableDeviceCollection@@UEAAPEAXI@Z @ 0x1800C9C10 (--_EDockableDeviceCollection@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002BBF0 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@PEAUHotKeyInfo@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@PEAUHotKeyInfo@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@PEAUHotKeyInfo@@PEAX@std@@@1@PEAU?$_Tree_node@PEAUHotKeyInfo@@PEAX@1@@Z @ 0x1800C9364 (--$_Erase_tree@V-$allocator@U-$_Tree_node@PEAUHotKeyInfo@@PEAX@std@@@std@@@-$_Tree_val@U-$_Tree_.c)
 */

void __fastcall DockableDeviceCollection::~DockableDeviceCollection(DockableDeviceCollection *this)
{
  void **v1; // rbx

  *((_QWORD *)this + 3) = 0LL;
  v1 = (void **)((char *)this + 2768);
  *(_QWORD *)this = &DockableDeviceCollection::`vftable';
  std::_Tree_val<std::_Tree_simple_types<HotKeyInfo *>>::_Erase_tree<std::allocator<std::_Tree_node<HotKeyInfo *,void *>>>(
    (__int64)this + 2768,
    (__int64)this + 2768,
    *(_QWORD *)(*((_QWORD *)this + 346) + 8LL));
  std::_Deallocate<16,0>(*v1, 0x28uLL);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)this + 345);
  HIDDeviceCollection::~HIDDeviceCollection(this);
}
