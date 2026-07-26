/*
 * XREFs of ?ndisQueueRequestOnTopAsync@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00A5600
 * Callers:
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x1C001FAB8 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000CCD0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqL @ 0x1C000CDB0 (WPP_RECORDER_SF_qqL.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C00113A8 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 */

__int64 __fastcall ndisQueueRequestOnTopAsync(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2)
{
  unsigned int v4; // edi
  struct _WORK_QUEUE_ITEM *Pool2; // rbx

  v4 = -1073741823;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x18u,
      (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
      (char)a1,
      a2);
  Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(64LL, 80LL, 1769423950);
  if ( Pool2 )
  {
    if ( ndisReferenceMiniport(a1, 0x4Au) )
    {
      RtlGetCallersAddress((PVOID *)&Pool2[1].List.Flink, (PVOID *)&Pool2[1].List.Blink);
      Pool2->List.Flink = 0LL;
      Pool2->WorkerRoutine = (void (__fastcall *)(void *))ndisProcessRequestAsync;
      Pool2[1].WorkerRoutine = (void (__fastcall *)(void *))a2;
      Pool2[1].Parameter = a1;
      Pool2->Parameter = Pool2;
      ExQueueWorkItem(Pool2, (WORK_QUEUE_TYPE)40);
      v4 = 259;
    }
    else
    {
      ExFreePoolWithTag(Pool2, 0);
    }
  }
  else
  {
    v4 = -1073741670;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x19u,
      (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
      (char)a1,
      (char)a2,
      v4);
  return v4;
}
