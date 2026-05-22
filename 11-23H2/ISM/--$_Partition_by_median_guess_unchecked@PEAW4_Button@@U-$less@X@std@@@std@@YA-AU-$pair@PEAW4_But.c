/*
 * XREFs of ??$_Partition_by_median_guess_unchecked@PEAW4_Button@@U?$less@X@std@@@std@@YA?AU?$pair@PEAW4_Button@@PEAW41@@0@PEAW4_Button@@0U?$less@X@0@@Z @ 0x1801C4D10
 * Callers:
 *     ??$_Sort_unchecked@PEAW4_Button@@U?$less@X@std@@@std@@YAXPEAW4_Button@@0_JU?$less@X@0@@Z @ 0x1801C4F7C (--$_Sort_unchecked@PEAW4_Button@@U-$less@X@std@@@std@@YAXPEAW4_Button@@0_JU-$less@X@0@@Z.c)
 * Callees:
 *     ??$_Med3_unchecked@PEAW4_Button@@U?$less@X@std@@@std@@YAXPEAW4_Button@@00U?$less@X@0@@Z @ 0x1801C4CD8 (--$_Med3_unchecked@PEAW4_Button@@U-$less@X@std@@@std@@YAXPEAW4_Button@@00U-$less@X@0@@Z.c)
 */

int **__fastcall std::_Partition_by_median_guess_unchecked<enum _Button *,std::less<void>>(int **a1, int *a2, int *a3)
{
  int *v3; // r14
  int *v7; // rcx
  int *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rax
  int *v11; // rbx
  __int64 v12; // r10
  __int64 v13; // r10
  __int64 v14; // r11
  int *v15; // rdx
  int *v16; // r8
  int *v17; // rdx
  int v18; // eax
  int v19; // r8d
  int *v20; // rcx
  int v21; // eax
  int *v22; // r8
  int *v23; // r9
  int v24; // ecx
  int v25; // eax
  bool v26; // zf
  int *v27; // rcx
  int v28; // r10d
  int v29; // eax
  int v30; // ecx
  int v31; // ecx
  int v32; // ecx
  int v33; // ecx
  int v34; // ecx
  int **result; // rax

  v3 = a3 - 1;
  v7 = a2;
  v8 = &a2[((char *)a3 - (char *)a2) >> 3];
  v9 = a3 - 1 - a2;
  if ( v9 <= 40 )
  {
    v16 = a3 - 1;
  }
  else
  {
    v10 = (v9 + 1) >> 3;
    v11 = &a2[v10];
    std::_Med3_unchecked<enum _Button *,std::less<void>>(a2, v11, &a2[2 * v10]);
    std::_Med3_unchecked<enum _Button *,std::less<void>>((int *)((char *)v8 - v12), v8, (int *)((char *)v8 + v12));
    std::_Med3_unchecked<enum _Button *,std::less<void>>((int *)((char *)v3 - v14), (int *)((char *)v3 - v13), v3);
    v16 = v15;
    v7 = v11;
  }
  std::_Med3_unchecked<enum _Button *,std::less<void>>(v7, v8, v16);
  v17 = v8 + 1;
  if ( a2 < v8 )
  {
    v18 = *v8;
    do
    {
      v19 = v18;
      v20 = v8 - 1;
      v18 = *(v8 - 1);
      if ( v18 < v19 )
        break;
      if ( v18 > v19 )
        break;
      --v8;
    }
    while ( a2 < v20 );
  }
  if ( v17 < a3 )
  {
    v21 = *v8;
    do
    {
      if ( *v17 < v21 )
        break;
      if ( *v17 > v21 )
        break;
      ++v17;
    }
    while ( v17 < a3 );
  }
  v22 = v17;
  v23 = v8;
  while ( 1 )
  {
    while ( v22 < a3 )
    {
      v24 = *v22;
      if ( *v8 < *v22 )
        goto LABEL_20;
      if ( *v8 > v24 )
        break;
      if ( v17 != v22 )
      {
        v25 = *v17;
        *v17 = v24;
        *v22 = v25;
      }
      ++v17;
LABEL_20:
      ++v22;
    }
    v26 = v23 == a2;
    if ( v23 > a2 )
    {
      v27 = v23 - 1;
      do
      {
        v28 = *v27;
        if ( *v27 >= *v8 )
        {
          if ( v28 > *v8 )
            break;
          if ( --v8 != v27 )
          {
            v29 = *v8;
            *v8 = v28;
            *v27 = v29;
          }
        }
        --v23;
        --v27;
      }
      while ( a2 < v23 );
      v26 = v23 == a2;
    }
    if ( v26 )
      break;
    --v23;
    if ( v22 != a3 )
    {
      v34 = *v22;
      *v22 = *v23;
      *v23 = v34;
      goto LABEL_20;
    }
    if ( v23 != --v8 )
    {
      v32 = *v23;
      *v23 = *v8;
      *v8 = v32;
    }
    v33 = *v8;
    *v8 = *--v17;
    *v17 = v33;
  }
  if ( v22 != a3 )
  {
    if ( v17 != v22 )
    {
      v30 = *v8;
      *v8 = *v17;
      *v17 = v30;
    }
    v31 = *v8;
    ++v17;
    *v8++ = *v22;
    *v22 = v31;
    goto LABEL_20;
  }
  result = a1;
  *a1 = v8;
  a1[1] = v17;
  return result;
}
