/*
 * XREFs of CempLockAcquireShared @ 0x180052F90
 * Callers:
 *     CrmActivityStart @ 0x18002B870 (CrmActivityStart.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CempLockAcquireShared(__int64 a1)
{
  return RtlAcquireSRWLockShared(a1);
}
