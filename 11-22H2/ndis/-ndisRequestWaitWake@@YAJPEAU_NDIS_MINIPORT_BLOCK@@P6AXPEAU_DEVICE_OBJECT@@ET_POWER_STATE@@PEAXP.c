/*
 * XREFs of ?ndisRequestWaitWake@@YAJPEAU_NDIS_MINIPORT_BLOCK@@P6AXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z@Z @ 0x1C0082954
 * Callers:
 *     ?ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C0016848 (-ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     NdisMIdleNotificationConfirm @ 0x1C00AF8C0 (NdisMIdleNotificationConfirm.c)
 *     ?ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C012B324 (-ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C014C7DC (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     McTemplateK0jqxq_EtwWriteTransfer @ 0x1C0006968 (McTemplateK0jqxq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0011218 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_Lq @ 0x1C00217BC (WPP_RECORDER_SF_Lq.c)
 *     ?ndisCompleteWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0081C2C (-ndisCompleteWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C010C600 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

__int64 __fastcall ndisRequestWaitWake(struct _NDIS_MINIPORT_BLOCK *a1, PREQUEST_POWER_COMPLETE CompletionFunction)
{
  unsigned int Flags; // eax
  POWER_STATE v6; // r8d
  unsigned int v7; // ebx
  unsigned int *v8; // rcx

  if ( !ndisReferenceMiniport(a1, 0xAu) )
    return 3221225473LL;
  ndisWaitForKernelObject(&a1->WaitWakeIrpCompleted);
  KeClearEvent(&a1->WaitWakeIrpCompleted);
  Flags = a1->Flags;
  v6.SystemState = a1->DeviceCaps.SystemWake;
  a1->WaitWakeCancelAttempted = 0;
  a1->WaitWakeIoCompletionRoutineRan = 0;
  a1->WaitWakeSystemState = v6.SystemState;
  if ( (Flags & 0x80u) != 0 )
    NT_ASSERT("(!((((Miniport)->Flags & (0x00000080)) != 0)))");
  v7 = PoRequestPowerIrp(a1->PhysicalDeviceObject, 0, v6, CompletionFunction, a1, &a1->WaitWakeIrp);
  if ( v7 == 259 )
  {
    v8 = &WPP_RECORDER_INITIALIZED;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x95u,
        (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
        a1);
    if ( (byte_1C00F7641 & 8) != 0 )
      McTemplateK0jqxq_EtwWriteTransfer(
        (__int64)v8,
        (__int64)&CreatedWakeIrp,
        (__int64)&a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        a1->IfIndex,
        a1->NetLuid.Value,
        (char)a1->WaitWakeIrp);
  }
  else
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xEu,
        0x96u,
        (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
        v7,
        a1);
    ndisCompleteWaitWake(a1);
  }
  return v7;
}
