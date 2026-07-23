/*
 * XREFs of sub_140649D44 @ 0x140649D44
 * Callers:
 *     sub_140218B60 @ 0x140218B60 (sub_140218B60.c)
 * Callees:
 *     sub_1402DCD64 @ 0x1402DCD64 (sub_1402DCD64.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_140649D44(unsigned int *a1, unsigned int a2, unsigned int *a3, unsigned int *a4)
{
  unsigned int v4; // ebx
  unsigned __int64 v5; // r15
  int v9; // r8d
  __int64 v10; // rcx
  unsigned int v11; // r13d
  unsigned int v12; // r11d
  __int64 v13; // rdx
  unsigned __int16 v14; // ax
  int v15; // eax
  unsigned int v16; // ebp
  unsigned int *v17; // r10
  __int64 v18; // rcx
  unsigned int v19; // r8d
  int v20; // eax
  unsigned int v21; // ebp
  __int64 v22; // rcx
  unsigned int v23; // r11d
  int v24; // eax
  unsigned int v25; // r8d
  _DWORD *v26; // rcx
  unsigned int v27; // eax
  unsigned int v28; // r14d
  char *v29; // rdx
  unsigned __int16 v30; // ax
  unsigned int v31; // ecx
  unsigned __int64 v32; // rax
  unsigned int v33; // ebp
  unsigned int v34; // r12d
  char *v35; // r14
  unsigned int *v36; // rcx
  unsigned int v37; // r13d
  unsigned int v38; // eax
  __int64 v39; // r15
  unsigned int v40; // ecx
  unsigned __int64 v41; // rax
  unsigned int v42; // ebp
  unsigned int v43; // r13d
  char *v44; // r12
  unsigned __int64 v45; // rax
  unsigned int v46; // r14d
  unsigned int v47; // eax
  __int64 v48; // r15
  unsigned int v49; // ecx
  unsigned __int64 v50; // rax
  __int64 v51; // rdx
  unsigned __int64 i; // [rsp+20h] [rbp-38h]
  __int64 v54; // [rsp+60h] [rbp+8h] BYREF

  v4 = 0;
  v5 = a2;
  v54 = 0LL;
  if ( !a1 || !a3 || !a4 )
    return (unsigned int)-1073741811;
  if ( a2 < 0x14 )
    return (unsigned int)-1073741705;
  if ( !a1[3] )
    return (unsigned int)-1073741705;
  v10 = *a1;
  if ( a2 < (unsigned int)v10 || a2 - (unsigned int)v10 < 4 )
    return (unsigned int)-1073741705;
  v9 = sub_1402DCD64((unsigned int *)((char *)a1 + v10), a2 - (unsigned int)v10, &v54);
  if ( v9 < 0 )
    return (unsigned int)v9;
  v11 = v54 + 2;
  if ( (int)v54 + 2 < (unsigned int)v54 )
    return (unsigned int)-1073741675;
  if ( (int)v54 + 5 < (unsigned int)(v54 + 2) )
    return (unsigned int)-1073741675;
  v12 = ((v54 + 5) & 0xFFFFFFFC) + 40;
  if ( v12 < 0x28 )
    return (unsigned int)-1073741675;
  v13 = a1[3];
  if ( (unsigned __int64)(4 * v13) > 0xFFFFFFFF )
    return (unsigned int)-1073741675;
  if ( (int)v5 - 16 < (unsigned int)(4 * v13) )
    return (unsigned int)-1073741705;
  v14 = *((_WORD *)a1 + 2);
  if ( v14 )
  {
    if ( v14 > 2u )
    {
      if ( v14 == 3 )
      {
        v20 = 16 * v13;
        if ( (unsigned __int64)(16 * v13) > 0xFFFFFFFF || v20 + v12 < v12 )
          return (unsigned int)-1073741675;
        v12 += v20;
        v21 = 0;
        if ( (_DWORD)v13 )
        {
          while ( 1 )
          {
            v22 = a1[v21 + 4];
            if ( (unsigned int)v5 < (unsigned int)v22 || (unsigned int)(v5 - v22) < 2 )
              return (unsigned int)-1073741705;
            v9 = sub_1402DCD64((unsigned int *)((char *)a1 + v22), (unsigned int)(v5 - v22), &v54);
            if ( v9 < 0 )
              return (unsigned int)v9;
            if ( (int)v54 + 2 < (unsigned int)v54
              || (int)v54 + 5 < (unsigned int)(v54 + 2)
              || (((_DWORD)v54 + 5) & 0xFFFFFFFC) + v23 < v23 )
            {
              return (unsigned int)-1073741675;
            }
            ++v21;
            v12 = ((v54 + 5) & 0xFFFFFFFC) + v23;
            if ( v21 >= a1[3] )
              goto LABEL_51;
          }
        }
        goto LABEL_51;
      }
      if ( v14 == 5 )
        goto LABEL_21;
      if ( v14 != 6 )
      {
        if ( v14 != 16 )
          goto LABEL_51;
LABEL_21:
        v15 = 16 * v13;
        if ( (unsigned __int64)(16 * v13) > 0xFFFFFFFF || v15 + v12 < v12 )
          return (unsigned int)-1073741675;
        v12 += v15;
        v16 = 0;
        if ( (_DWORD)v13 )
        {
          v17 = a1 + 4;
          while ( 1 )
          {
            v18 = *v17;
            if ( (unsigned int)v5 < (unsigned int)v18 || (unsigned int)(v5 - v18) < 4 )
              return (unsigned int)-1073741705;
            v19 = *(unsigned int *)((char *)a1 + v18);
            if ( (int)v18 + 4 < (unsigned int)v18 )
              return (unsigned int)-1073741675;
            if ( (int)v5 - ((int)v18 + 4) < v19 )
              return (unsigned int)-1073741705;
            if ( v19 + 3 < v19 || ((v19 + 3) & 0xFFFFFFFC) + v12 < v12 )
              return (unsigned int)-1073741675;
            ++v16;
            ++v17;
            v12 += (v19 + 3) & 0xFFFFFFFC;
            if ( v16 >= (unsigned int)v13 )
              goto LABEL_51;
          }
        }
        goto LABEL_51;
      }
    }
    v24 = 8 * v13;
    if ( (unsigned __int64)(8 * v13) > 0xFFFFFFFF || v24 + v12 < v12 )
      return (unsigned int)-1073741675;
    v12 += v24;
    v25 = 0;
    if ( (_DWORD)v13 )
    {
      v26 = a1 + 4;
      while ( (unsigned int)v5 >= *v26 && (unsigned int)(v5 - *v26) >= 8 )
      {
        ++v25;
        ++v26;
        if ( v25 >= (unsigned int)v13 )
          goto LABEL_51;
      }
      return (unsigned int)-1073741705;
    }
  }
LABEL_51:
  v27 = *a4;
  *a4 = v12;
  if ( v27 < v12 )
    return (unsigned int)-1073741789;
  memset(a3, 0, v12);
  *((_WORD *)a3 + 8) = *((_WORD *)a1 + 2);
  *((_WORD *)a3 + 9) = *((_WORD *)a1 + 3);
  a3[5] = a1[2];
  a3[6] = a1[3];
  if ( v11 >= 0xFFFFFFD8 || v11 + 43 < v11 + 40 )
    return (unsigned int)-1073741675;
  v28 = (v11 + 43) & 0xFFFFFFFC;
  memmove(a3 + 10, (char *)a1 + *a1, v11);
  *((_QWORD *)a3 + 1) = a3 + 10;
  *((_WORD *)a3 + 1) = v11;
  *(_WORD *)a3 = v11 - 2;
  v29 = (char *)a3 + v28;
  v30 = *((_WORD *)a3 + 8);
  if ( !v30 )
    return (unsigned int)-1073741705;
  if ( v30 > 2u )
  {
    if ( v30 == 3 )
    {
      v40 = a3[6];
      v41 = 16LL * v40;
      if ( v41 > 0xFFFFFFFF )
        return (unsigned int)-1073741675;
      v42 = v41 + v28;
      if ( (unsigned int)v41 + v28 < v28 )
        return (unsigned int)-1073741675;
      v43 = 0;
      v44 = (char *)a3 + v42;
      *((_QWORD *)a3 + 4) = v29;
      if ( !v40 )
        return 0;
      v45 = v5;
      for ( i = v5; ; v45 = i )
      {
        v9 = sub_1402DCD64((unsigned int *)((char *)a1 + a1[v43 + 4]), v45, &v54);
        if ( v9 < 0 )
          break;
        v46 = v54 + 2;
        if ( (int)v54 + 2 < (unsigned int)v54 )
          return (unsigned int)-1073741675;
        v47 = v46 + v42;
        if ( v46 + v42 < v42 || v47 + 3 < v47 )
          return (unsigned int)-1073741675;
        v42 = (v47 + 3) & 0xFFFFFFFC;
        memmove(v44, (char *)a1 + a1[v43 + 4], v46);
        v48 = 2LL * v43++;
        *(_QWORD *)(*((_QWORD *)a3 + 4) + 8 * v48 + 8) = v44;
        v44 = (char *)a3 + v42;
        *(_WORD *)(*((_QWORD *)a3 + 4) + 8 * v48) = v46 - 2;
        *(_WORD *)(*((_QWORD *)a3 + 4) + 8 * v48 + 2) = v46;
        if ( v43 >= a3[6] )
          return 0;
      }
      return (unsigned int)v9;
    }
    if ( v30 == 5 )
    {
LABEL_61:
      v31 = a3[6];
      v32 = 16LL * v31;
      if ( v32 <= 0xFFFFFFFF )
      {
        v33 = v32 + v28;
        if ( (unsigned int)v32 + v28 >= v28 )
        {
          v34 = 0;
          v35 = (char *)a3 + v33;
          *((_QWORD *)a3 + 4) = v29;
          if ( v31 )
          {
            do
            {
              v36 = &a1[v34];
              v37 = *(unsigned int *)((char *)a1 + v36[4]);
              v38 = v33 + v37;
              if ( v33 + v37 < v33 || v38 + 3 < v38 )
                return (unsigned int)-1073741675;
              v39 = 2LL * v34;
              v33 = (v38 + 3) & 0xFFFFFFFC;
              *(_QWORD *)(*((_QWORD *)a3 + 4) + 16LL * v34) = 0LL;
              if ( v37 )
              {
                memmove(v35, (char *)a1 + v36[4] + 4, v37);
                *(_QWORD *)(*((_QWORD *)a3 + 4) + 16LL * v34) = v35;
              }
              ++v34;
              v35 = (char *)a3 + v33;
              *(_DWORD *)(*((_QWORD *)a3 + 4) + 8 * v39 + 8) = v37;
            }
            while ( v34 < a3[6] );
          }
          return 0;
        }
      }
      return (unsigned int)-1073741675;
    }
    if ( v30 != 6 )
    {
      if ( v30 == 16 )
        goto LABEL_61;
      return (unsigned int)-1073741705;
    }
  }
  v49 = a3[6];
  v50 = 8LL * v49;
  if ( v50 > 0xFFFFFFFF || v28 + (unsigned int)v50 < v28 )
    return (unsigned int)-1073741675;
  *((_QWORD *)a3 + 4) = v29;
  v9 = 0;
  if ( v49 )
  {
    do
    {
      v51 = v4++;
      *(_QWORD *)(*((_QWORD *)a3 + 4) + 8 * v51) = *(_QWORD *)((char *)a1 + a1[v51 + 4]);
    }
    while ( v4 < a3[6] );
  }
  return (unsigned int)v9;
}
