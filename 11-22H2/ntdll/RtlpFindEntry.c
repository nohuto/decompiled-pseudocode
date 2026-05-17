/*
 * XREFs of RtlpFindEntry @ 0x1800448D0
 * Callers:
 *     RtlpFreeHeap @ 0x1800397E0 (RtlpFreeHeap.c)
 *     RtlpAllocateHeap @ 0x18003F320 (RtlpAllocateHeap.c)
 *     RtlpCreateSplitBlock @ 0x180044490 (RtlpCreateSplitBlock.c)
 *     RtlpInsertFreeBlock @ 0x180044950 (RtlpInsertFreeBlock.c)
 *     RtlZeroHeap @ 0x180101F50 (RtlZeroHeap.c)
 *     RtlpValidateHeapSegment @ 0x1801071B0 (RtlpValidateHeapSegment.c)
 * Callees:
 *     RtlpHeapFindListLookupEntry @ 0x180044C30 (RtlpHeapFindListLookupEntry.c)
 */

__int64 __fastcall RtlpFindEntry(__int64 a1, unsigned __int64 a2)
{
  __int64 *v2; // rbx
  int v3; // edi
  int v4; // esi
  int v5; // r9d
  __int64 result; // rax
  __int64 *v7; // rax

  v2 = *(__int64 **)(a1 + 312);
  v3 = a2;
  v4 = a1;
  if ( a2 >= *((unsigned int *)v2 + 2) )
  {
    while ( 1 )
    {
      v7 = (__int64 *)*v2;
      if ( !*v2 )
        break;
      v2 = (__int64 *)*v2;
      if ( a2 < *((unsigned int *)v7 + 2) )
        goto LABEL_2;
    }
    v5 = *((_DWORD *)v2 + 2) - 1;
  }
  else
  {
LABEL_2:
    v5 = a2;
  }
  while ( 1 )
  {
    result = RtlpHeapFindListLookupEntry(v4, (_DWORD)v2, 1, v5, v3);
    if ( result )
      break;
    v2 = (__int64 *)*v2;
    v5 = *((_DWORD *)v2 + 6);
  }
  return result;
}
