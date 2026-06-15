/*
 * XREFs of ?IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ @ 0x14003BA4E
 * Callers:
 *     ?GetAvailableObjectCount@CSpatialCrossProcessServerInputEndpoint@@UEAAJPEAI@Z @ 0x14003BA80 (-GetAvailableObjectCount@CSpatialCrossProcessServerInputEndpoint@@UEAAJPEAI@Z.c)
 *     ?GetFrameCount@CSpatialCrossProcessServerInputEndpoint@@UEAAJPEAI@Z @ 0x14003BB20 (-GetFrameCount@CSpatialCrossProcessServerInputEndpoint@@UEAAJPEAI@Z.c)
 *     ?GetStreamStatus@CSpatialCrossProcessServerInputEndpoint@@UEAAJPEAW4SpatialStreamStatus@@@Z @ 0x14003BCE0 (-GetStreamStatus@CSpatialCrossProcessServerInputEndpoint@@UEAAJPEAW4SpatialStreamStatus@@@Z.c)
 *     ?Reset@CSpatialCrossProcessControl@@UEAAJXZ @ 0x14009EDB0 (-Reset@CSpatialCrossProcessControl@@UEAAJXZ.c)
 *     ?Start@CSpatialCrossProcessControl@@UEAAJXZ @ 0x14009EF30 (-Start@CSpatialCrossProcessControl@@UEAAJXZ.c)
 *     ?Stop@CSpatialCrossProcessControl@@UEAAJXZ @ 0x14009F050 (-Stop@CSpatialCrossProcessControl@@UEAAJXZ.c)
 *     ?GetStreamStatus@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEAW4SpatialStreamStatus@@@Z @ 0x1400A0260 (-GetStreamStatus@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEAW4SpatialStreamStatus@@@Z.c)
 *     ?SignalCompletionEvent@CSpatialCrossProcessServerEndpoint@@AEAA_NXZ @ 0x1400A0928 (-SignalCompletionEvent@CSpatialCrossProcessServerEndpoint@@AEAA_NXZ.c)
 *     ?GetInputDataPointer@CSpatialCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x1400A0A70 (-GetInputDataPointer@CSpatialCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@.c)
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
