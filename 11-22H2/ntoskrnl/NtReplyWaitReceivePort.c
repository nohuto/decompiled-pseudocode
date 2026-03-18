/*
 * XREFs of NtReplyWaitReceivePort @ 0x14071BA80
 * Callers:
 *     <none>
 * Callees:
 *     NtReplyWaitReceivePortEx @ 0x14071BAA0 (NtReplyWaitReceivePortEx.c)
 */

__int64 __fastcall NtReplyWaitReceivePort(void *a1)
{
  return NtReplyWaitReceivePortEx(a1, 0LL);
}
