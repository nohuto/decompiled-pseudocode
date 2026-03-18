/*
 * XREFs of NtReplyWaitReceivePort @ 0x14071BA10
 * Callers:
 *     <none>
 * Callees:
 *     NtReplyWaitReceivePortEx @ 0x14071BA30 (NtReplyWaitReceivePortEx.c)
 */

__int64 __fastcall NtReplyWaitReceivePort(void *a1)
{
  return NtReplyWaitReceivePortEx(a1, 0LL);
}
