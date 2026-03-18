/*
 * XREFs of SshpSessionManagerControlSessionCallback @ 0x14081BF30
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     SSHSupportReleasePushLockExclusive @ 0x14036C0A0 (SSHSupportReleasePushLockExclusive.c)
 *     SshpSessionManagerFlushControlEventBuffer @ 0x14081BF60 (SshpSessionManagerFlushControlEventBuffer.c)
 */

__int64 SshpSessionManagerControlSessionCallback()
{
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&SshpSessionManagerLock, 0LL);
  SshpSessionManagerFlushControlEventBuffer();
  return SSHSupportReleasePushLockExclusive((ULONG_PTR)&SshpSessionManagerLock);
}
