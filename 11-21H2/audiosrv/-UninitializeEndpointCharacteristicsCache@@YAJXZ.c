/*
 * XREFs of ?UninitializeEndpointCharacteristicsCache@@YAJXZ @ 0x18014CDDC
 * Callers:
 *     ?VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ @ 0x1800C5C24 (-VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 UninitializeEndpointCharacteristicsCache(void)
{
  if ( g_pEndpointCharacteristicsCache )
  {
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)g_pEndpointCharacteristicsCache + 32LL))(g_pEndpointCharacteristicsCache);
    if ( g_pEndpointCharacteristicsCache )
    {
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)g_pEndpointCharacteristicsCache + 16LL))(g_pEndpointCharacteristicsCache);
      g_pEndpointCharacteristicsCache = 0LL;
    }
  }
  return 0LL;
}
