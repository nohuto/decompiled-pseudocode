/*
 * XREFs of NdisFDirectOidRequestComplete @ 0x1C00B5E40
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z @ 0x1C0008968 (-ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@.c)
 *     ?NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z @ 0x1C001DF4C (-NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z.c)
 *     ?ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C006635C (-ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 */

void __stdcall NdisFDirectOidRequestComplete(
        NDIS_HANDLE NdisFilterHandle,
        PNDIS_OID_REQUEST OidRequest,
        NDIS_STATUS Status)
{
  PNDIS_OID_REQUEST v4; // rdi
  bool v5; // zf
  KIRQL v7; // dl
  _QWORD Parameter[4]; // [rsp+30h] [rbp-20h] BYREF
  struct _NDIS_OID_REQUEST *v9; // [rsp+70h] [rbp+20h] BYREF
  KIRQL NewIrql; // [rsp+80h] [rbp+30h] BYREF

  Parameter[0] = 0LL;
  Parameter[2] = 0LL;
  v4 = OidRequest;
  v5 = (*(_DWORD *)&OidRequest->NdisReserved[16] & 0x8000000) == 0;
  v9 = OidRequest;
  if ( !v5 )
  {
    ndisOidFreeInternalCloneRequest((struct _NDIS_FILTER_BLOCK *)NdisFilterHandle, OidRequest, 0, &v9);
    v4 = v9;
  }
  *(_DWORD *)&v4->NdisReserved[8] = Status;
  Parameter[1] = NdisFilterHandle;
  Parameter[3] = v4;
  if ( KeExpandKernelStackAndCalloutEx(
         (PEXPAND_STACK_CALLOUT)ndisFDirectOidRequestCompleteInternal,
         Parameter,
         (unsigned int)Size,
         0,
         0LL) < 0 )
  {
    NewIrql = 0;
    NDIS_ACQUIRE_FILTER_SPIN_LOCK((struct _NDIS_FILTER_BLOCK *)NdisFilterHandle, &NewIrql);
    *(_QWORD *)v4->NdisReserved = *((_QWORD *)NdisFilterHandle + 30);
    *((_QWORD *)NdisFilterHandle + 30) = v9;
    ndisQueueStackExpansionFallbackWorkItem((struct _NDIS_FILTER_BLOCK *)NdisFilterHandle);
    v7 = NewIrql;
    *((_QWORD *)NdisFilterHandle + 19) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)NdisFilterHandle + 18, v7);
  }
}
