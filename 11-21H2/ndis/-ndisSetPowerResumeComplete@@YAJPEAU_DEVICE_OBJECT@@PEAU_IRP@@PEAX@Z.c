/*
 * XREFs of ?ndisSetPowerResumeComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C00A8350
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C001E848 (WPP_RECORDER_SF_qD.c)
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C001FEC4 (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     WPP_RECORDER_SF_dq @ 0x1C00792E0 (WPP_RECORDER_SF_dq.c)
 *     ?ndisScheduleD0CompleteSignalWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C007D59C (-ndisScheduleD0CompleteSignalWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ?NdisTraceLoggingUnexpectedSelectiveSuspendError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x1C0086F94 (-NdisTraceLoggingUnexpectedSelectiveSuspendError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z.c)
 *     ?ndisMiniportFatalError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0129E50 (-ndisMiniportFatalError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 */

__int64 __fastcall ndisSetPowerResumeComplete(
        struct _DEVICE_OBJECT *a1,
        struct _IRP *a2,
        struct _NDIS_MINIPORT_BLOCK *a3)
{
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rsi
  int Status; // ebp
  struct _NDIS_SELECTIVE_SUSPEND *v7; // rbx
  KIRQL v8; // al
  int v10; // [rsp+30h] [rbp-28h]

  SelectiveSuspend = a3->SelectiveSuspend;
  Status = a2->IoStatus.Status;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v10 = a2->IoStatus.Status;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x1Cu,
      (struct _GUID *)&WPP_197eb4ab19783370fa11e732ea3b5a2d_Traceguids,
      (char)a3,
      v10);
  }
  ndisLogMiniportEvent(a3, NdisMEventD0_SSComplete);
  if ( Status >= 0 )
  {
    *((_QWORD *)SelectiveSuspend + 61) = a3;
    *((_QWORD *)SelectiveSuspend + 62) = a2;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)((char *)SelectiveSuspend + 456), CustomPriorityWorkQueue|RealTimeWorkQueue|0x8);
    return 3221225494LL;
  }
  else
  {
    v7 = a3->SelectiveSuspend;
    NdisTraceLoggingUnexpectedSelectiveSuspendError(a3);
    *((_WORD *)v7 + 313) = *((_WORD *)v7 + 312);
    *((_WORD *)v7 + 312) = 7;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xFu,
        0x1Du,
        (struct _GUID *)&WPP_197eb4ab19783370fa11e732ea3b5a2d_Traceguids,
        Status,
        a3);
    v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
    *((_DWORD *)SelectiveSuspend + 126) &= ~0x20u;
    KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v8);
    ndisMiniportFatalError(a3, NdisMEventErr_FailedPowerD0);
    ndisScheduleD0CompleteSignalWorkItem(a3, Status);
    return 0LL;
  }
}
