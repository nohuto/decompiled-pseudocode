/*
 * XREFs of MiLockFileExtentsExclusive @ 0x140A343F0
 * Callers:
 *     MiInsertCopyExtents @ 0x14063E36C (MiInsertCopyExtents.c)
 *     MiMergeCopyExtents @ 0x14063E91C (MiMergeCopyExtents.c)
 *     MiDeleteFileExtentList @ 0x140A340C0 (MiDeleteFileExtentList.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 */

__int64 MiLockFileExtentsExclusive()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 result; // rax
  __int64 v2; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  result = KeAbPreAcquire((__int64)&qword_140C658A8, 0LL);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140C658A8, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(&qword_140C658A8, result, (__int64)&qword_140C658A8);
  if ( v2 )
    *(_BYTE *)(v2 + 18) = 1;
  return result;
}
