/*
 * XREFs of sub_140A0C1F4 @ 0x140A0C1F4
 * Callers:
 *     sub_1407D0090 @ 0x1407D0090 (sub_1407D0090.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140A0C1F4(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *v4; // r8
  unsigned int *v6; // rax
  unsigned int i; // edx
  __int64 v8; // r10
  unsigned int *v9; // r9
  unsigned int v10; // r9d
  unsigned int *v11; // rdx
  unsigned int *v12; // rax
  signed int v13; // ebx
  unsigned int *v14; // rax
  unsigned int j; // edx
  __int64 v16; // r10
  unsigned int *v17; // r9
  unsigned int v18; // r9d
  unsigned int *v19; // rdx
  unsigned int *v20; // rax
  unsigned int v21; // r11d
  unsigned int v22; // r9d
  _DWORD *v23; // rax
  unsigned int k; // ecx
  __int64 v25; // r10
  _DWORD *v26; // rdx
  _DWORD *v27; // r15
  unsigned int *v28; // rax
  unsigned int m; // ecx
  __int64 v30; // r10
  unsigned int *v31; // rdx
  unsigned int n; // ecx
  __int64 v33; // rax
  unsigned int *v34; // rdx
  unsigned int v35; // edx
  unsigned int *v36; // rax
  size_t v37; // rsi
  void *Pool2; // rax
  int v39; // ebp
  unsigned int v40; // r14d
  unsigned int v41; // ecx
  unsigned int v42; // eax
  unsigned int v43; // edx
  int v44; // r8d
  unsigned int v45; // eax
  unsigned int v46; // edx
  unsigned int v47; // eax
  __int64 v48; // rax
  int v49; // ebp
  __int64 v50; // r9
  unsigned int v51; // ecx
  _DWORD *ii; // rdx
  unsigned int v53; // eax
  __int64 v54; // r8
  unsigned int v55; // eax
  unsigned int v56; // ecx
  unsigned __int64 jj; // rdx
  unsigned int v58; // eax
  __int64 v59; // r8
  unsigned int v60; // eax
  unsigned int v61; // ecx
  _DWORD *kk; // rdx
  unsigned int v63; // eax
  __int64 v64; // r8
  unsigned int v65; // eax
  unsigned int v66; // ecx
  _DWORD *v67; // rdx
  unsigned int v68; // eax
  unsigned int v70; // [rsp+50h] [rbp-58h]
  PVOID P; // [rsp+58h] [rbp-50h]
  __int64 v72; // [rsp+60h] [rbp-48h]

  v4 = *(unsigned int **)(a1 + 8);
  P = 0LL;
  if ( !v4 || *(_DWORD *)a1 <= 3u )
    return (unsigned int)-1073741811;
  v6 = *(unsigned int **)(a1 + 8);
  for ( i = 0; i < 3; ++i )
  {
    v8 = *v6;
    v9 = v6 + 1;
    if ( v6 + 1 < v6 )
      return (unsigned int)-1073741675;
    v6 = (unsigned int *)((char *)v9 + v8);
    if ( (unsigned int *)((char *)v9 + v8) < v9 )
      return (unsigned int)-1073741675;
  }
  v10 = *v6;
  v11 = v6 + 1;
  if ( v6 + 1 < v6 )
    return (unsigned int)-1073741675;
  v12 = 0LL;
  if ( v10 )
    v12 = v11;
  if ( v10 != 8 )
    return (unsigned int)-1073741789;
  v72 = *(_QWORD *)v12;
  if ( *(_DWORD *)a1 <= 4u )
    return (unsigned int)-1073741811;
  v14 = *(unsigned int **)(a1 + 8);
  for ( j = 0; j < 4; ++j )
  {
    v16 = *v14;
    v17 = v14 + 1;
    if ( v14 + 1 < v14 )
      return (unsigned int)-1073741675;
    v14 = (unsigned int *)((char *)v17 + v16);
    if ( (unsigned int *)((char *)v17 + v16) < v17 )
      return (unsigned int)-1073741675;
  }
  v18 = *v14;
  v19 = v14 + 1;
  if ( v14 + 1 < v14 )
    return (unsigned int)-1073741675;
  v20 = 0LL;
  if ( v18 )
    v20 = v19;
  if ( v18 == 4 )
  {
    v21 = *v20;
    v70 = *v20;
    v22 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 <= 5u )
      return (unsigned int)-1073741811;
    v23 = *(_DWORD **)(a1 + 8);
    for ( k = 0; k < 5; ++k )
    {
      v25 = (unsigned int)*v23;
      v26 = v23 + 1;
      if ( v23 + 1 < v23 )
        return (unsigned int)-1073741675;
      v23 = (_DWORD *)((char *)v26 + v25);
      if ( (_DWORD *)((char *)v26 + v25) < v26 )
        return (unsigned int)-1073741675;
    }
    if ( v23 + 1 >= v23 )
    {
      v27 = 0LL;
      if ( *v23 )
        v27 = v23 + 1;
      if ( v22 <= 6 )
        return (unsigned int)-1073741811;
      v28 = v4;
      for ( m = 0; m < 6; ++m )
      {
        v30 = *v28;
        v31 = v28 + 1;
        if ( v28 + 1 < v28 )
          return (unsigned int)-1073741675;
        v28 = (unsigned int *)((char *)v31 + v30);
        if ( (unsigned int *)((char *)v31 + v30) < v31 )
          return (unsigned int)-1073741675;
      }
      if ( v28 + 1 >= v28 )
      {
        if ( v22 <= 7 )
          return (unsigned int)-1073741811;
        for ( n = 0; n < 7; ++n )
        {
          v33 = *v4;
          v34 = v4 + 1;
          if ( v4 + 1 < v4 )
            return (unsigned int)-1073741675;
          v4 = (unsigned int *)((char *)v34 + v33);
          if ( (unsigned int *)((char *)v34 + v33) < v34 )
            return (unsigned int)-1073741675;
        }
        v35 = *v4;
        if ( v4 + 1 < v4 )
          return (unsigned int)-1073741675;
        v36 = 0LL;
        if ( v35 )
          v36 = v4 + 1;
        if ( v35 != 4 )
          return (unsigned int)-1073741789;
        v37 = *v36;
        if ( (_DWORD)v37 )
        {
          Pool2 = (void *)ExAllocatePool2(256LL, (unsigned int)v37, 542329939LL);
          P = Pool2;
          if ( !Pool2 )
            return (unsigned int)-1073741801;
          memset(Pool2, 0, v37);
          v21 = v70;
        }
        if ( qword_140D3B400 )
          v39 = sub_14042A5E0(v21, v27);
        else
          v39 = -1073741637;
        v40 = v37 + 4;
        if ( (unsigned int)v37 >= 0xFFFFFFFC )
          goto LABEL_73;
        if ( v40 >= 0xFFFFFFEC )
          goto LABEL_73;
        v41 = v37 + 32;
        if ( (int)v37 + 32 < (unsigned int)(v37 + 24) )
          goto LABEL_73;
        if ( v41 >= 0xFFFFFFF8 )
          goto LABEL_73;
        v42 = (v37 + 47) & 0xFFFFFFF8;
        if ( v42 < (int)v37 + 40 )
          goto LABEL_73;
        v43 = v42 + 8;
        if ( v42 + 8 < v42 )
          goto LABEL_73;
        v44 = *(_DWORD *)(a2 + 16);
        v45 = v42 + 12;
        if ( v43 + 4 < 4 || (v46 = v43 + 8, v45 + 4 < v45) || (v47 = v46 + v44, v46 + v44 < v46) || v47 + 4 < v47 )
          v13 = -1073741675;
        else
          v13 = v47 + 4 + *(_DWORD *)(a2 + 32) < v47 + 4 ? 0xC0000095 : 0;
        if ( v13 < 0 )
          goto LABEL_74;
        if ( !a4 )
          goto LABEL_66;
        *(_DWORD *)(a4 + 4) = v41;
        if ( (_DWORD)v37 == -32 )
        {
          v13 = -1073741762;
          goto LABEL_74;
        }
        v48 = ExAllocatePool2(256LL, v41, 542329939LL);
        if ( !v48 )
        {
          v13 = -1073741801;
          goto LABEL_74;
        }
        *(_QWORD *)(a4 + 8) = v48;
        *(_DWORD *)a4 = 0;
        v49 = v39 | 0x10000000;
        v50 = v48;
        v51 = 0;
        for ( ii = (_DWORD *)v48; v51 < *(_DWORD *)a4; ii = (_DWORD *)((char *)ii + v53) )
        {
          v53 = *ii + 4;
          if ( v53 < 4 || (_DWORD *)((char *)ii + v53) < ii )
            goto LABEL_73;
          ++v51;
        }
        if ( ii + 1 < ii )
          goto LABEL_73;
        if ( (unsigned __int64)(ii + 2) > v50 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        {
LABEL_82:
          v13 = -1073741789;
          goto LABEL_74;
        }
        *ii = 4;
        ii[1] = v49;
        ++*(_DWORD *)a4;
        v54 = *(_QWORD *)(a4 + 8);
        if ( v54 )
        {
          v56 = 0;
          for ( jj = *(_QWORD *)(a4 + 8); v56 < *(_DWORD *)a4; jj += v58 )
          {
            v58 = *(_DWORD *)jj + 4;
            if ( v58 < 4 || jj + v58 < jj )
              goto LABEL_73;
            ++v56;
          }
          if ( jj + 4 < jj )
            goto LABEL_73;
          if ( jj + 12 > v54 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            goto LABEL_82;
          *(_DWORD *)jj = 8;
          *(_QWORD *)(jj + 4) = v72;
        }
        else
        {
          v55 = *(_DWORD *)(a4 + 4);
          if ( v55 + 12 < v55 )
            goto LABEL_72;
          *(_DWORD *)(a4 + 4) = v55 + 12;
        }
        ++*(_DWORD *)a4;
        if ( P )
        {
          if ( !(_DWORD)v37 )
          {
LABEL_66:
            v13 = -1073741811;
            goto LABEL_74;
          }
        }
        else if ( (_DWORD)v37 )
        {
          goto LABEL_66;
        }
        v59 = *(_QWORD *)(a4 + 8);
        if ( v59 )
        {
          v61 = 0;
          for ( kk = *(_DWORD **)(a4 + 8); v61 < *(_DWORD *)a4; kk = (_DWORD *)((char *)kk + v63) )
          {
            v63 = *kk + 4;
            if ( v63 < 4 || (_DWORD *)((char *)kk + v63) < kk )
              goto LABEL_73;
            ++v61;
          }
          if ( kk + 1 < kk )
            goto LABEL_73;
          if ( (unsigned __int64)kk + v37 + 4 > v59 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            goto LABEL_82;
          *kk = v37;
          if ( P )
            memmove(kk + 1, P, v37);
LABEL_108:
          ++*(_DWORD *)a4;
          v64 = *(_QWORD *)(a4 + 8);
          if ( !v64 )
          {
            v65 = *(_DWORD *)(a4 + 4);
            if ( v65 + 8 >= v65 )
            {
              ++*(_DWORD *)a4;
              v13 = 0;
              *(_DWORD *)(a4 + 4) = v65 + 8;
              goto LABEL_74;
            }
            goto LABEL_72;
          }
          v66 = 0;
          v67 = *(_DWORD **)(a4 + 8);
          if ( *(_DWORD *)a4 )
          {
            while ( 1 )
            {
              v68 = *v67 + 4;
              if ( v68 < 4 || (_DWORD *)((char *)v67 + v68) < v67 )
                break;
              ++v66;
              v67 = (_DWORD *)((char *)v67 + v68);
              if ( v66 >= *(_DWORD *)a4 )
                goto LABEL_115;
            }
          }
          else
          {
LABEL_115:
            if ( v67 + 1 >= v67 )
            {
              v13 = 0;
              if ( (unsigned __int64)(v67 + 2) > v64 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                goto LABEL_82;
              *v67 = 4;
              v67[1] = 0;
              ++*(_DWORD *)a4;
LABEL_74:
              if ( P )
                ExFreePoolWithTag(P, 0);
              return (unsigned int)v13;
            }
          }
LABEL_73:
          v13 = -1073741675;
          goto LABEL_74;
        }
        v60 = *(_DWORD *)(a4 + 4);
        if ( v60 + v40 >= v60 )
        {
          *(_DWORD *)(a4 + 4) = v60 + v40;
          goto LABEL_108;
        }
LABEL_72:
        *(_DWORD *)(a4 + 4) = -1;
        goto LABEL_73;
      }
    }
    return (unsigned int)-1073741675;
  }
  return (unsigned int)-1073741789;
}
