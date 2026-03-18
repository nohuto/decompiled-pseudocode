/*
 * XREFs of NtReplyWaitReceivePort @ 0x1407A76A0
 * Callers:
 *     <none>
 * Callees:
 *     NtReplyWaitReceivePortEx @ 0x1407A76C0 (NtReplyWaitReceivePortEx.c)
 */

__int64 __fastcall NtReplyWaitReceivePort(void *a1)
{
  return NtReplyWaitReceivePortEx(a1, 0LL);
}
