/*
 * XREFs of ?ConvertHostPerfCounterToPerfCounter@@YAJPEA_K@Z @ 0x140088228
 * Callers:
 *     ?GetInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140089EE0 (-GetInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_.c)
 *     ?GetPosition@CCrossProcessClientInputEndpoint@@UEAAJPEA_K0@Z @ 0x14008A100 (-GetPosition@CCrossProcessClientInputEndpoint@@UEAAJPEA_K0@Z.c)
 *     ?GetPosition_NonOffload@CCrossProcessClientOutputEndpoint@@IEAAJPEA_K0@Z @ 0x14008AC08 (-GetPosition_NonOffload@CCrossProcessClientOutputEndpoint@@IEAAJPEA_K0@Z.c)
 *     ?GetPosition_Offload@CCrossProcessClientOutputEndpoint@@IEAAJPEA_K0@Z @ 0x14008AF7C (-GetPosition_Offload@CCrossProcessClientOutputEndpoint@@IEAAJPEA_K0@Z.c)
 *     ?GetClockingData@CSpatialCrossProcessBaseEndpoint@@MEAAJPEAUAE_CURRENT_POSITION@@0PEA_J1@Z @ 0x140091650 (-GetClockingData@CSpatialCrossProcessBaseEndpoint@@MEAAJPEAUAE_CURRENT_POSITION@@0PEA_J1@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ConvertHostPerfCounterToPerfCounter(unsigned __int64 *a1)
{
  __int64 result; // rax
  unsigned __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a1;
  result = RtlConvertHostPerfCounterToPerfCounter(v3, -1LL, &v3);
  if ( !(_DWORD)result )
    *a1 = v3;
  return result;
}
