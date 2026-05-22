/*
 * XREFs of ??1CPresentationSurface@@MEAA@XZ @ 0x1801AFCA4
 * Callers:
 *     ??_GCPresentationSurface@@MEAAPEAXI@Z @ 0x1801AFDD0 (--_GCPresentationSurface@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180098554 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Lock@CPresentationManager@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x1800A7A8C (-Lock@CPresentationManager@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800E3AAC (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@UObjectPropertyPair@@@std@@@std@@QEAAPEAU?$_Tree_node@UObjectPropertyPair@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@UObjectPropertyPair@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1800E71BC (-_Extract@-$_Tree_val@U-$_Tree_simple_types@UObjectPropertyPair@@@std@@@std@@QEAAPEAU-$_Tree_nod.c)
 *     ModuleFailFastForHRESULT @ 0x1800F9140 (ModuleFailFastForHRESULT.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@_KPEAVCPresentationSurface@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KPEAVCPresentationSurface@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KPEAVCPresentationSurface@@@std@@@std@@@std@@@2@AEB_K@Z @ 0x1801B08DC (-find@-$_Tree@V-$_Tmap_traits@_KPEAVCPresentationSurface@@U-$less@_K@std@@V-$allocator@U-$pair@$.c)
 */

void __fastcall CPresentationSurface::~CPresentationSurface(CPresentationSurface *this)
{
  __int64 v2; // rdi
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 *v5; // rax
  int v6; // eax
  void *v7; // rcx
  char *v8; // rcx
  const void *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+50h] [rbp+18h] BYREF

  *(_QWORD *)this = &CPresentationSurface::`vftable'{for `CMILCOMBaseT<IPresentationSurface>'};
  *((_QWORD *)this + 2) = &CPresentationSurface::`vftable'{for `CPresentationResource'};
  *((_QWORD *)this + 4) = &CPresentationSurface::`vftable'{for `IPresentationSurfaceInternal'};
  CPresentationManager::Lock(*((_QWORD *)this + 3), (__int64)&v12);
  v2 = *((_QWORD *)this + 3);
  v10 = *((_QWORD *)this + 5);
  std::_Tree<std::_Tmap_traits<unsigned __int64,CPresentationSurface *,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,CPresentationSurface *>>,0>>::find(
    v2 + 160,
    &v11,
    &v10);
  if ( v11 != *(_QWORD *)(v2 + 160) )
  {
    v5 = std::_Tree_val<std::_Tree_simple_types<ObjectPropertyPair>>::_Extract((_QWORD *)(v2 + 160), v11, v3, v4);
    std::_Deallocate<16,0>(v5, 0x30uLL);
  }
  if ( *((_BYTE *)this + 72) )
  {
    v6 = NtFlipObjectRemoveContent(*(_QWORD *)(*((_QWORD *)this + 3) + 104LL), (char *)this + 40);
    if ( v6 < 0 )
      ModuleFailFastForHRESULT(v6, retaddr);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v12);
  v7 = (void *)*((_QWORD *)this + 22);
  if ( v7 )
    operator delete(v7);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)this + 8);
  v8 = (char *)*((_QWORD *)this + 7);
  if ( (unsigned __int64)(v8 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v8);
  CPresentationResource::~CPresentationResource((CPresentationSurface *)((char *)this + 16));
}
