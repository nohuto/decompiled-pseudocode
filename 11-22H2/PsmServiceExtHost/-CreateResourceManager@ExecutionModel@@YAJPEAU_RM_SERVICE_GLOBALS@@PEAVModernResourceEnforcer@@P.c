/*
 * XREFs of ?CreateResourceManager@ExecutionModel@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAVModernResourceEnforcer@@PEAPEAVResourceManager@1@@Z @ 0x180044C3C
 * Callers:
 *     ?RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180044948 (-RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ??0ResourceManager@ExecutionModel@@QEAA@XZ @ 0x180044CC8 (--0ResourceManager@ExecutionModel@@QEAA@XZ.c)
 *     ?Initialize@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_SERVICE_GLOBALS@@PEAVModernResourceEnforcer@@@Z @ 0x180044D7C (-Initialize@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_SERVICE_GLOBALS@@PEAVModernResourceEnfo.c)
 *     ??2@YAPEAX_K@Z @ 0x18004AA48 (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::CreateResourceManager(
        ExecutionModel *this,
        struct _RM_SERVICE_GLOBALS *a2,
        struct ModernResourceEnforcer *a3,
        struct ExecutionModel::ResourceManager **a4)
{
  ExecutionModel::ResourceManager *v7; // rax
  unsigned int v8; // ebx
  ExecutionModel::ResourceManager *v9; // rax
  ExecutionModel::ResourceManager *v10; // rdi
  int v11; // ebp

  v7 = (ExecutionModel::ResourceManager *)operator new(0xD0uLL);
  v8 = 0;
  if ( v7
    && (v9 = (ExecutionModel::ResourceManager *)ExecutionModel::ResourceManager::ResourceManager(v7), (v10 = v9) != 0LL) )
  {
    v11 = ExecutionModel::ResourceManager::Initialize(v9, this, a2);
    if ( v11 < 0 )
    {
      (*(void (__fastcall **)(ExecutionModel::ResourceManager *))(*(_QWORD *)v10 + 16LL))(v10);
      return (unsigned int)v11;
    }
    else
    {
      *(_QWORD *)a3 = v10;
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v8;
}
