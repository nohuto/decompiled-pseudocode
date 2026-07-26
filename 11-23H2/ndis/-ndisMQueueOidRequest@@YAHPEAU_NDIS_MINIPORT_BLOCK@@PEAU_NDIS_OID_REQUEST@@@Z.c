/*
 * XREFs of ?ndisMQueueOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00A0330
 * Callers:
 *     ?ndisQueueRequestWorkItem@@YAHPEAXPEAU_NDIS_OID_REQUEST@@I@Z @ 0x1C0025AB8 (-ndisQueueRequestWorkItem@@YAHPEAXPEAU_NDIS_OID_REQUEST@@I@Z.c)
 *     ?ndisQueueRestoreRequestsOnTop@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@IE@Z @ 0x1C00A5750 (-ndisQueueRestoreRequestsOnTop@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@IE@Z.c)
 * Callees:
 *     ?ShouldEnableOidTracing@@YA_NPEBU_NDIS_OID_REQUEST@@@Z @ 0x1C0024B80 (-ShouldEnableOidTracing@@YA_NPEBU_NDIS_OID_REQUEST@@@Z.c)
 *     ??$TraceLoggingWriteOidRequestQueuedActivity@$00U_NDIS_MINIPORT_BLOCK@@@@YAXPEBU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x1C00D07A4 (--$TraceLoggingWriteOidRequestQueuedActivity@$00U_NDIS_MINIPORT_BLOCK@@@@YAXPEBU_NDIS_MINIPORT_B.c)
 *     ??$TraceLoggingWriteOidRequestQueuedActivity@$0A@U_NDIS_MINIPORT_BLOCK@@@@YAXPEBU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x1C00D09A4 (--$TraceLoggingWriteOidRequestQueuedActivity@$0A@U_NDIS_MINIPORT_BLOCK@@@@YAXPEBU_NDIS_MINIPORT_.c)
 */

__int64 __fastcall ndisMQueueOidRequest(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2)
{
  _LIST_ENTRY *NdisReserved; // rbx
  unsigned int v4; // ecx
  _LIST_ENTRY *p_OidRequestList; // rdi
  _LIST_ENTRY *i; // rax
  __int64 v7; // r11
  _LIST_ENTRY *Blink; // rax

  NdisReserved = (_LIST_ENTRY *)a2->NdisReserved;
  *(_QWORD *)a2->NdisReserved = 0LL;
  *(_QWORD *)&a2->NdisReserved[8] = 0LL;
  v4 = -1073741823;
  if ( (a1->PnPFlags & 0x100) == 0 )
  {
    p_OidRequestList = &a1->OidRequestList;
    for ( i = a1->OidRequestList.Flink; i != p_OidRequestList; i = i->Flink )
    {
      if ( i == NdisReserved )
        return v4;
    }
    if ( ShouldEnableOidTracing(a2) )
    {
      if ( *(_QWORD *)(v7 + 96) )
        TraceLoggingWriteOidRequestQueuedActivity<0,_NDIS_MINIPORT_BLOCK>(a1, v7);
      else
        TraceLoggingWriteOidRequestQueuedActivity<1,_NDIS_MINIPORT_BLOCK>(a1, v7);
    }
    Blink = a1->OidRequestList.Blink;
    v4 = 0;
    if ( Blink->Flink != p_OidRequestList )
      __fastfail(3u);
    NdisReserved->Flink = p_OidRequestList;
    NdisReserved->Blink = Blink;
    Blink->Flink = NdisReserved;
    a1->OidRequestList.Blink = NdisReserved;
  }
  return v4;
}
