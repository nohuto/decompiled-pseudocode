/*
 * XREFs of SSHSupportAcquirePushLockExclusive @ 0x14085EA7C
 * Callers:
 *     SshpSetCollectionActive @ 0x1403AFC38 (SshpSetCollectionActive.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall SSHSupportAcquirePushLockExclusive(ULONG_PTR a1)
{
  ExAcquirePushLockExclusiveEx(a1, 0LL);
}
