/*
 * XREFs of ?ndisRequestWaitWake@@YAJPEAU_NDIS_MINIPORT_BLOCK@@P6AXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z@Z @ 0x1C007D41C
 * Callers:
 *     ?ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C0014100 (-ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     NdisMIdleNotificationConfirm @ 0x1C00A9EA0 (NdisMIdleNotificationConfirm.c)
 *     ?ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C011F630 (-ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C013FE7C (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C00106B4 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1C0014380 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_Lq @ 0x1C00200E8 (WPP_RECORDER_SF_Lq.c)
 *     ?ndisCompleteWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C007C72C (-ndisCompleteWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C01010E0 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

__int64 __fastcall ndisRequestWaitWake(struct _NDIS_MINIPORT_BLOCK *a1, PREQUEST_POWER_COMPLETE CompletionFunction)
{
  POWER_STATE v5; // r8d
  _DEVICE_OBJECT *PhysicalDeviceObject; // rcx
  NTSTATUS v7; // eax
  unsigned int v8; // ebx

  if ( !ndisReferenceMiniport(a1, 0xAu) )
    return 3221225473LL;
  ndisWaitForKernelObject(&a1->WaitWakeIrpCompleted);
  KeClearEvent(&a1->WaitWakeIrpCompleted);
  v5.SystemState = a1->DeviceCaps.SystemWake;
  PhysicalDeviceObject = a1->PhysicalDeviceObject;
  a1->WaitWakeCancelAttempted = 0;
  a1->WaitWakeIoCompletionRoutineRan = 0;
  a1->WaitWakeSystemState = v5.SystemState;
  v7 = PoRequestPowerIrp(PhysicalDeviceObject, 0, v5, CompletionFunction, a1, &a1->WaitWakeIrp);
  v8 = v7;
  if ( v7 == 259 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x95u,
        (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
        a1);
    if ( (byte_1C00EE581 & 8) != 0 )
      McTemplateK0jqxd_EtwWriteTransfer();
  }
  else
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xEu,
        0x96u,
        (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
        v7,
        a1);
    ndisCompleteWaitWake(a1);
  }
  return v8;
}
