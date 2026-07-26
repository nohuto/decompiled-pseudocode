/*
 * XREFs of ndisIfQuerySetMiniport @ 0x1C013F3F8
 * Callers:
 *     ndisIfQueryFilterObject @ 0x1C010DD00 (ndisIfQueryFilterObject.c)
 *     ndisIfQueryMiniportObject @ 0x1C011040C (ndisIfQueryMiniportObject.c)
 * Callees:
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0008C3C (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     ?ndisReferenceMiniportByHandleForNsi@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C000A6A0 (-ndisReferenceMiniportByHandleForNsi@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_M.c)
 *     ?ndisDereferenceMiniportForNsi@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C000D740 (-ndisDereferenceMiniportForNsi@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFT.c)
 */

__int64 __fastcall ndisIfQuerySetMiniport(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        struct _NDIS_FILTER_BLOCK *a3)
{
  unsigned int SetMiniport; // ebx

  SetMiniport = -1073741823;
  if ( (unsigned __int8)ndisReferenceMiniportByHandleForNsi(a1, NSIREF_IFOID, MPREF_IF_OID) )
  {
    SetMiniport = ndisQuerySetMiniport(a1, 0LL, a2, 0, a3);
    ndisDereferenceMiniportForNsi(a1, 4u, 0x3Du);
  }
  return SetMiniport;
}
