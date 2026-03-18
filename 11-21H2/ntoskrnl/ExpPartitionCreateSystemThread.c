/*
 * XREFs of ExpPartitionCreateSystemThread @ 0x1406DCC74
 * Callers:
 *     ExpCreateWorkerThread @ 0x1406DCB98 (ExpCreateWorkerThread.c)
 *     ExpWorkQueueManagerStart @ 0x140851D00 (ExpWorkQueueManagerStart.c)
 * Callees:
 *     ExpNodeCreateSystemThread @ 0x1406F2278 (ExpNodeCreateSystemThread.c)
 */

__int64 __fastcall ExpPartitionCreateSystemThread(__int64 a1, int a2, int a3)
{
  return ExpNodeCreateSystemThread(a2, a2, a3, *(_QWORD *)(*(_QWORD *)a1 + 112LL));
}
