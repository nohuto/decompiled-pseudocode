/*
 * XREFs of TpSetWait @ 0x180083150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl TpSetWait(PTP_WAIT Wait, HANDLE Handle, PLARGE_INTEGER Timeout)
{
  TpSetWaitEx(Wait, Handle, Timeout, 0LL);
}
