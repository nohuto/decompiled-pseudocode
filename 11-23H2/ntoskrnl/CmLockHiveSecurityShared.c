/*
 * XREFs of CmLockHiveSecurityShared @ 0x140AF50A0
 * Callers:
 *     CmpCreateKeyControlBlock @ 0x1406D87C0 (CmpCreateKeyControlBlock.c)
 *     CmpAssignSecurityToKcb @ 0x14076AC50 (CmpAssignSecurityToKcb.c)
 *     CmpLockTwoSecurityCachesExclusiveShared @ 0x1407DE0CC (CmpLockTwoSecurityCachesExclusiveShared.c)
 *     CmDumpKeyToFile @ 0x140A0AD54 (CmDumpKeyToFile.c)
 *     CmSaveMergedKeys @ 0x140A0C034 (CmSaveMergedKeys.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FD2D0 (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 __fastcall CmLockHiveSecurityShared(__int64 a1)
{
  volatile signed __int64 *v1; // rdi
  unsigned __int64 v2; // rbx
  signed __int64 result; // rax

  v1 = (volatile signed __int64 *)(a1 + 1784);
  v2 = KeAbPreAcquire(a1 + 1784, 0LL);
  result = _InterlockedCompareExchange64(v1, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((signed __int64 *)v1, 0LL, v2, (__int64)v1);
  if ( v2 )
    *(_BYTE *)(v2 + 18) = 1;
  return result;
}
