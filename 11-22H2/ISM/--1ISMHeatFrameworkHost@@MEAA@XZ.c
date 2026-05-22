/*
 * XREFs of ??1ISMHeatFrameworkHost@@MEAA@XZ @ 0x1801B0F44
 * Callers:
 *     ??_EISMHeatFrameworkHost@@MEAAPEAXI@Z @ 0x1801B1178 (--_EISMHeatFrameworkHost@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ @ 0x1800182F0 (-InternalRelease@-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A954 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800AA918 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@_K@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@_K@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@_K@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@_K@std@@PEAX@1@@Z @ 0x1801B0268 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBUDockInputIdentity@@_K@std@@PEAX@std@@@std.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ISMHeatFrameworkHost::~ISMHeatFrameworkHost(ISMHeatFrameworkHost *this)
{
  char *v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx

  *(_QWORD *)this = &ISMHeatFrameworkHost::`vftable'{for `IHeatFrameworkHost'};
  v2 = (char *)this + 8;
  *((_QWORD *)this + 1) = &ISMHeatFrameworkHost::`vftable'{for `ISystemContextObserver'};
  *((_QWORD *)this + 2) = &ISMHeatFrameworkHost::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  v3 = *((_QWORD *)this + 6);
  if ( v3 )
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v3 + 32LL))(v3, v2);
  v4 = *((_QWORD *)this + 15);
  if ( v4 )
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v4 + 32LL))(v4, v2);
  v5 = *((_QWORD *)this + 27);
  if ( v5 )
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v5 + 32LL))(v5, v2);
  v6 = *((_QWORD *)this + 36);
  if ( v6 )
    *(_QWORD *)(v6 + 56) = 0LL;
  v7 = *((_QWORD *)this + 36);
  if ( v7 )
  {
    *((_QWORD *)this + 36) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  }
  std::_Deallocate<16,0>(
    *((void **)this + 31),
    (*((_QWORD *)this + 32) - *((_QWORD *)this + 31)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  std::_List_node<std::pair<unsigned long const,enum ContextualProcessorState>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,enum ContextualProcessorState>,void *>>>(
    v8,
    *((_QWORD ***)this + 29));
  std::_Deallocate<16,0>(*((void **)this + 29), 0x18uLL);
  Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)this + 27);
  std::_Tree_val<std::_Tree_simple_types<std::pair<DockInputIdentity const,unsigned __int64>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<DockInputIdentity const,unsigned __int64>,void *>>>(
    (__int64)this + 192,
    (__int64)this + 192,
    *(_QWORD *)(*((_QWORD *)this + 24) + 8LL));
  std::_Deallocate<16,0>(*((void **)this + 24), 0x40uLL);
  std::_Deallocate<16,0>(
    *((void **)this + 19),
    (*((_QWORD *)this + 20) - *((_QWORD *)this + 19)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  std::_List_node<std::pair<unsigned long const,enum ContextualProcessorState>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,enum ContextualProcessorState>,void *>>>(
    v9,
    *((_QWORD ***)this + 17));
  std::_Deallocate<16,0>(*((void **)this + 17), 0x18uLL);
  Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)this + 15);
  std::_Deallocate<16,0>(
    *((void **)this + 10),
    (*((_QWORD *)this + 11) - *((_QWORD *)this + 10)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  std::_List_node<std::pair<unsigned long const,enum ContextualProcessorState>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,enum ContextualProcessorState>,void *>>>(
    v10,
    *((_QWORD ***)this + 8));
  std::_Deallocate<16,0>(*((void **)this + 8), 0x18uLL);
  Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)this + 6);
  *((_QWORD *)this + 2) = &RefCountedObject::`vftable';
}
