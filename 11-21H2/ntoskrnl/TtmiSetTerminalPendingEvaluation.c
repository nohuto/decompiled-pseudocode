/*
 * XREFs of TtmiSetTerminalPendingEvaluation @ 0x1409A36FC
 * Callers:
 *     TtmpScheduledEvaluationWorker @ 0x1409A3B80 (TtmpScheduledEvaluationWorker.c)
 * Callees:
 *     TtmiScheduleSessionWorker @ 0x1409A4D70 (TtmiScheduleSessionWorker.c)
 */

__int64 __fastcall TtmiSetTerminalPendingEvaluation(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 36) |= 4u;
  return TtmiScheduleSessionWorker(a1, 2LL);
}
