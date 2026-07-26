/*
 * XREFs of NdisFOidRequestComplete @ 0x1C000FC10
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C00060EC (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C00088CC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qDqd @ 0x1C000B240 (WPP_RECORDER_SF_qDqd.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000D430 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDqqd @ 0x1C000FE70 (WPP_RECORDER_SF_qDqqd.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C0016E68 (WPP_RECORDER_SF_qqd.c)
 *     ?NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z @ 0x1C001C71C (-NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z.c)
 *     ?ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00613E8 (-ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 */

void __stdcall NdisFOidRequestComplete(NDIS_HANDLE NdisFilterHandle, PNDIS_OID_REQUEST OidRequest, NDIS_STATUS Status)
{
  __int64 v3; // rbx
  UCHAR *NdisReserved; // rbp
  bool v8; // zf
  struct _NDIS_MINIPORT_BLOCK *v9; // rbx
  KSPIN_LOCK *v10; // rbp
  KSPIN_LOCK v11; // r14
  KIRQL v12; // al
  KSPIN_LOCK *p_Lock; // rcx
  KIRQL v14; // dl
  __int64 v15; // rbp
  int v16; // edx
  int v17; // r8d
  int v18; // edx
  KIRQL v19; // dl
  int Context; // [rsp+20h] [rbp-58h]
  unsigned __int8 v21; // [rsp+80h] [rbp+8h] BYREF

  v3 = *((_QWORD *)NdisFilterHandle + 23);
  NdisReserved = OidRequest->NdisReserved;
  if ( v3 != -1 )
  {
    if ( KeCancelTimer((PKTIMER)(v3 + 64)) )
    {
      KeSetEvent((PRKEVENT)(v3 + 168), 0, 0);
      *(_DWORD *)(v3 + 160) = 0;
    }
    else
    {
      _InterlockedAnd((volatile signed __int32 *)(v3 + 160), 0);
    }
  }
  if ( (*((_DWORD *)NdisReserved + 4) & 0x8000000) == 0 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qDqd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)OidRequest,
        Status,
        0x16u,
        (struct _GUID *)&WPP_3f10502a8e7e385c6a77087d2be74200_Traceguids,
        (char)NdisFilterHandle,
        OidRequest->DATA.QUERY_INFORMATION.Oid,
        (char)OidRequest,
        Status);
    goto LABEL_20;
  }
  v8 = *(_BYTE *)NdisFilterHandle == 5;
  v9 = 0LL;
  v21 = 0;
  v10 = 0LL;
  if ( v8 )
    v10 = (KSPIN_LOCK *)NdisFilterHandle;
  else
    v9 = (struct _NDIS_MINIPORT_BLOCK *)NdisFilterHandle;
  v11 = *(_QWORD *)&OidRequest->NdisReserved[24];
  if ( v11 )
  {
    *(_QWORD *)&OidRequest->NdisReserved[24] = 0LL;
    if ( OidRequest->RequestType == NdisRequestMethod )
    {
      *(_DWORD *)(v11 + 60) = OidRequest->DATA.METHOD_INFORMATION.BytesWritten;
      *(_DWORD *)(v11 + 64) = OidRequest->DATA.METHOD_INFORMATION.BytesRead;
      *(_DWORD *)(v11 + 68) = OidRequest->DATA.METHOD_INFORMATION.BytesNeeded;
      *(_QWORD *)(v11 + 40) = OidRequest->DATA.QUERY_INFORMATION.InformationBuffer;
      *(_DWORD *)(v11 + 48) = OidRequest->DATA.QUERY_INFORMATION.InformationBufferLength;
      *(_DWORD *)(v11 + 52) = OidRequest->DATA.QUERY_INFORMATION.BytesWritten;
    }
    else
    {
      *(_DWORD *)(v11 + 52) = OidRequest->DATA.QUERY_INFORMATION.BytesWritten;
      *(_DWORD *)(v11 + 56) = OidRequest->DATA.QUERY_INFORMATION.BytesNeeded;
      *(_QWORD *)(v11 + 40) = OidRequest->DATA.QUERY_INFORMATION.InformationBuffer;
      *(_DWORD *)(v11 + 48) = OidRequest->DATA.QUERY_INFORMATION.InformationBufferLength;
    }
    if ( (*(_DWORD *)(v11 + 88) & 0x400) == 0 )
    {
      if ( v10 )
      {
        v12 = KeAcquireSpinLockRaiseToDpc(v10 + 18);
        v10[22] = v11;
        p_Lock = v10 + 18;
        v14 = v12;
        v10[19] = 0LL;
      }
      else
      {
        NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v9, &v21);
        v14 = v21;
        p_Lock = &v9->Lock;
        v9->PendingOidRequest = (_NDIS_OID_REQUEST *)v11;
        v9->MiniportThread = 0LL;
      }
      KeReleaseSpinLock(p_Lock, v14);
    }
    v15 = *(_QWORD *)&OidRequest->NdisReserved[24];
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xBu,
        0xDu,
        (struct _GUID *)&WPP_492abc64950d3d1c0cf6ddade1213689_Traceguids,
        (char)OidRequest);
    if ( v15 )
    {
      *(_BYTE *)(v15 + 232) = OidRequest->SupportedRevision;
      *(_DWORD *)(v15 + 152) = *(_DWORD *)&OidRequest->NdisReserved[80];
    }
    ExFreePoolWithTag(OidRequest, 0);
    NdisReserved = (UCHAR *)(v11 + 72);
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qDqqd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v16,
        v17,
        21,
        Context,
        (char)NdisFilterHandle,
        *(_DWORD *)(v11 + 32),
        (char)OidRequest,
        v11,
        Status);
LABEL_20:
    *((_DWORD *)NdisReserved + 2) = Status;
    if ( KeExpandKernelStackAndCalloutEx(
           (PEXPAND_STACK_CALLOUT)ndisFOidRequestCompleteInternal,
           NdisFilterHandle,
           (unsigned int)Size,
           0,
           0LL) < 0 )
    {
      v21 = 0;
      NDIS_ACQUIRE_FILTER_SPIN_LOCK((struct _NDIS_FILTER_BLOCK *)NdisFilterHandle, &v21);
      *((_BYTE *)NdisFilterHandle + 233) = 1;
      ndisQueueStackExpansionFallbackWorkItem((struct _NDIS_FILTER_BLOCK *)NdisFilterHandle);
      v19 = v21;
      *((_QWORD *)NdisFilterHandle + 19) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)NdisFilterHandle + 18, v19);
    }
    return;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xBu,
      0x10u,
      (struct _GUID *)&WPP_492abc64950d3d1c0cf6ddade1213689_Traceguids);
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v18) = 2;
      WPP_RECORDER_SF_qqd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v18,
        11,
        20,
        (struct _GUID *)&WPP_3f10502a8e7e385c6a77087d2be74200_Traceguids,
        (char)NdisFilterHandle,
        (char)OidRequest,
        Status);
    }
  }
}
