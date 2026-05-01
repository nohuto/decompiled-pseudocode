/*
 * XREFs of ?Initialize@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_SERVICE_GLOBALS@@PEAVModernResourceEnforcer@@@Z @ 0x180044D7C
 * Callers:
 *     ?CreateResourceManager@ExecutionModel@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAVModernResourceEnforcer@@PEAPEAVResourceManager@1@@Z @ 0x180044C3C (-CreateResourceManager@ExecutionModel@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAVModernResourceEnforcer@@P.c)
 * Callees:
 *     ?CreatePendingRequestWorkItems@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x180045494 (-CreatePendingRequestWorkItems@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 *     ?InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x180045564 (-InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180046684 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::Initialize(
        ExecutionModel::ResourceManager *this,
        struct _RM_SERVICE_GLOBALS *a2,
        struct IUnknown **a3)
{
  struct IUnknown *v4; // rdx
  __int64 result; // rax

  *((_QWORD *)this + 16) = a2;
  if ( a3 )
  {
    v4 = (struct IUnknown *)(((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
    if ( a3[36] != v4 )
      ATL::AtlComPtrAssign(a3 + 36, v4);
  }
  result = ExecutionModel::ResourceManager::InitializePools(this);
  if ( (int)result >= 0 )
  {
    result = ExecutionModel::ResourceManager::CreatePendingRequestWorkItems(this);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
