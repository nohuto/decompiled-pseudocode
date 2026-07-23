/*
 * XREFs of ExQueueDebuggerWorker @ 0x140293BCC
 * Callers:
 *     KdExitDebugger @ 0x140AB0008 (KdExitDebugger.c)
 *     ExpWorkerInitialization @ 0x140B6610C (ExpWorkerInitialization.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140254850 (KiInsertQueueDpc.c)
 */

__int64 ExQueueDebuggerWorker()
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedCompareExchange(&ExpDebuggerWork, 2, 1);
  if ( (_DWORD)result == 1 )
    return KiInsertQueueDpc((ULONG_PTR)&ExpDebuggerDpc, 0LL, 0LL, 0LL, 0);
  return result;
}
