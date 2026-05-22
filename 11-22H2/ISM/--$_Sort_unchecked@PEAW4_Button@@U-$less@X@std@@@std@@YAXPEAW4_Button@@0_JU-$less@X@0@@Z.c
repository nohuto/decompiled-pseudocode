/*
 * XREFs of ??$_Sort_unchecked@PEAW4_Button@@U?$less@X@std@@@std@@YAXPEAW4_Button@@0_JU?$less@X@0@@Z @ 0x1801D27EC
 * Callers:
 *     ??$_Sort_unchecked@PEAW4_Button@@U?$less@X@std@@@std@@YAXPEAW4_Button@@0_JU?$less@X@0@@Z @ 0x1801D27EC (--$_Sort_unchecked@PEAW4_Button@@U-$less@X@std@@@std@@YAXPEAW4_Button@@0_JU-$less@X@0@@Z.c)
 *     ?FindExactComboButtonMatch@ButtonRecognizer@@AEBA?AV?$reverse_iterator@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@std@@@std@@AEAV?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@3@@Z @ 0x1801D353C (-FindExactComboButtonMatch@ButtonRecognizer@@AEBA-AV-$reverse_iterator@V-$_Tree_const_iterator@V.c)
 *     ?IsComboButtonCandidate@ButtonRecognizer@@AEBA_NAEAV?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@@Z @ 0x1801D3930 (-IsComboButtonCandidate@ButtonRecognizer@@AEBA_NAEAV-$vector@W4_Button@@V-$allocator@W4_Button@@.c)
 *     ?RegisterComboButton@ButtonRecognizer@@QEAAJPEAUtagMsgRoutingInfo@@_NPEAUButtonRegistrationABI@@@Z @ 0x1801D3D94 (-RegisterComboButton@ButtonRecognizer@@QEAAJPEAUtagMsgRoutingInfo@@_NPEAUButtonRegistrationABI@@.c)
 * Callees:
 *     memmove_0 @ 0x1800793AC (memmove_0.c)
 *     ??$_Partition_by_median_guess_unchecked@PEAW4_Button@@U?$less@X@std@@@std@@YA?AU?$pair@PEAW4_Button@@PEAW41@@0@PEAW4_Button@@0U?$less@X@0@@Z @ 0x1801D2580 (--$_Partition_by_median_guess_unchecked@PEAW4_Button@@U-$less@X@std@@@std@@YA-AU-$pair@PEAW4_But.c)
 *     ??$_Pop_heap_hole_by_index@PEAW4_Button@@W41@U?$less@X@std@@@std@@YAXPEAW4_Button@@_J1$$QEAW41@U?$less@X@0@@Z @ 0x1801D2748 (--$_Pop_heap_hole_by_index@PEAW4_Button@@W41@U-$less@X@std@@@std@@YAXPEAW4_Button@@_J1$$QEAW41@U.c)
 *     ??$_Sort_unchecked@PEAW4_Button@@U?$less@X@std@@@std@@YAXPEAW4_Button@@0_JU?$less@X@0@@Z @ 0x1801D27EC (--$_Sort_unchecked@PEAW4_Button@@U-$less@X@std@@@std@@YAXPEAW4_Button@@0_JU-$less@X@0@@Z.c)
 */

__int64 __fastcall std::_Sort_unchecked<enum _Button *,std::less<void>>(char *a1, int *a2, __int64 a3, char a4)
{
  signed __int64 v5; // rax
  int *v7; // rsi
  int *i; // rdi
  int *v9; // r14
  __int64 v10; // r9
  __int64 result; // rax
  int *j; // rbx
  int v13; // ebp
  _DWORD *v14; // rcx
  __int64 v15; // r8
  __int64 k; // rbp
  int *v17; // rsi
  int *v18; // [rsp+30h] [rbp-28h] BYREF
  int *v19; // [rsp+38h] [rbp-20h]
  int v20; // [rsp+60h] [rbp+8h] BYREF

  v5 = (char *)a2 - a1;
  v7 = a2;
  for ( i = (int *)a1; ; v5 = (char *)v7 - (char *)i )
  {
    result = v5 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( result <= 128 )
    {
      if ( i != v7 )
      {
        for ( j = i + 1; j != v7; ++j )
        {
          v13 = *j;
          v14 = j;
          if ( *j >= *i )
          {
            for ( result = (__int64)j; ; v14 = (_DWORD *)result )
            {
              result -= 4LL;
              if ( v13 >= *(_DWORD *)result )
                break;
              *v14 = *(_DWORD *)result;
            }
            *v14 = v13;
          }
          else
          {
            result = (__int64)memmove_0(i + 1, i, (char *)j - (char *)i);
            *i = v13;
          }
        }
      }
      return result;
    }
    if ( a3 <= 0 )
      break;
    std::_Partition_by_median_guess_unchecked<enum _Button *,std::less<void>>(&v18, i, v7);
    v9 = v19;
    LOBYTE(v10) = a4;
    a3 = (a3 >> 2) + (a3 >> 1);
    if ( (__int64)(((char *)v18 - (char *)i) & 0xFFFFFFFFFFFFFFFCuLL) >= (__int64)(((char *)v7 - (char *)v19) & 0xFFFFFFFFFFFFFFFCuLL) )
    {
      std::_Sort_unchecked<enum _Button *,std::less<void>>(v19, v7, a3, v10);
      v7 = v18;
    }
    else
    {
      std::_Sort_unchecked<enum _Button *,std::less<void>>(i, v18, a3, v10);
      i = v9;
    }
  }
  v15 = v7 - i;
  for ( k = ((char *)v7 - (char *)i) >> 3;
        k > 0;
        result = std::_Pop_heap_hole_by_index<enum _Button *,enum _Button,std::less<void>>((__int64)i, k, v15, &v20) )
  {
    v20 = i[--k];
  }
  if ( v15 >= 2 )
  {
    v17 = v7 - 1;
    do
    {
      v20 = *v17;
      *v17 = *i;
      std::_Pop_heap_hole_by_index<enum _Button *,enum _Button,std::less<void>>((__int64)i, 0LL, v17 - i, &v20);
      result = ((unsigned __int64)--v17 + 4LL - (_QWORD)i) & 0xFFFFFFFFFFFFFFFCuLL;
    }
    while ( result >= 8 );
  }
  return result;
}
