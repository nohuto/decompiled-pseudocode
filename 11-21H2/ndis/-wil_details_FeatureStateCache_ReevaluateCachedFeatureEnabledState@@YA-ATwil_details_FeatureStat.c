/*
 * XREFs of ?wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEAT1@T1@PEBUwil_details_FeatureDescriptor@@@Z @ 0x1C00347A8
 * Callers:
 *     ?wil_details_FeatureStateCache_GetCachedFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEAT1@PEBUwil_details_FeatureDescriptor@@@Z @ 0x1C0034774 (-wil_details_FeatureStateCache_GetCachedFeatureEnabledState@@YA-ATwil_details_FeatureStateCache@.c)
 * Callees:
 *     ?wil_details_GetCurrentFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEBUwil_details_FeatureDescriptor@@PEAH@Z @ 0x1C00348A0 (-wil_details_GetCurrentFeatureEnabledState@@YA-ATwil_details_FeatureStateCache@@PEBUwil_details_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 */

union wil_details_FeatureStateCache __fastcall wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(
        union wil_details_FeatureStateCache *a1,
        union wil_details_FeatureStateCache a2,
        const struct wil_details_FeatureDescriptor *a3)
{
  unsigned int v3; // ebp
  unsigned int exchange; // edi
  unsigned __int16 exchange64; // bx
  signed __int32 v8; // esi
  signed __int32 v9; // eax
  int v11; // [rsp+50h] [rbp+8h] BYREF
  union wil_details_FeatureStateCache v12; // [rsp+58h] [rbp+10h]

  v3 = 0;
  v11 = 0;
  v12 = a2;
  exchange = a2.exchange;
  if ( g_wil_details_ensureSubscribedToFeatureConfigurationChanges )
    v3 = g_wil_details_ensureSubscribedToFeatureConfigurationChanges();
  exchange64 = wil_details_GetCurrentFeatureEnabledState(a3, &v11).exchange64;
  if ( !a3->changeTime )
    v11 = v3 != 0 ? v11 : 0;
  while ( 1 )
  {
    v8 = exchange;
    v12.exchange = exchange;
    if ( v11 && (exchange & 1) == 0 )
    {
      v8 = exchange ^ (exchange64 ^ (unsigned __int16)exchange) & 0x278 | 1;
      v12.exchange = v8;
    }
    if ( (exchange & 2) == 0 )
    {
      v8 = ((unsigned __int16)v8 ^ exchange64) & 0x100 ^ v8 | 2;
      v12.exchange = v8;
    }
    v9 = _InterlockedCompareExchange((volatile signed __int32 *)a1, v8, exchange);
    if ( exchange == v9 )
      break;
    exchange = v9;
  }
  if ( (exchange & 2) == 0 && g_wil_details_subscribeFeatureStateCacheToConfigurationChanges )
    g_wil_details_subscribeFeatureStateCacheToConfigurationChanges(a1, a3->changeTime, v3);
  if ( !v11 )
    v12.exchange = ((unsigned __int16)v8 ^ exchange64) & 0x278 ^ v8;
  return v12;
}
