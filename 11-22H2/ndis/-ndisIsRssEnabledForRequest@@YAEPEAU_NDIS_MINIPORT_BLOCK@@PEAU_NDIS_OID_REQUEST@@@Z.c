/*
 * XREFs of ?ndisIsRssEnabledForRequest@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0086E90
 * Callers:
 *     ?ndisQueryRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@K@Z @ 0x1C0087730 (-ndisQueryRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@K@Z.c)
 * Callees:
 *     ?ndisGetCombinedRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_NDIS_VPORT_BLOCK@@PEAPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@33@Z @ 0x1C0086768 (-ndisGetCombinedRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_NDIS_.c)
 */

bool __fastcall ndisIsRssEnabledForRequest(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2)
{
  bool v3; // cl
  struct _NDIS_RECEIVE_SCALE_PARAMETERS *v5; // [rsp+40h] [rbp+8h] BYREF
  struct _NDIS_VPORT_BLOCK *v6; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0LL;
  v6 = 0LL;
  ndisGetCombinedRSSParameters(a1, a2, &v6, &v5, 0LL, 0LL);
  v3 = v5 != 0LL;
  if ( (a1->RecvScaleCapabilities.CapabilitiesFlags & 0x40000000) != 0 && v5 )
    return (v5->Flags & 0x10) == 0 && LOBYTE(v5->HashInformation);
  return v3;
}
