/*
 * XREFs of WPP_SF_Pi @ 0x180102878
 * Callers:
 *     ?ReleaseResource@CAudioResourceManager@@UEAAJ_K@Z @ 0x180101470 (-ReleaseResource@CAudioResourceManager@@UEAAJ_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_Pi(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &WPP_6a47491da86c31bdc5874d6ce9b2293b_Traceguids, 26LL, (__int64 *)va);
}
