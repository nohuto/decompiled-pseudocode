/*
 * XREFs of NtUserWaitMessage @ 0x1C00A4B90
 * Callers:
 *     <none>
 * Callees:
 *     xxxSleepThread2 @ 0x1C0052D3C (xxxSleepThread2.c)
 *     ClientWaitMessageExMPH @ 0x1C00A4BFC (ClientWaitMessageExMPH.c)
 */

__int64 NtUserWaitMessage()
{
  int v0; // eax
  __int64 v1; // rcx
  int v2; // ebx

  EnterCrit(0LL, 0LL);
  if ( *(int *)(*(_QWORD *)(gptiCurrent + 448LL) + 28LL) > 0 )
    v0 = ClientWaitMessageExMPH(15615LL);
  else
    v0 = xxxSleepThread2(0x3CFFu, 0, 1, 0, 0LL);
  v2 = v0;
  UserSessionSwitchLeaveCrit(v1);
  return v2;
}
