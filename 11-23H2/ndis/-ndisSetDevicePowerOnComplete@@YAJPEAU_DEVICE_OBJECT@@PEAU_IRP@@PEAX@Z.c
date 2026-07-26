/*
 * XREFs of ?ndisSetDevicePowerOnComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0018060
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C2F0 (WPP_RECORDER_SF_qL.c)
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0020FFC (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C00243B0 (-ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 */

__int64 __fastcall ndisSetDevicePowerOnComplete(struct _DEVICE_OBJECT *a1, struct _IRP *a2, void *a3)
{
  int Status; // eax
  char v7[4]; // [rsp+30h] [rbp-18h]

  if ( (*((_DWORD *)a3 + 30) & 0x80u) != 0 )
    Status = 0;
  else
    Status = a2->IoStatus.Status;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v7 = Status;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x50u,
      (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
      (char)a3,
      *(_DWORD *)v7);
  }
  ndisLogMiniportEvent((struct _NDIS_MINIPORT_BLOCK *)a3, NdisMEventD0_Complete);
  ndisReferenceMiniportNoCheck((struct _NDIS_MINIPORT_BLOCK *)a3, MPREF_PM_DEVPOWERUP);
  *((_QWORD *)a3 + 676) = a2;
  ExQueueWorkItem((PWORK_QUEUE_ITEM)a3 + 168, (WORK_QUEUE_TYPE)40);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x51u,
      (struct _GUID *)&WPP_2cfafda6ad1d3851beeb62a61158407a_Traceguids,
      a3);
  return 3221225494LL;
}
