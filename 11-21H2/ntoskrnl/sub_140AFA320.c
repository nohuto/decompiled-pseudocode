/*
 * XREFs of sub_140AFA320 @ 0x140AFA320
 * Callers:
 *     sub_140AFA274 @ 0x140AFA274 (sub_140AFA274.c)
 * Callees:
 *     sub_140213A40 @ 0x140213A40 (sub_140213A40.c)
 *     sub_1403BF66C @ 0x1403BF66C (sub_1403BF66C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140AFA5EC @ 0x140AFA5EC (sub_140AFA5EC.c)
 *     sub_140AFA63C @ 0x140AFA63C (sub_140AFA63C.c)
 */

__int64 __fastcall sub_140AFA320(__int64 a1)
{
  unsigned int v1; // edi
  __int64 result; // rax
  char *v3; // rcx
  unsigned __int64 v4; // r8
  unsigned int v5; // ebp
  __int64 v6; // rdx
  char *v7; // rax
  char v8; // r9
  unsigned int v9; // ebx
  unsigned int v10; // eax
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // rsi
  unsigned int v13; // edx
  unsigned __int64 v14; // r8
  void *v15; // r14
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // rax
  _QWORD *v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rdx
  unsigned __int16 v21; // r8
  _QWORD *v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r10
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // r8
  unsigned int v28; // eax
  unsigned int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // r10
  __int64 v32; // rcx
  bool v33; // zf
  __int64 v34; // rax
  unsigned int v35; // r15d
  __int64 v36; // rbx

  v1 = 0;
  result = sub_140213A40(a1, 1128878145, 0, 0);
  if ( !result )
    return result;
  v3 = (char *)(result + 44);
  v4 = result + *(unsigned int *)(result + 4);
  v5 = 2048;
  if ( result + 46 > v4 )
    goto LABEL_11;
  do
  {
    v6 = (unsigned __int8)v3[1];
    if ( (unsigned __int8)v6 < 2u || (unsigned __int64)&v3[v6] > v4 )
      break;
    v7 = v3;
    v3 += v6;
    v8 = *v7;
    if ( *v7 )
    {
      if ( v8 != 9 )
      {
        if ( v8 != 11 || (unsigned __int8)v6 < 0x28u )
          continue;
LABEL_38:
        ++v1;
        continue;
      }
      v33 = (_BYTE)v6 == 16;
    }
    else
    {
      v33 = (_BYTE)v6 == 8;
    }
    if ( v33 )
      goto LABEL_38;
  }
  while ( (unsigned __int64)(v3 + 2) <= v4 );
  if ( v1 > 0x800 )
    v1 = 2048;
LABEL_11:
  if ( byte_140C54BF8 )
  {
    v5 = dword_140C0CAA0;
    v9 = (v1 + dword_140C0CAA0 - 1) / dword_140C0CAA0;
    if ( v9 > 0x40 )
    {
      v9 = 64;
      v1 = dword_140C0CAA0 << 6;
    }
  }
  else
  {
    v9 = 1;
  }
  v10 = sub_1403BF66C();
  result = sub_140AFA63C(v9, v1, 0LL, v10);
  v12 = qword_140C4AD18;
  if ( qword_140C4AD18 )
  {
    *(_DWORD *)(qword_140C4AD18 + 60) = v1;
    v13 = 0;
    *(_DWORD *)(v12 + 56) = v9;
    if ( v1 )
    {
      if ( v1 < 4 )
        goto LABEL_20;
      v11 = *(_QWORD *)v12;
      v14 = v12 + 8;
      v15 = *(void **)(v12 + 8);
      v16 = *(_QWORD *)v12 + 4LL * (v1 - 1);
      v17 = (unsigned __int64)v15 + 4 * v1 - 4;
      if ( (unsigned __int64)v15 <= v16 && v17 >= v11 )
        goto LABEL_20;
      if ( (unsigned __int64)v15 <= v12 && v17 >= v12 )
        goto LABEL_20;
      if ( (unsigned __int64)v15 <= v14 && v17 >= v12 + 8 )
        goto LABEL_20;
      if ( v11 <= v12 && v16 >= v12 )
        goto LABEL_20;
      if ( v11 <= v14 && v16 >= v14 )
        goto LABEL_20;
      v34 = v1 & 0xFFFFFFFC;
      do
      {
        v13 += 4;
        v35 = v13;
      }
      while ( v13 < (unsigned int)v34 );
      v36 = 4 * v34;
      memset(*(void **)v12, -1, 4 * v34);
      memset(v15, -1, v36 & 0xFFFFFFFFFFFFFFFCuLL);
      v13 = v35;
      if ( v35 < v1 )
      {
LABEL_20:
        v18 = (_QWORD *)qword_140C4AD18;
        v19 = 4LL * v13;
        v20 = v1 - v13;
        do
        {
          *(_DWORD *)(v19 + *v18) = -1;
          *(_DWORD *)(v19 + v18[1]) = -1;
          v19 += 4LL;
          --v20;
        }
        while ( v20 );
      }
    }
    v21 = 0;
    if ( *(_DWORD *)(v12 + 56) )
    {
      v22 = (_QWORD *)qword_140C4AD18;
      LODWORD(v11) = 0;
      do
      {
        v23 = v21++;
        *(_DWORD *)(v22[3] + 4 * v23) = v11;
        v11 = v21;
        *(_DWORD *)(v22[4] + 4 * v23) = 0;
        *(_DWORD *)(v22[5] + 4 * v23) = v5;
      }
      while ( (unsigned int)v21 < *(_DWORD *)(v12 + 56) );
    }
    v24 = qword_140C4AD18;
    v25 = v21;
    v26 = v5 * (v21 - 1);
    v27 = 0LL;
    *(_DWORD *)(*(_QWORD *)(qword_140C4AD18 + 40) + 4 * v25 - 4) = v1 - v26;
    if ( v1 )
    {
      v11 = 0LL;
      do
      {
        v25 = *(_QWORD *)(v24 + 16);
        v28 = v27;
        v27 = (unsigned int)(v27 + 1);
        *(_DWORD *)(v11 + v25) = v28 / v5;
        v11 += 4LL;
      }
      while ( (unsigned int)v27 < v1 );
    }
    v29 = *(_DWORD *)(v12 + 56);
    v30 = 0LL;
    if ( v29 )
    {
      LODWORD(v11) = 0;
      do
      {
        v27 = 0LL;
        v25 = v29;
        if ( v29 )
        {
          v31 = qword_140C4AD18;
          do
          {
            v32 = (unsigned int)(v27 + *(_DWORD *)(v31 + 64) * v11);
            v27 = (unsigned int)(v27 + 1);
            *(_WORD *)(*(_QWORD *)(v31 + 48) + 2 * v32) = 0;
            v25 = *(unsigned int *)(v12 + 56);
          }
          while ( (unsigned int)v27 < (unsigned int)v25 );
        }
        LOWORD(v30) = v30 + 1;
        v29 = v25;
        v11 = (unsigned __int16)v30;
      }
      while ( (unsigned __int16)v30 < (unsigned int)v25 );
    }
    return sub_140AFA5EC(v25, v30, v27, v11);
  }
  return result;
}
