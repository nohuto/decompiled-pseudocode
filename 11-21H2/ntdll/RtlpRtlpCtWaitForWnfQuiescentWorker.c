/*
 * XREFs of RtlpRtlpCtWaitForWnfQuiescentWorker @ 0x18010EFB0
 * Callers:
 *     <none>
 * Callees:
 *     NtWaitForSingleObject @ 0x1800A40F0 (NtWaitForSingleObject.c)
 *     RtlpCtContextFree @ 0x18010EE38 (RtlpCtContextFree.c)
 */

__int64 __fastcall RtlpRtlpCtWaitForWnfQuiescentWorker(__int64 a1, __int64 a2)
{
  NtWaitForSingleObject(*(HANDLE *)(a2 + 16), 0, 0LL);
  RtlpCtContextFree((__int64 *)a2);
  return (unsigned int)_InterlockedExchange(&RtlpCtPublishInProgress, 0);
}
