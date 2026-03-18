/*
 * XREFs of PopIdleWakeConvertIntervalBucketsTo @ 0x1408062D4
 * Callers:
 *     PopIdleWakeNotifyModernStandbyExitWorker @ 0x140806090 (PopIdleWakeNotifyModernStandbyExitWorker.c)
 *     PopIdleWakeSourceAccountingToDiagnostic @ 0x14099BD28 (PopIdleWakeSourceAccountingToDiagnostic.c)
 * Callees:
 *     PpmConvertTimeTo @ 0x140387A68 (PpmConvertTimeTo.c)
 */

void __fastcall PopIdleWakeConvertIntervalBucketsTo(
        unsigned int a1,
        __int64 a2,
        unsigned __int64 *a3,
        unsigned __int64 a4)
{
  unsigned __int64 *v4; // rbx
  __int64 v5; // rsi
  __int64 v7; // rdi

  if ( a1 )
  {
    v4 = a3;
    v5 = a1;
    v7 = a2 - (_QWORD)a3;
    do
    {
      *v4 = PpmConvertTimeTo(*(unsigned __int64 *)((char *)v4 + v7), a4);
      ++v4;
      --v5;
    }
    while ( v5 );
  }
}
