/*
 * XREFs of HvpGenerateLogEntryDirtyData @ 0x1402952F0
 * Callers:
 *     HvpGenerateLogEntry @ 0x140705968 (HvpGenerateLogEntry.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x140293800 (RtlNumberOfSetBits.c)
 *     HvpCopyDataToOffsetArray @ 0x140295224 (HvpCopyDataToOffsetArray.c)
 *     CmpLogDirtyVectorUse @ 0x1406BBF58 (CmpLogDirtyVectorUse.c)
 *     HvpCountSetRangesInVector @ 0x140707354 (HvpCountSetRangesInVector.c)
 *     HvpFindNextDirtyBlock @ 0x1407093AC (HvpFindNextDirtyBlock.c)
 */

__int64 __fastcall HvpGenerateLogEntryDirtyData(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        unsigned int *a5,
        __int64 a6)
{
  _RTL_BITMAP *v6; // rdi
  __int64 v10; // r9
  unsigned int *v11; // rbx
  ULONG v12; // ebx
  unsigned int v13; // eax
  __int64 v15; // [rsp+90h] [rbp+40h] BYREF

  LODWORD(v15) = 0;
  v6 = (_RTL_BITMAP *)(BugCheckParameter2 + 88);
  LODWORD(a6) = 0;
  if ( (unsigned __int8)HvpFindNextDirtyBlock(BugCheckParameter2, (__int64)&v15, (__int64)&a6, 0) )
  {
    v11 = a5;
    do
      HvpCopyDataToOffsetArray(0LL, v15, a2, v10, a4, v11);
    while ( (unsigned __int8)HvpFindNextDirtyBlock(BugCheckParameter2, (__int64)&v15, (__int64)&a6, 0) );
  }
  v12 = RtlNumberOfSetBits(v6);
  v13 = HvpCountSetRangesInVector(v6);
  return CmpLogDirtyVectorUse(BugCheckParameter2, 2LL, v13, v12);
}
