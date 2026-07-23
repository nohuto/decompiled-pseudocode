/*
 * XREFs of HalpTimerClockInterruptStub @ 0x1403A19F0
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerGetInternalData @ 0x1402C4800 (HalpTimerGetInternalData.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

char HalpTimerClockInterruptStub()
{
  __int64 InternalData; // rax
  __int64 v1; // rdx
  char result; // al

  InternalData = HalpTimerGetInternalData(HalpClockTimer);
  (*(void (__fastcall **)(__int64))(v1 + 120))(InternalData);
  result = 1;
  ++*(_DWORD *)(HalpClockTimer + 64);
  return result;
}
