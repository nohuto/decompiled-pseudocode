/*
 * XREFs of ??1VirtualHotKeyTracker@@UEAA@XZ @ 0x1801D09F0
 * Callers:
 *     ??_GVirtualHotKeyTracker@@UEAAPEAXI@Z @ 0x1801D0A80 (--_GVirtualHotKeyTracker@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180045DDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBU_GUID@@V?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBU_GUID@@V?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@@std@@PEAX@1@@Z @ 0x1801D074C (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBU_GUID@@V-$list@UKeyEventData@VirtualHotKe.c)
 */

void __fastcall VirtualHotKeyTracker::~VirtualHotKeyTracker(VirtualHotKeyTracker *this)
{
  void **v1; // rbx
  _QWORD **v3; // rdx
  _QWORD *v4; // rcx
  _QWORD *v5; // rbx
  std::_Ref_count_base *v6; // rcx

  v1 = (void **)((char *)this + 48);
  std::_Tree_val<std::_Tree_simple_types<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>,void *>>>(
    (__int64)this + 48,
    (__int64)this + 48,
    *(void ***)(*((_QWORD *)this + 6) + 8LL));
  std::_Deallocate<16,0>(*v1, 0x40uLL);
  v3 = (_QWORD **)*((_QWORD *)this + 4);
  *v3[1] = 0LL;
  v4 = *v3;
  if ( *v3 )
  {
    do
    {
      v5 = (_QWORD *)*v4;
      std::_Deallocate<16,0>(v4, 0x30uLL);
      v4 = v5;
    }
    while ( v5 );
  }
  std::_Deallocate<16,0>(*((void **)this + 4), 0x30uLL);
  v6 = (std::_Ref_count_base *)*((_QWORD *)this + 3);
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
  *((_DWORD *)this + 3) = -1073741823;
}
