/*
 * XREFs of ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_ACTIVITY_HOST@@PEAXPEAUIResourceSetCallback@2@_KPEAPEAVResourceSet@2@@Z @ 0x18004F864
 * Callers:
 *     ?RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAU_RM_ACTIVITY_HOST@@_K@Z @ 0x18004FC50 (-RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUI.c)
 * Callees:
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJXZ @ 0x180050828 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJXZ.c)
 *     ?CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@PEBU_ResourceSetInfo@2@PEAXPEAUIResourceSetCallback@2@PEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_REASON_INTERNAL@@_KPEAPEAV12@@Z @ 0x180050BBC (-CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@PEBU_ResourceSetInfo@2@PEAX.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::AcquireResourceSet(
        ExecutionModel::ResourceManager *this,
        const struct ExecutionModel::_ResourceSetInfo *a2,
        struct _RM_ACTIVITY_HOST *a3,
        void *a4,
        struct ExecutionModel::IResourceSetCallback *a5,
        unsigned __int64 a6,
        struct ExecutionModel::ResourceSet **a7)
{
  int v8; // eax
  int v9; // r9d
  int v10; // eax
  struct ExecutionModel::ResourceSet *v11; // rbx
  int v12; // edi
  ExecutionModel::ResourceSet *v14; // [rsp+50h] [rbp+8h] BYREF

  v14 = 0LL;
  v8 = *((_DWORD *)a3 + 156);
  if ( v8 == 2 )
    v9 = 11;
  else
    v9 = ((v8 - 4) & 0xFFFFFFFB) != 0 ? -1 : 12;
  v10 = ExecutionModel::ResourceSet::CreateInstance(*((_QWORD *)this + 4), a2, a4, a5, a3, v9, a6, &v14);
  v11 = v14;
  v12 = v10;
  if ( v10 >= 0 )
  {
    v12 = ExecutionModel::ResourceSet::AcquireInternalResources(v14);
    if ( v12 >= 0 )
    {
      *a7 = v11;
      v11 = 0LL;
      v12 = 0;
    }
  }
  if ( v11 )
  {
    (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)v11 + 32LL))(v11);
    (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return (unsigned int)v12;
}
