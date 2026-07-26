/*
 * XREFs of ?ndisCompleteLegacyRequest@@YAXPEAXHPEAU_NDIS_REQUEST@@@Z @ 0x1C009F370
 * Callers:
 *     ?ndisMAbortRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0014684 (-ndisMAbortRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisMQueryInformationComplete @ 0x1C00A8BD0 (NdisMQueryInformationComplete.c)
 *     NdisMSetInformationComplete @ 0x1C00A8CE0 (NdisMSetInformationComplete.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0002E8C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qqL @ 0x1C000CC20 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qqqL @ 0x1C000CDC0 (WPP_RECORDER_SF_qqqL.c)
 *     ?ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z @ 0x1C0027264 (-ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z.c)
 */

void __fastcall ndisCompleteLegacyRequest(struct _NDIS_MINIPORT_BLOCK *a1, int a2, struct _NDIS_REQUEST *a3)
{
  _NDIS_REQUEST *PendingRequest; // rbx
  _NDIS_OID_REQUEST *PendingOidRequest; // rsi
  int v8; // edx
  _NDIS_REQUEST_TYPE RequestType; // ecx
  char v10[8]; // [rsp+38h] [rbp-30h]
  KIRQL NewIrql; // [rsp+70h] [rbp+8h] BYREF

  NewIrql = 0;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
  if ( a3 )
  {
    PendingOidRequest = *(_NDIS_OID_REQUEST **)&a3->MacReserved[8];
    PendingRequest = a3;
  }
  else
  {
    PendingRequest = a1->PendingRequest;
    a1->PendingRequest = 0LL;
    PendingOidRequest = a1->PendingOidRequest;
  }
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, NewIrql);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v8,
      0xBu,
      0x24u,
      (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
      (char)a1,
      (char)PendingOidRequest,
      (char)PendingRequest,
      a2);
  if ( PendingRequest )
  {
    RequestType = PendingRequest->RequestType;
    if ( RequestType == NdisRequestQueryInformation || (unsigned int)(RequestType - 1) <= 1 )
    {
      PendingOidRequest->DATA.QUERY_INFORMATION.BytesWritten = PendingRequest->DATA.QUERY_INFORMATION.BytesWritten;
      PendingOidRequest->DATA.QUERY_INFORMATION.BytesNeeded = PendingRequest->DATA.QUERY_INFORMATION.BytesNeeded;
    }
    ExFreePoolWithTag(PendingRequest, 0);
    ndisMOidRequestCompleteInternal(
      a1,
      PendingOidRequest,
      a2,
      (struct _NDIS_OID_REQUEST *)((unsigned __int64)PendingOidRequest & -(__int64)(a3 != 0LL)));
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v10 = a2;
      WPP_RECORDER_SF_qqL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xBu,
        0x25u,
        (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
        (char)a1,
        (char)PendingOidRequest,
        *(_QWORD *)v10);
    }
  }
}
