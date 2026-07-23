/*
 * XREFs of sub_140382478 @ 0x140382478
 * Callers:
 *     sub_1403817C4 @ 0x1403817C4 (sub_1403817C4.c)
 * Callees:
 *     sub_14038770C @ 0x14038770C (sub_14038770C.c)
 */

_WORD *__fastcall sub_140382478(__int64 a1, int a2)
{
  int v2; // ebp
  unsigned int v3; // edx
  __int64 v4; // r9
  unsigned int v5; // r15d
  unsigned int v6; // r8d
  __int64 v7; // r13
  _WORD *v8; // rsi
  _WORD *v9; // r12
  unsigned __int64 v10; // rbp
  unsigned int v11; // ebx
  _WORD *v12; // r10
  int v13; // edi
  _WORD *v14; // rax
  unsigned int v15; // r11d
  int v16; // eax
  unsigned __int16 v17; // cx
  _WORD *result; // rax
  int v19; // edx
  unsigned int v20; // ebx
  unsigned int v21; // r8d
  const signed __int32 *v22; // r14
  unsigned int v23; // r11d
  const signed __int32 *v24; // rdi
  const signed __int32 *v25; // r10
  __int64 v26; // rbp
  int v27; // r8d
  __int64 v28; // rbx
  const signed __int32 *v29; // r10
  unsigned int v30; // ecx
  unsigned int i; // eax
  unsigned int v32; // edi
  unsigned __int16 *v33; // r10
  int v34; // r11d
  int v35; // eax
  int v36; // eax
  _WORD v37[36]; // [rsp+20h] [rbp-48h] BYREF

  v2 = a2;
  v3 = 0;
  v4 = a1;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 800) + 6568LL) )
  {
    v6 = 0;
    v5 = 0;
  }
  else
  {
    v5 = *(_DWORD *)(a1 + 1092);
    v6 = (unsigned int)(*(_DWORD *)(a1 + 808) + 1) >> 1;
  }
  v7 = *(unsigned int *)(a1 + 856);
  v8 = v37;
  v9 = *(_WORD **)(a1 + 1032);
  v37[0] = (*(_WORD *)(a1 + 816) - *(_WORD *)(a1 + 820) + 1) & 0x1FFF;
  if ( *(_DWORD *)(a1 + 1088) && v6 )
  {
    v20 = 0;
    while ( 1 )
    {
LABEL_29:
      v21 = *(_DWORD *)(v4 + 1072);
      if ( v21 <= v20 )
        break;
      v22 = *(const signed __int32 **)(v4 + 1080);
      v23 = v20;
      v24 = &v22[(unsigned __int64)(v21 - 1) >> 5];
      v25 = &v22[(unsigned __int64)v20 >> 5];
      if ( v25 != v24 )
      {
        v26 = v20 & 0x1F;
        if ( (*v25 | *((_DWORD *)qword_140015FA0 + v26)) == -1 )
        {
          v23 = v20 - v26 + 32;
          for ( ++v25; v25 < v24 && *v25 == -1; ++v25 )
            v23 += 32;
        }
        v2 = a2;
      }
      while ( v23 < v21 && _bittest(v22, v23) )
        ++v23;
      v27 = 0;
      if ( v25 != v24 )
      {
        v28 = v23 & 0x1F;
        if ( (*v25 & ~*((_DWORD *)qword_140015FA0 + v28)) == 0 )
        {
          v27 = 32 - v28;
          if ( (_DWORD)v28 == 33 )
            goto LABEL_51;
          v29 = v25 + 1;
          while ( v29 < v24 )
          {
            if ( *v29 )
              break;
            ++v29;
            v27 += 32;
            if ( v27 == -1 )
              goto LABEL_51;
          }
        }
      }
      v30 = *(_DWORD *)(v4 + 1072);
      for ( i = v27 + v23; i < v30; ++v27 )
      {
        if ( _bittest(*(const signed __int32 **)(v4 + 1080), i) )
          break;
        if ( v27 == -1 )
          break;
        ++i;
      }
LABEL_51:
      v20 = v23;
      v3 = 0;
      if ( !v27 )
        break;
      v32 = v27 + v23;
      v33 = &v9[v23];
      if ( v23 < v27 + v23 )
      {
        v34 = *(_DWORD *)(v4 + 776);
        while ( 1 )
        {
          if ( (v34 & 0x40000) == 0 || (v35 = sub_14038770C(*(_QWORD *)(v4 + 800), v20), v3 = 0, !v35) )
          {
            v36 = (_BYTE)v34 ? 0 : *v33 >> 13;
            if ( v36 == v2 )
              break;
          }
          ++v20;
          ++v33;
          if ( v20 >= v32 )
            goto LABEL_29;
        }
        v8 = v33;
LABEL_20:
        result = v8;
        v19 = v8 - v9 + 1;
        if ( v19 == *(_DWORD *)(v4 + 856) )
          v19 = 0;
        *(_DWORD *)(v4 + 1092) = v19;
        return result;
      }
    }
  }
  v10 = (unsigned __int64)&v9[v7];
  v11 = 0;
  v12 = &v9[v5];
  if ( !(_DWORD)v7 )
    return 0LL;
  v13 = *(_DWORD *)(v4 + 776);
  do
  {
    v14 = v12;
    if ( (unsigned __int64)v12 >= v10 )
      v12 = v9;
    v15 = (unsigned __int64)v14 < v10 ? v5 : 0;
    if ( (v13 & 0x40000) == 0 || (v16 = sub_14038770C(*(_QWORD *)(v4 + 800), v15), v3 = 0, !v16) )
    {
      if ( !(_BYTE)v13 )
        v3 = (unsigned __int16)*v12 >> 13;
      v17 = *v12 & 0x1FFF;
      if ( v17 >= (unsigned __int16)(*v8 & 0x1FFF) )
        goto LABEL_13;
      if ( v3 != a2 )
      {
        if ( !v17 && v12 != &v9[*(unsigned int *)(v4 + 16 * (v3 + 78LL))] )
        {
          v8 = v12;
          goto LABEL_20;
        }
LABEL_13:
        v3 = 0;
        goto LABEL_14;
      }
      v3 = 0;
      v8 = v12;
      if ( !v17 )
        goto LABEL_20;
    }
LABEL_14:
    ++v12;
    v5 = v15 + 1;
    ++v11;
  }
  while ( v11 < (unsigned int)v7 );
  if ( v8 != v37 )
    goto LABEL_20;
  return 0LL;
}
