/*
 * XREFs of WPP_SF_Pi @ 0x1800DDD84
 * Callers:
 *     ?ReleaseResource@CAudioResourceManager@@UEAAJ_K@Z @ 0x1800DC5D0 (-ReleaseResource@CAudioResourceManager@@UEAAJ_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_Pi(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &WPP_a12ee458e5d235ad00fc6562119251bf_Traceguids, 26LL, (__int64 *)va);
}
