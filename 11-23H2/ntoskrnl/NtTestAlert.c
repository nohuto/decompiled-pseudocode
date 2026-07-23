/*
 * XREFs of NtTestAlert @ 0x14076F3D0
 * Callers:
 *     <none>
 * Callees:
 *     KeTestAlertThread @ 0x14030D370 (KeTestAlertThread.c)
 */

NTSTATUS NtTestAlert(void)
{
  return KeTestAlertThread(KeGetCurrentThread()->PreviousMode) != 0 ? 0x101 : 0;
}
