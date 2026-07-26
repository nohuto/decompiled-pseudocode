/*
 * XREFs of ?ndisMInvokeBlockingOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0122128
 * Callers:
 *     ?ndisInternalSetRSSInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@K@Z @ 0x1C00813C0 (-ndisInternalSetRSSInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@K@Z.c)
 *     ?ndisInternalSetRSSv2Parameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@KKGKKPEAX@Z @ 0x1C0081860 (-ndisInternalSetRSSv2Parameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@KKGKKPEAX@Z.c)
 *     ?ndisOidPrePDCloseProvider@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0127F20 (-ndisOidPrePDCloseProvider@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPrePDOpenProvider@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C01282B0 (-ndisOidPrePDOpenProvider@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C01010E0 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ?ndisMInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0101920 (-ndisMInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 */

NDIS_STATUS __fastcall ndisMInvokeBlockingOidRequest(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2)
{
  NDIS_STATUS result; // eax

  *(_DWORD *)&a2->NdisReserved[16] |= 0x400u;
  KeInitializeEvent((PRKEVENT)&a2->NdisReserved[40], NotificationEvent, 0);
  result = ndisMInvokeOidRequest(a1, a2);
  if ( result == 259 )
  {
    ndisWaitForKernelObject(&a2->NdisReserved[40]);
    return *(_DWORD *)&a2->NdisReserved[8];
  }
  return result;
}
