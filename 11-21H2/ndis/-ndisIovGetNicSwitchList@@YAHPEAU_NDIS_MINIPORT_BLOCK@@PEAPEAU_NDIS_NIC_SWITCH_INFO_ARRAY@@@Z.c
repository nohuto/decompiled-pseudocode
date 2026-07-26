/*
 * XREFs of ?ndisIovGetNicSwitchList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_NDIS_NIC_SWITCH_INFO_ARRAY@@@Z @ 0x1C0070DB0
 * Callers:
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0106C18 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C013D850 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C00060EC (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C8B0 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     ?ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002F194 (-ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIovCopyNicSwitchInfo@@YAXPEAU_NDIS_NIC_SWITCH_INFO@@PEAU_NDIS_NIC_SWITCH_BLOCK@@@Z @ 0x1C006FBA4 (-ndisIovCopyNicSwitchInfo@@YAXPEAU_NDIS_NIC_SWITCH_INFO@@PEAU_NDIS_NIC_SWITCH_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisIovGetNicSwitchList(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_NIC_SWITCH_INFO_ARRAY **a2)
{
  unsigned int v2; // edi
  _NDIS_SRIOV_CAPABILITIES *SriovCurrentCapabilities; // rax
  struct _NDIS_NIC_SWITCH_INFO_ARRAY *Pool2; // rax
  __int64 v7; // rax
  _LIST_ENTRY *Flink; // rsi
  struct _NDIS_NIC_SWITCH_INFO *v9; // rbp
  unsigned int i; // r14d
  KIRQL NewIrql; // [rsp+70h] [rbp+8h] BYREF

  v2 = 0;
  NewIrql = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x55u,
      (struct _GUID *)&WPP_573a5358497137649e8f40cb87ceec67_Traceguids,
      a1);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
  *a2 = 0LL;
  if ( ndisIovNicSwitchWithoutIovSupported(a1)
    || (SriovCurrentCapabilities = a1->SriovCurrentCapabilities) != 0LL
    && a1->NicSwitchCurrentCapabilities
    && (SriovCurrentCapabilities->SriovCapabilities & 3) == 3 )
  {
    Pool2 = (struct _NDIS_NIC_SWITCH_INFO_ARRAY *)ExAllocatePool2(64LL, 572 * a1->NumSwitches + 16, 1869169742);
    *a2 = Pool2;
    if ( Pool2 )
    {
      Pool2->Header.Type = 0x80;
      (*a2)->Header.Revision = 1;
      (*a2)->Header.Size = 16;
      (*a2)->FirstElementOffset = 16;
      (*a2)->NumElements = a1->NumSwitches;
      (*a2)->ElementSize = 572;
      v7 = (__int64)*a2;
      Flink = a1->NicSwitchList.Flink;
      v9 = (struct _NDIS_NIC_SWITCH_INFO *)(v7 + *(unsigned int *)(v7 + 4));
      for ( i = 0; Flink != &a1->NicSwitchList && i < a1->NumSwitches; ++i )
      {
        ndisIovCopyNicSwitchInfo(v9, (struct _NDIS_NIC_SWITCH_BLOCK *)Flink);
        Flink = Flink->Flink;
        v9 = (struct _NDIS_NIC_SWITCH_INFO *)((char *)v9 + 572);
      }
    }
    else
    {
      v2 = -1073741670;
    }
  }
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, NewIrql);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x56u,
      (struct _GUID *)&WPP_573a5358497137649e8f40cb87ceec67_Traceguids,
      (char)a1,
      v2);
  return v2;
}
