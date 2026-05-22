/*
 * XREFs of ?IsComboButtonCandidate@ButtonRecognizer@@AEBA_NAEAV?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@@Z @ 0x1801D3930
 * Callers:
 *     ?DetectComboButton@ButtonRecognizer@@QEAAJPEAUInputInfo@@@Z @ 0x1801D3164 (-DetectComboButton@ButtonRecognizer@@QEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x180056318 (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UDockInputInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18006A564 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUDockInputIde.c)
 *     ??$?8W4_Button@@V?$allocator@W4_Button@@@std@@@std@@YA_NAEBV?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@0@0@Z @ 0x1801D2374 (--$-8W4_Button@@V-$allocator@W4_Button@@@std@@@std@@YA_NAEBV-$vector@W4_Button@@V-$allocator@W4_.c)
 *     ??$_Sort_unchecked@PEAW4_Button@@U?$less@X@std@@@std@@YAXPEAW4_Button@@0_JU?$less@X@0@@Z @ 0x1801D27EC (--$_Sort_unchecked@PEAW4_Button@@U-$less@X@std@@@std@@YAXPEAW4_Button@@0_JU-$less@X@0@@Z.c)
 *     ??0?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1801D2C0C (--0-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall ButtonRecognizer::IsComboButtonCandidate(__int64 a1, char **a2)
{
  char v4; // di
  __int64 v5; // rax
  int **v6; // r8
  int *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r11
  signed __int64 v10; // r9
  char *i; // rdx
  char **v12; // rdx
  int *v13; // rcx
  int *v14; // rax
  char *v16; // [rsp+20h] [rbp-28h] BYREF
  int *v17; // [rsp+28h] [rbp-20h]
  __int64 v18; // [rsp+50h] [rbp+8h] BYREF

  std::vector<enum _Button>::vector<enum _Button>((void **)&v16, (__int64)a2);
  v4 = 0;
  std::_Sort_unchecked<enum _Button *,std::less<void>>(v16, v17, ((char *)v17 - v16) >> 2, 0);
  v5 = **(_QWORD **)(a1 + 32);
  v18 = v5;
  while ( !*(_BYTE *)(v5 + 25) )
  {
    v6 = (int **)(v5 + 48);
    if ( *(_BYTE *)(v5 + 40) )
    {
      v7 = *v6;
      v8 = (a2[1] - *a2) >> 2;
      if ( v6[1] - *v6 < v8 )
        goto LABEL_23;
      v9 = (__int64)&v6[1][-v8];
      v10 = (char *)v7 - *a2;
      for ( i = *a2; i != a2[1]; i += 4 )
      {
        while ( *(_DWORD *)&i[v10] != *(_DWORD *)i )
        {
          if ( v7 == (int *)v9 )
            goto LABEL_23;
          ++v7;
          v10 += 4LL;
          i = *a2;
        }
      }
      if ( v7 == v6[1] )
        goto LABEL_23;
      v12 = a2;
    }
    else
    {
      v13 = *v6;
      v14 = (int *)v16;
      while ( v13 != v6[1] )
      {
        if ( v14 == v17 )
          goto LABEL_21;
        if ( *v14 < *v13 )
          goto LABEL_23;
        if ( *v14 <= *v13 )
          ++v14;
        ++v13;
      }
      if ( v14 != v17 )
        goto LABEL_23;
LABEL_21:
      v12 = &v16;
    }
    if ( !std::operator==<enum _Button,std::allocator<enum _Button>>((__int64)v6, v12) )
    {
      v4 = 1;
      break;
    }
LABEL_23:
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<DockInputIdentity const,DockInputInfo>>>,std::_Iterator_base0>::operator++(&v18);
    v5 = v18;
  }
  std::vector<Windows::UI::Color>::_Tidy((__int64)&v16);
  return v4;
}
