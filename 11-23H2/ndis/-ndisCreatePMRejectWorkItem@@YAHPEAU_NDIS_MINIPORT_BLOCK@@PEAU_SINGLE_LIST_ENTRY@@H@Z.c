/*
 * XREFs of ?ndisCreatePMRejectWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_SINGLE_LIST_ENTRY@@H@Z @ 0x1C00933DC
 * Callers:
 *     ?ndisPMAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0096F7C (-ndisPMAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_RE.c)
 *     ?ndisPMAddWOLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00974E0 (-ndisPMAddWOLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0006820 (WPP_RECORDER_SF_.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C00113A8 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 */

__int64 __fastcall ndisCreatePMRejectWorkItem(struct _NDIS_MINIPORT_BLOCK *a1, struct _SINGLE_LIST_ENTRY *a2, int a3)
{
  __int64 Pool2; // rax
  struct _WORK_QUEUE_ITEM *v7; // rbx

  if ( !a2 )
    return 0LL;
  Pool2 = ExAllocatePool2(64LL, 56LL, 1769423950);
  v7 = (struct _WORK_QUEUE_ITEM *)Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 32) = a1;
    *(_QWORD *)(Pool2 + 40) = a2;
    *(_DWORD *)(Pool2 + 48) = a3;
    ndisReferenceMiniport(a1, 0xFu);
    v7->List.Flink = 0LL;
    v7->WorkerRoutine = ndisPMRejectAsync;
    v7->Parameter = v7;
    ExQueueWorkItem(v7, (WORK_QUEUE_TYPE)40);
    return 0LL;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xEu,
      0x49u,
      (struct _GUID *)&WPP_b2e58fb44a513861c2538b26e5e9140e_Traceguids);
  return 3221225626LL;
}
