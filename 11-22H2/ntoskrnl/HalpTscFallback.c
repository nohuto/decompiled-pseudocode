/*
 * XREFs of HalpTscFallback @ 0x14050A330
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402C3240 (KeQueryPerformanceCounter.c)
 *     RtlSetSystemGlobalData @ 0x14035B9D0 (RtlSetSystemGlobalData.c)
 *     HalCalibratePerformanceCounter @ 0x1404FE230 (HalCalibratePerformanceCounter.c)
 *     HalpTimerSelectFallbackPerformanceCounter @ 0x1405093E0 (HalpTimerSelectFallbackPerformanceCounter.c)
 */

__int64 __fastcall HalpTscFallback(ULONG_PTR Argument)
{
  int v2; // edi
  __int64 result; // rax
  signed __int32 v4[8]; // [rsp+0h] [rbp-28h] BYREF
  int v5; // [rsp+20h] [rbp-8h]
  char Buffer; // [rsp+38h] [rbp+10h] BYREF

  Buffer = 0;
  _disable();
  v2 = v5 & 0x200;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)Argument, 0xFFFFFFFF) == 1 )
  {
    *(LARGE_INTEGER *)(Argument + 8) = KeQueryPerformanceCounter(0LL);
    HalpTimerSelectFallbackPerformanceCounter();
    RtlSetSystemGlobalData(GlobalDataIdQpcBypassEnabled, &Buffer, 1u);
    _InterlockedDecrement((volatile signed __int32 *)Argument);
  }
  else
  {
    do
      _mm_pause();
    while ( *(_DWORD *)Argument != -1 );
    _InterlockedOr(v4, 0);
  }
  result = HalCalibratePerformanceCounter((volatile signed __int32 *)(Argument + 4), *(_QWORD *)(Argument + 8));
  if ( v2 )
    _enable();
  return result;
}
