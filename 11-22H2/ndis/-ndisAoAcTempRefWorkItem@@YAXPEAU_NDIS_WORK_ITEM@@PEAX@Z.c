/*
 * XREFs of ?ndisAoAcTempRefWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C0058650
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0002F40 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qd @ 0x1C00200C4 (WPP_RECORDER_SF_qd_ea_1C00200C4.c)
 *     ?ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z @ 0x1C0057A84 (-ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z.c)
 *     ?ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0059B4C (-ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisUpdateCsSpuriousWakeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_WAKE_REASON_TYPE@@@Z @ 0x1C005A67C (-ndisUpdateCsSpuriousWakeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_WAKE_REASON_TYPE@@@Z.c)
 */

void __fastcall ndisAoAcTempRefWorkItem(struct _NDIS_WORK_ITEM *a1, struct _NDIS_MINIPORT_BLOCK *a2)
{
  __int64 AoAc; // rbx
  KIRQL v4; // al
  int v5; // r8d
  KIRQL v6; // si
  enum _NDIS_PM_WAKE_REASON_TYPE LastWakeReason; // edx

  AoAc = (__int64)a2->AoAc;
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
  v5 = 1;
  v6 = v4;
  if ( (*(_DWORD *)(AoAc + 388) & 2) == 0 )
  {
    LastWakeReason = a2->LastWakeReason;
    if ( LastWakeReason == NdisWakeReasonPacket && *(_DWORD *)(AoAc + 1076) == 131073 )
      LastWakeReason = 65533;
    ++*(_DWORD *)(AoAc + 852);
    ndisUpdateCsSpuriousWakeStats((struct _NDIS_MINIPORT_AOAC *)AoAc, LastWakeReason);
    *(_DWORD *)(AoAc + 388) &= ~1u;
  }
  if ( *(int *)(AoAc + 468) > 0 )
  {
    *(_DWORD *)(AoAc + 64) = 0;
    ndisAoAcActiveRefSubtract(AoAc, 0, v5);
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x2Cu,
        (struct _GUID *)WPP_1cdba23956c23e7115893e836b18f005_Traceguids,
        (char)a2,
        *(_DWORD *)(AoAc + 52));
  }
  *(_BYTE *)(AoAc + 280) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v6);
  ndisNicQuietCheckRef(a2);
  ndisDereferenceMiniport(a2, 2u);
}
