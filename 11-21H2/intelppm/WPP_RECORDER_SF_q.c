/*
 * XREFs of WPP_RECORDER_SF_q @ 0x1C000AEDC
 * Callers:
 *     DisplayKernelPerfStates @ 0x1C00244C8 (DisplayKernelPerfStates.c)
 *     DisplayKernelIdleStates @ 0x1C002C4B0 (DisplayKernelIdleStates.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0003700 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_q(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, int a5, ...)
{
  int v8; // [rsp+20h] [rbp-28h]
  va_list va; // [rsp+78h] [rbp+30h] BYREF

  va_start(va, a5);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_16f78f6d0ba536165795625b2ea94e7d_Traceguids,
      a4,
      va,
      8LL,
      0LL);
  LOWORD(v8) = a4;
  return WppAutoLogTrace(a1, 5LL, 2LL, &WPP_16f78f6d0ba536165795625b2ea94e7d_Traceguids, v8, va);
}
