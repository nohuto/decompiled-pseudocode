/*
 * XREFs of ?IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ @ 0x14003BA8E
 * Callers:
 *     ?GetAvailableObjectCount@CSpatialCrossProcessServerInputEndpoint@@UEAAJPEAI@Z @ 0x14003BAC0 (-GetAvailableObjectCount@CSpatialCrossProcessServerInputEndpoint@@UEAAJPEAI@Z.c)
 *     ?GetFrameCount@CSpatialCrossProcessServerInputEndpoint@@UEAAJPEAI@Z @ 0x14003BB60 (-GetFrameCount@CSpatialCrossProcessServerInputEndpoint@@UEAAJPEAI@Z.c)
 *     ?GetStreamStatus@CSpatialCrossProcessServerInputEndpoint@@UEAAJPEAW4SpatialStreamStatus@@@Z @ 0x14003BD20 (-GetStreamStatus@CSpatialCrossProcessServerInputEndpoint@@UEAAJPEAW4SpatialStreamStatus@@@Z.c)
 *     ?Reset@CSpatialCrossProcessControl@@UEAAJXZ @ 0x14009EE00 (-Reset@CSpatialCrossProcessControl@@UEAAJXZ.c)
 *     ?Start@CSpatialCrossProcessControl@@UEAAJXZ @ 0x14009EF80 (-Start@CSpatialCrossProcessControl@@UEAAJXZ.c)
 *     ?Stop@CSpatialCrossProcessControl@@UEAAJXZ @ 0x14009F0A0 (-Stop@CSpatialCrossProcessControl@@UEAAJXZ.c)
 *     ?GetStreamStatus@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEAW4SpatialStreamStatus@@@Z @ 0x1400A02B0 (-GetStreamStatus@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEAW4SpatialStreamStatus@@@Z.c)
 *     ?SignalCompletionEvent@CSpatialCrossProcessServerEndpoint@@AEAA_NXZ @ 0x1400A0978 (-SignalCompletionEvent@CSpatialCrossProcessServerEndpoint@@AEAA_NXZ.c)
 *     ?GetInputDataPointer@CSpatialCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x1400A0AC0 (-GetInputDataPointer@CSpatialCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@.c)
 * Callees:
 *     <none>
 */

char __fastcall CSpatialCrossProcessBaseEndpoint::IsRunning(CSpatialCrossProcessBaseEndpoint *this)
{
  signed __int32 v1; // eax
  char v2; // dl

  v1 = _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this + 162) + 64LL), 0, 0);
  v2 = 1;
  if ( (v1 & 0xFFFFFF81) != 1 || (v1 & 2) == 0 )
    return 0;
  return v2;
}
