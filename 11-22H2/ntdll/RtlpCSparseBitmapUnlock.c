/*
 * XREFs of RtlpCSparseBitmapUnlock @ 0x18004AE04
 * Callers:
 *     RtlCSparseBitmapBitmaskWrite @ 0x18004AC24 (RtlCSparseBitmapBitmaskWrite.c)
 *     RtlpCSparseBitmapPageCommit @ 0x18004ACD0 (RtlpCSparseBitmapPageCommit.c)
 *     RtlpHpVaMgrRangeCreate @ 0x18004B09C (RtlpHpVaMgrRangeCreate.c)
 *     RtlpCSparseBitmapPageDecommit @ 0x180064DF8 (RtlpCSparseBitmapPageDecommit.c)
 *     RtlpUnlockHeapManagerForCloning @ 0x1800FFD58 (RtlpUnlockHeapManagerForCloning.c)
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
