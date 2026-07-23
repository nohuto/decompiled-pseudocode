/*
 * XREFs of SSHSupportEtwUnregister @ 0x1409A2678
 * Callers:
 *     SshInitialize @ 0x140B51B2C (SshInitialize.c)
 * Callees:
 *     EtwUnregister @ 0x1407C10D0 (EtwUnregister.c)
 */

NTSTATUS SSHSupportEtwUnregister()
{
  return EtwUnregister(SshpTraceHandle);
}
