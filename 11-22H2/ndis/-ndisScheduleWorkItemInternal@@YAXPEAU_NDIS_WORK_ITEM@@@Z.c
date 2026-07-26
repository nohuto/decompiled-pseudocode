/*
 * XREFs of ?ndisScheduleWorkItemInternal@@YAXPEAU_NDIS_WORK_ITEM@@@Z @ 0x1C0024F84
 * Callers:
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x1C001F928 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 *     ?ndisNsiScheduleIfBlockRodChangeNotification@@YAJPEAU_NDIS_IF_BLOCK@@PEAEKK@Z @ 0x1C0024EB4 (-ndisNsiScheduleIfBlockRodChangeNotification@@YAJPEAU_NDIS_IF_BLOCK@@PEAEKK@Z.c)
 *     ?ndisInitModeTimeoutDpc@@YAXPEAX000@Z @ 0x1C0035EC0 (-ndisInitModeTimeoutDpc@@YAXPEAX000@Z.c)
 *     ndisNsiScheduleCompartmentBlockChangeNotification @ 0x1C0037E88 (ndisNsiScheduleCompartmentBlockChangeNotification.c)
 *     ?ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C003FC06 (-ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     NdisScheduleWorkItem @ 0x1C0040D10 (NdisScheduleWorkItem.c)
 *     ?ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0058234 (-ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisTempRefTimerDpc@@YAXPEAX000@Z @ 0x1C005A610 (-ndisTempRefTimerDpc@@YAXPEAX000@Z.c)
 *     NdisMResetMiniport @ 0x1C0071700 (NdisMResetMiniport.c)
 *     NdisMReenumerateFailedAdapter @ 0x1C00800A0 (NdisMReenumerateFailedAdapter.c)
 *     ?ndisScheduleD0CompleteSignalWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C0082ADC (-ndisScheduleD0CompleteSignalWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ?ndisPdcTaskClientDisableTimeoutDpc@@YAXPEAX000@Z @ 0x1C0097BD0 (-ndisPdcTaskClientDisableTimeoutDpc@@YAXPEAX000@Z.c)
 *     ?ndisUpdateAndIndicatePMCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C009A320 (-ndisUpdateAndIndicatePMCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIdleWaitWakeCallback@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C00ACEA0 (-ndisIdleWaitWakeCallback@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z.c)
 *     ?ndisSSIdleTimerDpc@@YAXPEAX000@Z @ 0x1C00AD9A0 (-ndisSSIdleTimerDpc@@YAXPEAX000@Z.c)
 *     ?ndisIfScheduleTimestampCapabilityChangeNotification@@YAEPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00B92D8 (-ndisIfScheduleTimestampCapabilityChangeNotification@@YAEPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
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
