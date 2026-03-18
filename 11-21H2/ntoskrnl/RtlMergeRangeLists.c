/*
 * XREFs of RtlMergeRangeLists @ 0x1409B59D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeRangeList @ 0x1408397E0 (RtlFreeRangeList.c)
 *     RtlpAddRange @ 0x14083A0B4 (RtlpAddRange.c)
 *     RtlCopyRangeList @ 0x14083A400 (RtlCopyRangeList.c)
 *     RtlpCopyRangeListEntry @ 0x14083A490 (RtlpCopyRangeListEntry.c)
 */

__int64 __fastcall RtlMergeRangeLists(__int64 a1, __int64 *a2, __int64 a3, unsigned int a4)
{
  int v7; // ebx
  __int64 v8; // rbp
  int v9; // edi
  __int64 i; // rax
  __int64 *v11; // rax
  unsigned int v12; // r8d
  __int64 v13; // r13
  __int64 *v14; // rax
  unsigned int v15; // r8d
  __int64 v16; // rax

  v7 = RtlCopyRangeList(a1, a2);
  if ( v7 < 0 )
  {
LABEL_19:
    RtlFreeRangeList(a1);
  }
  else
  {
    v8 = *(_QWORD *)a3 - 40LL;
    if ( a3 != *(_QWORD *)a3 )
    {
      v9 = a4 | 1;
      do
      {
        if ( (*(_BYTE *)(v8 + 34) & 1) != 0 )
        {
          for ( i = *(_QWORD *)(v8 + 16); ; i = *(_QWORD *)(v13 + 40) )
          {
            v13 = i - 40;
            if ( v8 + 16 == i )
              break;
            v11 = RtlpCopyRangeListEntry(i - 40);
            if ( !v11 )
              goto LABEL_18;
            v12 = a4 | 1;
            if ( (*(_BYTE *)(v13 + 33) & 2) == 0 )
              v12 = a4;
            v7 = RtlpAddRange((_QWORD *)a1, v11, v12);
          }
          v9 = a4 | 1;
        }
        else
        {
          v14 = RtlpCopyRangeListEntry(v8);
          if ( !v14 )
          {
LABEL_18:
            v7 = -1073741670;
            goto LABEL_19;
          }
          v15 = v9;
          if ( (*(_BYTE *)(v8 + 33) & 2) == 0 )
            v15 = a4;
          v7 = RtlpAddRange((_QWORD *)a1, v14, v15);
          if ( v7 < 0 )
            goto LABEL_19;
        }
        v16 = *(_QWORD *)(v8 + 40);
        v8 = v16 - 40;
      }
      while ( a3 != v16 );
    }
    *(_DWORD *)(a1 + 20) += *(_DWORD *)(a3 + 20);
    *(_DWORD *)(a1 + 24) += *(_DWORD *)(a3 + 20);
  }
  return (unsigned int)v7;
}
