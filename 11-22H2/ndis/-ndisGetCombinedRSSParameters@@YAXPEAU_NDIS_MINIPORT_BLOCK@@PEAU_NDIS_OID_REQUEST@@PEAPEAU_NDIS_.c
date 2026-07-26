/*
 * XREFs of ?ndisGetCombinedRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_NDIS_VPORT_BLOCK@@PEAPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@33@Z @ 0x1C0086768
 * Callers:
 *     ?ndisIsRssEnabledForRequest@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0086E90 (-ndisIsRssEnabledForRequest@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisPostSetMiniportRSSv2Parameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C008730C (-ndisPostSetMiniportRSSv2Parameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     ?ndisQueryRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@K@Z @ 0x1C0087730 (-ndisQueryRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@K@Z.c)
 * Callees:
 *     ?ndisGetVPortBlockForRequest@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x1C0086808 (-ndisGetVPortBlockForRequest@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_OID_R.c)
 *     ?ndisShouldCacheRSSv2ParametersInMiniport@@YAEPEBU_NDIS_OID_REQUEST@@@Z @ 0x1C00888B8 (-ndisShouldCacheRSSv2ParametersInMiniport@@YAEPEBU_NDIS_OID_REQUEST@@@Z.c)
 */

void __fastcall ndisGetCombinedRSSParameters(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        struct _NDIS_VPORT_BLOCK **a3,
        struct _NDIS_RECEIVE_SCALE_PARAMETERS **a4,
        struct _NDIS_RECEIVE_SCALE_PARAMETERS **a5,
        struct _NDIS_RECEIVE_SCALE_PARAMETERS **a6)
{
  struct _NDIS_VPORT_BLOCK *v10; // r10
  _NDIS_MINIPORT_RSS_PARAMETERS_CACHE **p_RssParametersBuffer; // rcx

  ndisGetVPortBlockForRequest(a1, a2);
  if ( ndisShouldCacheRSSv2ParametersInMiniport(a2) )
  {
    *a4 = a1->CombinedNdisRSSParameters;
    p_RssParametersBuffer = &a1->RssParametersBuffer;
  }
  else
  {
    p_RssParametersBuffer = &v10->RssParametersBuffer;
    *a4 = v10->CombinedNdisRSSParameters;
  }
  if ( a5 )
    *a5 = (struct _NDIS_RECEIVE_SCALE_PARAMETERS *)*p_RssParametersBuffer;
  if ( a6 )
    *a6 = (struct _NDIS_RECEIVE_SCALE_PARAMETERS *)(*p_RssParametersBuffer)->Oid;
  *a3 = v10;
}
