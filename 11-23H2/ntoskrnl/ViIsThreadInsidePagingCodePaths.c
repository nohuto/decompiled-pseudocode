/*
 * XREFs of ViIsThreadInsidePagingCodePaths @ 0x140AD9FD0
 * Callers:
 *     VfDeadlockAcquireResource @ 0x140AD6DDC (VfDeadlockAcquireResource.c)
 *     VfDeadlockReleaseResource @ 0x140AD7EFC (VfDeadlockReleaseResource.c)
 * Callees:
 *     ViLowerIrql @ 0x1405D1AB8 (ViLowerIrql.c)
 *     ViRaiseIrqlToDpcLevel @ 0x1405D1B30 (ViRaiseIrqlToDpcLevel.c)
 *     ViDeadlockDetectionLock @ 0x140AD8E08 (ViDeadlockDetectionLock.c)
 *     ViDeadlockDetectionUnlock @ 0x140AD8E40 (ViDeadlockDetectionUnlock.c)
 *     ViDeadlockSearchThread @ 0x140AD9E58 (ViDeadlockSearchThread.c)
 */

_BOOL8 ViIsThreadInsidePagingCodePaths()
{
  struct _KTHREAD *CurrentThread; // rbx
  BOOL v1; // edi
  unsigned __int8 v2; // si
  _QWORD *v3; // rax

  CurrentThread = KeGetCurrentThread();
  v1 = 0;
  v2 = ViRaiseIrqlToDpcLevel();
  ViDeadlockDetectionLock(0);
  v3 = ViDeadlockSearchThread((unsigned __int64)CurrentThread);
  if ( v3 )
    v1 = *((_DWORD *)v3 + 11) != 0;
  ViDeadlockDetectionUnlock(0);
  ViLowerIrql(v2);
  return v1;
}
