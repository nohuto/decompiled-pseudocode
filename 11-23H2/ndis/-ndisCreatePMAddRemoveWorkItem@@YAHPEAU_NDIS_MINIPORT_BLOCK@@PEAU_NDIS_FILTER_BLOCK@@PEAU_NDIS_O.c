/*
 * XREFs of ?ndisCreatePMAddRemoveWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00930B4
 * Callers:
 *     ?ndisOidPMAddRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0094EF0 (-ndisOidPMAddRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0006820 (WPP_RECORDER_SF_.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C00113A8 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 */

__int64 __fastcall ndisCreatePMAddRemoveWorkItem(
        struct _NDIS_MINIPORT_BLOCK *a1,
        _LIST_ENTRY *a2,
        struct _NDIS_OID_REQUEST *a3)
{
  struct _WORK_QUEUE_ITEM *Pool2; // rbx

  Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(64LL, 56LL, 1769423950);
  if ( Pool2 )
  {
    ndisReferenceMiniport(a1, 0xEu);
    Pool2->List.Flink = 0LL;
    Pool2->WorkerRoutine = ndisPMAddRemoveAsync;
    Pool2[1].WorkerRoutine = (void (__fastcall *)(void *))a3;
    Pool2[1].List.Flink = (_LIST_ENTRY *)a1;
    Pool2[1].List.Blink = a2;
    Pool2->Parameter = Pool2;
    ExQueueWorkItem(Pool2, (WORK_QUEUE_TYPE)40);
    return 0LL;
  }
  else
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xEu,
        0x46u,
        (struct _GUID *)&WPP_b2e58fb44a513861c2538b26e5e9140e_Traceguids);
    return 3221225626LL;
  }
}
