/*
 * XREFs of SshpAlpcShutdownTraceSessions @ 0x1409A25B4
 * Callers:
 *     SshSessionManagerFlushBuffers @ 0x1409A1848 (SshSessionManagerFlushBuffers.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     SSHSupportReleasePushLockExclusive @ 0x14032D18C (SSHSupportReleasePushLockExclusive.c)
 *     SshpAlpcSendMessage @ 0x14084DA40 (SshpAlpcSendMessage.c)
 */

signed __int32 SshpAlpcShutdownTraceSessions()
{
  __int64 v0; // rcx
  _BYTE *v1; // rax
  __int64 v2; // rdx

  ExAcquirePushLockExclusiveEx((ULONG_PTR)&stru_140C38568, 0LL);
  v1 = &unk_140C3857C;
  v2 = 2LL;
  do
  {
    *v1 = 0;
    v1 += 192;
    --v2;
  }
  while ( v2 );
  SshpAlpcSendMessage(v0, 4, 0, 0LL, 1);
  return SSHSupportReleasePushLockExclusive((volatile signed __int64 *)&stru_140C38568);
}
