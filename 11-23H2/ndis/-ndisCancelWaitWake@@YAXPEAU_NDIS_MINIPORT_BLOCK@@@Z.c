/*
 * XREFs of ?ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0081AC8
 * Callers:
 *     ?ndisSetSystemPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0016188 (-ndisSetSystemPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z @ 0x1C00583C8 (-ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z.c)
 *     ?ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x1C008D894 (-ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_I.c)
 *     ?ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C00AE0D8 (-ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     NdisMIdleNotificationConfirm @ 0x1C00AF8E0 (NdisMIdleNotificationConfirm.c)
 *     ?ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C012B2E4 (-ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisMPowerPolicy@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1PEAW4_DEVICE_POWER_STATE@@E@Z @ 0x1C01482B0 (-ndisMPowerPolicy@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1PEAW4_DEVICE.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C014C7DC (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 *     ?ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C01534F0 (-ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C000301C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     McTemplateK0jqxq_EtwWriteTransfer @ 0x1C0006AF8 (McTemplateK0jqxq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 */

void __fastcall ndisCancelWaitWake(struct _NDIS_MINIPORT_BLOCK *a1)
{
  KIRQL v2; // dl
  __int64 v3; // rcx
  KIRQL v4; // dl
  bool WaitWakeIoCompletionRoutineRan; // bl
  KIRQL NewIrql; // [rsp+50h] [rbp+8h] BYREF

  NewIrql = 0;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
  if ( !a1->WaitWakeIrp || a1->WaitWakeIoCompletionRoutineRan || a1->WaitWakeCancelAttempted )
  {
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, NewIrql);
  }
  else
  {
    v2 = NewIrql;
    a1->MiniportThread = 0LL;
    *(_WORD *)&a1->WaitWakeCancelInProgress = 257;
    KeReleaseSpinLock(&a1->Lock, v2);
    if ( IoCancelIrp(a1->WaitWakeIrp) )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xEu,
          0x93u,
          (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
          a1);
      if ( (byte_1C00F7641 & 8) != 0 )
        McTemplateK0jqxq_EtwWriteTransfer(
          v3,
          (__int64)&CancelledWakeIrp,
          (__int64)&a1->InterfaceGuid,
          (__int64)&a1->InterfaceGuid,
          a1->IfIndex,
          a1->NetLuid.Value,
          1);
    }
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
    v4 = NewIrql;
    WaitWakeIoCompletionRoutineRan = a1->WaitWakeIoCompletionRoutineRan;
    a1->MiniportThread = 0LL;
    a1->WaitWakeCancelInProgress = 0;
    KeReleaseSpinLock(&a1->Lock, v4);
    if ( WaitWakeIoCompletionRoutineRan )
      IofCompleteRequest(a1->WaitWakeIrp, 0);
  }
}
