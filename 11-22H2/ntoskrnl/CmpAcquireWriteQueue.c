/*
 * XREFs of CmpAcquireWriteQueue @ 0x1402F6914
 * Callers:
 *     CmpFlushHive @ 0x140753398 (CmpFlushHive.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x140828CF4 (CmpBecomeActiveFlusherAndReconciler.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230EE0 (KeAbPreAcquire.c)
 */

__int64 __fastcall CmpAcquireWriteQueue(_QWORD *a1)
{
  __int64 result; // rax

  result = KeAbPreAcquire((__int64)a1, 0LL);
  *a1 = KeGetCurrentThread();
  if ( result )
    *(_BYTE *)(result + 18) = 1;
  return result;
}
