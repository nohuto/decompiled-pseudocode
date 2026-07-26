/*
 * XREFs of ?ndisCancelWakeUpDpcTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0014A44
 * Callers:
 *     ?ndisSetDevicePower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@W4_DEVICE_POWER_STATE@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00165A8 (-ndisSetDevicePower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@W4_DEVICE_POWER_STATE@@PEAU_NDIS_MINIP.c)
 *     NdisMIdleNotificationConfirm @ 0x1C00AF8E0 (NdisMIdleNotificationConfirm.c)
 *     ?ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0145D48 (-ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C000301C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C010C5C0 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

void __fastcall ndisCancelWakeUpDpcTimer(struct _NDIS_MINIPORT_BLOCK *a1)
{
  KIRQL v2; // dl
  KIRQL NewIrql; // [rsp+30h] [rbp+8h] BYREF

  NewIrql = 0;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
  a1->PnPFlags |= 0x20000000u;
  if ( KeCancelTimer(&a1->WakeUpDpcTimer.Timer) )
    KeSetEvent(&a1->CFHCompletedEvent, 0, 0);
  v2 = NewIrql;
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v2);
  ndisWaitForKernelObject(&a1->CFHCompletedEvent);
}
