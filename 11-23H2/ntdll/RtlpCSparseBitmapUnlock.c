/*
 * XREFs of RtlpCSparseBitmapUnlock @ 0x18004ACA4
 * Callers:
 *     RtlCSparseBitmapBitmaskWrite @ 0x18004AAC4 (RtlCSparseBitmapBitmaskWrite.c)
 *     RtlpCSparseBitmapPageCommit @ 0x18004AB70 (RtlpCSparseBitmapPageCommit.c)
 *     RtlpHpVaMgrRangeCreate @ 0x18004AF3C (RtlpHpVaMgrRangeCreate.c)
 *     RtlpCSparseBitmapPageDecommit @ 0x180064CC8 (RtlpCSparseBitmapPageDecommit.c)
 *     RtlpUnlockHeapManagerForCloning @ 0x180101168 (RtlpUnlockHeapManagerForCloning.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlpCSparseBitmapUnlock(__int64 a1)
{
  bool v1; // zf
  _RTL_SRWLOCK *v2; // rcx

  v1 = *(_DWORD *)a1 == 1;
  v2 = (_RTL_SRWLOCK *)(*(_QWORD *)(a1 + 8) + 24LL);
  if ( v1 )
    RtlReleaseSRWLockExclusive(v2);
  else
    RtlReleaseSRWLockShared(v2);
}
