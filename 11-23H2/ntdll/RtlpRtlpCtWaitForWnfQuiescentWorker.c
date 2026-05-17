/*
 * XREFs of RtlpRtlpCtWaitForWnfQuiescentWorker @ 0x180110690
 * Callers:
 *     <none>
 * Callees:
 *     NtWaitForSingleObject @ 0x1800A0F30 (NtWaitForSingleObject.c)
 *     RtlpCtContextFree @ 0x180110518 (RtlpCtContextFree.c)
 */

__int64 __fastcall RtlpRtlpCtWaitForWnfQuiescentWorker(__int64 a1, __int64 a2)
{
  NtWaitForSingleObject(*(HANDLE *)(a2 + 16), 0, 0LL);
  RtlpCtContextFree((__int64 *)a2);
  return (unsigned int)_InterlockedExchange(&RtlpCtPublishInProgress, 0);
}
