/*
 * XREFs of NdisMOidRequestComplete @ 0x1C00406E0
 * Callers:
 *     NdisMCoOidRequestComplete @ 0x1C0040840 (NdisMCoOidRequestComplete.c)
 *     NdisMCoRequestComplete @ 0x1C00C14F0 (NdisMCoRequestComplete.c)
 * Callees:
 *     ?ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z @ 0x1C0008AF8 (-ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@.c)
 *     WPP_RECORDER_SF_qDqqd @ 0x1C0008C50 (WPP_RECORDER_SF_qDqqd.c)
 *     WPP_RECORDER_SF_qDqd @ 0x1C00092E0 (WPP_RECORDER_SF_qDqd.c)
 *     ?CancelTimer@NdisWatchdogState@@QEAA_NXZ @ 0x1C002298C (-CancelTimer@NdisWatchdogState@@QEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
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
  if ( *(_DWORD *)(*((_QWORD *)MiniportAdapterHandle + 470) + 896LL) != 1
    && (*((_DWORD *)MiniportAdapterHandle + 30) & 0x80u) == 0 )
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
      (struct _GUID *)&WPP_405c908af2143fed945d9a560d683c7b_Traceguids,
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
