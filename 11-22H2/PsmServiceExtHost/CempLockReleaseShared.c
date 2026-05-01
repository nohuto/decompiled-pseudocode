/*
 * XREFs of CempLockReleaseShared @ 0x1800531BC
 * Callers:
 *     CrmActivityStart @ 0x18002B870 (CrmActivityStart.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CempLockReleaseShared(__int64 a1)
{
  return RtlReleaseSRWLockShared(a1);
}
