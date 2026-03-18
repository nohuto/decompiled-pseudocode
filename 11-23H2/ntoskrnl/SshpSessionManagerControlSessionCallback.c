/*
 * XREFs of SshpSessionManagerControlSessionCallback @ 0x14085B290
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     SSHSupportReleasePushLockExclusive @ 0x14032D320 (SSHSupportReleasePushLockExclusive.c)
 *     SshpSessionManagerFlushControlEventBuffer @ 0x14085B2C0 (SshpSessionManagerFlushControlEventBuffer.c)
 */

signed __int32 SshpSessionManagerControlSessionCallback()
{
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&SshpSessionManagerLock, 0LL);
  SshpSessionManagerFlushControlEventBuffer();
  return SSHSupportReleasePushLockExclusive((volatile signed __int64 *)&SshpSessionManagerLock);
}
