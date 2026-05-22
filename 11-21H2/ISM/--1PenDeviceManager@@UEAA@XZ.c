/*
 * XREFs of ??1PenDeviceManager@@UEAA@XZ @ 0x180185E4C
 * Callers:
 *     ??_EPenDeviceManager@@UEAAPEAXI@Z @ 0x180185F00 (--_EPenDeviceManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x180003620 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004CA28 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@QEAXV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEAXV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEAXV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800B8C0C (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@QEAXV-$com_ptr_t@VPenInterface@@Uerr_except.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBU_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBU_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@1@@Z @ 0x1801853E4 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBU_GUID@@V-$com_ptr_t@VPenDevice@@Uerr_exce.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall PenDeviceManager::~PenDeviceManager(PenDeviceManager *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8
  const char *v5; // r9
  Microsoft::BamoImpl::BamoImplObject *v6; // rcx

  *(_QWORD *)this = &PenDeviceManager::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &BamoPenDeviceManagerPrincipal::`vftable'{for `IPenDeviceManagerPrincipal'};
  std::_Deallocate<16,0>(
    *((void **)this + 13),
    (*((_QWORD *)this + 14) - *((_QWORD *)this + 13)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  std::_List_node<std::pair<void * const,wil::com_ptr_t<PenInterface,wil::err_exception_policy>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<void * const,wil::com_ptr_t<PenInterface,wil::err_exception_policy>>,void *>>>(
    v2,
    *((_QWORD ***)this + 11));
  std::_Deallocate<16,0>(*((void **)this + 11), 0x20uLL);
  std::_Tree_val<std::_Tree_simple_types<std::pair<_GUID const,wil::com_ptr_t<PenDevice,wil::err_exception_policy>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<_GUID const,wil::com_ptr_t<PenDevice,wil::err_exception_policy>>,void *>>>(
    (__int64)this + 64,
    (__int64)this + 64,
    *(_QWORD *)(*((_QWORD *)this + 8) + 8LL));
  std::_Deallocate<16,0>(*((void **)this + 8), 0x38uLL);
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)this + 7);
  v6 = (Microsoft::BamoImpl::BamoImplObject *)*((_QWORD *)this + 4);
  if ( v6 )
    Microsoft::BamoImpl::BamoImplObject::Release(v6, v3, v4, v5);
}
