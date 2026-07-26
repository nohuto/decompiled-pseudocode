/*
 * XREFs of ?ndisGetPMProtocolOffloadSize@@YAIPEAU_NDIS_PM_PROTOCOL_OFFLOAD@@@Z @ 0x1C008D9B8
 * Callers:
 *     ?ndisCreatePMProtocolOffloadEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_PROTOCOL_OFFLOAD@@K@Z @ 0x1C008D2DC (-ndisCreatePMProtocolOffloadEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_PROTOCOL_OFFLO.c)
 *     ?ndisOidPreAddPMProtocolOffload@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C008FBC0 (-ndisOidPreAddPMProtocolOffload@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPrePMProtocolOffloadList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0090440 (-ndisOidPrePMProtocolOffloadList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisPMAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0090F50 (-ndisPMAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_RE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisGetPMProtocolOffloadSize(struct _NDIS_PM_PROTOCOL_OFFLOAD *a1)
{
  __int64 result; // rax

  result = 256LL;
  if ( a1->Header.Revision == 1 )
    return 240LL;
  return result;
}
