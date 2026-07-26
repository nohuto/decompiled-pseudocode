/*
 * XREFs of ?ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0058250
 * Callers:
 *     ?ndisNicQuietWaitWakeCallback@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C0059FC0 (-ndisNicQuietWaitWakeCallback@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@.c)
 *     NdisMIdleNotificationCompleteEx @ 0x1C00AF7A0 (NdisMIdleNotificationCompleteEx.c)
 * Callees:
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C00113A8 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     McTemplateK0jqx_EtwWriteTransfer @ 0x1C0017C64 (McTemplateK0jqx_EtwWriteTransfer.c)
 *     ?ndisScheduleWorkItemInternal@@YAXPEAU_NDIS_WORK_ITEM@@@Z @ 0x1C0025114 (-ndisScheduleWorkItemInternal@@YAXPEAU_NDIS_WORK_ITEM@@@Z.c)
 *     WPP_RECORDER_SF_qZ @ 0x1C0026DB8 (WPP_RECORDER_SF_qZ.c)
 */

void __fastcall ndisAoAcScheduleWakeWorkItem(struct _NDIS_MINIPORT_BLOCK *a1, enum _NDIS_MINIPORT_EVENT a2)
{
  struct _NDIS_MINIPORT_AOAC *AoAc; // rbx
  KIRQL v5; // bp
  __int64 v6; // rdx
  __int64 v7; // rcx

  AoAc = a1->AoAc;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
  if ( !*((_BYTE *)AoAc + 288) && ndisReferenceMiniport(a1, 4u) )
  {
    *((_BYTE *)AoAc + 288) = 1;
    *((_WORD *)AoAc + 145) = a2;
    if ( a2 == NdisMEventD0_AoAcWake )
      *((_DWORD *)AoAc + 97) |= 1u;
    if ( (byte_1C00F7643 & 4) != 0 )
      McTemplateK0jqx_EtwWriteTransfer(
        v7,
        &DeviceWaitWakeComplete,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        a1->IfIndex,
        a1->NetLuid.Value);
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qZ(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v6,
        9u,
        0x23u,
        (struct _GUID *)WPP_1cdba23956c23e7115893e836b18f005_Traceguids,
        (char)a1,
        &a1->pAdapterInstanceName->Length);
    ndisScheduleWorkItemInternal((struct _NDIS_WORK_ITEM *)((char *)AoAc + 296));
  }
  KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v5);
}
