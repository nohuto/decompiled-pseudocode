/*
 * XREFs of WPP_SF_qll @ 0x18012637C
 * Callers:
 *     AudioServerStartStopStreamConnection @ 0x180125660 (AudioServerStartStopStreamConnection.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qll(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+88h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &WPP_09ae8f41bb453bc35d3b802f4338d8f9_Traceguids, 34LL, (__int64 *)va);
}
