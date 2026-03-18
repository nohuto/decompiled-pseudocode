/*
 * XREFs of HvlGetReferenceTime @ 0x1403C85E4
 * Callers:
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140256E80 (PpmCheckSnapAllDeliveredPerformance.c)
 *     HvlGetPpmStatsForProcessor @ 0x1403C854C (HvlGetPpmStatsForProcessor.c)
 *     PpmHvSnapPerformanceAccumulation @ 0x1405A0104 (PpmHvSnapPerformanceAccumulation.c)
 * Callees:
 *     HvlGetReferenceTimeUsingTscPage @ 0x1403C8620 (HvlGetReferenceTimeUsingTscPage.c)
 *     HvlpGetRegister64 @ 0x140548CE0 (HvlpGetRegister64.c)
 */

__int64 HvlGetReferenceTime()
{
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0LL;
  if ( (HvlEnlightenments & 0x100) != 0 )
    return HvlGetReferenceTimeUsingTscPage(0LL);
  HvlpGetRegister64(589828LL, &v1);
  return v1;
}
