/*
 * XREFs of RtlpHpLargeWalkHeap @ 0x1800639AC
 * Callers:
 *     RtlpHpHeapWalk @ 0x180063ABC (RtlpHpHeapWalk.c)
 * Callees:
 *     RtlpHpLargeAllocReport @ 0x1801234C0 (RtlpHpLargeAllocReport.c)
 */

__int64 __fastcall RtlpHpLargeWalkHeap(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 *v2; // r8
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  unsigned int v7; // r11d
  unsigned __int64 v9; // rax
  int v10; // edx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rcx

  v2 = (unsigned __int64 *)(a1 + 72);
  if ( *a2 )
  {
    v9 = *v2;
    if ( (*(_BYTE *)(a1 + 80) & 1) != 0 && v9 )
      v9 ^= (unsigned __int64)v2;
    v10 = *(_BYTE *)(a1 + 80) & 1;
    while ( v9 )
    {
      v11 = *(_QWORD *)(v9 + 24) & 0xFFFFFFFFFFFF0000uLL;
      if ( *a2 >= v11 )
      {
        if ( *a2 <= v11 )
          break;
        v12 = *(_QWORD *)(v9 + 8);
      }
      else
      {
        v12 = *(_QWORD *)v9;
      }
      if ( v10 && v12 )
        v9 ^= v12;
      else
        v9 = v12;
    }
    v6 = 0LL;
    if ( v9 )
    {
      v6 = *(_QWORD *)v9;
      if ( !*(_QWORD *)v9 )
      {
        v6 = *(_QWORD *)(v9 + 8);
        if ( !v6 )
        {
          while ( v9 != *v2 )
          {
            v6 = *(_QWORD *)((*(_QWORD *)(v9 + 16) & 0xFFFFFFFFFFFFFFFCuLL) + 8);
            if ( v9 != v6 && v6 )
              goto LABEL_29;
            v9 = *(_QWORD *)(v9 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          }
          return (unsigned int)-2147483622;
        }
      }
    }
    goto LABEL_29;
  }
  if ( (*(_BYTE *)(a1 + 80) & 1) != 0 )
  {
    v6 = *v2;
    if ( !*v2 )
      return (unsigned int)-2147483622;
    v5 = (unsigned __int64)v2 ^ v6;
  }
  else
  {
    v5 = *v2;
    v6 = *v2;
  }
  if ( v5 )
  {
LABEL_29:
    RtlpHpLargeAllocReport(a1, v6, a2);
    return v7;
  }
  return (unsigned int)-2147483622;
}
