/*
 * XREFs of NtUserCancelQueueEventCompletionPacket @ 0x1C01F1A50
 * Callers:
 *     <none>
 * Callees:
 *     _CancelQueueEventCompletionPacket @ 0x1C01D9E38 (_CancelQueueEventCompletionPacket.c)
 */

__int64 NtUserCancelQueueEventCompletionPacket()
{
  __int64 v0; // rbx
  __int64 v1; // rcx

  EnterCrit(0LL, 0LL);
  v0 = (int)CancelQueueEventCompletionPacket();
  UserSessionSwitchLeaveCrit(v1);
  return v0;
}
