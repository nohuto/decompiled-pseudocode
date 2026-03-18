/*
 * XREFs of PspNotifyEmptyJobsInJobChain @ 0x140683DA4
 * Callers:
 *     PspRundownSingleProcess @ 0x140683990 (PspRundownSingleProcess.c)
 * Callees:
 *     PspEvaluateAndNotifyEmptyJob @ 0x140683DF0 (PspEvaluateAndNotifyEmptyJob.c)
 */

__int64 __fastcall PspNotifyEmptyJobsInJobChain(__int64 a1)
{
  struct _KEVENT *i; // rbx
  __int64 result; // rax

  _interlockedbittestandset((volatile signed __int32 *)(a1 + 1120), 0xBu);
  for ( i = *(struct _KEVENT **)(a1 + 1296); i; i = (struct _KEVENT *)i[52].Header.WaitListHead.Blink )
    result = PspEvaluateAndNotifyEmptyJob(i);
  return result;
}
