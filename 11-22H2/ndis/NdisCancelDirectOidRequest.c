/*
 * XREFs of NdisCancelDirectOidRequest @ 0x1C00B5140
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0002E8C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000CB40 (WPP_RECORDER_SF_qq.c)
 *     ?ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z @ 0x1C0022764 (-ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z.c)
 *     ndisDoCancelDirectOidRequest @ 0x1C00B4CD0 (ndisDoCancelDirectOidRequest.c)
 */

void __stdcall NdisCancelDirectOidRequest(NDIS_HANDLE NdisBindingHandle, PVOID RequestId)
{
  struct _NDIS_MINIPORT_BLOCK *v2; // rdi
  struct _NDIS_FILTER_BLOCK *v3; // rbx
  struct _NDIS_MINIPORT_BLOCK *v4; // rsi
  char v6; // r14
  struct _NDIS_FILTER_BLOCK *DirectRequestHandle; // rax
  KIRQL v8; // dl
  KIRQL NewIrql; // [rsp+70h] [rbp+8h] BYREF
  int v10; // [rsp+80h] [rbp+18h] BYREF

  v2 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)NdisBindingHandle + 2);
  v3 = 0LL;
  v4 = 0LL;
  NewIrql = 0;
  v6 = (char)NdisBindingHandle;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xEu,
      (struct _GUID *)&WPP_37210d7308e93eba942d1cae1437c40c_Traceguids,
      (char)NdisBindingHandle,
      RequestId);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v2, &NewIrql);
  DirectRequestHandle = (struct _NDIS_FILTER_BLOCK *)v2->Next.DirectRequestHandle;
  if ( DirectRequestHandle->Header.Type == 5 )
  {
    v10 = 0;
    v3 = DirectRequestHandle;
    if ( !ndisReferenceRefEx(&DirectRequestHandle->PnPRef.SpinLock, 2u, (enum _NDIS_REFERENCE_STATUS *)&v10) )
      v3 = 0LL;
  }
  else
  {
    v4 = (struct _NDIS_MINIPORT_BLOCK *)v2->Next.DirectRequestHandle;
  }
  v8 = NewIrql;
  v2->MiniportThread = 0LL;
  KeReleaseSpinLock(&v2->Lock, v8);
  if ( v4 || v3 )
    ndisDoCancelDirectOidRequest(v4, v3, RequestId);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xFu,
      (struct _GUID *)&WPP_37210d7308e93eba942d1cae1437c40c_Traceguids,
      v6,
      RequestId);
}
