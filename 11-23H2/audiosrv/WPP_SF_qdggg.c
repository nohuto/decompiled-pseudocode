/*
 * XREFs of WPP_SF_qdggg @ 0x180129F98
 * Callers:
 *     ?GetLevelData@CVolumeHardware@@MEAAJXZ @ 0x180019EF0 (-GetLevelData@CVolumeHardware@@MEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qdggg(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+A8h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &WPP_ae14f8769cc9386b95eddb3bc7f1f163_Traceguids, 30LL, (__int64 *)va);
}
