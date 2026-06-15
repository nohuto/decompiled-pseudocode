/*
 * XREFs of WPP_SF_qll @ 0x1800F5210
 * Callers:
 *     AudioServerStartStopStreamConnection @ 0x1800F4440 (AudioServerStartStopStreamConnection.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qll(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+88h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &WPP_862f1ccbb3a43028c75406f124deb6be_Traceguids, 43LL, (__int64 *)va);
}
