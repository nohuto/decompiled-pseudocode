/*
 * XREFs of ?ndisSetDevicePowerDownComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0017D10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000C8B0 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C001FEC4 (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisCancelMediaDisconnectTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00244CC (-ndisCancelMediaDisconnectTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisSetDevicePowerDownComplete(
        struct _DEVICE_OBJECT *a1,
        struct _IRP *a2,
        struct _NDIS_MINIPORT_BLOCK *a3)
{
  int Status; // [rsp+30h] [rbp-18h]

  if ( a2 && *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    Status = a2->IoStatus.Status;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x5Au,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      (char)a3,
      Status);
  }
  ndisLogMiniportEvent(a3, NdisMEventDx_Complete);
  ndisCancelMediaDisconnectTimer(a3);
  a3->DevicePowerDownWorkItem.Irp = a2;
  ExQueueWorkItem(&a3->DevicePowerDownWorkItem.Workitem, CustomPriorityWorkQueue|RealTimeWorkQueue|0x8);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x5Bu,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      a3);
  return 3221225494LL;
}
