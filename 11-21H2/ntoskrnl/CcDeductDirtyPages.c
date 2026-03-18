/*
 * XREFs of CcDeductDirtyPages @ 0x14028AD10
 * Callers:
 *     CcDeleteMbcb @ 0x14023F250 (CcDeleteMbcb.c)
 *     CcAcquireByteRangeForWrite @ 0x140289260 (CcAcquireByteRangeForWrite.c)
 *     CcUnpinFileDataEx @ 0x14028A370 (CcUnpinFileDataEx.c)
 *     CcDeleteBcbs @ 0x140388FC8 (CcDeleteBcbs.c)
 * Callees:
 *     CcDeductDirtyPagesInternal @ 0x14028AD4C (CcDeductDirtyPagesInternal.c)
 */

__int64 __fastcall CcDeductDirtyPages(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 v3; // r8

  v2 = 0LL;
  if ( a1 )
  {
    v3 = *(_QWORD *)(a1 + 528);
    if ( CcEnablePerVolumeLazyWriter == 1 )
      v2 = *(_QWORD *)(a1 + 592);
  }
  else
  {
    v3 = *((_QWORD *)PspSystemPartition + 1);
  }
  return CcDeductDirtyPagesInternal(a1, a2, v3, v2);
}
