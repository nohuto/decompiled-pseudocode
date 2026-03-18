/*
 * XREFs of SSHSupportEtwRegister @ 0x1408228FC
 * Callers:
 *     SshInitialize @ 0x140B51B2C (SshInitialize.c)
 * Callees:
 *     EtwRegister @ 0x14078D880 (EtwRegister.c)
 */

NTSTATUS SSHSupportEtwRegister()
{
  return EtwRegister(&SLEEPSTUDY_ETW_PROVIDER, 0LL, 0LL, &SshpTraceHandle);
}
