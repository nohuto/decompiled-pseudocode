/*
 * XREFs of ?RmpPolicyRevokeResourceSetsForPoolAcquire@@YAXPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x1800505B0
 * Callers:
 *     ?RmpPolicyRevokeResourceSetsForAcquire@@YAXPEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z @ 0x18008AD28 (-RmpPolicyRevokeResourceSetsForAcquire@@YAXPEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIModernResourceEnforcerCallback@@@ATL@@QEAA@XZ @ 0x180013CF4 (--1-$CComPtrBase@UIModernResourceEnforcerCallback@@@ATL@@QEAA@XZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800465F4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?RequestStop@HAM_ACTIVITY_RM_CONTEXT@@QEAAX_K@Z @ 0x18007FAF8 (-RequestStop@HAM_ACTIVITY_RM_CONTEXT@@QEAAX_K@Z.c)
 */

__int64 __fastcall RmpPolicyRevokeResourceSetsForPoolAcquire(_QWORD *a1)
{
  _QWORD *v1; // rdi
  struct IUnknown *v2; // rbx
  struct IUnknown *v4; // rdx
  struct IUnknown *v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = (_QWORD *)*a1;
  v2 = 0LL;
  v6 = 0LL;
  while ( v1 != a1 )
  {
    v4 = (struct IUnknown *)v1[2];
    if ( v2 != v4 )
    {
      ATL::AtlComPtrAssign(&v6, v4);
      v2 = v6;
    }
    HAM_ACTIVITY_RM_CONTEXT::RequestStop((HAM_ACTIVITY_RM_CONTEXT *)v2[214].lpVtbl, (unsigned __int64)v2[215].lpVtbl);
    v1 = (_QWORD *)*v1;
  }
  return ATL::CComPtrBase<IModernResourceEnforcerCallback>::~CComPtrBase<IModernResourceEnforcerCallback>((__int64 *)&v6);
}
