/*
 * XREFs of ?ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z @ 0x1C00BE9A0
 * Callers:
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x1C0008C70 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 *     ?ndisWmiQuerySingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_SINGLE_INSTANCE@@KPEAK@Z @ 0x1C0025FE0 (-ndisWmiQuerySingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_SINGLE_IN.c)
 *     ?ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x1C008D874 (-ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_I.c)
 *     ?ndisWmiExecuteMethod@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_METHOD_ITEM@@KPEAK@Z @ 0x1C008E338 (-ndisWmiExecuteMethod@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_METHOD_ITEM@@KP.c)
 *     ?ndisWmiQueryAllData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_GUID@@PEAUtagWNODE_ALL_DATA@@KPEAK@Z @ 0x1C008EFB0 (-ndisWmiQueryAllData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_GUID@@PEAUtagWNODE_ALL_D.c)
 *     NdisCmAddPartyComplete @ 0x1C00BC600 (NdisCmAddPartyComplete.c)
 *     NdisCmDropPartyComplete @ 0x1C00BC6A0 (NdisCmDropPartyComplete.c)
 *     NdisClMakeCall @ 0x1C00BDB80 (NdisClMakeCall.c)
 *     NdisCmCloseCallComplete @ 0x1C00BDD20 (NdisCmCloseCallComplete.c)
 *     NdisCmMakeCallComplete @ 0x1C00BE050 (NdisCmMakeCallComplete.c)
 *     NdisCoDeleteVc @ 0x1C00BFAC0 (NdisCoDeleteVc.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0006690 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000CB40 (WPP_RECORDER_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qDLLq @ 0x1C00C0654 (WPP_RECORDER_SF_qDLLq.c)
 */

void __fastcall ndisDereferenceVcPtr(struct _NDIS_CO_VC_PTR_BLOCK *a1, __int64 a2, int a3, int a4)
{
  struct _NDIS_CO_VC_PTR_BLOCK *v4; // rbx
  _NDIS_CO_VC_BLOCK **p_VcBlock; // r14
  KIRQL v6; // al
  bool v7; // zf
  KIRQL v8; // r12
  KSPIN_LOCK *v9; // rdi
  unsigned int *pVcFlags; // rdx
  char v11; // r15
  KIRQL v12; // al

  v4 = a1;
  p_VcBlock = &a1->VcBlock;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDLLq(*((_QWORD *)WPP_GLOBAL_Control + 8), a1->pVcFlags, a3, a4);
  v6 = KeAcquireSpinLockRaiseToDpc(&v4->Lock);
  v7 = v4->References-- == 1;
  v8 = v6;
  v9 = (KSPIN_LOCK *)*p_VcBlock;
  if ( v7 )
  {
    pVcFlags = v4->pVcFlags;
    if ( (*pVcFlags & 8) != 0 )
      *pVcFlags &= ~8u;
    if ( v4->CallMiniportDeleteVc )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0x14u,
          0x1Fu,
          (struct _GUID *)&WPP_de7b4475eb543019aeb186df8ee4bca2_Traceguids);
      KeReleaseSpinLockFromDpcLevel(&v4->Lock);
      v4->WCoDeleteVcHandler(v4->MiniportContext);
      KeAcquireSpinLockAtDpcLevel(&v4->Lock);
    }
    if ( v4 == (struct _NDIS_CO_VC_PTR_BLOCK *)v9[5] )
    {
      v11 = 0;
    }
    else
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0x14u,
          0x20u,
          (struct _GUID *)&WPP_de7b4475eb543019aeb186df8ee4bca2_Traceguids);
      v11 = 1;
    }
    KeReleaseSpinLock(&v4->Lock, v8);
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x14u,
        0x21u,
        (struct _GUID *)&WPP_de7b4475eb543019aeb186df8ee4bca2_Traceguids,
        (char)v4,
        *p_VcBlock);
    ExFreePoolWithTag(v4, 0);
    v4 = 0LL;
    v12 = KeAcquireSpinLockRaiseToDpc(v9 + 1);
    if ( v11 )
      v9[4] = 0LL;
    else
      v9[5] = 0LL;
    if ( v9[4] || v9[5] )
    {
      KeReleaseSpinLock(v9 + 1, v12);
    }
    else
    {
      KeReleaseSpinLock(v9 + 1, v12);
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0x14u,
          0x22u,
          (struct _GUID *)&WPP_de7b4475eb543019aeb186df8ee4bca2_Traceguids,
          v9);
      ExFreePoolWithTag(v9, 0);
    }
  }
  else
  {
    KeReleaseSpinLock(&v4->Lock, v6);
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x14u,
      0x23u,
      (struct _GUID *)&WPP_de7b4475eb543019aeb186df8ee4bca2_Traceguids,
      v4);
}
