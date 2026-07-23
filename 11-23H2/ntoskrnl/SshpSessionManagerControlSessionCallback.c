/*
 * XREFs of SshpSessionManagerControlSessionCallback @ 0x14085B4D0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     SSHSupportReleasePushLockExclusive @ 0x14032D5B0 (SSHSupportReleasePushLockExclusive.c)
 *     SshpSessionManagerFlushControlEventBuffer @ 0x14085B500 (SshpSessionManagerFlushControlEventBuffer.c)
 */

signed __int32 SshpSessionManagerControlSessionCallback()
{
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&SshpSessionManagerLock, 0LL);
  SshpSessionManagerFlushControlEventBuffer();
  return SSHSupportReleasePushLockExclusive((volatile signed __int64 *)&SshpSessionManagerLock);
}
