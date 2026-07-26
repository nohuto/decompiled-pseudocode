/*
 * XREFs of ?ndisIdleWaitWakeCallback@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C00ACEC0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0jqx_EtwWriteTransfer @ 0x1C0017C64 (McTemplateK0jqx_EtwWriteTransfer.c)
 *     ?ndisScheduleWorkItemInternal@@YAXPEAU_NDIS_WORK_ITEM@@@Z @ 0x1C0025114 (-ndisScheduleWorkItemInternal@@YAXPEAU_NDIS_WORK_ITEM@@@Z.c)
 *     WPP_RECORDER_SF_qZ @ 0x1C0026DB8 (WPP_RECORDER_SF_qZ.c)
 *     ndisSelectiveSuspendSetResumeBusyReason @ 0x1C003F68C (ndisSelectiveSuspendSetResumeBusyReason.c)
 *     WPP_RECORDER_SF_dq @ 0x1C007E7BC (WPP_RECORDER_SF_dq_ea_1C007E7BC.c)
 *     ?ndisCompleteWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0081C4C (-ndisCompleteWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?NdisTraceLoggingUnexpectedSelectiveSuspendError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x1C008C24C (-NdisTraceLoggingUnexpectedSelectiveSuspendError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z.c)
 */

void __fastcall ndisIdleWaitWakeCallback(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        char *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  __int64 v6; // rdi
  KIRQL v7; // si
  __int64 v8; // rdx
  __int64 v9; // rcx

  v6 = *((_QWORD *)Context + 556);
  if ( IoStatus->Status < 0 )
  {
    if ( IoStatus->Status != -1073741536 )
    {
      NdisTraceLoggingUnexpectedSelectiveSuspendError((struct _NDIS_MINIPORT_BLOCK *)Context);
      *(_WORD *)(v6 + 626) = *(_WORD *)(v6 + 624);
      *(_WORD *)(v6 + 624) = 6;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xFu,
          0x19u,
          (struct _GUID *)&WPP_64b9953f987037c4a892513bd407e9c6_Traceguids,
          IoStatus->Status,
          Context);
    }
  }
  else
  {
    v7 = KeAcquireSpinLockRaiseToDpc(*((PKSPIN_LOCK *)Context + 556));
    if ( (*(_DWORD *)(v6 + 504) & 0xC4) == 4 )
    {
      *(_DWORD *)(v6 + 504) |= 0x40u;
      ndisSelectiveSuspendSetResumeBusyReason((_DWORD *)v6, 1, 0x41u, 0);
      if ( (byte_1C00F7643 & 4) != 0 )
        McTemplateK0jqx_EtwWriteTransfer(
          v9,
          &DeviceWaitWakeComplete,
          (const GUID *)(Context + 4008),
          (__int64)(Context + 4008),
          *((_DWORD *)Context + 1014),
          *((_QWORD *)Context + 503));
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qZ(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v8,
          9u,
          0x18u,
          (struct _GUID *)&WPP_64b9953f987037c4a892513bd407e9c6_Traceguids,
          (char)Context,
          *((unsigned __int16 **)Context + 482));
      ndisScheduleWorkItemInternal((struct _NDIS_WORK_ITEM *)(v6 + 376));
    }
    KeReleaseSpinLock((PKSPIN_LOCK)v6, v7);
  }
  ndisCompleteWaitWake((struct _NDIS_MINIPORT_BLOCK *)Context);
}
