/*
 * XREFs of RtlCSparseBitmapBitmaskRead @ 0x140323A1C
 * Callers:
 *     ExGetHeapFromVA @ 0x1402AC680 (ExGetHeapFromVA.c)
 *     RtlpHpFreeHeap @ 0x1402AC750 (RtlpHpFreeHeap.c)
 *     ExFreeHeapPool @ 0x140323340 (ExFreeHeapPool.c)
 *     RtlpHpMetadataCommit @ 0x1403C7414 (RtlpHpMetadataCommit.c)
 *     RtlpHpExtrasSetPresent @ 0x1405B6B04 (RtlpHpExtrasSetPresent.c)
 *     RtlpHpSizeHeapInternal @ 0x1405B6DC0 (RtlpHpSizeHeapInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlCSparseBitmapBitmaskRead(__int64 a1, unsigned __int64 a2)
{
  int v2; // eax

  v2 = 0;
  if ( _bittest64((const signed __int64 *)(a1 + 56), a2 >> 30) )
    v2 = (_bittest64(*(const signed __int64 **)a1, a2 >> 15) != 0) + 1;
  if ( v2 == 2 )
    return (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * (a2 >> 6)) >> (a2 & 0x3F)) & 3LL;
  else
    return 0LL;
}
