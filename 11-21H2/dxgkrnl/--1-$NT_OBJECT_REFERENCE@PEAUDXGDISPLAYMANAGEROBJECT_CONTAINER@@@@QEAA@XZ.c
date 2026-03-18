/*
 * XREFs of ??1?$NT_OBJECT_REFERENCE@PEAUDXGDISPLAYMANAGEROBJECT_CONTAINER@@@@QEAA@XZ @ 0x1C01C436C
 * Callers:
 *     ?CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z @ 0x1C01C414C (-CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z.c)
 *     DxgkDispMgrOperation @ 0x1C01C89E0 (DxgkDispMgrOperation.c)
 *     DxgkDispMgrReferenceObjectByHandle @ 0x1C02F48E0 (DxgkDispMgrReferenceObjectByHandle.c)
 *     DxgkDispMgrSourceOperation @ 0x1C02F49D0 (DxgkDispMgrSourceOperation.c)
 *     DxgkDispMgrTargetOperation @ 0x1C02F4CF0 (DxgkDispMgrTargetOperation.c)
 * Callees:
 *     <none>
 */

LONG_PTR __fastcall NT_OBJECT_REFERENCE<DXGDISPLAYMANAGEROBJECT_CONTAINER *>::~NT_OBJECT_REFERENCE<DXGDISPLAYMANAGEROBJECT_CONTAINER *>(
        void **a1)
{
  void *v2; // rcx
  LONG_PTR result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = ObfDereferenceObjectWithTag(v2, 0x4B677844u);
    *a1 = 0LL;
  }
  return result;
}
