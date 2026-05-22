/*
 * XREFs of ??$_Sort_unchecked@PEAIU?$less@X@std@@@std@@YAXPEAI0_JU?$less@X@0@@Z @ 0x1800EAD84
 * Callers:
 *     ??$_Sort_unchecked@PEAIU?$less@X@std@@@std@@YAXPEAI0_JU?$less@X@0@@Z @ 0x1800EAD84 (--$_Sort_unchecked@PEAIU-$less@X@std@@@std@@YAXPEAI0_JU-$less@X@0@@Z.c)
 *     ?FindClosestShapeBitmap@SystemCursorShape2@@QEAA?AV?$shared_ptr@VSystemCursorShapeBitmap2@@@std@@I@Z @ 0x1800ECA14 (-FindClosestShapeBitmap@SystemCursorShape2@@QEAA-AV-$shared_ptr@VSystemCursorShapeBitmap2@@@std@.c)
 * Callees:
 *     memmove_0 @ 0x18004E99F (memmove_0.c)
 *     ??$_Partition_by_median_guess_unchecked@PEAIU?$less@X@std@@@std@@YA?AU?$pair@PEAIPEAI@0@PEAI0U?$less@X@0@@Z @ 0x1800EAB1C (--$_Partition_by_median_guess_unchecked@PEAIU-$less@X@std@@@std@@YA-AU-$pair@PEAIPEAI@0@PEAI0U-$.c)
 *     ??$_Pop_heap_hole_by_index@PEAIIU?$less@X@std@@@std@@YAXPEAI_J1$$QEAIU?$less@X@0@@Z @ 0x1800EACE4 (--$_Pop_heap_hole_by_index@PEAIIU-$less@X@std@@@std@@YAXPEAI_J1$$QEAIU-$less@X@0@@Z.c)
 *     ??$_Sort_unchecked@PEAIU?$less@X@std@@@std@@YAXPEAI0_JU?$less@X@0@@Z @ 0x1800EAD84 (--$_Sort_unchecked@PEAIU-$less@X@std@@@std@@YAXPEAI0_JU-$less@X@0@@Z.c)
 */

__int64 __fastcall std::_Sort_unchecked<unsigned int *,std::less<void>>(
        char *a1,
        unsigned int *a2,
        __int64 a3,
        char a4)
{
  signed __int64 v5; // rax
  unsigned int *v7; // rsi
  unsigned int *i; // rdi
  unsigned int *v9; // r14
  __int64 v10; // r9
  __int64 result; // rax
  unsigned int *j; // rbx
  __int64 k; // r14
  unsigned int *v14; // rsi
  unsigned int v15; // ebp
  _DWORD *v16; // rcx
  unsigned int *v17; // [rsp+30h] [rbp-28h] BYREF
  unsigned int *v18; // [rsp+38h] [rbp-20h]
  unsigned int v19; // [rsp+60h] [rbp+8h] BYREF

  v5 = (char *)a2 - a1;
  v7 = a2;
  for ( i = (unsigned int *)a1; ; v5 = (char *)v7 - (char *)i )
  {
    result = v5 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( result <= 128 )
    {
      if ( i != v7 )
      {
        for ( j = i + 1; j != v7; ++j )
        {
          v15 = *j;
          v16 = j;
          if ( *j >= *i )
          {
            for ( result = (__int64)j; ; v16 = (_DWORD *)result )
            {
              result -= 4LL;
              if ( v15 >= *(_DWORD *)result )
                break;
              *v16 = *(_DWORD *)result;
            }
            *v16 = v15;
          }
          else
          {
            result = (__int64)memmove_0(i + 1, i, (char *)j - (char *)i);
            *i = v15;
          }
        }
      }
      return result;
    }
    if ( a3 <= 0 )
      break;
    std::_Partition_by_median_guess_unchecked<unsigned int *,std::less<void>>(&v17, i, v7);
    v9 = v18;
    LOBYTE(v10) = a4;
    a3 = (a3 >> 2) + (a3 >> 1);
    if ( (__int64)(((char *)v17 - (char *)i) & 0xFFFFFFFFFFFFFFFCuLL) >= (__int64)(((char *)v7 - (char *)v18) & 0xFFFFFFFFFFFFFFFCuLL) )
    {
      std::_Sort_unchecked<unsigned int *,std::less<void>>(v18, v7, a3, v10);
      v7 = v17;
    }
    else
    {
      std::_Sort_unchecked<unsigned int *,std::less<void>>(i, v17, a3, v10);
      i = v9;
    }
  }
  for ( k = ((char *)v7 - (char *)i) >> 3;
        k > 0;
        result = std::_Pop_heap_hole_by_index<unsigned int *,unsigned int,std::less<void>>((__int64)i, k, v7 - i, &v19) )
  {
    v19 = i[--k];
  }
  if ( v7 - i >= 2 )
  {
    v14 = v7 - 1;
    do
    {
      v19 = *v14;
      *v14 = *i;
      std::_Pop_heap_hole_by_index<unsigned int *,unsigned int,std::less<void>>((__int64)i, 0LL, v14 - i, &v19);
      result = ((unsigned __int64)--v14 + 4LL - (_QWORD)i) & 0xFFFFFFFFFFFFFFFCuLL;
    }
    while ( result >= 8 );
  }
  return result;
}
