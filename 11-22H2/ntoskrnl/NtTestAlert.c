/*
 * XREFs of NtTestAlert @ 0x14076F6F0
 * Callers:
 *     <none>
 * Callees:
 *     KeTestAlertThread @ 0x14030CF00 (KeTestAlertThread.c)
 */

NTSTATUS NtTestAlert(void)
{
  return KeTestAlertThread(KeGetCurrentThread()->PreviousMode) != 0 ? 0x101 : 0;
}
