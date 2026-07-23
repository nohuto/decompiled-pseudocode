/*
 * XREFs of sub_140A0BC8C @ 0x140A0BC8C
 * Callers:
 *     sub_1407D0090 @ 0x1407D0090 (sub_1407D0090.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140A0BC8C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *v4; // r8
  __int64 v6; // rbx
  unsigned int v8; // ecx
  unsigned int *v9; // rax
  __int64 v10; // r10
  unsigned int *v11; // rdx
  unsigned int v12; // edx
  unsigned int *v13; // rcx
  unsigned int *v14; // rax
  signed int v15; // ebx
  unsigned int v16; // r10d
  unsigned int *v17; // rax
  unsigned int i; // ecx
  __int64 v19; // r9
  unsigned int *v20; // rdx
  unsigned int v21; // r13d
  unsigned int *v22; // r15
  unsigned int *v23; // rax
  unsigned int j; // ecx
  __int64 v25; // r9
  unsigned int *v26; // rdx
  unsigned int k; // ecx
  __int64 v28; // rax
  unsigned int *v29; // rdx
  unsigned int v30; // edx
  unsigned int *v31; // rax
  size_t v32; // rbp
  void *Pool2; // rax
  int v34; // r14d
  unsigned int v35; // r15d
  unsigned int v36; // ecx
  unsigned int v37; // eax
  unsigned int v38; // edx
  unsigned int v39; // eax
  int v40; // r8d
  unsigned int v41; // edx
  unsigned int v42; // eax
  __int64 v43; // rax
  int v44; // r14d
  __int64 v45; // r9
  unsigned int v46; // ecx
  _DWORD *m; // rdx
  unsigned int v48; // eax
  __int64 v49; // r8
  unsigned int v50; // eax
  unsigned int v51; // ecx
  unsigned __int64 v52; // rdx
  unsigned int v53; // eax
  void *v54; // r14
  __int64 v55; // r8
  unsigned int v56; // eax
  unsigned int v57; // ecx
  _DWORD *n; // rdx
  unsigned int v59; // eax
  __int64 v60; // r8
  unsigned int v61; // eax
  unsigned int v62; // ecx
  _DWORD *ii; // rdx
  unsigned int v64; // eax
  void *Src; // [rsp+40h] [rbp-48h]
  __int64 v67; // [rsp+48h] [rbp-40h]

  v4 = *(unsigned int **)(a1 + 8);
  Src = 0LL;
  v6 = a2;
  if ( !v4 || *(_DWORD *)a1 <= 3u )
    return (unsigned int)-1073741811;
  v8 = 0;
  v9 = v4;
  do
  {
    v10 = *v9;
    v11 = v9 + 1;
    if ( v9 + 1 < v9 )
      return (unsigned int)-1073741675;
    v9 = (unsigned int *)((char *)v11 + v10);
    if ( (unsigned int *)((char *)v11 + v10) < v11 )
      return (unsigned int)-1073741675;
    ++v8;
  }
  while ( v8 < 3 );
  v12 = *v9;
  v13 = v9 + 1;
  if ( v9 + 1 < v9 )
    return (unsigned int)-1073741675;
  v14 = 0LL;
  if ( v12 )
    v14 = v13;
  if ( v12 == 8 )
  {
    v67 = *(_QWORD *)v14;
    v16 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 <= 4u )
      return (unsigned int)-1073741811;
    v17 = v4;
    for ( i = 0; i < 4; ++i )
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
    if ( v17 + 1 >= v17 )
    {
      v22 = 0LL;
      if ( v21 )
        v22 = v17 + 1;
      if ( v16 <= 5 )
        return (unsigned int)-1073741811;
      v23 = v4;
      for ( j = 0; j < 5; ++j )
      {
        v25 = *v23;
        v26 = v23 + 1;
        if ( v23 + 1 < v23 )
          return (unsigned int)-1073741675;
        v23 = (unsigned int *)((char *)v26 + v25);
        if ( (unsigned int *)((char *)v26 + v25) < v26 )
          return (unsigned int)-1073741675;
      }
      if ( v23 + 1 >= v23 )
      {
        if ( v16 <= 6 )
          return (unsigned int)-1073741811;
        for ( k = 0; k < 6; ++k )
        {
          v28 = *v4;
          v29 = v4 + 1;
          if ( v4 + 1 < v4 )
            return (unsigned int)-1073741675;
          v4 = (unsigned int *)((char *)v29 + v28);
          if ( (unsigned int *)((char *)v29 + v28) < v29 )
            return (unsigned int)-1073741675;
        }
        v30 = *v4;
        if ( v4 + 1 < v4 )
          return (unsigned int)-1073741675;
        v31 = 0LL;
        if ( v30 )
          v31 = v4 + 1;
        if ( v30 != 4 )
          return (unsigned int)-1073741789;
        v32 = *v31;
        if ( (_DWORD)v32 )
        {
          Pool2 = (void *)ExAllocatePool2(256LL, (unsigned int)v32, 542329939LL);
          Src = Pool2;
          if ( !Pool2 )
            return (unsigned int)-1073741801;
          memset(Pool2, 0, v32);
          v6 = a2;
        }
        if ( qword_140D3B3F8 )
          v34 = sub_14042A5E0(v22, v21);
        else
          v34 = -1073741637;
        v35 = v32 + 4;
        if ( (unsigned int)v32 >= 0xFFFFFFFC
          || v35 >= 0xFFFFFFEC
          || (v36 = v32 + 32, (int)v32 + 32 < (unsigned int)(v32 + 24))
          || v36 >= 0xFFFFFFF8
          || (v37 = (v32 + 47) & 0xFFFFFFF8, v37 < (int)v32 + 40)
          || (v38 = v37 + 8, v37 + 8 < v37) )
        {
          v15 = -1073741675;
          goto LABEL_111;
        }
        v39 = v37 + 12;
        v40 = *(_DWORD *)(v6 + 16);
        if ( v38 + 4 < 4 || (v41 = v38 + 8, v39 + 4 < v39) || (v42 = v41 + v40, v41 + v40 < v41) || v42 + 4 < v42 )
          v15 = -1073741675;
        else
          v15 = v42 + 4 + *(_DWORD *)(v6 + 32) < v42 + 4 ? 0xC0000095 : 0;
        if ( v15 < 0 )
          goto LABEL_111;
        if ( !a4 )
        {
          v15 = -1073741811;
LABEL_111:
          v54 = Src;
LABEL_112:
          if ( v54 )
            ExFreePoolWithTag(v54, 0);
          return (unsigned int)v15;
        }
        *(_DWORD *)(a4 + 4) = v36;
        if ( (_DWORD)v32 == -32 )
        {
          v15 = -1073741762;
          goto LABEL_111;
        }
        v43 = ExAllocatePool2(256LL, v36, 542329939LL);
        if ( !v43 )
        {
          v15 = -1073741801;
          goto LABEL_111;
        }
        *(_QWORD *)(a4 + 8) = v43;
        *(_DWORD *)a4 = 0;
        v44 = v34 | 0x10000000;
        v45 = v43;
        v46 = 0;
        for ( m = (_DWORD *)v43; v46 < *(_DWORD *)a4; m = (_DWORD *)((char *)m + v48) )
        {
          v48 = *m + 4;
          if ( v48 < 4 || (_DWORD *)((char *)m + v48) < m )
            goto LABEL_64;
          ++v46;
        }
        if ( m + 1 >= m )
        {
          if ( (unsigned __int64)(m + 2) > v45 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          {
LABEL_71:
            v15 = -1073741789;
            goto LABEL_111;
          }
          *m = 4;
          m[1] = v44;
          ++*(_DWORD *)a4;
          v49 = *(_QWORD *)(a4 + 8);
          if ( v49 )
          {
            v51 = 0;
            v52 = *(_QWORD *)(a4 + 8);
            if ( *(_DWORD *)a4 )
            {
              while ( 1 )
              {
                v53 = *(_DWORD *)v52 + 4;
                if ( v53 < 4 || v52 + v53 < v52 )
                  break;
                ++v51;
                v52 += v53;
                if ( v51 >= *(_DWORD *)a4 )
                  goto LABEL_79;
              }
            }
            else
            {
LABEL_79:
              if ( v52 + 4 >= v52 )
              {
                if ( v52 + 12 > v49 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                  goto LABEL_71;
                *(_DWORD *)v52 = 8;
                *(_QWORD *)(v52 + 4) = v67;
LABEL_82:
                ++*(_DWORD *)a4;
                v54 = Src;
                if ( Src )
                {
                  if ( !(_DWORD)v32 )
                    goto LABEL_84;
                }
                else if ( (_DWORD)v32 )
                {
LABEL_84:
                  v15 = -1073741811;
                  goto LABEL_112;
                }
                v55 = *(_QWORD *)(a4 + 8);
                if ( v55 )
                {
                  v57 = 0;
                  for ( n = *(_DWORD **)(a4 + 8); v57 < *(_DWORD *)a4; n = (_DWORD *)((char *)n + v59) )
                  {
                    v59 = *n + 4;
                    if ( v59 < 4 || (_DWORD *)((char *)n + v59) < n )
                      goto LABEL_90;
                    ++v57;
                  }
                  if ( n + 1 < n )
                    goto LABEL_90;
                  if ( (unsigned __int64)n + v32 + 4 > v55 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                    goto LABEL_97;
                  *n = v32;
                  if ( Src )
                    memmove(n + 1, Src, v32);
                }
                else
                {
                  v56 = *(_DWORD *)(a4 + 4);
                  if ( v56 + v35 < v56 )
                  {
LABEL_89:
                    *(_DWORD *)(a4 + 4) = -1;
                    goto LABEL_90;
                  }
                  *(_DWORD *)(a4 + 4) = v56 + v35;
                }
                ++*(_DWORD *)a4;
                v60 = *(_QWORD *)(a4 + 8);
                if ( !v60 )
                {
                  v61 = *(_DWORD *)(a4 + 4);
                  if ( v61 + 8 >= v61 )
                  {
                    ++*(_DWORD *)a4;
                    v15 = 0;
                    *(_DWORD *)(a4 + 4) = v61 + 8;
                    goto LABEL_112;
                  }
                  goto LABEL_89;
                }
                v62 = 0;
                for ( ii = *(_DWORD **)(a4 + 8); v62 < *(_DWORD *)a4; ii = (_DWORD *)((char *)ii + v64) )
                {
                  v64 = *ii + 4;
                  if ( v64 < 4 || (_DWORD *)((char *)ii + v64) < ii )
                    goto LABEL_90;
                  ++v62;
                }
                if ( ii + 1 >= ii )
                {
                  v15 = 0;
                  if ( (unsigned __int64)(ii + 2) <= v60 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                  {
                    *ii = 4;
                    ii[1] = 0;
                    ++*(_DWORD *)a4;
                    goto LABEL_112;
                  }
LABEL_97:
                  v15 = -1073741789;
                  goto LABEL_112;
                }
LABEL_90:
                v15 = -1073741675;
                goto LABEL_112;
              }
            }
          }
          else
          {
            v50 = *(_DWORD *)(a4 + 4);
            if ( v50 + 12 >= v50 )
            {
              *(_DWORD *)(a4 + 4) = v50 + 12;
              goto LABEL_82;
            }
            *(_DWORD *)(a4 + 4) = -1;
          }
        }
LABEL_64:
        v15 = -1073741675;
        goto LABEL_111;
      }
    }
    return (unsigned int)-1073741675;
  }
  return (unsigned int)-1073741789;
}
