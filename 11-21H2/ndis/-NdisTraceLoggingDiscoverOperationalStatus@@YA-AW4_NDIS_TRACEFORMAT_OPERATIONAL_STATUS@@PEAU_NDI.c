/*
 * XREFs of ?NdisTraceLoggingDiscoverOperationalStatus@@YA?AW4_NDIS_TRACEFORMAT_OPERATIONAL_STATUS@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0085AC8
 * Callers:
 *     ?NdisTraceLoggingDeviceStarted@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@@J@Z @ 0x1C00309DC (-NdisTraceLoggingDeviceStarted@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NdisTraceLoggingDiscoverOperationalStatus(__int64 a1)
{
  int v2; // eax
  int v3; // ecx
  int v4; // ecx

  switch ( *(_DWORD *)(a1 + 4064) )
  {
    case 1:
      return 1LL;
    case 2:
      v3 = *(_DWORD *)(a1 + 4068);
      if ( v3 )
      {
        v4 = v3 - 1;
        if ( !v4 )
          return 3LL;
        if ( v4 == 1 )
          return 4LL;
      }
      return 2LL;
    case 3:
      return 5LL;
    case 4:
      return 6LL;
    case 5:
      v2 = *(_DWORD *)(a1 + 4068);
      if ( v2 )
      {
        if ( v2 == 4 )
          return 8LL;
        if ( v2 == 8 )
          return 9LL;
      }
      return 7LL;
    case 6:
      return 10LL;
    case 7:
      return 11LL;
    default:
      return 6LL;
  }
}
