/*
 * XREFs of ??1SystemContextProvider@@MEAA@XZ @ 0x1800FA590
 * Callers:
 *     ??1InputConfigContextProvider@@EEAA@XZ @ 0x1800FA0EC (--1InputConfigContextProvider@@EEAA@XZ.c)
 *     ??_EKernelContextProvider@@UEAAPEAXI@Z @ 0x1800FA474 (--_EKernelContextProvider@@UEAAPEAXI@Z.c)
 *     ??_GSystemContextProvider@@MEAAPEAXI@Z @ 0x1800FA608 (--_GSystemContextProvider@@MEAAPEAXI@Z.c)
 *     ??1VirtualTouchpadContextProvider@@UEAA@XZ @ 0x18019DB10 (--1VirtualTouchpadContextProvider@@UEAA@XZ.c)
 *     ??_EDisplayOcclusionContextProvider@@UEAAPEAXI@Z @ 0x18019E764 (--_EDisplayOcclusionContextProvider@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180081048 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX.c)
 *     ?clear@?$_Hash@V?$_Uset_traits@PEAUISystemContextObserver@@V?$_Uhash_compare@PEAUISystemContextObserver@@U?$hash@PEAUISystemContextObserver@@@std@@U?$equal_to@PEAUISystemContextObserver@@@3@@std@@V?$allocator@PEAUISystemContextObserver@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x18008D0E0 (-clear@-$_Hash@V-$_Uset_traits@PEAUISystemContextObserver@@V-$_Uhash_compare@PEAUISystemContextO.c)
 */

void __fastcall SystemContextProvider::~SystemContextProvider(SystemContextProvider *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &SystemContextProvider::`vftable'{for `ISystemContextProvider'};
  *((_QWORD *)this + 1) = &SystemContextProvider::`vftable'{for `RefCountedObject'};
  std::_Hash<std::_Uset_traits<ISystemContextObserver *,std::_Uhash_compare<ISystemContextObserver *,std::hash<ISystemContextObserver *>,std::equal_to<ISystemContextObserver *>>,std::allocator<ISystemContextObserver *>,0>>::clear((_QWORD *)this + 3);
  std::_Deallocate<16,0>(*((void **)this + 6), (*((_QWORD *)this + 7) - *((_QWORD *)this + 6)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  std::_List_node<std::pair<unsigned long const,enum ContextualProcessorState>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,enum ContextualProcessorState>,void *>>>(
    v2,
    *((_QWORD ***)this + 4));
  std::_Deallocate<16,0>(*((void **)this + 4), 0x18uLL);
  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
}
