/*
 * XREFs of ?ndisPDReferenceClientDriver@@YAEPEAX@Z @ 0x1C0128F38
 * Callers:
 *     NdisPDStartup @ 0x1C00776E0 (NdisPDStartup.c)
 * Callees:
 *     ?ndisReferenceFilterDriver@@YAEPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4_NDIS_LWFDRV_REFTAG@@@Z @ 0x1C001A8D8 (-ndisReferenceFilterDriver@@YAEPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4_NDIS_LWFDRV_REFTAG@@@Z.c)
 *     ?ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z @ 0x1C001E30C (-ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z.c)
 */

unsigned __int8 __fastcall ndisPDReferenceClientDriver(struct _NDIS_PROTOCOL_BLOCK *a1)
{
  unsigned __int8 result; // al

  result = 0;
  if ( a1->Header.Type == 3 )
    return ndisReferenceProtocol(a1, 0xEu);
  if ( a1->Header.Type == 4 )
    return ndisReferenceFilterDriver((struct _NDIS_FILTER_DRIVER_BLOCK *)a1, 4u);
  return result;
}
