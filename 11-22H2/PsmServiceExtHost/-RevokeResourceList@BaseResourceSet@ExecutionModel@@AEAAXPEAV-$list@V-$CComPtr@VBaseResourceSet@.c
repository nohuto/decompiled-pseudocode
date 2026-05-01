/*
 * XREFs of ?RevokeResourceList@BaseResourceSet@ExecutionModel@@AEAAXPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x18008BD64
 * Callers:
 *     ?CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ @ 0x1800080A0 (-CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ.c)
 *     ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo@2@W4Enum@Priority@2@KW45PendType@2@PEA_NW4_RM_ACQUIRE_PEND_POLICY@@PEAVExternalResourceSet@2@@Z @ 0x180039C90 (-AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo.c)
 * Callees:
 *     ??1?$CComPtrBase@UIModernResourceEnforcerCallback@@@ATL@@QEAA@XZ @ 0x180013CF4 (--1-$CComPtrBase@UIModernResourceEnforcerCallback@@@ATL@@QEAA@XZ.c)
 *     ??0?$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVBaseResourceSet@ExecutionModel@@@Z @ 0x18003B010 (--0-$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVBaseResourceSet@ExecutionModel@.c)
 *     ?Revoke@ExternalResourceSet@ExecutionModel@@QEAAX_N@Z @ 0x18008BA10 (-Revoke@ExternalResourceSet@ExecutionModel@@QEAAX_N@Z.c)
 */

__int64 __fastcall ExecutionModel::BaseResourceSet::RevokeResourceList(
        ExecutionModel::ExternalResourceSet *a1,
        _QWORD *a2)
{
  _QWORD *i; // rbx
  __int64 result; // rax
  ExecutionModel::ExternalResourceSet *v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = a1;
  for ( i = (_QWORD *)*a2; i != a2; i = (_QWORD *)*i )
  {
    ATL::CComPtrBase<ExecutionModel::BaseResourceSet>::CComPtrBase<ExecutionModel::BaseResourceSet>(&v5, i[2]);
    ExecutionModel::ExternalResourceSet::Revoke(v5, 0);
    result = ATL::CComPtrBase<IModernResourceEnforcerCallback>::~CComPtrBase<IModernResourceEnforcerCallback>((__int64 *)&v5);
  }
  return result;
}
