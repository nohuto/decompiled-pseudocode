/*
 * XREFs of ?ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z @ 0x1C00B98C0
 * Callers:
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x1C0009B00 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 *     ?ndisWmiExecuteMethod@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_METHOD_ITEM@@KPEAK@Z @ 0x1C0011E38 (-ndisWmiExecuteMethod@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_METHOD_ITEM@@KP.c)
 *     ?ndisWmiQuerySingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_SINGLE_INSTANCE@@KPEAK@Z @ 0x1C0026CB0 (-ndisWmiQuerySingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_SINGLE_IN.c)
 *     ?ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x1C0088580 (-ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_I.c)
 *     ?ndisWmiQueryAllData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_GUID@@PEAUtagWNODE_ALL_DATA@@KPEAK@Z @ 0x1C0089354 (-ndisWmiQueryAllData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_GUID@@PEAUtagWNODE_ALL_D.c)
 *     NdisCmAddPartyComplete @ 0x1C00B7550 (NdisCmAddPartyComplete.c)
 *     NdisCmDropPartyComplete @ 0x1C00B75F0 (NdisCmDropPartyComplete.c)
 *     NdisClMakeCall @ 0x1C00B8AC0 (NdisClMakeCall.c)
 *     NdisCmCloseCallComplete @ 0x1C00B8C60 (NdisCmCloseCallComplete.c)
 *     NdisCmMakeCallComplete @ 0x1C00B8F80 (NdisCmMakeCallComplete.c)
 *     NdisCoDeleteVc @ 0x1C00BA9B0 (NdisCoDeleteVc.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00088CC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000D430 (WPP_RECORDER_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qDLLq @ 0x1C00BB544 (WPP_RECORDER_SF_qDLLq.c)
 */

void __fastcall ndisDereferenceVcPtr(struct _NDIS_CO_VC_PTR_BLOCK *a1, __int64 a2, int a3, int a4)
{
  struct _NDIS_CO_VC_PTR_BLOCK *v4; // rbx
  KIRQL v5; // al
  bool v6; // zf
  KSPIN_LOCK *p_References; // rdi
  KIRQL v8; // r14
  unsigned int *pVcFlags; // rdx
  char v10; // bp
  KIRQL v11; // dl
  KSPIN_LOCK v12; // rcx

  v4 = a1;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDLLq(*((_QWORD *)WPP_GLOBAL_Control + 8), a1->pVcFlags, a3, a4);
  v5 = KeAcquireSpinLockRaiseToDpc(&v4->Lock);
  v6 = v4->References-- == 1;
  p_References = (KSPIN_LOCK *)&v4->VcBlock->References;
  v8 = v5;
  if ( !v6 )
  {
    KeReleaseSpinLock(&v4->Lock, v5);
    goto LABEL_26;
  }
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
  if ( v4 == (struct _NDIS_CO_VC_PTR_BLOCK *)p_References[5] )
  {
    v10 = 0;
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
    v10 = 1;
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
      v4->VcBlock);
  ExFreePoolWithTag(v4, 0);
  v4 = 0LL;
  v11 = KeAcquireSpinLockRaiseToDpc(p_References + 1);
  if ( v10 )
  {
    p_References[4] = 0LL;
    v12 = p_References[5];
  }
  else
  {
    p_References[5] = 0LL;
    v12 = 0LL;
    if ( p_References[4] )
    {
LABEL_24:
      KeReleaseSpinLock(p_References + 1, v11);
      goto LABEL_26;
    }
  }
  if ( v12 )
    goto LABEL_24;
  KeReleaseSpinLock(p_References + 1, v11);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x14u,
      0x22u,
      (struct _GUID *)&WPP_de7b4475eb543019aeb186df8ee4bca2_Traceguids,
      p_References);
  ExFreePoolWithTag(p_References, 0);
LABEL_26:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x14u,
      0x23u,
      (struct _GUID *)&WPP_de7b4475eb543019aeb186df8ee4bca2_Traceguids,
      v4);
}
