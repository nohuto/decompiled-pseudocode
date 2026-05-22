/*
 * XREFs of ??1CPresentationManager@@EEAA@XZ @ 0x1801ACF48
 * Callers:
 *     ??_GCPresentationManager@@EEAAPEAXI@Z @ 0x1801AD150 (--_GCPresentationManager@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KPEAVCPresentationSurface@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KPEAVCPresentationSurface@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CB_KPEAVCPresentationSurface@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_KPEAVCPresentationSurface@@@std@@PEAX@1@@Z @ 0x18009A5C4 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CB_KPEAVCPresentationSurface@@@std@@PEAX@std.c)
 *     ??1?$set@PEAUIUnknown@@U?$less@PEAUIUnknown@@@std@@V?$allocator@PEAUIUnknown@@@3@@std@@QEAA@XZ @ 0x1800A7330 (--1-$set@PEAUIUnknown@@U-$less@PEAUIUnknown@@@std@@V-$allocator@PEAUIUnknown@@@3@@std@@QEAA@XZ.c)
 *     ??R?$default_delete@VCSynchronizationContext@@@std@@QEBAXPEAVCSynchronizationContext@@@Z @ 0x1801AD0E4 (--R-$default_delete@VCSynchronizationContext@@@std@@QEBAXPEAVCSynchronizationContext@@@Z.c)
 */

void __fastcall CPresentationManager::~CPresentationManager(CPresentationManager *this)
{
  void **v1; // rbx
  char *v3; // rcx
  char *v4; // rcx
  char *v5; // rcx
  void *v6; // rcx

  v1 = (void **)((char *)this + 160);
  *(_QWORD *)this = &CPresentationManager::`vftable'{for `CMILCOMBaseT<IPresentationManager>'};
  *((_QWORD *)this + 2) = &CPresentationManager::`vftable'{for `IPresentationManagerInternal'};
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,CPresentationSurface *>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,CPresentationSurface *>,void *>>>(
    (__int64)this + 160,
    (__int64)v1,
    *((_QWORD *)*v1 + 1));
  std::_Deallocate<16,0>(*v1, 0x30uLL);
  if ( *((_QWORD *)this + 19) )
    std::default_delete<CSynchronizationContext>::operator()();
  v3 = (char *)*((_QWORD *)this + 15);
  if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v3);
  v4 = (char *)*((_QWORD *)this + 14);
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v4);
  v5 = (char *)*((_QWORD *)this + 13);
  if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v5);
  std::set<IUnknown *>::~set<IUnknown *>((void **)this + 11);
  v6 = (void *)*((_QWORD *)this + 8);
  if ( v6 )
  {
    std::_Deallocate<16,0>(v6, (*((_QWORD *)this + 10) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 8) = 0LL;
    *((_QWORD *)this + 9) = 0LL;
    *((_QWORD *)this + 10) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
}
