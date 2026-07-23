/*
 * XREFs of sub_140A0D838 @ 0x140A0D838
 * Callers:
 *     sub_1407D0090 @ 0x1407D0090 (sub_1407D0090.c)
 * Callees:
 *     sub_140354748 @ 0x140354748 (sub_140354748.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140A0D838(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  void *v7; // rdi
  int v8; // ebx
  unsigned int *v9; // rcx
  unsigned int *v10; // rax
  unsigned int i; // edx
  __int64 v12; // r9
  unsigned int *v13; // r8
  unsigned int v14; // r8d
  unsigned int *v15; // rdx
  unsigned int *v16; // rax
  unsigned int *v17; // rax
  unsigned int j; // edx
  __int64 v19; // r9
  unsigned int *v20; // r8
  unsigned int v21; // r8d
  unsigned int *v22; // rdx
  unsigned int *v23; // rax
  unsigned int k; // edx
  __int64 v25; // rax
  unsigned int *v26; // r8
  unsigned __int64 v27; // rdx
  _WORD *v28; // rbp
  __int64 v29; // r11
  unsigned int v30; // eax
  size_t v31; // r14
  void *Pool2; // rax
  void *v33; // r12
  unsigned int *v34; // rax
  unsigned int m; // ecx
  __int64 v36; // r8
  unsigned int *v37; // rdx
  unsigned __int64 v38; // rcx
  _WORD *v39; // rbp
  __int64 v40; // r11
  unsigned int v41; // r15d
  void *v42; // rax
  void *v43; // r14
  unsigned int *v44; // rcx
  unsigned int v45; // r9d
  unsigned int *v46; // rax
  unsigned int n; // r8d
  __int64 v48; // r10
  unsigned int *v49; // rdx
  unsigned int *v50; // rax
  unsigned int ii; // edx
  __int64 v52; // r10
  unsigned int *v53; // r8
  unsigned int jj; // edx
  __int64 v55; // rax
  unsigned int *v56; // r8
  _DWORD *v57; // rax
  int v58; // ebx
  unsigned int v59; // r8d
  __int64 v60; // r9
  unsigned int v61; // eax
  unsigned __int64 v62; // rdx
  unsigned int v63; // ecx
  unsigned int v64; // eax
  __int64 v66; // [rsp+50h] [rbp-48h]
  unsigned __int64 v67; // [rsp+A8h] [rbp+10h] BYREF
  unsigned int v68; // [rsp+B0h] [rbp+18h]

  v68 = a3;
  v7 = 0LL;
  if ( !a2 )
    return (unsigned int)-1073741811;
  if ( !a4 )
    return (unsigned int)-1073741811;
  v9 = *(unsigned int **)(a1 + 8);
  if ( !v9 || *(_DWORD *)a1 <= 3u )
    return (unsigned int)-1073741811;
  v10 = v9;
  for ( i = 0; i < 3; ++i )
  {
    v12 = *v10;
    v13 = v10 + 1;
    if ( v10 + 1 < v10 )
      return (unsigned int)-1073741675;
    v10 = (unsigned int *)((char *)v13 + v12);
    if ( (unsigned int *)((char *)v13 + v12) < v13 )
      return (unsigned int)-1073741675;
  }
  v14 = *v10;
  v15 = v10 + 1;
  if ( v10 + 1 < v10 )
    return (unsigned int)-1073741675;
  v16 = 0LL;
  if ( v14 )
    v16 = v15;
  if ( v14 != 8 )
    return (unsigned int)-1073741789;
  v66 = *(_QWORD *)v16;
  if ( *(_DWORD *)a1 <= 4u )
    return (unsigned int)-1073741811;
  v17 = v9;
  for ( j = 0; j < 4; ++j )
  {
    v19 = *v17;
    v20 = v17 + 1;
    if ( v17 + 1 < v17 )
      return (unsigned int)-1073741675;
    v17 = (unsigned int *)((char *)v20 + v19);
    if ( (unsigned int *)((char *)v20 + v19) < v20 )
      return (unsigned int)-1073741675;
  }
  v21 = *v17;
  v22 = v17 + 1;
  if ( v17 + 1 < v17 )
    return (unsigned int)-1073741675;
  v23 = 0LL;
  if ( v21 )
    v23 = v22;
  if ( v21 != 4 )
    return (unsigned int)-1073741789;
  v68 = *v23;
  v67 = 0LL;
  if ( *(_DWORD *)a1 <= 5u )
    return (unsigned int)-1073741811;
  for ( k = 0; k < 5; ++k )
  {
    v25 = *v9;
    v26 = v9 + 1;
    if ( v9 + 1 < v9 )
      return (unsigned int)-1073741675;
    v9 = (unsigned int *)((char *)v26 + v25);
    if ( (unsigned int *)((char *)v26 + v25) < v26 )
      return (unsigned int)-1073741675;
  }
  v27 = *v9;
  if ( v9 + 1 < v9 )
    return (unsigned int)-1073741675;
  if ( !(_DWORD)v27 )
    return (unsigned int)-1073741762;
  v28 = v9 + 1;
  if ( (v27 & 1) != 0 )
    return (unsigned int)-1073741762;
  if ( v28[(v27 >> 1) - 1] )
    return (unsigned int)-1073741762;
  if ( (int)sub_140354748((_WORD *)v9 + 2, v27, &v67) < 0 )
    return (unsigned int)-1073741762;
  if ( v67 + 2 != v29 )
    return (unsigned int)-1073741762;
  v30 = 2 * (v67 >> 1) + 2;
  if ( 2 * (unsigned int)(v67 >> 1) == -2 )
    return (unsigned int)-1073741762;
  v31 = v30;
  Pool2 = (void *)ExAllocatePool2(256LL, v30, 542329939LL);
  v33 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  memmove(Pool2, v28, v31);
  v34 = *(unsigned int **)(a1 + 8);
  v67 = 0LL;
  if ( !v34 || *(_DWORD *)a1 <= 6u )
    goto LABEL_57;
  for ( m = 0; m < 6; ++m )
  {
    v36 = *v34;
    v37 = v34 + 1;
    if ( v34 + 1 < v34 )
      goto LABEL_90;
    v34 = (unsigned int *)((char *)v37 + v36);
    if ( (unsigned int *)((char *)v37 + v36) < v37 )
      goto LABEL_90;
  }
  v38 = *v34;
  if ( v34 + 1 < v34 )
    goto LABEL_90;
  if ( !(_DWORD)v38
    || (v39 = v34 + 1,
        (v38 & 1) != 0
     || *((_WORD *)v34 + (v38 >> 1) + 1)
     || (int)sub_140354748(v39, v38, &v67) < 0
     || v67 + 2 != v40
     || 2 * (unsigned int)(v67 >> 1) == -2) )
  {
    v8 = -1073741762;
    goto LABEL_91;
  }
  v41 = 2 * (v67 >> 1) + 2;
  v42 = (void *)ExAllocatePool2(256LL, v41, 542329939LL);
  v43 = v42;
  if ( !v42 )
  {
LABEL_82:
    v8 = -1073741801;
    goto LABEL_91;
  }
  memmove(v42, v39, v41);
  v7 = v43;
  v44 = *(unsigned int **)(a1 + 8);
  if ( !v44 )
    goto LABEL_57;
  v45 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 <= 7u )
    goto LABEL_57;
  v46 = *(unsigned int **)(a1 + 8);
  for ( n = 0; n < 7; ++n )
  {
    v48 = *v46;
    v49 = v46 + 1;
    if ( v46 + 1 < v46 )
      goto LABEL_90;
    v46 = (unsigned int *)((char *)v49 + v48);
    if ( (unsigned int *)((char *)v49 + v48) < v49 )
      goto LABEL_90;
  }
  if ( v46 + 1 < v46 )
    goto LABEL_90;
  if ( v45 <= 8 )
  {
LABEL_57:
    v8 = -1073741811;
    goto LABEL_91;
  }
  v50 = *(unsigned int **)(a1 + 8);
  for ( ii = 0; ii < 8; ++ii )
  {
    v52 = *v50;
    v53 = v50 + 1;
    if ( v50 + 1 < v50 )
      goto LABEL_90;
    v50 = (unsigned int *)((char *)v53 + v52);
    if ( (unsigned int *)((char *)v53 + v52) < v53 )
      goto LABEL_90;
  }
  if ( v50 + 1 < v50 )
  {
LABEL_90:
    v8 = -1073741675;
    goto LABEL_91;
  }
  if ( v45 <= 9 )
    goto LABEL_57;
  for ( jj = 0; jj < 9; ++jj )
  {
    v55 = *v44;
    v56 = v44 + 1;
    if ( v44 + 1 < v44 )
      goto LABEL_90;
    v44 = (unsigned int *)((char *)v56 + v55);
    if ( (unsigned int *)((char *)v56 + v55) < v56 )
      goto LABEL_90;
  }
  if ( v44 + 1 < v44 )
    goto LABEL_90;
  if ( qword_140D3B408 )
  {
    v8 = sub_14042A5E0(v68, v33);
    if ( v8 < 0 )
      goto LABEL_91;
    if ( *(_DWORD *)(a2 + 16) < 0xFFFFFFD0
      && *(_DWORD *)(a2 + 16) + 52 >= (unsigned int)(*(_DWORD *)(a2 + 16) + 48)
      && *(_DWORD *)(a2 + 16) + 52 + *(_DWORD *)(a2 + 32) >= (unsigned int)(*(_DWORD *)(a2 + 16) + 52) )
    {
      *(_DWORD *)(a4 + 4) = 20;
      v57 = (_DWORD *)ExAllocatePool2(256LL, 20LL, 542329939LL);
      if ( !v57 )
        goto LABEL_82;
      *(_QWORD *)(a4 + 8) = v57;
      *(_DWORD *)a4 = 0;
      v58 = v8 | 0x10000000;
      if ( v57 + 1 >= v57 )
      {
        if ( v57 + 2 > (_DWORD *)((char *)v57 + *(unsigned int *)(a4 + 4)) )
        {
LABEL_85:
          v8 = -1073741789;
          goto LABEL_91;
        }
        *v57 = 4;
        v57[1] = v58;
        v59 = ++*(_DWORD *)a4;
        v60 = *(_QWORD *)(a4 + 8);
        if ( v60 )
        {
          v62 = *(_QWORD *)(a4 + 8);
          v63 = 0;
          if ( v59 )
          {
            while ( 1 )
            {
              v64 = *(_DWORD *)v62 + 4;
              if ( *(_DWORD *)v62 >= 0xFFFFFFFC || v62 + v64 < v62 )
                break;
              ++v63;
              v62 += v64;
              if ( v63 >= v59 )
                goto LABEL_97;
            }
          }
          else
          {
LABEL_97:
            if ( v62 + 4 >= v62 )
            {
              v8 = 0;
              if ( v62 + 12 > v60 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                goto LABEL_85;
              *(_DWORD *)v62 = 8;
              *(_QWORD *)(v62 + 4) = v66;
              ++*(_DWORD *)a4;
              goto LABEL_91;
            }
          }
        }
        else
        {
          v61 = *(_DWORD *)(a4 + 4);
          if ( v61 + 12 >= v61 )
          {
            *(_DWORD *)(a4 + 4) = v61 + 12;
            *(_DWORD *)a4 = v59 + 1;
            v8 = 0;
            goto LABEL_91;
          }
          *(_DWORD *)(a4 + 4) = -1;
        }
      }
    }
    goto LABEL_90;
  }
  v8 = -1073741637;
LABEL_91:
  ExFreePoolWithTag(v33, 0);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return (unsigned int)v8;
}
