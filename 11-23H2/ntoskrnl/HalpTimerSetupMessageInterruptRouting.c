/*
 * XREFs of HalpTimerSetupMessageInterruptRouting @ 0x140509D38
 * Callers:
 *     HalpTimerConfigureInterrupt @ 0x14037D134 (HalpTimerConfigureInterrupt.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x1402C4800 (HalpTimerGetInternalData.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpTimerSetupMessageInterruptRouting(__int64 a1)
{
  __int64 InternalData; // rax
  __int64 v3; // rdx
  __int64 result; // rax

  InternalData = HalpTimerGetInternalData(a1);
  LOBYTE(v3) = 1;
  result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(a1 + 152))(
             InternalData,
             v3,
             *(_QWORD *)(a1 + 232),
             *(unsigned int *)(a1 + 240));
  if ( (int)result < 0 )
  {
    *(_DWORD *)(a1 + 256) = result;
    HalpTimerLastProblem = 24;
    *(_DWORD *)(a1 + 252) = 24;
    *(_QWORD *)(a1 + 264) = "minkernel\\hals\\lib\\timers\\common\\timersup.c";
    *(_DWORD *)(a1 + 272) = 2366;
  }
  return result;
}
