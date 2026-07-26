/*
 * XREFs of ?ndisReferenceVcPtr@@YAEPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z @ 0x1C00BEC60
 * Callers:
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x1C0008C70 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 *     ?ndisWmiQuerySingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_SINGLE_INSTANCE@@KPEAK@Z @ 0x1C0025FE0 (-ndisWmiQuerySingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_SINGLE_IN.c)
 *     ?ndisWmiFindInstanceName@@YAJPEAPEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEA_WG@Z @ 0x1C008ECBC (-ndisWmiFindInstanceName@@YAJPEAPEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEA_WG@Z.c)
 *     ?ndisWmiQueryAllData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_GUID@@PEAUtagWNODE_ALL_DATA@@KPEAK@Z @ 0x1C008EFB0 (-ndisWmiQueryAllData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_GUID@@PEAUtagWNODE_ALL_D.c)
 *     NdisClCloseCall @ 0x1C00BD8F0 (NdisClCloseCall.c)
 *     NdisClMakeCall @ 0x1C00BDB80 (NdisClMakeCall.c)
 *     NdisCmMakeCallComplete @ 0x1C00BE050 (NdisCmMakeCallComplete.c)
 * Callees:
 *     WPP_RECORDER_SF_qDDLq @ 0x1C00C0528 (WPP_RECORDER_SF_qDDLq.c)
 */

char __fastcall ndisReferenceVcPtr(struct _NDIS_CO_VC_PTR_BLOCK *a1, __int64 a2, int a3)
{
  char v4; // si
  unsigned int *p_CallFlags; // rdi
  KIRQL v6; // al
  int v7; // r8d

  v4 = 0;
  p_CallFlags = &a1->CallFlags;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDDLq(*((_QWORD *)WPP_GLOBAL_Control + 8), a1->pVcFlags, a3, 28);
  v6 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  if ( (*p_CallFlags & 0x80000000) == 0 )
  {
    ++a1->References;
    v4 = 1;
  }
  KeReleaseSpinLock(&a1->Lock, v6);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDDLq(*((_QWORD *)WPP_GLOBAL_Control + 8), a1->pVcFlags, v7, 29);
  return v4;
}
