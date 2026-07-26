/*
 * XREFs of ?IsOidTelemetryFilterEnabled@@YA_NKPEAU_NDIS_OID_REQUEST_RESERVED@@@Z @ 0x1C00D0368
 * Callers:
 *     ??$ndisAzTelemetryOidDelivered@U_NDIS_MINIPORT_BLOCK@@@@YAXPEBU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x1C0008D80 (--$ndisAzTelemetryOidDelivered@U_NDIS_MINIPORT_BLOCK@@@@YAXPEBU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_O.c)
 *     ?ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0009560 (-ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisFDoOidRequestInternal@@YAXPEAX@Z @ 0x1C000A220 (-ndisFDoOidRequestInternal@@YAXPEAX@Z.c)
 *     ?ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x1C000C3D0 (-ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK.c)
 *     ?ShouldEnableOidTracing@@YA_NPEBU_NDIS_OID_REQUEST@@@Z @ 0x1C0024B80 (-ShouldEnableOidTracing@@YA_NPEBU_NDIS_OID_REQUEST@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall IsOidTelemetryFilterEnabled(int a1, struct _NDIS_OID_REQUEST_RESERVED *a2)
{
  unsigned __int64 i; // rax
  int v5; // ecx

  if ( (ndisAzOidTelemetryFilter & 1) != 0 && Ndis::BindEngine::s_NumBindOperationsInProgress )
  {
    a2->Flags = (_NDIS_OID_REQUEST_FLAGS)(*(_DWORD *)&a2->Flags & 0xCFFFFFFF | 0x20000000);
    return 1;
  }
  else
  {
    if ( (ndisAzOidTelemetryFilter & 2) != 0 )
    {
      for ( i = 0LL; i < 0x40; i += 4LL )
      {
        v5 = *(_DWORD *)((char *)&ndisAzOidTelemetryList + i);
        if ( !v5 )
          break;
        if ( v5 == a1 )
        {
          a2->Flags = (_NDIS_OID_REQUEST_FLAGS)(*(_DWORD *)&a2->Flags & 0xCFFFFFFF | 0x20000000);
          return 1;
        }
      }
    }
    a2->Flags = (_NDIS_OID_REQUEST_FLAGS)(*(_DWORD *)&a2->Flags & 0xCFFFFFFF | 0x10000000);
    return 0;
  }
}
