/*
 * XREFs of sub_14050DBB0 @ 0x14050DBB0
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     HalCalibratePerformanceCounter @ 0x14038B8D0 (HalCalibratePerformanceCounter.c)
 *     sub_14050CE78 @ 0x14050CE78 (sub_14050CE78.c)
 */

__int64 __fastcall sub_14050DBB0(ULONG_PTR Argument)
{
  int v2; // edi
  __int64 result; // rax
  signed __int32 v4[8]; // [rsp+0h] [rbp-28h] BYREF
  int v5; // [rsp+20h] [rbp-8h]

  _disable();
  v2 = v5 & 0x200;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)Argument, 0xFFFFFFFF) == 1 )
  {
    *(LARGE_INTEGER *)(Argument + 8) = KeQueryPerformanceCounter(0LL);
    sub_14050CE78();
    MEMORY[0xFFFFF780000003C6] = 0;
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
