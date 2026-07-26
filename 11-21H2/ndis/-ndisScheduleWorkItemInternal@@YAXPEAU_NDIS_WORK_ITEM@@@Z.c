/*
 * XREFs of ?ndisScheduleWorkItemInternal@@YAXPEAU_NDIS_WORK_ITEM@@@Z @ 0x1C0025EFC
 * Callers:
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x1C001EBE0 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 *     ?ndisNsiScheduleIfBlockRodChangeNotification@@YAJPEAU_NDIS_IF_BLOCK@@PEAEKK@Z @ 0x1C0025E0C (-ndisNsiScheduleIfBlockRodChangeNotification@@YAJPEAU_NDIS_IF_BLOCK@@PEAEKK@Z.c)
 *     ?ndisInitModeTimeoutDpc@@YAXPEAX000@Z @ 0x1C0025EE0 (-ndisInitModeTimeoutDpc@@YAXPEAX000@Z.c)
 *     ndisNsiScheduleCompartmentBlockChangeNotification @ 0x1C0035DA0 (ndisNsiScheduleCompartmentBlockChangeNotification.c)
 *     ?ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0052E44 (-ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisTempRefTimerDpc@@YAXPEAX000@Z @ 0x1C0055200 (-ndisTempRefTimerDpc@@YAXPEAX000@Z.c)
 *     NdisMResetMiniport @ 0x1C006C340 (NdisMResetMiniport.c)
 *     NdisMReenumerateFailedAdapter @ 0x1C007ABC0 (NdisMReenumerateFailedAdapter.c)
 *     ?ndisScheduleD0CompleteSignalWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C007D59C (-ndisScheduleD0CompleteSignalWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ?ndisPdcTaskClientDisableTimeoutDpc@@YAXPEAX000@Z @ 0x1C0091BD0 (-ndisPdcTaskClientDisableTimeoutDpc@@YAXPEAX000@Z.c)
 *     ?ndisUpdateAndIndicatePMCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00942F8 (-ndisUpdateAndIndicatePMCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIdleWaitWakeCallback@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C00A69F0 (-ndisIdleWaitWakeCallback@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z.c)
 *     ?ndisSSIdleTimerDpc@@YAXPEAX000@Z @ 0x1C00A7820 (-ndisSSIdleTimerDpc@@YAXPEAX000@Z.c)
 *     ?ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C00A9988 (-ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisIfScheduleTimestampCapabilityChangeNotification@@YAEPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00B42F0 (-ndisIfScheduleTimestampCapabilityChangeNotification@@YAEPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     NdisScheduleWorkItem @ 0x1C00BFAA0 (NdisScheduleWorkItem.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisScheduleWorkItemInternal(struct _NDIS_WORK_ITEM *a1)
{
  *(_QWORD *)a1->WrapperReserved = 0LL;
  *(_QWORD *)&a1->WrapperReserved[16] = ndisWorkItemHandler;
  *(_QWORD *)&a1->WrapperReserved[24] = a1;
  ExQueueWorkItem((PWORK_QUEUE_ITEM)a1->WrapperReserved, CustomPriorityWorkQueue|RealTimeWorkQueue|0x8);
}
