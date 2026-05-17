/*
 * XREFs of RtlpCSparseBitmapUnlock @ 0x18005656C
 * Callers:
 *     RtlpHpVaMgrRangeCreate @ 0x180056224 (RtlpHpVaMgrRangeCreate.c)
 *     RtlCSparseBitmapBitmaskWrite @ 0x1800564C0 (RtlCSparseBitmapBitmaskWrite.c)
 *     RtlpCSparseBitmapPageCommit @ 0x180056588 (RtlpCSparseBitmapPageCommit.c)
 *     RtlpCSparseBitmapPageDecommit @ 0x180058338 (RtlpCSparseBitmapPageDecommit.c)
 *     RtlpUnlockHeapManagerForCloning @ 0x18010008C (RtlpUnlockHeapManagerForCloning.c)
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
