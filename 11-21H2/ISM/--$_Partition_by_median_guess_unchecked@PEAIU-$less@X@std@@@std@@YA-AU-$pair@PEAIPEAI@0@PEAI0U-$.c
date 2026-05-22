/*
 * XREFs of ??$_Partition_by_median_guess_unchecked@PEAIU?$less@X@std@@@std@@YA?AU?$pair@PEAIPEAI@0@PEAI0U?$less@X@0@@Z @ 0x1800EAB1C
 * Callers:
 *     ??$_Sort_unchecked@PEAIU?$less@X@std@@@std@@YAXPEAI0_JU?$less@X@0@@Z @ 0x1800EAD84 (--$_Sort_unchecked@PEAIU-$less@X@std@@@std@@YAXPEAI0_JU-$less@X@0@@Z.c)
 * Callees:
 *     ??$_Med3_unchecked@PEAIU?$less@X@std@@@std@@YAXPEAI00U?$less@X@0@@Z @ 0x1800EAAE8 (--$_Med3_unchecked@PEAIU-$less@X@std@@@std@@YAXPEAI00U-$less@X@0@@Z.c)
 */

unsigned int **__fastcall std::_Partition_by_median_guess_unchecked<unsigned int *,std::less<void>>(
        unsigned int **a1,
        unsigned int *a2,
        unsigned int *a3)
{
  unsigned int *v3; // r14
  unsigned int *v7; // rcx
  unsigned int *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned int *v11; // rbx
  __int64 v12; // r10
  __int64 v13; // r10
  __int64 v14; // r11
  unsigned int *v15; // rdx
  unsigned int *v16; // r8
  unsigned int *v17; // rdx
  unsigned int *v18; // rcx
  unsigned int v19; // eax
  unsigned int *v20; // r8
  unsigned int *v21; // r9
  unsigned int v22; // ecx
  unsigned int v23; // eax
  bool v24; // zf
  unsigned int *v25; // rcx
  unsigned int v26; // r10d
  unsigned int v27; // eax
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  unsigned int v30; // ecx
  unsigned int v31; // ecx
  unsigned int **result; // rax

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
    std::_Med3_unchecked<unsigned int *,std::less<void>>(a2, v11, &a2[2 * v10]);
    std::_Med3_unchecked<unsigned int *,std::less<void>>(
      (unsigned int *)((char *)v8 - v12),
      v8,
      (unsigned int *)((char *)v8 + v12));
    std::_Med3_unchecked<unsigned int *,std::less<void>>(
      (unsigned int *)((char *)v3 - v14),
      (unsigned int *)((char *)v3 - v13),
      v3);
    v16 = v15;
    v7 = v11;
  }
  std::_Med3_unchecked<unsigned int *,std::less<void>>(v7, v8, v16);
  v17 = v8 + 1;
  if ( a2 < v8 )
  {
    v18 = v8;
    do
    {
      if ( *(v8 - 1) < *v8 )
        break;
      if ( *(v8 - 1) > *v8 )
        break;
      v8 = v18 - 1;
      v18 = v8;
    }
    while ( a2 < v8 );
  }
  if ( v17 < a3 )
  {
    v19 = *v8;
    do
    {
      if ( *v17 < v19 )
        break;
      if ( *v17 > v19 )
        break;
      ++v17;
    }
    while ( v17 < a3 );
  }
  v20 = v17;
  v21 = v8;
  while ( 1 )
  {
    while ( v20 < a3 )
    {
      v22 = *v20;
      if ( *v8 < *v20 )
        goto LABEL_20;
      if ( *v8 > v22 )
        break;
      if ( v17 != v20 )
      {
        v23 = *v17;
        *v17 = v22;
        *v20 = v23;
      }
      ++v17;
LABEL_20:
      ++v20;
    }
    v24 = v21 == a2;
    if ( v21 > a2 )
    {
      v25 = v21 - 1;
      do
      {
        v26 = *v25;
        if ( *v25 >= *v8 )
        {
          if ( v26 > *v8 )
            break;
          if ( --v8 != v25 )
          {
            v27 = *v8;
            *v8 = v26;
            *v25 = v27;
          }
        }
        --v21;
        --v25;
      }
      while ( a2 < v21 );
      v24 = v21 == a2;
    }
    if ( v24 )
      break;
    --v21;
    if ( v20 != a3 )
    {
      v31 = *v20;
      *v20 = *v21;
      *v21 = v31;
      goto LABEL_20;
    }
    if ( v21 == --v8 )
    {
      v30 = *v8;
    }
    else
    {
      v30 = *v21;
      *v21 = *v8;
      *v8 = v30;
    }
    *v8 = *--v17;
    *v17 = v30;
  }
  if ( v20 != a3 )
  {
    if ( v17 != v20 )
    {
      v28 = *v8;
      *v8 = *v17;
      *v17 = v28;
    }
    v29 = *v8;
    ++v17;
    *v8++ = *v20;
    *v20 = v29;
    goto LABEL_20;
  }
  result = a1;
  *a1 = v8;
  a1[1] = v17;
  return result;
}
