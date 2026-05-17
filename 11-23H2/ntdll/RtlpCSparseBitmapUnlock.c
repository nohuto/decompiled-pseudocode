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

signed __int64 __fastcall RtlpCSparseBitmapUnlock(__int64 a1)
{
  bool v1; // zf
  volatile signed __int64 *v2; // rcx

  v1 = *(_DWORD *)a1 == 1;
  v2 = (volatile signed __int64 *)(*(_QWORD *)(a1 + 8) + 24LL);
  if ( v1 )
    return RtlReleaseSRWLockExclusive(v2);
  else
    return RtlReleaseSRWLockShared(v2);
}
