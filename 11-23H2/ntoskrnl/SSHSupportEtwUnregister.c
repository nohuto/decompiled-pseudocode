/*
 * XREFs of SSHSupportEtwUnregister @ 0x1409A2478
 * Callers:
 *     SshInitialize @ 0x140B51B2C (SshInitialize.c)
 * Callees:
 *     EtwUnregister @ 0x1407C0E00 (EtwUnregister.c)
 */

NTSTATUS SSHSupportEtwUnregister()
{
  return EtwUnregister(SshpTraceHandle);
}
