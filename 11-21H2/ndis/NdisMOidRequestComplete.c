/*
 * XREFs of NdisMOidRequestComplete @ 0x1C00B0BD0
 * Callers:
 *     NdisMCoOidRequestComplete @ 0x1C00BC360 (NdisMCoOidRequestComplete.c)
 *     NdisMCoRequestComplete @ 0x1C00BC450 (NdisMCoRequestComplete.c)
 * Callees:
 *     ?ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z @ 0x1C0009088 (-ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@.c)
 *     WPP_RECORDER_SF_qDqd @ 0x1C000B240 (WPP_RECORDER_SF_qDqd.c)
 *     WPP_RECORDER_SF_qDqqd @ 0x1C000FE70 (WPP_RECORDER_SF_qDqqd.c)
 *     ?CancelTimer@NdisWatchdogState@@QEAA_NXZ @ 0x1C00239B0 (-CancelTimer@NdisWatchdogState@@QEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 */

void __stdcall NdisMOidRequestComplete(
        NDIS_HANDLE MiniportAdapterHandle,
        PNDIS_OID_REQUEST OidRequest,
        NDIS_STATUS Status)
{
  PNDIS_OID_REQUEST v6; // rsi
  NdisWatchdogState *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r10
  int v11; // [rsp+20h] [rbp-38h]
  NDIS_STATUS v12; // [rsp+40h] [rbp-18h]
  struct _NDIS_OID_REQUEST *v13; // [rsp+60h] [rbp+8h] BYREF

  v13 = OidRequest;
  v6 = OidRequest;
  if ( *(_DWORD *)(*((_QWORD *)MiniportAdapterHandle + 470) + 896LL) != 1 && !*((_BYTE *)MiniportAdapterHandle + 6052) )
  {
    v7 = (NdisWatchdogState *)*((_QWORD *)MiniportAdapterHandle + 682);
    if ( v7 != (NdisWatchdogState *)-1LL )
      NdisWatchdogState::CancelTimer(v7);
  }
  if ( (*(_DWORD *)&OidRequest->NdisReserved[16] & 0x8000000) != 0 )
  {
    ndisOidFreeInternalCloneRequest((struct _NDIS_FILTER_BLOCK *)MiniportAdapterHandle, OidRequest, 1, &v13);
    v6 = v13;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qDqqd(*((_QWORD *)WPP_GLOBAL_Control + 8), v8, v9, 0x12u, v11);
  }
  else if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v12 = Status;
    WPP_RECORDER_SF_qDqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)OidRequest,
      Status,
      0x13u,
      (struct _GUID *)&WPP_3f10502a8e7e385c6a77087d2be74200_Traceguids,
      (char)MiniportAdapterHandle,
      OidRequest->DATA.QUERY_INFORMATION.Oid,
      (char)OidRequest,
      v12);
  }
  if ( *((_QWORD *)MiniportAdapterHandle + 278) )
    *((_QWORD *)MiniportAdapterHandle + 278) = 0LL;
  v10 = (__int64)*(int *)(*((_QWORD *)MiniportAdapterHandle + 470) + 896LL) << 7;
  (*(void (__fastcall **)(_QWORD, _QWORD, NDIS_HANDLE, PNDIS_OID_REQUEST, NDIS_STATUS))((char *)g_MiniportHookDrivers
                                                                                      + v10
                                                                                      + 48))(
    *(_QWORD *)((char *)g_MiniportHookDrivers + v10 + 24),
    *((_QWORD *)MiniportAdapterHandle + 660),
    MiniportAdapterHandle,
    v6,
    Status);
}
