/*
 * XREFs of CmpLockHiveListExclusive @ 0x14074EBA4
 * Callers:
 *     CmpUnJoinClassOfTrust @ 0x140207A48 (CmpUnJoinClassOfTrust.c)
 *     CmpLoadKeyCommon @ 0x1402F682C (CmpLoadKeyCommon.c)
 *     CmpJoinClassOfTrust @ 0x14036E3BC (CmpJoinClassOfTrust.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 */

__int64 CmpLockHiveListExclusive()
{
  __int64 result; // rax
  __int64 v1; // rbx

  result = KeAbPreAcquire((__int64)&CmpHiveListHeadLock, 0LL);
  v1 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&CmpHiveListHeadLock, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(&CmpHiveListHeadLock, result, (__int64)&CmpHiveListHeadLock);
  if ( v1 )
    *(_BYTE *)(v1 + 18) = 1;
  return result;
}
