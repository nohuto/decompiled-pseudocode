/*
 * XREFs of sub_1409B863C @ 0x1409B863C
 * Callers:
 *     RtlAddResourceAttributeAce @ 0x1409B8170 (RtlAddResourceAttributeAce.c)
 * Callees:
 *     sub_1402DCD64 @ 0x1402DCD64 (sub_1402DCD64.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1409B863C(__int64 a1, unsigned int *a2, unsigned int *a3)
{
  unsigned int v3; // esi
  unsigned __int64 v7; // rax
  int v8; // ecx
  int v9; // edi
  unsigned int v10; // ebx
  unsigned int v11; // r12d
  unsigned int v12; // r11d
  unsigned __int16 v13; // ax
  unsigned int v14; // r8d
  unsigned int v15; // ecx
  unsigned int v16; // edx
  unsigned int v17; // ebx
  unsigned int v18; // r11d
  int v19; // ecx
  unsigned __int64 v20; // rax
  unsigned int v21; // eax
  int v22; // eax
  unsigned int v23; // ebp
  unsigned __int16 v24; // ax
  unsigned int v25; // ebp
  _DWORD *v26; // r11
  unsigned int i; // r12d
  unsigned int v28; // ebp
  __int64 v29; // rax
  unsigned int v30; // ecx
  unsigned int j; // r12d
  void *v32; // r11
  int v33; // ebx
  __int64 v34; // rcx
  __int64 v36; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  v36 = 0LL;
  LODWORD(v7) = 0;
  if ( !a1 || !a3 )
    return (unsigned int)-1073741811;
  v8 = *(_DWORD *)(a1 + 16);
  if ( v8 )
  {
    v7 = 4LL * (unsigned int)(v8 - 1);
    if ( v7 > 0xFFFFFFFF )
      return (unsigned int)-1073741675;
  }
  v10 = v7 + 20;
  if ( (unsigned int)(v7 + 20) < 0x14 )
    return (unsigned int)-1073741675;
  v9 = sub_1402DCD64(*(_WORD **)a1, 0xFFFFuLL, &v36);
  if ( v9 < 0 )
    return (unsigned int)v9;
  v11 = v36 + 2;
  if ( (int)v36 + 2 < (unsigned int)v36 )
    return (unsigned int)-1073741675;
  v12 = v11 + v10;
  if ( v11 + v10 < v10 )
    return (unsigned int)-1073741675;
  v13 = *(_WORD *)(a1 + 8);
  if ( !v13 )
    goto LABEL_30;
  if ( v13 > 2u )
  {
    if ( v13 == 3 )
    {
      v17 = 0;
      if ( *(_DWORD *)(a1 + 16) )
      {
        while ( 1 )
        {
          v9 = sub_1402DCD64(*(_WORD **)(*(_QWORD *)(a1 + 24) + 8LL * v17), 0xFFFFuLL, &v36);
          if ( v9 < 0 )
            return (unsigned int)v9;
          v19 = v36 + 2;
          if ( (int)v36 + 2 < (unsigned int)v36 || v19 + v18 < v18 )
            return (unsigned int)-1073741675;
          ++v17;
          v12 = v19 + v18;
          if ( v17 >= *(_DWORD *)(a1 + 16) )
            goto LABEL_30;
        }
      }
      goto LABEL_30;
    }
    if ( v13 == 5 )
    {
LABEL_16:
      v14 = *(_DWORD *)(a1 + 16);
      v15 = 0;
      if ( v14 )
      {
        while ( 1 )
        {
          v16 = v12 + *(_DWORD *)(*(_QWORD *)(a1 + 24) + 16LL * v15 + 8);
          if ( v16 < v12 )
            return (unsigned int)-1073741675;
          v12 = v16 + 4;
          if ( v16 + 4 < v16 )
            return (unsigned int)-1073741675;
          if ( ++v15 >= v14 )
            goto LABEL_30;
        }
      }
      goto LABEL_30;
    }
    if ( v13 != 6 )
    {
      if ( v13 != 16 )
        goto LABEL_30;
      goto LABEL_16;
    }
  }
  v20 = 8LL * *(unsigned int *)(a1 + 16);
  if ( v20 > 0xFFFFFFFF || (unsigned int)v20 + v12 < v12 )
    return (unsigned int)-1073741675;
  v12 += v20;
LABEL_30:
  if ( v12 + 3 < v12 )
    return (unsigned int)-1073741675;
  v21 = (v12 + 3) & 0xFFFFFFFC;
  v9 = 0;
  if ( *a3 < v21 )
  {
    *a3 = v21;
    return (unsigned int)-1073741789;
  }
  if ( !a2 )
    return (unsigned int)-1073741811;
  *a3 = v21;
  memset(a2, 0, v21);
  *((_WORD *)a2 + 2) = *(_WORD *)(a1 + 8);
  *((_WORD *)a2 + 3) = *(_WORD *)(a1 + 10);
  a2[2] = *(_DWORD *)(a1 + 12);
  a2[3] = *(_DWORD *)(a1 + 16);
  v22 = *(_DWORD *)(a1 + 16);
  v23 = 4 * v22 + 16;
  if ( !v22 )
    v23 = 20;
  *a2 = v23;
  memmove((char *)a2 + v23, *(const void **)a1, v11);
  v24 = *(_WORD *)(a1 + 8);
  v25 = v11 + v23;
  v26 = (unsigned int *)((char *)a2 + v25);
  if ( !v24 )
    return (unsigned int)-1073741811;
  if ( v24 <= 2u )
    goto LABEL_51;
  if ( v24 != 3 )
  {
    if ( v24 == 5 )
      goto LABEL_42;
    if ( v24 != 6 )
    {
      if ( v24 == 16 )
      {
LABEL_42:
        for ( i = 0; i < *(_DWORD *)(a1 + 16); v26 = (unsigned int *)((char *)a2 + v25) )
        {
          a2[i + 4] = v25;
          v28 = v25 + 4;
          *v26 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 16LL * i + 8);
          v29 = *(_QWORD *)(a1 + 24);
          v30 = *(_DWORD *)(v29 + 16LL * i + 8);
          if ( v30 )
          {
            memmove((char *)a2 + v28, *(const void **)(v29 + 16LL * i), v30);
            v29 = *(_QWORD *)(a1 + 24);
          }
          v25 = *(_DWORD *)(v29 + 16LL * i++ + 8) + v28;
        }
        return (unsigned int)v9;
      }
      return (unsigned int)-1073741811;
    }
LABEL_51:
    if ( *(_DWORD *)(a1 + 16) )
    {
      do
      {
        v34 = v3++;
        a2[v34 + 4] = v25;
        v25 += 8;
        *(_QWORD *)v26 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v34);
        v26 = (unsigned int *)((char *)a2 + v25);
      }
      while ( v3 < *(_DWORD *)(a1 + 16) );
    }
    return (unsigned int)v9;
  }
  for ( j = 0; j < *(_DWORD *)(a1 + 16); ++j )
  {
    a2[j + 4] = v25;
    v9 = sub_1402DCD64(*(_WORD **)(*(_QWORD *)(a1 + 24) + 8LL * j), 0xFFFFuLL, &v36);
    if ( v9 < 0 )
      break;
    v33 = v36 + 2;
    memmove(v32, *(const void **)(*(_QWORD *)(a1 + 24) + 8LL * j), (unsigned int)(v36 + 2));
    v25 += v33;
  }
  return (unsigned int)v9;
}
