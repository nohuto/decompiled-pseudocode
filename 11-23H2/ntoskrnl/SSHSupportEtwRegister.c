/*
 * XREFs of SSHSupportEtwRegister @ 0x140822BFC
 * Callers:
 *     SshInitialize @ 0x140B51B2C (SshInitialize.c)
 * Callees:
 *     EtwRegister @ 0x14078DA70 (EtwRegister.c)
 */

NTSTATUS SSHSupportEtwRegister()
{
  return EtwRegister(&SLEEPSTUDY_ETW_PROVIDER, 0LL, 0LL, &SshpTraceHandle);
}
