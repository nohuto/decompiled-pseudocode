/*
 * XREFs of ?RmpPolicyRevokeResourceSetsForAcquire@@YAXPEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z @ 0x18008B088
 * Callers:
 *     ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z @ 0x18000B420 (-ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJXZ @ 0x180050828 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJXZ.c)
 * Callees:
 *     ?RmpPolicyReclaimHostList@@YAXPEAU_RM_POLICY_WORK_BUFFER@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x1800506C4 (-RmpPolicyReclaimHostList@@YAXPEAU_RM_POLICY_WORK_BUFFER@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REAS.c)
 *     ?RmpPolicyRevokeResourceSetsForPoolAcquire@@YAXPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x1800507B0 (-RmpPolicyRevokeResourceSetsForPoolAcquire@@YAXPEAV-$list@V-$CComPtr@VBaseResourceSet@ExecutionM.c)
 */

void __fastcall RmpPolicyRevokeResourceSetsForAcquire(struct _RM_INTERNAL_RESOURCE_REVOKE_CONTEXT *a1)
{
  _QWORD *v2; // rcx
  __int64 v3; // rcx

  v2 = (_QWORD *)*((_QWORD *)a1 + 1);
  if ( (_QWORD *)*v2 != v2 )
    RmpPolicyRevokeResourceSetsForPoolAcquire(v2);
  v3 = *((_QWORD *)a1 + 3);
  if ( *(_DWORD *)(v3 + 40) )
    RmpPolicyReclaimHostList(v3, *((_DWORD *)a1 + 9), *(_DWORD *)(*(_QWORD *)a1 + 32LL), 0LL);
}
