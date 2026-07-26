/*
 * XREFs of ?ndisCreatePMPdcTaskClientWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C008D210
 * Callers:
 *     ?ndisMEvaluateMagicPacketWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_WAKE_PACKET@@@Z @ 0x1C008DDE8 (-ndisMEvaluateMagicPacketWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_WAKE_PACKET@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00088CC (WPP_RECORDER_SF_.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C00106B4 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 */

__int64 __fastcall ndisCreatePMPdcTaskClientWorkItem(struct _NDIS_MINIPORT_BLOCK *a1)
{
  __int64 Pool2; // rax
  struct _WORK_QUEUE_ITEM *v3; // rbx

  Pool2 = ExAllocatePool2(64LL, 40LL, 1769423950);
  v3 = (struct _WORK_QUEUE_ITEM *)Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 32) = a1;
    if ( ndisReferenceMiniport(a1, 0x12u) )
    {
      v3->List.Flink = 0LL;
      v3->WorkerRoutine = ndisPMPDCTaskClient;
      v3->Parameter = v3;
      ExQueueWorkItem(v3, (WORK_QUEUE_TYPE)40);
    }
    else
    {
      ExFreePoolWithTag(v3, 0);
    }
    return 0LL;
  }
  else
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xEu,
        0x87u,
        (struct _GUID *)&WPP_c5d0b5f7d8c43de1f0150a9d8e7af364_Traceguids);
    return 3221225626LL;
  }
}
