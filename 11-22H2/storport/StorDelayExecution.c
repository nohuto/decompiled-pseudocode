/*
 * XREFs of StorDelayExecution @ 0x1C0044DCC
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B040 (StorPortExtendedFunction.c)
 *     StorReset @ 0x1C0047378 (StorReset.c)
 * Callees:
 *     <none>
 */

void __fastcall StorDelayExecution(ULONG MicroSeconds)
{
  __int64 v1; // rbx
  __int64 v2; // r9
  __int64 Timer; // rax
  void *v4; // rbx
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
      && (Timer = ExAllocateTimer(0LL, 0LL, 4LL, v2), (v4 = (void *)Timer) != 0LL) )
    {
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ExSetTimer)(
        Timer,
        (union _LARGE_INTEGER)Interval.QuadPart,
        0LL,
        0LL);
      KeWaitForSingleObject(v4, Executive, 0, 0, 0LL);
      ExDeleteTimer(v4, 0LL, 0LL, 0LL);
    }
    else
    {
      KeDelayExecutionThread(0, 0, &Interval);
    }
  }
}
