/*
 * XREFs of IntersectFindDataRange @ 0x1C002C074
 * Callers:
 *     PinDataFormatIntersection @ 0x1C002B320 (PinDataFormatIntersection.c)
 * Callees:
 *     IntersectFindBestMatch @ 0x1C002BEE8 (IntersectFindBestMatch.c)
 */

__int64 __fastcall IntersectFindDataRange(_DWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 BestMatch; // rbx
  __int64 v7; // rsi
  __int64 *Pool2; // r14
  __int64 i; // r11
  __int64 v10; // r10
  _DWORD *v11; // r8
  unsigned int v12; // ecx
  bool v13; // al
  unsigned int j; // edx
  unsigned int v15; // r9d
  unsigned int v16; // ecx
  unsigned int v17; // r8d
  unsigned int v18; // edx
  unsigned int v19; // r9d
  unsigned int v20; // edx
  unsigned int v21; // r8d
  unsigned int v22; // ecx
  unsigned int v23; // r8d
  unsigned int v24; // eax
  unsigned int *v25; // rcx
  __int64 v26; // rdx
  unsigned int v27; // eax
  unsigned int v28; // eax

  BestMatch = 0LL;
  v7 = 0LL;
  Pool2 = (__int64 *)ExAllocatePool2(256LL, 8LL * a3, 1096972357LL);
  if ( Pool2 )
  {
    for ( i = 0LL; (unsigned int)i < a3; i = ((*(_DWORD *)(*(_QWORD *)(a2 + 8 * i) + 4LL) & 2) != 0)
                                           + 1
                                           + (unsigned int)i )
    {
      v10 = *(_QWORD *)(a2 + 8 * i);
      v11 = *(_DWORD **)(v10 + 120);
      v12 = *(_DWORD *)(v10 + 108);
      if ( *a1 >= 0x58u && a1[16] >= *(_DWORD *)(v10 + 64) )
      {
        v13 = 0;
        if ( v12 )
        {
          for ( j = 0; j < v12; ++j )
          {
            if ( v13 )
              break;
            v13 = a1[19] <= *v11 && a1[20] >= *v11;
            ++v11;
          }
        }
        else
        {
          v15 = a1[20];
          v16 = a1[19];
          v17 = *(_DWORD *)(v10 + 80);
          v18 = *(_DWORD *)(v10 + 76);
          if ( v16 <= v15 && v18 <= v17 )
          {
            if ( v16 < v18 )
              v13 = v15 >= v18;
            else
              v13 = v16 <= v17;
          }
        }
        if ( v13 )
        {
          v19 = a1[18];
          v13 = 0;
          v20 = a1[17];
          v21 = *(_DWORD *)(v10 + 72);
          v22 = *(_DWORD *)(v10 + 68);
          if ( v20 <= v19 && v22 <= v21 )
          {
            if ( v20 < v22 )
              v13 = v19 >= v22;
            else
              v13 = v20 <= v21;
          }
        }
        if ( v13 )
        {
          Pool2[v7] = v10;
          v7 = (unsigned int)(v7 + 1);
        }
      }
    }
    if ( *a1 < 0x58u )
      v23 = -1;
    else
      v23 = a1[20];
    if ( (_DWORD)v7 == 1 )
    {
      BestMatch = *Pool2;
      v24 = *(_DWORD *)(*Pool2 + 108);
      if ( v24 )
      {
        *(_DWORD *)(BestMatch + 100) = 0;
        v25 = *(unsigned int **)(BestMatch + 120);
        v26 = v24;
        do
        {
          v27 = *v25;
          if ( *v25 <= v23 && v27 > *(_DWORD *)(BestMatch + 100) )
            *(_DWORD *)(BestMatch + 100) = v27;
          ++v25;
          --v26;
        }
        while ( v26 );
      }
      else
      {
        v28 = *(_DWORD *)(BestMatch + 80);
        if ( v28 >= v23 )
          v28 = v23;
        *(_DWORD *)(BestMatch + 100) = v28;
      }
    }
    else if ( (unsigned int)v7 > 1 )
    {
      BestMatch = IntersectFindBestMatch(Pool2, v7, v23);
    }
    ExFreePool(Pool2);
  }
  return BestMatch;
}
