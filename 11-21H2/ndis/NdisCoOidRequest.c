/*
 * XREFs of NdisCoOidRequest @ 0x1C00BB8C0
 * Callers:
 *     NdisCoRequest @ 0x1C00BBDF0 (NdisCoRequest.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C00060EC (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000D430 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C000D6C0 (WPP_RECORDER_SF_qqq.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0019598 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qD @ 0x1C001E848 (WPP_RECORDER_SF_qD.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     ?ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z @ 0x1C00B763C (-ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z.c)
 *     ?ndisReferenceAf@@YAEPEAU_NDIS_CO_AF_BLOCK@@@Z @ 0x1C00B77F0 (-ndisReferenceAf@@YAEPEAU_NDIS_CO_AF_BLOCK@@@Z.c)
 *     ndisCoOidRequestToRequest @ 0x1C00BB798 (ndisCoOidRequestToRequest.c)
 *     NdisCoOidRequestComplete @ 0x1C00BBD20 (NdisCoOidRequestComplete.c)
 *     NdisMCoOidRequestComplete @ 0x1C00BC360 (NdisMCoOidRequestComplete.c)
 */

NDIS_STATUS __stdcall NdisCoOidRequest(
        NDIS_HANDLE NdisBindingHandle,
        NDIS_HANDLE NdisAfHandle,
        NDIS_HANDLE NdisVcHandle,
        NDIS_HANDLE NdisPartyHandle,
        PNDIS_OID_REQUEST OidRequest)
{
  PNDIS_OID_REQUEST v9; // rdi
  char v10; // r12
  NDIS_STATUS v11; // ebx
  void *v12; // rsi
  __int64 (__fastcall *v13)(__int64, __int64, __int64, __int64); // rbx
  __int64 v15; // rax
  __int64 v16; // rax
  PNDIS_OID_REQUEST v17; // r14
  NDIS_STATUS Status; // eax
  struct _NDIS_MINIPORT_BLOCK *v19; // rbp
  KIRQL v20; // dl
  __int64 v21; // rax
  char v22[8]; // [rsp+30h] [rbp-58h]
  __int64 (__fastcall *v23)(__int64, __int64, __int64, __int64); // [rsp+40h] [rbp-48h] BYREF
  __int64 v24; // [rsp+48h] [rbp-40h]
  __int64 v25; // [rsp+90h] [rbp+8h]
  __int64 v26; // [rsp+A0h] [rbp+18h]

  v9 = OidRequest;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xCu,
      (struct _GUID *)&WPP_f2e723125d8f3d1097c3ab5c6e889825_Traceguids,
      (char)NdisBindingHandle,
      (char)NdisAfHandle,
      OidRequest);
  *(_QWORD *)&v9->NdisReserved[32] = NdisBindingHandle;
  if ( v9->Header.Type != 0x96 || v9->Header.Size < 0xECu )
  {
    v11 = -1073741823;
    goto LABEL_10;
  }
  v10 = 1;
  if ( !v9->Header.Revision )
  {
    v11 = -1071448020;
    goto LABEL_10;
  }
  v12 = 0LL;
  if ( NdisAfHandle )
  {
    v13 = 0LL;
    OidRequest = 0LL;
    v23 = 0LL;
    if ( !ndisReferenceAf((struct _NDIS_CO_AF_BLOCK *)NdisAfHandle) )
    {
      v11 = -1073741823;
      goto LABEL_10;
    }
    *(_DWORD *)&v9->NdisReserved[16] |= 8u;
    v26 = 0LL;
    v25 = 0LL;
    KeInitializeEvent((PRKEVENT)&v9->NdisReserved[40], NotificationEvent, 0);
    if ( *((NDIS_HANDLE *)NdisAfHandle + 46) == NdisBindingHandle )
    {
      if ( *((_DWORD *)NdisAfHandle + 98) < 6u )
      {
        v13 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*((_QWORD *)NdisAfHandle + 3) + 120LL);
        v23 = v13;
      }
      else
      {
        v10 = 0;
        OidRequest = *(PNDIS_OID_REQUEST *)(*((_QWORD *)NdisAfHandle + 4) + 120LL);
      }
      v15 = *((_QWORD *)NdisAfHandle + 47);
      v24 = *((_QWORD *)NdisAfHandle + 6);
      *(_QWORD *)&v9->NdisReserved[64] = v15;
      if ( NdisVcHandle )
      {
        *(_QWORD *)&v9->NdisReserved[56] = *((_QWORD *)NdisVcHandle + 3);
        v26 = *((_QWORD *)NdisVcHandle + 18);
      }
      if ( NdisPartyHandle )
      {
        *(_QWORD *)&v9->NdisReserved[40] = *((_QWORD *)NdisPartyHandle + 2);
        v16 = *((_QWORD *)NdisPartyHandle + 1);
LABEL_28:
        v25 = v16;
      }
    }
    else
    {
      if ( *((_DWORD *)NdisAfHandle + 99) < 6u )
      {
        v13 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))*((_QWORD *)NdisAfHandle + 10);
        v23 = v13;
      }
      else
      {
        v10 = 0;
        OidRequest = (PNDIS_OID_REQUEST)*((_QWORD *)NdisAfHandle + 29);
      }
      v24 = *((_QWORD *)NdisAfHandle + 47);
      *(_QWORD *)&v9->NdisReserved[64] = *((_QWORD *)NdisAfHandle + 6);
      if ( NdisVcHandle )
      {
        *(_QWORD *)&v9->NdisReserved[56] = *((_QWORD *)NdisVcHandle + 18);
        v26 = *((_QWORD *)NdisVcHandle + 3);
      }
      if ( NdisPartyHandle )
      {
        *(_QWORD *)&v9->NdisReserved[40] = *((_QWORD *)NdisPartyHandle + 1);
        v16 = *((_QWORD *)NdisPartyHandle + 2);
        goto LABEL_28;
      }
    }
    if ( v10 )
    {
      if ( !v13 )
      {
LABEL_31:
        v11 = -1073741637;
        ndisDereferenceAf((KSPIN_LOCK *)NdisAfHandle);
        goto LABEL_10;
      }
      v17 = OidRequest;
    }
    else
    {
      v17 = OidRequest;
      if ( !OidRequest )
        goto LABEL_31;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xBu,
        0xDu,
        (struct _GUID *)&WPP_f2e723125d8f3d1097c3ab5c6e889825_Traceguids,
        (char)v13,
        v9);
    if ( v10 )
      Status = ndisCoOidRequestToRequest(&v23, v24, v26, v25, (__int64)v9);
    else
      Status = ((__int64 (__fastcall *)(__int64, __int64, __int64, PNDIS_OID_REQUEST))v17)(v24, v26, v25, v9);
    v11 = Status;
    if ( Status != 259 )
    {
      NdisCoOidRequestComplete(NdisAfHandle, NdisVcHandle, NdisPartyHandle, v9, Status);
LABEL_42:
      v11 = 259;
      goto LABEL_10;
    }
    goto LABEL_10;
  }
  v19 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)NdisBindingHandle + 2);
  LOBYTE(OidRequest) = 0;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v19, (unsigned __int8 *)&OidRequest);
  if ( (*((_DWORD *)NdisBindingHandle + 56) & 0x8000) != 0 )
  {
    v11 = -1073676286;
  }
  else if ( (v19->Flags & 0x300000) != 0 )
  {
    v11 = -1073676275;
  }
  else
  {
    v11 = 0;
    ndisMReferenceOpen((__int64)NdisBindingHandle, 6u);
  }
  v20 = (unsigned __int8)OidRequest;
  v19->MiniportThread = 0LL;
  KeReleaseSpinLock(&v19->Lock, v20);
  if ( !v11 )
  {
    *(_DWORD *)&v9->NdisReserved[16] |= 0x20u;
    *(_QWORD *)&v9->NdisReserved[32] = NdisBindingHandle;
    *(_QWORD *)&v9->NdisReserved[56] = 0LL;
    if ( NdisVcHandle )
    {
      if ( *((NDIS_HANDLE *)NdisVcHandle + 10) == NdisBindingHandle )
        v21 = *((_QWORD *)NdisVcHandle + 3);
      else
        v21 = *((_QWORD *)NdisVcHandle + 18);
      *(_QWORD *)&v9->NdisReserved[56] = v21;
    }
    if ( (*(_DWORD *)(*((_QWORD *)NdisBindingHandle + 2) + 124LL) & 0x100) != 0 )
    {
      v11 = v9->RequestType != NdisRequestSetInformation ? 0xC0000001 : 0;
    }
    else
    {
      if ( NdisVcHandle )
        v12 = (void *)*((_QWORD *)NdisVcHandle + 25);
      v11 = v19->DriverHandle->CoOidRequestHandler(v19->NextCoOidRequestHandle, v12, v9);
    }
    if ( v11 != 259 )
    {
      NdisMCoOidRequestComplete(*((NDIS_HANDLE *)NdisBindingHandle + 2), NdisVcHandle, v9, v11);
      goto LABEL_42;
    }
  }
LABEL_10:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v22 = v11;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xEu,
      (struct _GUID *)&WPP_f2e723125d8f3d1097c3ab5c6e889825_Traceguids,
      (char)v9,
      *(_QWORD *)v22);
  }
  return v11;
}
