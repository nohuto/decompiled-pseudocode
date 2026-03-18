/*
 * XREFs of PspNotifyEmptyJobsInJobChain @ 0x14069F4D4
 * Callers:
 *     PspRundownSingleProcess @ 0x14068AD74 (PspRundownSingleProcess.c)
 * Callees:
 *     PspEvaluateAndNotifyEmptyJob @ 0x1406A07B4 (PspEvaluateAndNotifyEmptyJob.c)
 */

__int64 __fastcall PspNotifyEmptyJobsInJobChain(__int64 a1)
{
  struct _KEVENT *i; // rbx
  __int64 result; // rax

  _interlockedbittestandset((volatile signed __int32 *)(a1 + 1120), 0xBu);
  for ( i = *(struct _KEVENT **)(a1 + 1296); i; i = (struct _KEVENT *)i[53].Header.WaitListHead.Blink )
    result = PspEvaluateAndNotifyEmptyJob(i);
  return result;
}
