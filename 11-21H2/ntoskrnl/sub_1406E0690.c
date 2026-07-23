/*
 * XREFs of sub_1406E0690 @ 0x1406E0690
 * Callers:
 *     sub_1407D0090 @ 0x1407D0090 (sub_1407D0090.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1406E0690(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  int v6; // ecx
  unsigned int v7; // edx
  int v8; // edx
  unsigned int *v10; // rax
  int v11; // edx
  __int64 v12; // rax
  unsigned int *v13; // r8
  unsigned int *v14; // rcx
  unsigned int v15; // r8d
  unsigned int *v16; // rdx
  int v17; // eax
  int v18; // r14d
  void *v19; // rcx
  unsigned int *v20; // rax
  unsigned int i; // edx
  __int64 v22; // r10
  unsigned int *v23; // r8
  unsigned int v24; // eax
  _DWORD *Pool2; // rax
  unsigned int v26; // eax
  unsigned int v27; // ecx
  unsigned int v28; // r8d
  unsigned int *v29; // rdx
  __int64 v30; // r8
  unsigned int v31; // ecx
  _DWORD *j; // rdx
  unsigned int v33; // eax
  unsigned int v34; // eax
  unsigned int v35; // ecx
  unsigned int v36; // eax
  __int64 v37; // r8
  unsigned int v38; // eax
  unsigned int v39; // ecx
  _DWORD *v40; // rdx
  unsigned int v41; // eax
  unsigned int v42; // eax
  _DWORD *v43; // rax

  v6 = *(_DWORD *)(a2 + 32);
  v7 = *(_DWORD *)(a2 + 16) + 32;
  if ( v7 < 0x20 )
    return (unsigned int)-1073741675;
  v26 = v7 + 4;
  if ( v7 + 4 < v7 )
    return (unsigned int)-1073741675;
  v27 = v26 + v6;
  if ( v27 < v26 )
    return (unsigned int)-1073741675;
  if ( a3 >= v27 )
  {
    v14 = *(unsigned int **)(a1 + 8);
    if ( v14 && *(_DWORD *)a1 > 3u )
    {
      v20 = *(unsigned int **)(a1 + 8);
      for ( i = 0; i < 3; ++i )
      {
        v22 = *v20;
        v23 = v20 + 1;
        if ( v20 + 1 < v20 )
          return (unsigned int)-1073741675;
        v20 = (unsigned int *)((char *)v23 + v22);
        if ( (unsigned int *)((char *)v23 + v22) < v23 )
          return (unsigned int)-1073741675;
      }
      v28 = *v20;
      v29 = v20 + 1;
      if ( v20 + 1 < v20 )
        return (unsigned int)-1073741675;
      v10 = 0LL;
      if ( v28 )
        v10 = v29;
      if ( v28 != 8 )
        return (unsigned int)-1073741789;
      if ( *(_QWORD *)v10 && qword_140D3B220 )
      {
        if ( *(_QWORD *)v10 == qword_140D3B220 )
        {
          if ( *(_DWORD *)a1 <= 4u )
            return (unsigned int)-1073741811;
          v11 = 0;
          while ( 1 )
          {
            v12 = *v14;
            v13 = v14 + 1;
            if ( v14 + 1 < v14 )
              return (unsigned int)-1073741675;
            v14 = (unsigned int *)((char *)v13 + v12);
            if ( (unsigned int *)((char *)v13 + v12) < v13 )
              return (unsigned int)-1073741675;
            if ( (unsigned int)++v11 >= 4 )
            {
              v15 = *v14;
              if ( v14 + 1 < v14 )
                return (unsigned int)-1073741675;
              v16 = 0LL;
              if ( v15 )
                v16 = v14 + 1;
              v17 = sub_14042A5E0(v15, v16);
              if ( v17 == 263 )
              {
                v18 = 1074058754;
              }
              else if ( v17 == 0x40000000 )
              {
                v18 = 1074058753;
              }
              else if ( v17 < 0 )
              {
                v18 = v17 | 0x10000000;
              }
              else
              {
                v18 = 0;
              }
              *(_DWORD *)(a4 + 4) = 0;
              *(_DWORD *)a4 = 0;
              v19 = *(void **)(a4 + 8);
              if ( v19 )
              {
                ExFreePoolWithTag(v19, 0);
                *(_QWORD *)(a4 + 8) = 0LL;
              }
              goto LABEL_59;
            }
          }
        }
        if ( !a4 )
          return (unsigned int)-1073741811;
        v30 = *(_QWORD *)(a4 + 8);
        v18 = -1073425151;
        if ( v30 )
        {
          v31 = 0;
          for ( j = *(_DWORD **)(a4 + 8); v31 < *(_DWORD *)a4; j = (_DWORD *)((char *)j + v33) )
          {
            v33 = *j + 4;
            if ( *j >= 0xFFFFFFFC || (_DWORD *)((char *)j + v33) < j )
              return (unsigned int)-1073741675;
            ++v31;
          }
LABEL_49:
          if ( j + 1 < j )
            return (unsigned int)-1073741675;
          if ( (unsigned __int64)(j + 2) > v30 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            return (unsigned int)-1073741789;
          *j = 4;
          j[1] = -1073425151;
          goto LABEL_33;
        }
      }
      else
      {
        if ( !a4 )
          return (unsigned int)-1073741811;
        v30 = *(_QWORD *)(a4 + 8);
        v18 = -1073425151;
        if ( v30 )
        {
          v35 = 0;
          j = *(_DWORD **)(a4 + 8);
          if ( *(_DWORD *)a4 )
          {
            while ( 1 )
            {
              v36 = *j + 4;
              if ( *j >= 0xFFFFFFFC || (_DWORD *)((char *)j + v36) < j )
                return (unsigned int)-1073741675;
              ++v35;
              j = (_DWORD *)((char *)j + v36);
              if ( v35 >= *(_DWORD *)a4 )
                goto LABEL_49;
            }
          }
          goto LABEL_49;
        }
      }
LABEL_59:
      v34 = *(_DWORD *)(a4 + 4);
      if ( v34 + 8 < v34 )
        goto LABEL_52;
      *(_DWORD *)(a4 + 4) = v34 + 8;
LABEL_33:
      ++*(_DWORD *)a4;
      v24 = *(_DWORD *)(a4 + 4);
      if ( !v24 )
        return (unsigned int)-1073741762;
      Pool2 = (_DWORD *)ExAllocatePool2(256LL, v24, 542329939LL);
      if ( !Pool2 )
        return (unsigned int)-1073741801;
      *(_QWORD *)(a4 + 8) = Pool2;
      *(_DWORD *)a4 = 0;
      if ( Pool2 + 1 < Pool2 )
        return (unsigned int)-1073741675;
      v8 = 0;
      if ( Pool2 + 2 <= (_DWORD *)((char *)Pool2 + *(unsigned int *)(a4 + 4)) )
      {
        *Pool2 = 4;
        Pool2[1] = v18;
        ++*(_DWORD *)a4;
        return (unsigned int)v8;
      }
      return (unsigned int)-1073741789;
    }
    return (unsigned int)-1073741811;
  }
  if ( !a4 )
    return (unsigned int)-1073741811;
  v37 = *(_QWORD *)(a4 + 8);
  if ( v37 )
  {
    v39 = 0;
    v40 = *(_DWORD **)(a4 + 8);
    if ( *(_DWORD *)a4 )
    {
      while ( 1 )
      {
        v41 = *v40 + 4;
        if ( *v40 >= 0xFFFFFFFC || (_DWORD *)((char *)v40 + v41) < v40 )
          break;
        ++v39;
        v40 = (_DWORD *)((char *)v40 + v41);
        if ( v39 >= *(_DWORD *)a4 )
          goto LABEL_76;
      }
    }
    else
    {
LABEL_76:
      if ( v40 + 1 >= v40 )
      {
        if ( (unsigned __int64)(v40 + 2) > v37 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          return (unsigned int)-1073741789;
        *v40 = 4;
        v40[1] = 0;
        goto LABEL_79;
      }
    }
    return (unsigned int)-1073741675;
  }
  v38 = *(_DWORD *)(a4 + 4);
  if ( v38 + 8 < v38 )
  {
LABEL_52:
    *(_DWORD *)(a4 + 4) = -1;
    return (unsigned int)-1073741675;
  }
  *(_DWORD *)(a4 + 4) = v38 + 8;
LABEL_79:
  ++*(_DWORD *)a4;
  v42 = *(_DWORD *)(a4 + 4);
  if ( v42 )
  {
    v43 = (_DWORD *)ExAllocatePool2(256LL, v42, 542329939LL);
    if ( v43 )
    {
      *(_QWORD *)(a4 + 8) = v43;
      *(_DWORD *)a4 = 0;
      if ( v43 + 1 < v43 )
      {
        v8 = -1073741675;
      }
      else
      {
        v8 = 0;
        if ( v43 + 2 <= (_DWORD *)((char *)v43 + *(unsigned int *)(a4 + 4)) )
        {
          *v43 = 4;
          v43[1] = 0;
          ++*(_DWORD *)a4;
        }
        else
        {
          v8 = -1073741789;
        }
      }
      if ( v8 >= 0 )
        return 0;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  else
  {
    return (unsigned int)-1073741762;
  }
  return (unsigned int)v8;
}
