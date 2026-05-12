/*
 * XREFs of TcglibEalDelayExecution @ 0x1C0055100
 * Callers:
 *     TcglibpExecuteCommand @ 0x1C007C91C (TcglibpExecuteCommand.c)
 * Callees:
 *     <none>
 */

void __fastcall TcglibEalDelayExecution(unsigned int a1)
{
  __int64 v1; // rbx
  union _LARGE_INTEGER Interval; // [rsp+38h] [rbp+10h] BYREF

  v1 = a1;
  if ( KeGetCurrentIrql() < 2u )
  {
    Interval.QuadPart = -10000 * v1;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  else
  {
    KeStallExecutionProcessor(1000 * v1);
  }
}
