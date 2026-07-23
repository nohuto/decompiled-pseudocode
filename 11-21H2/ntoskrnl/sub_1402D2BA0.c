/*
 * XREFs of sub_1402D2BA0 @ 0x1402D2BA0
 * Callers:
 *     DnsPrint_RpcStatsBuffer @ 0x14074B910 (DnsPrint_RpcStatsBuffer.c)
 *     sub_14074BBC4 @ 0x14074BBC4 (sub_14074BBC4.c)
 *     sub_1407FBE14 @ 0x1407FBE14 (sub_1407FBE14.c)
 *     sub_1409B5004 @ 0x1409B5004 (sub_1409B5004.c)
 *     sub_1409B5088 @ 0x1409B5088 (sub_1409B5088.c)
 *     sub_1409B5334 @ 0x1409B5334 (sub_1409B5334.c)
 *     sub_1409B53D8 @ 0x1409B53D8 (sub_1409B53D8.c)
 * Callees:
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1402F69F0 (ExAcquireRundownProtectionCacheAwareEx.c)
 */

BOOLEAN __fastcall sub_1402D2BA0(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  BOOLEAN result; // al

  v2 = *(_QWORD *)(a1 + 208);
  result = 1;
  if ( !v2 || a2 != v2 )
    return ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 224), 1u);
  return result;
}
