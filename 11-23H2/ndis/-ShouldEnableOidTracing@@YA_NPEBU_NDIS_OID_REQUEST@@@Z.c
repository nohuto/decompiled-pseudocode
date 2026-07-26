/*
 * XREFs of ?ShouldEnableOidTracing@@YA_NPEBU_NDIS_OID_REQUEST@@@Z @ 0x1C0024B80
 * Callers:
 *     ?ndisFQueueOidRequest@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0024AF0 (-ndisFQueueOidRequest@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisMQueueOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00A0330 (-ndisMQueueOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0023508 (_tlgKeywordOn.c)
 *     ?IsOidTelemetryFilterEnabled@@YA_NKPEAU_NDIS_OID_REQUEST_RESERVED@@@Z @ 0x1C00D0368 (-IsOidTelemetryFilterEnabled@@YA_NKPEAU_NDIS_OID_REQUEST_RESERVED@@@Z.c)
 */

bool __fastcall ShouldEnableOidTracing(const struct _NDIS_OID_REQUEST *a1)
{
  __int64 v2; // r9

  if ( (unsigned int)dword_1C00F41D8 <= 4 || !tlgKeywordOn((__int64)&dword_1C00F41D8, 1024LL) )
    return 0;
  if ( ((*(_DWORD *)(v2 + 88) >> 28) & 3) != 0 )
    return ((*(_DWORD *)(v2 + 88) >> 28) & 3) == 2;
  else
    return IsOidTelemetryFilterEnabled(*(_DWORD *)(v2 + 32), (struct _NDIS_OID_REQUEST_RESERVED *)(v2 + 72));
}
