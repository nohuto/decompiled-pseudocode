/*
 * XREFs of RtlpHpTagContextFindMapping @ 0x180067444
 * Callers:
 *     RtlpHpTagContextAllocateTag @ 0x180065AB4 (RtlpHpTagContextAllocateTag.c)
 *     RtlpHpTagQueryTags @ 0x18008BC00 (RtlpHpTagQueryTags.c)
 *     RtlpHpTagContextGetTag @ 0x1800A04A4 (RtlpHpTagContextGetTag.c)
 * Callees:
 *     RtlpHpTagMappingComparison @ 0x180079400 (RtlpHpTagMappingComparison.c)
 */

__int64 __fastcall RtlpHpTagContextFindMapping(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rbx
  __int64 v7; // r10
  int v8; // r9d

  v6 = 0LL;
LABEL_2:
  v7 = a3 & (-1LL << (*(_BYTE *)(a1 + 12) & 0x1F));
  if ( v6 )
    goto LABEL_5;
  v8 = *(_DWORD *)(a1 + 12) >> 5;
  if ( v8 )
  {
    v6 = *(_QWORD *)(a1 + 16)
       + 8LL
       * ((37
         * (BYTE6(v7)
          + 37
          * (BYTE5(v7)
           + 37
           * (BYTE4(v7) + 37 * (BYTE3(v7) + 37 * (BYTE2(v7) + 37 * (BYTE1(v7) + 37 * ((unsigned __int8)v7 + 11623883)))))))
         + HIBYTE(v7)) & (unsigned int)(v8 - 1));
LABEL_5:
    while ( 1 )
    {
      v6 = *(_QWORD *)v6;
      if ( (v6 & 1) != 0 )
        break;
      if ( v7 == ((-1LL << (*(_BYTE *)(a1 + 12) & 0x1F)) & *(_QWORD *)(v6 + 8)) )
      {
        if ( v6 && !(unsigned int)RtlpHpTagMappingComparison(v6, a2) )
          goto LABEL_2;
        return v6;
      }
    }
  }
  return 0LL;
}
