/*
 * XREFs of ?IsComboButtonCandidate@ButtonRecognizer@@AEBA_NAEAV?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@@Z @ 0x1801A7D30
 * Callers:
 *     ?DetectComboButton@ButtonRecognizer@@QEAAJPEAUInputInfo@@@Z @ 0x1801A7548 (-DetectComboButton@ButtonRecognizer@@QEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x18004957C (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UDockInputInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800908D0 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUDockInputIde.c)
 *     ??$?8W4_Button@@V?$allocator@W4_Button@@@std@@@std@@YA_NAEBV?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@0@0@Z @ 0x1801A6760 (--$-8W4_Button@@V-$allocator@W4_Button@@@std@@@std@@YA_NAEBV-$vector@W4_Button@@V-$allocator@W4_.c)
 *     ??$_Sort_unchecked@PEAW4_Button@@U?$less@X@std@@@std@@YAXPEAW4_Button@@0_JU?$less@X@0@@Z @ 0x1801A6BD4 (--$_Sort_unchecked@PEAW4_Button@@U-$less@X@std@@@std@@YAXPEAW4_Button@@0_JU-$less@X@0@@Z.c)
 *     ??0?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1801A6FEC (--0-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall ButtonRecognizer::IsComboButtonCandidate(__int64 a1, char **a2)
{
  char v4; // di
  __int64 v5; // rax
  int **v6; // r9
  int *v7; // r11
  int *v8; // r8
  __int64 v9; // rdx
  int *v10; // rax
  int *v11; // rsi
  signed __int64 i; // r10
  char *j; // rdx
  char **v14; // rdx
  int *v15; // rcx
  int *v16; // rax
  char *v18; // [rsp+20h] [rbp-28h] BYREF
  int *v19; // [rsp+28h] [rbp-20h]
  __int64 v20; // [rsp+50h] [rbp+8h] BYREF

  std::vector<enum _Button>::vector<enum _Button>((void **)&v18, (__int64)a2);
  v4 = 0;
  std::_Sort_unchecked<enum _Button *,std::less<void>>(v18, v19, ((char *)v19 - v18) >> 2, 0);
  v5 = **(_QWORD **)(a1 + 32);
  v20 = v5;
  while ( !*(_BYTE *)(v5 + 25) )
  {
    v6 = (int **)(v5 + 48);
    if ( *(_BYTE *)(v5 + 40) )
    {
      v7 = *(int **)(v5 + 56);
      v8 = *v6;
      v9 = (a2[1] - *a2) >> 2;
      v10 = v7;
      if ( v6[1] - *v6 >= v9 )
      {
        v11 = &v7[-v9];
        v10 = v6[1];
        for ( i = (char *)v8 - *a2; ; i += 4LL )
        {
          for ( j = *a2; ; j += 4 )
          {
            if ( j == a2[1] )
            {
              v10 = v8;
              goto LABEL_11;
            }
            if ( *(_DWORD *)&j[i] != *(_DWORD *)j )
              break;
          }
          if ( v8 == v11 )
            break;
          ++v8;
        }
      }
LABEL_11:
      if ( v10 == v7 )
        goto LABEL_25;
      v14 = a2;
    }
    else
    {
      v15 = *v6;
      v16 = (int *)v18;
      while ( v15 != v6[1] )
      {
        if ( v16 == v19 )
          goto LABEL_23;
        if ( *v16 < *v15 )
          goto LABEL_25;
        if ( *v16 <= *v15 )
          ++v16;
        ++v15;
      }
      if ( v16 != v19 )
        goto LABEL_25;
LABEL_23:
      v14 = &v18;
    }
    if ( !std::operator==<enum _Button,std::allocator<enum _Button>>((__int64)v6, v14) )
    {
      v4 = 1;
      break;
    }
LABEL_25:
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<DockInputIdentity const,DockInputInfo>>>,std::_Iterator_base0>::operator++(&v20);
    v5 = v20;
  }
  std::vector<Windows::UI::Color>::_Tidy((__int64)&v18);
  return v4;
}
