/*
 * XREFs of ?ndisPDDereferenceClientDriver@@YAXPEAX@Z @ 0x1C012899C
 * Callers:
 *     NdisPDStartup @ 0x1C00776E0 (NdisPDStartup.c)
 *     ?NdisPDCleanup@@YAXPEAUPD_CLIENT_HANDLE__@@@Z @ 0x1C0125470 (-NdisPDCleanup@@YAXPEAUPD_CLIENT_HANDLE__@@@Z.c)
 * Callees:
 *     ?ndisDereferenceFilterDriver@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@EW4_NDIS_LWFDRV_REFTAG@@@Z @ 0x1C0019104 (-ndisDereferenceFilterDriver@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@EW4_NDIS_LWFDRV_REFTAG@@@Z.c)
 *     ?ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z @ 0x1C001E260 (-ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z.c)
 */

void __fastcall ndisPDDereferenceClientDriver(_NDIS_PROTOCOL_BLOCK *a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( a1->Header.Type == 3 )
  {
    LOBYTE(a3) = 14;
    ndisDereferenceProtocol(a1, a2, a3, a4);
  }
  else if ( a1->Header.Type == 4 )
  {
    ndisDereferenceFilterDriver((_NDIS_FILTER_DRIVER_BLOCK *)a1, a2, 4u);
  }
}
