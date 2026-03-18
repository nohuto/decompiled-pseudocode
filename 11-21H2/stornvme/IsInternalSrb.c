/*
 * XREFs of IsInternalSrb @ 0x1C000A4E4
 * Callers:
 *     RequestPendingCompletion @ 0x1C0001A30 (RequestPendingCompletion.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C000A1DC (WaitForCommandCompleteWithCustomTimeout.c)
 *     NVMeCompleteSubmissionQueueRequests @ 0x1C0018820 (NVMeCompleteSubmissionQueueRequests.c)
 *     NVMeRequestComplete @ 0x1C0019DF8 (NVMeRequestComplete.c)
 * Callees:
 *     <none>
 */

char __fastcall IsInternalSrb(__int64 a1, __int64 a2)
{
  char v2; // r8
  unsigned int v5; // edx

  v2 = 0;
  if ( *(_DWORD *)(a2 + 12) == 251658240 )
    return 1;
  if ( a2 != a1 + 864 )
  {
    v5 = 0;
    while ( a2 != 112LL * v5 + a1 + 976 )
    {
      if ( ++v5 >= 6 )
        return v2;
    }
  }
  return 1;
}
