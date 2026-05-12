/*
 * XREFs of StorDelayExecution @ 0x1C000F644
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000CEF0 (StorPortExtendedFunction.c)
 * Callees:
 *     <none>
 */

void __fastcall StorDelayExecution(ULONG MicroSeconds)
{
  __int64 v1; // rbx
  __int64 Timer; // rax
  void *v3; // rbx
  union _LARGE_INTEGER Interval; // [rsp+48h] [rbp+10h] BYREF

  v1 = MicroSeconds;
  if ( KeGetCurrentIrql() >= 2u || (unsigned int)v1 < StorMinimumTimeInterval / 0xAu )
  {
    KeStallExecutionProcessor(v1);
  }
  else
  {
    Interval.QuadPart = -10 * v1;
    if ( (unsigned int)v1 < StorMaximumTimeInterval / 0xAu
      && (Timer = ExAllocateTimer(0LL, 0LL, 4LL), (v3 = (void *)Timer) != 0LL) )
    {
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ExSetTimer)(
        Timer,
        (union _LARGE_INTEGER)Interval.QuadPart,
        0LL,
        0LL);
      KeWaitForSingleObject(v3, Executive, 0, 0, 0LL);
      ExDeleteTimer(v3, 0LL, 0LL, 0LL);
    }
    else
    {
      KeDelayExecutionThread(0, 0, &Interval);
    }
  }
}
