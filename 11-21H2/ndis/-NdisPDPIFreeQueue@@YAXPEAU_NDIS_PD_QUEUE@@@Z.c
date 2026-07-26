/*
 * XREFs of ?NdisPDPIFreeQueue@@YAXPEAU_NDIS_PD_QUEUE@@@Z @ 0x1C01268F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     ??_GNDIS_PD_QUEUE_TRACKER@@QEAAPEAXI@Z @ 0x1C0124A58 (--_GNDIS_PD_QUEUE_TRACKER@@QEAAPEAXI@Z.c)
 *     ?ndisCleanupPDQAWM@@YAXPEAUNDIS_PD_QUEUE_AWM_STATE@@@Z @ 0x1C0127950 (-ndisCleanupPDQAWM@@YAXPEAUNDIS_PD_QUEUE_AWM_STATE@@@Z.c)
 *     ?ndisCleanupPDQTracker@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z @ 0x1C0127984 (-ndisCleanupPDQTracker@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z.c)
 */

void __fastcall NdisPDPIFreeQueue(struct _NDIS_PD_QUEUE *a1)
{
  char *v1; // rdi
  __int64 v3; // rsi

  v1 = (char *)a1->PDPlatformReserved[1];
  v3 = *((_QWORD *)v1 + 4);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Du,
      0x24u,
      (struct _GUID *)&WPP_bb899958c3b83c4be5ffe2f3031e3faa_Traceguids,
      a1);
  ndisCleanupPDQTracker((struct NDIS_PD_QUEUE_TRACKER *)v1);
  (*(void (__fastcall **)(struct _NDIS_PD_QUEUE *))(*(_QWORD *)(v3 + 80) + 16LL))(a1);
  ndisCleanupPDQAWM((struct NDIS_PD_QUEUE_AWM_STATE *)(v1 + 56));
  NDIS_PD_QUEUE_TRACKER::`scalar deleting destructor'(v1);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Du,
      0x25u,
      (struct _GUID *)&WPP_bb899958c3b83c4be5ffe2f3031e3faa_Traceguids,
      a1);
}
