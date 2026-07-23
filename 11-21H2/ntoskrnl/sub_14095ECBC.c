/*
 * XREFs of sub_14095ECBC @ 0x14095ECBC
 * Callers:
 *     sub_14095F29C @ 0x14095F29C (sub_14095F29C.c)
 * Callees:
 *     sub_140564E78 @ 0x140564E78 (sub_140564E78.c)
 *     sub_14095F0F0 @ 0x14095F0F0 (sub_14095F0F0.c)
 */

__int64 sub_14095ECBC(__int64 a1, unsigned int a2, _QWORD *a3, __int64 a4, ...)
{
  unsigned int v4; // edi
  __int64 v5; // r13
  _QWORD *v6; // rsi
  unsigned int v7; // ebx
  unsigned int v9; // ebp
  unsigned int v10; // r14d
  unsigned int v11; // r12d
  unsigned int v12; // r14d
  __int64 v13; // rcx
  unsigned int v14; // ebp
  unsigned int v15; // r15d
  __int64 v16; // rax
  unsigned int v17; // r9d
  _QWORD *v18; // rax
  __int64 v19; // rdx
  unsigned int v20; // r8d
  __int64 v21; // r8
  __int64 v22; // rcx
  int v23; // r8d
  unsigned int v24; // ebp
  __int64 v25; // r12
  unsigned int v26; // edx
  unsigned int v27; // r15d
  unsigned int v28; // r14d
  __int64 *v29; // r13
  __int64 v30; // rsi
  __int64 v31; // rcx
  unsigned int v32; // eax
  unsigned __int64 v33; // r14
  unsigned int v34; // ecx
  unsigned int v35; // r8d
  unsigned int v36; // ebx
  __int64 v37; // r12
  unsigned int v39; // [rsp+20h] [rbp-58h]
  int v40; // [rsp+88h] [rbp+10h]
  __int64 v43; // [rsp+A0h] [rbp+28h] BYREF
  va_list va; // [rsp+A0h] [rbp+28h]
  __int64 v45; // [rsp+A8h] [rbp+30h]
  va_list va1; // [rsp+B0h] [rbp+38h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v43 = va_arg(va1, _QWORD);
  v45 = va_arg(va1, _QWORD);
  v4 = 0;
  v5 = a4;
  v40 = 0;
  v6 = a3;
  v7 = a2;
  v9 = 0;
  if ( a2 )
  {
    v10 = 1;
    do
    {
      if ( sub_140564E78(a1, v6[3 * v9]) )
      {
        if ( v10 < v7 )
        {
          *(_OWORD *)&v6[3 * v9] = *(_OWORD *)&v6[3 * v7 - 3];
          v6[3 * v9 + 2] = v6[3 * v7 - 1];
        }
        --v7;
        --v9;
        --v10;
      }
      ++v9;
      ++v10;
    }
    while ( v9 < v7 );
  }
LABEL_8:
  v11 = 0;
  v12 = 1;
  while ( v11 < v7 )
  {
    v13 = 3LL * v11;
    if ( v6[3 * v11] )
    {
      v14 = v12;
      if ( v12 < v7 )
      {
        v15 = v12 + 1;
        do
        {
          if ( sub_140564E78(v6[v13], v6[3 * v14]) )
          {
            if ( v15 < v7 )
            {
              *(_OWORD *)&v6[3 * v14] = *(_OWORD *)&v6[3 * v7 - 3];
              v6[3 * v14 + 2] = v6[3 * v7 - 1];
            }
            --v7;
            --v14;
            --v15;
          }
          else if ( sub_140564E78(v6[3 * v14], v6[3 * v11]) )
          {
            v16 = 3LL * v11;
            *(_OWORD *)&v6[v16] = *(_OWORD *)&v6[3 * v14];
            v6[v16 + 2] = v6[3 * v14 + 2];
            if ( v14 + 1 < v7 )
            {
              *(_OWORD *)&v6[3 * v14] = *(_OWORD *)&v6[3 * v7 - 3];
              v6[3 * v14 + 2] = v6[3 * v7 - 1];
            }
            --v7;
            goto LABEL_8;
          }
          v13 = 3LL * v11;
          ++v14;
          ++v15;
        }
        while ( v14 < v7 );
      }
    }
    ++v11;
    ++v12;
  }
  v17 = 0;
  if ( v7 )
  {
    v18 = v6;
    while ( 1 )
    {
      v19 = v17 + 1;
      if ( !*v18 )
        break;
      v18 += 3;
      ++v17;
      if ( (unsigned int)v19 >= v7 )
        goto LABEL_39;
    }
    if ( (unsigned int)v19 < v7 )
    {
      v20 = v17 + 2;
      do
      {
        if ( !v6[3 * v19] )
        {
          if ( v20 < v7 )
          {
            *(_OWORD *)&v6[3 * v19] = *(_OWORD *)&v6[3 * v7 - 3];
            v6[3 * v19 + 2] = v6[3 * v7 - 1];
          }
          --v7;
          LODWORD(v19) = v19 - 1;
          --v20;
        }
        v19 = (unsigned int)(v19 + 1);
        ++v20;
      }
      while ( (unsigned int)v19 < v7 );
    }
    if ( v7 != 1 )
    {
      v21 = v7 - 1;
      if ( v17 + 1 < v7 )
      {
        v22 = 3LL * v17;
        *(_OWORD *)&v6[v22] = *(_OWORD *)&v6[3 * v21];
        v6[v22 + 2] = v6[3 * v21 + 2];
      }
      --v7;
    }
  }
LABEL_39:
  v23 = v45;
  v24 = 0;
  v25 = (unsigned int)v43;
  if ( (_DWORD)v45 )
    LOBYTE(v24) = (unsigned int)v43 >= 0x4A;
  v26 = v24;
  v39 = v24;
  v27 = v24;
  v28 = (_DWORD)v45 != 0 ? 74 : 32;
  if ( v7 )
  {
    v29 = v6;
    v30 = v7;
    do
    {
      v31 = *v29;
      LODWORD(v43) = 0;
      sub_14095F0F0(v31, 0LL, (__int64 *)va, 0LL);
      v28 += 2 * v43 + 40;
      if ( v28 <= (unsigned int)v25 )
        v27 += v43;
      v32 = v24 + 1;
      if ( v28 > (unsigned int)v25 )
        v32 = v24;
      v29 += 3;
      v24 = v32;
      --v30;
    }
    while ( v30 );
    v6 = a3;
    v5 = a4;
    v26 = v39;
    v23 = v45;
  }
  *(_DWORD *)(v5 + 16) = v28;
  *(_DWORD *)(v5 + 8) = v26 + v7;
  *(_DWORD *)(v5 + 12) = v24;
  v33 = v5 + 8 * (v24 + 4LL * v24 + 3);
  if ( v33 <= v5 + v25 - 8 )
  {
    *(_DWORD *)v33 = -1;
    if ( v26 )
    {
      v34 = 1;
      *(_DWORD *)(v5 + 24) = 0;
      *(_DWORD *)(v5 + 28) = v23;
      --v27;
      *(_DWORD *)(v5 + 32) = 0;
      *(_QWORD *)(v5 + 40) = 0LL;
      *(_QWORD *)(v5 + 48) = 0LL;
      *(_DWORD *)(v5 + 56) = 0;
      v40 = 1;
      *(_WORD *)(v33 + 4) = 0;
    }
    else
    {
      v34 = 0;
    }
    LODWORD(v45) = 0;
    v35 = 0;
    v36 = v34;
    if ( v34 < v24 )
    {
      v37 = v5 + 40LL * v34 + 28;
      do
      {
        *(_DWORD *)(v37 - 4) = v36;
        *(_QWORD *)v37 = 0LL;
        *(_QWORD *)(v37 + 12) = 1LL;
        *(_QWORD *)(v37 + 20) = 0LL;
        *(_DWORD *)(v37 + 28) = 0;
        LODWORD(v43) = v27;
        sub_14095F0F0(v6[3 * v35], v33 + 2 * (v36 + 2LL), (__int64 *)va, v5 + 40LL * v34 + 28);
        v37 += 40LL;
        v35 = v45 + 1;
        v27 -= v43;
        v34 = v40 + 1;
        v36 += v43;
        LODWORD(v45) = v45 + 1;
        v40 = v34;
      }
      while ( v34 < v24 );
    }
    *(_WORD *)(v33 + 2LL * v36 + 4) = 0;
  }
  else
  {
    return (unsigned int)-1073741789;
  }
  return v4;
}
