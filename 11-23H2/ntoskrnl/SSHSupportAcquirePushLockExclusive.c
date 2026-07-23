/*
 * XREFs of SSHSupportAcquirePushLockExclusive @ 0x14085ECBC
 * Callers:
 *     SshpSetCollectionActive @ 0x1403AFE18 (SshpSetCollectionActive.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall SSHSupportAcquirePushLockExclusive(ULONG_PTR a1)
{
  ExAcquirePushLockExclusiveEx(a1, 0LL);
}
