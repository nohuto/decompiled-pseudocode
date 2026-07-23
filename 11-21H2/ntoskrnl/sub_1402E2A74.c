/*
 * XREFs of sub_1402E2A74 @ 0x1402E2A74
 * Callers:
 *     sub_14079AE04 @ 0x14079AE04 (sub_14079AE04.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1402E2A74(__int64 a1, unsigned int *a2, unsigned int *a3, unsigned int *a4)
{
  unsigned int v4; // r11d
  unsigned int v6; // ebx
  __int64 v10; // r10
  _DWORD *v11; // rdi
  unsigned int v12; // r8d
  _DWORD *v13; // rdx
  int v14; // r9d
  __int64 v15; // rsi
  unsigned int v16; // ecx
  unsigned int i; // eax
  char result; // al
  _DWORD *v19; // rdx
  unsigned int v20; // esi
  __int64 v21; // rdx
  _DWORD *v22; // rdi
  _DWORD *v23; // r9
  __int64 v24; // rdx
  int v25; // edx
  __int64 v26; // rsi
  _DWORD *v27; // r9
  unsigned int j; // eax

  v4 = *a2;
  v6 = *(_DWORD *)a1;
  if ( *a2 >= *(_DWORD *)a1 )
    return 0;
  v10 = *(_QWORD *)(a1 + 8);
  v11 = (_DWORD *)(v10 + 4 * ((unsigned __int64)(v6 - 1) >> 5));
  v12 = *a2;
  v13 = (_DWORD *)(v10 + 4 * ((unsigned __int64)v4 >> 5));
  if ( v13 != v11 && (*v13 | *((_DWORD *)qword_140015FA0 + (v4 & 0x1F))) == -1 )
  {
    v12 = v4 - (v4 & 0x1F) + 32;
    for ( ++v13; v13 < v11 && *v13 == -1; ++v13 )
      v12 += 32;
  }
  for ( ; v12 < v6; ++v12 )
  {
    if ( !_bittest(*(const signed __int32 **)(a1 + 8), v12) )
      break;
  }
  v14 = 0;
  if ( v13 == v11 )
    goto LABEL_13;
  v15 = v12 & 0x1F;
  if ( (*v13 & ~*((_DWORD *)qword_140015FA0 + v15)) != 0 )
    goto LABEL_13;
  v14 = 32 - v15;
  if ( (_DWORD)v15 != 33 )
  {
    v19 = v13 + 1;
    while ( v19 < v11 && !*v19 )
    {
      ++v19;
      v14 += 32;
      if ( v14 == -1 )
        goto LABEL_17;
    }
LABEL_13:
    v16 = *(_DWORD *)a1;
    for ( i = v14 + v12; i < v16; ++v14 )
    {
      if ( _bittest(*(const signed __int32 **)(a1 + 8), i) )
        break;
      if ( v14 == -1 )
        break;
      ++i;
    }
  }
LABEL_17:
  if ( !v14 )
    goto LABEL_28;
  if ( v12 != v4 )
  {
    v6 = v14 + v12;
LABEL_20:
    *a2 = v6;
    result = 1;
    *a3 = v4;
    *a4 = v12;
    return result;
  }
  v4 += v14;
  if ( v4 < v6 )
  {
    v20 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 > v4 )
    {
      v21 = *(_QWORD *)(a1 + 8);
      v12 = v4;
      v22 = (_DWORD *)(v21 + 4 * ((unsigned __int64)(v20 - 1) >> 5));
      v23 = (_DWORD *)(v21 + 4 * ((unsigned __int64)v4 >> 5));
      if ( v23 != v22 )
      {
        v24 = v4 & 0x1F;
        if ( (*v23 | *((_DWORD *)qword_140015FA0 + v24)) == -1 )
        {
          v12 = v4 - v24 + 32;
          for ( ++v23; v23 < v22 && *v23 == -1; ++v23 )
            v12 += 32;
        }
      }
      for ( ; v12 < v20; ++v12 )
      {
        if ( !_bittest(*(const signed __int32 **)(a1 + 8), v12) )
          break;
      }
      v25 = 0;
      if ( v23 != v22 )
      {
        v26 = v12 & 0x1F;
        if ( (*v23 & ~*((_DWORD *)qword_140015FA0 + v26)) == 0 )
        {
          v25 = 32 - v26;
          if ( (_DWORD)v26 == 33 )
            goto LABEL_51;
          v27 = v23 + 1;
          while ( v27 < v22 && !*v27 )
          {
            ++v27;
            v25 += 32;
            if ( v25 == -1 )
              goto LABEL_51;
          }
        }
      }
      for ( j = v25 + v12; j < *(_DWORD *)a1; ++v25 )
      {
        if ( _bittest(*(const signed __int32 **)(a1 + 8), j) )
          break;
        if ( v25 == -1 )
          break;
        ++j;
      }
LABEL_51:
      if ( v25 )
      {
        v6 = v25 + v12;
        goto LABEL_20;
      }
    }
LABEL_28:
    v12 = v6;
    goto LABEL_20;
  }
  return 0;
}
