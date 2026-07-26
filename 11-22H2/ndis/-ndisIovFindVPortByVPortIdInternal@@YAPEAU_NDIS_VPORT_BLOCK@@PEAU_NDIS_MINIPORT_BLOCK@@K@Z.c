/*
 * XREFs of ?ndisIovFindVPortByVPortIdInternal@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0075FFC
 * Callers:
 *     ?ndisIovDeleteNicSwitchDefaultVPortAndPFBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0075A04 (-ndisIovDeleteNicSwitchDefaultVPortAndPFBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisIovFindVPortByVPortId@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0075FA0 (-ndisIovFindVPortByVPortId@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisOidPostIovVPortParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00773E0 (-ndisOidPostIovVPortParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreRcvFilterEnumFilters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0084A10 (-ndisOidPreRcvFilterEnumFilters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisGetVPortBlockForRequest@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x1C0086808 (-ndisGetVPortBlockForRequest@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_OID_R.c)
 *     ?ndisRssV2UpdateIndirectionTable@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0087968 (-ndisRssV2UpdateIndirectionTable@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 * Callees:
 *     <none>
 */

struct _NDIS_MINIPORT_BLOCK *__fastcall ndisIovFindVPortByVPortIdInternal(
        struct _NDIS_MINIPORT_BLOCK *a1,
        unsigned int a2)
{
  __int64 v2; // r8
  struct _NDIS_MINIPORT_BLOCK *i; // rax

  v2 = 0LL;
  for ( i = (struct _NDIS_MINIPORT_BLOCK *)a1->VPortList.Flink;
        i != (struct _NDIS_MINIPORT_BLOCK *)&a1->VPortList;
        i = *(struct _NDIS_MINIPORT_BLOCK **)&i->Header.Type )
  {
    if ( i->PnPFlags == a2 )
      return i;
    if ( i->PnPFlags > a2 )
      return (struct _NDIS_MINIPORT_BLOCK *)v2;
  }
  return (struct _NDIS_MINIPORT_BLOCK *)v2;
}
