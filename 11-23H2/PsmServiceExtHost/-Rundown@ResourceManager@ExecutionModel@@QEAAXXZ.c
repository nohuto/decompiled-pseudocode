/*
 * XREFs of ?Rundown@ResourceManager@ExecutionModel@@QEAAXXZ @ 0x180082CC4
 * Callers:
 *     ?RmpRundownAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180082054 (-RmpRundownAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001C610 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001D750 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ @ 0x18003ADCC (-ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053500 (_guard_xfg_dispatch_icall_nop.c)
 *     ?empty@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEBA_NXZ @ 0x180082EB4 (-empty@-$list@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VBaseRes.c)
 */

void __fastcall ExecutionModel::ResourceManager::Rundown(ExecutionModel::ResourceManager *this)
{
  __int64 v2; // rsi
  HANDLE *v3; // rbx
  __int64 v4; // rcx

  RmpAcquireGlobalLock();
  *((_DWORD *)this + 40) |= 2u;
  v2 = *((_QWORD *)this + 3);
  while ( !(unsigned __int8)utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::empty(v2 + 40) )
  {
    v3 = *(HANDLE **)(*(_QWORD *)(v2 + 40) + 16LL);
    (*((void (__fastcall **)(HANDLE *))*v3 + 1))(v3);
    ExecutionModel::ExternalResourceSet::ReleaseResourcesWithoutNotify(v3);
    (*((void (__fastcall **)(HANDLE *))*v3 + 2))(v3);
  }
  RmpReleaseGlobalLock();
  v4 = *((_QWORD *)this + 17);
  if ( v4 )
  {
    TpReleaseCleanupGroupMembers(v4, 1LL);
    TpReleaseCleanupGroup(*((_QWORD *)this + 17));
    *((_QWORD *)this + 17) = 0LL;
  }
}
