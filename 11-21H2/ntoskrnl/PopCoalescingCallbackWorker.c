/*
 * XREFs of PopCoalescingCallbackWorker @ 0x14098F0F0
 * Callers:
 *     <none>
 * Callees:
 *     PoIssueCoalescingNotification @ 0x1405CFA04 (PoIssueCoalescingNotification.c)
 *     PopCoalescingSetActiveState @ 0x1405CFB5C (PopCoalescingSetActiveState.c)
 *     PopReleasePolicyLock @ 0x140A47CF8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A48330 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopCoalescingCallbackWorker(int a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // edx
  __int64 v6; // rdx
  __int64 v7; // rcx

  while ( 1 )
  {
    PopAcquirePolicyLock(a1);
    if ( (PopCoalescingState & 2) != 0 )
      break;
    if ( (PopCoalescingState & 1) == 0 )
      goto LABEL_9;
    PopCoalescingSetActiveState(0);
    PopReleasePolicyLock(v4, v3);
    v5 = 2;
LABEL_8:
    PoIssueCoalescingNotification(PopCoalescingRegistration, v5);
  }
  if ( (PopCoalescingState & 1) == 0 )
  {
    PopCoalescingState &= ~4u;
    PopCoalescingSetActiveState(1);
    PopReleasePolicyLock(v7, v6);
    v5 = 1;
    goto LABEL_8;
  }
  if ( (PopCoalescingState & 4) != 0 )
  {
    PopCoalescingState &= ~4u;
    PopReleasePolicyLock(v2, v1);
    v5 = 3;
    goto LABEL_8;
  }
LABEL_9:
  PopCoalescingState &= ~8u;
  return PopReleasePolicyLock(v2, v1);
}
