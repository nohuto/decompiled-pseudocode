/*
 * XREFs of ?ndisIsPMProtocolOffloadSupported@@YAEW4_NDIS_PM_PROTOCOL_OFFLOAD_TYPE@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0093BE0
 * Callers:
 *     ?ndisMiniportPreAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C0094990 (-ndisMiniportPreAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     ?ndisRejectUnsupportedPMOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0098C6C (-ndisRejectUnsupportedPMOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSourcePreAddProtocolOffload@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C009A068 (-ndisSourcePreAddProtocolOffload@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ndisIsPMProtocolOffloadSupported(
        enum _NDIS_PM_PROTOCOL_OFFLOAD_TYPE a1,
        struct _NDIS_MINIPORT_BLOCK *a2)
{
  int v2; // ecx
  int v3; // ecx
  unsigned int v5; // eax

  v2 = a1 - 1;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      if ( (unsigned int)(v3 - 1) >= 2 )
        return 0;
      v5 = a2->PMAdvertisedCapabilities.SupportedProtocolOffloads >> 7;
    }
    else
    {
      v5 = a2->PMAdvertisedCapabilities.SupportedProtocolOffloads >> 1;
    }
  }
  else
  {
    LOBYTE(v5) = a2->PMAdvertisedCapabilities.SupportedProtocolOffloads;
  }
  return v5 & 1;
}
