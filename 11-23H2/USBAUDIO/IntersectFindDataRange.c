/*
 * XREFs of IntersectFindDataRange @ 0x1C0037F60
 * Callers:
 *     PinDataFormatIntersection @ 0x1C0037EA0 (PinDataFormatIntersection.c)
 * Callees:
 *     IntersectFindBestMatch @ 0x1C002C68C (IntersectFindBestMatch.c)
 *     IntersectRangeCompare @ 0x1C003ACC4 (IntersectRangeCompare.c)
 */

__int64 __fastcall IntersectFindDataRange(_DWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 BestMatch; // rdi
  __int64 v7; // rbp
  __int64 *Pool2; // r14
  __int64 v9; // r10
  __int64 v10; // r12
  __int64 v11; // r15
  _DWORD *v12; // rcx
  unsigned int v13; // r8d
  unsigned int v14; // r8d
  unsigned int v15; // eax
  unsigned int *v16; // rcx
  __int64 v17; // rdx
  unsigned int v18; // eax
  char v20; // al
  unsigned int i; // edx
  unsigned int v22; // r9d
  unsigned int v23; // edx
  unsigned int v24; // r8d
  unsigned int v25; // ecx
  unsigned int v26; // eax

  BestMatch = 0LL;
  v7 = 0LL;
  Pool2 = (__int64 *)ExAllocatePool2(256LL, 8LL * a3, 1096972357LL);
  if ( Pool2 )
  {
    v9 = 0LL;
    if ( a3 )
    {
      do
      {
        v10 = 8 * v9;
        v11 = *(_QWORD *)(8 * v9 + a2);
        v12 = *(_DWORD **)(v11 + 120);
        v13 = *(_DWORD *)(v11 + 108);
        if ( *a1 >= 0x58u && a1[16] >= *(_DWORD *)(v11 + 64) )
        {
          if ( v13 )
          {
            v20 = 0;
            for ( i = 0; i < v13; ++i )
            {
              if ( v20 )
                break;
              v20 = a1[19] <= *v12 && a1[20] >= *v12;
              ++v12;
            }
          }
          else
          {
            v20 = IntersectRangeCompare(
                    (unsigned int)a1[19],
                    (unsigned int)a1[20],
                    *(unsigned int *)(v11 + 76),
                    *(unsigned int *)(v11 + 80));
          }
          if ( v20 == 1 )
          {
            v22 = a1[18];
            v20 = 0;
            v23 = a1[17];
            v24 = *(_DWORD *)(v11 + 72);
            v25 = *(_DWORD *)(v11 + 68);
            if ( v23 <= v22 && v25 <= v24 )
            {
              if ( v23 < v25 )
                v20 = v22 >= v25;
              else
                v20 = v23 <= v24;
            }
          }
          if ( v20 )
          {
            Pool2[v7] = v11;
            v7 = (unsigned int)(v7 + 1);
          }
        }
        v9 = ((*(_DWORD *)(*(_QWORD *)(v10 + a2) + 4LL) & 2) != 0) + 1 + (unsigned int)v9;
      }
      while ( (unsigned int)v9 < a3 );
      BestMatch = 0LL;
    }
    if ( *a1 < 0x58u )
      v14 = -1;
    else
      v14 = a1[20];
    if ( (_DWORD)v7 == 1 )
    {
      BestMatch = *Pool2;
      v15 = *(_DWORD *)(*Pool2 + 108);
      if ( v15 )
      {
        v16 = *(unsigned int **)(BestMatch + 120);
        v17 = v15;
        *(_DWORD *)(BestMatch + 100) = 0;
        do
        {
          v18 = *v16;
          if ( *v16 <= v14 && v18 > *(_DWORD *)(BestMatch + 100) )
            *(_DWORD *)(BestMatch + 100) = v18;
          ++v16;
          --v17;
        }
        while ( v17 );
      }
      else
      {
        v26 = *(_DWORD *)(BestMatch + 80);
        if ( v26 >= v14 )
          v26 = v14;
        *(_DWORD *)(BestMatch + 100) = v26;
      }
    }
    else if ( (unsigned int)v7 > 1 )
    {
      BestMatch = IntersectFindBestMatch(Pool2, v7, v14);
    }
    ExFreePool(Pool2);
  }
  return BestMatch;
}
