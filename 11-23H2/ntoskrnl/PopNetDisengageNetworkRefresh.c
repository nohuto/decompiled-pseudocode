/*
 * XREFs of PopNetDisengageNetworkRefresh @ 0x140996720
 * Callers:
 *     PopNetRefreshTimerWorkerCallback @ 0x1409968F0 (PopNetRefreshTimerWorkerCallback.c)
 *     PopNetWnfLowPowerEpochCallback @ 0x140996A30 (PopNetWnfLowPowerEpochCallback.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x14041E920 (ZwUpdateWnfStateData.c)
 *     PopNetSetResiliencyPhaseBias @ 0x140996978 (PopNetSetResiliencyPhaseBias.c)
 */

__int64 PopNetDisengageNetworkRefresh()
{
  __int64 result; // rax
  char v1; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0;
  ZwUpdateWnfStateData((__int64)&WNF_PO_OPPORTUNISTIC_CS, (__int64)&v1);
  result = PopNetSetResiliencyPhaseBias(0LL);
  PopNetRefreshIntervalActive = 0;
  return result;
}
