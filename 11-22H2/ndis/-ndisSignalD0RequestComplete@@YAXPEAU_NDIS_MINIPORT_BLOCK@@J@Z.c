/*
 * XREFs of ?ndisSignalD0RequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C0014454
 * Callers:
 *     ?ndisSignalD0CompleteWorkItem@@YAXPEAU_NDIS_D0_SIGNAL_WORK_ITEM@@PEAX@Z @ 0x1C0082CB0 (-ndisSignalD0CompleteWorkItem@@YAXPEAU_NDIS_D0_SIGNAL_WORK_ITEM@@PEAX@Z.c)
 *     ndisWdfDevicePowerOn @ 0x1C008C754 (ndisWdfDevicePowerOn.c)
 *     ?ndisSetPowerResumeCompleteWorkItem@@YAXPEAX@Z @ 0x1C00AE630 (-ndisSetPowerResumeCompleteWorkItem@@YAXPEAX@Z.c)
 *     ?ndisDevicePowerOn@@YAXPEAX@Z @ 0x1C0146CC0 (-ndisDevicePowerOn@@YAXPEAX@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0002E8C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     McTemplateK0jqxq_EtwWriteTransfer @ 0x1C0006968 (McTemplateK0jqxq_EtwWriteTransfer.c)
 *     ?ndisPowerSaveClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C001454C (-ndisPowerSaveClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisNicActiveRequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C00599A0 (-ndisNicActiveRequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 */

void __fastcall ndisSignalD0RequestComplete(struct _NDIS_MINIPORT_BLOCK *a1, int a2)
{
  int LastD0Reason; // esi
  KIRQL v5; // dl
  __int64 v6; // rcx
  struct _NDIS_MINIPORT_AOAC *AoAc; // rbx
  ULONGLONG v8; // rcx
  unsigned __int64 v9; // rax
  KIRQL NewIrql; // [rsp+58h] [rbp+10h] BYREF

  NewIrql = 0;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
  LastD0Reason = (unsigned __int16)a1->LastD0Reason;
  v5 = NewIrql;
  a1->SyncFlags &= ~2u;
  a1->LastD0CompleteStatus = a2;
  a1->LastD0Reason = NdisMEvent_Unknown;
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v5);
  if ( (byte_1C00F7643 & 4) != 0 )
    McTemplateK0jqxq_EtwWriteTransfer(
      v6,
      (__int64)&DevicePowerOnComplete,
      (__int64)&a1->InterfaceGuid,
      (__int64)&a1->InterfaceGuid,
      a1->IfIndex,
      a1->NetLuid.Value,
      a2);
  if ( LastD0Reason == 5 )
  {
    if ( !a2 )
      ndisPowerSaveClearStop(a1, (unsigned int)(LastD0Reason - 5 + 6));
  }
  else if ( LastD0Reason == 6 || LastD0Reason == 7 || LastD0Reason == 20 )
  {
    ndisNicActiveRequestComplete(a1, a2);
  }
  KeSetEvent(&a1->PowerD0CompleteEvent, 0, 0);
  AoAc = a1->AoAc;
  if ( AoAc )
  {
    ++*((_DWORD *)AoAc + 270);
    v8 = KeQueryUnbiasedInterruptTime() - *((_QWORD *)AoAc + 136) + 5000;
    v9 = *((_QWORD *)AoAc + 138);
    *((_QWORD *)AoAc + 137) = v8 / 0x2710;
    if ( v9 <= v8 / 0x2710 )
      v9 = v8 / 0x2710;
    *((_QWORD *)AoAc + 139) += v8 / 0x2710;
    *((_QWORD *)AoAc + 138) = v9;
  }
}
