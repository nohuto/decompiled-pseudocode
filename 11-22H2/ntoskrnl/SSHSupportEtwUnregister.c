/*
 * XREFs of SSHSupportEtwUnregister @ 0x1409A2528
 * Callers:
 *     SshInitialize @ 0x140B51AA0 (SshInitialize.c)
 * Callees:
 *     EtwUnregister @ 0x1407C1390 (EtwUnregister.c)
 */

NTSTATUS SSHSupportEtwUnregister()
{
  return EtwUnregister(SshpTraceHandle);
}
