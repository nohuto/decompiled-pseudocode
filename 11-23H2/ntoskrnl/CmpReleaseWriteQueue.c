/*
 * XREFs of CmpReleaseWriteQueue @ 0x1407523C8
 * Callers:
 *     CmpFlushHive @ 0x140753078 (CmpFlushHive.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x14082752C (CmpFinishBeingActiveFlusherAndReconciler.c)
 * Callees:
 *     CmpMarkLockReleased @ 0x140AF5634 (CmpMarkLockReleased.c)
 */

__int64 __fastcall CmpReleaseWriteQueue(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbx

  v2 = a2[1];
  LOBYTE(a1) = 6;
  a2[1] = 0LL;
  *a2 = 0LL;
  CmpMarkLockReleased(a1);
  return v2;
}
