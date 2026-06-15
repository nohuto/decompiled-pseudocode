/*
 * XREFs of WPP_SF_i @ 0x14005A174
 * Callers:
 *     ?GetFrequencyForOffload@CSystemAudioDeviceSharedBase@@UEAAJPEA_K@Z @ 0x140059180 (-GetFrequencyForOffload@CSystemAudioDeviceSharedBase@@UEAAJPEA_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_i(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &WPP_f9f744bd440f3e38c4fd26e2f9fecd86_Traceguids, 19LL, (__int64 *)va);
}
