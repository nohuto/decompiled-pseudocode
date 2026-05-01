/*
 * XREFs of ??$_Find_hint@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_hint_result@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@PEAX@std@@@1@QEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@PEAX@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18062875C
 * Callers:
 *     ??$_Emplace_hint@AEBU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@@2@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@PEAX@1@QEAU21@AEBU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@1@@Z @ 0x180628634 (--$_Emplace_hint@AEBU-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@W4.c)
 * Callees:
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHAEBV12@@Z @ 0x1802D3736 (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHAEBV12@@Z.c)
 *     ??$_Lower_bound_duplicate@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@@2@$0A@@std@@@std@@IEBA_NQEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@PEAX@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18040C294 (--$_Lower_bound_duplicate@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$_Tree.c)
 *     ??$_Find_lower_bound@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@PEAX@std@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x180628954 (--$_Find_lower_bound@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@_ea_180628954.c)
 *     ??F?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180628A7C (--F-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_stri.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<std::wstring,enum JavaOption,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,enum JavaOption>>,0>>::_Find_hint<std::wstring>(
        __int64 **a1,
        __int64 a2,
        char *a3,
        char *a4)
{
  __int64 v7; // rdi
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rdi
  int v12; // eax
  char v13; // cl
  __int64 result; // rax
  int v15; // eax
  __int64 *v16; // rdi
  char v17; // r14
  __int64 *v18; // rax
  __int64 **v19; // rcx
  __int64 *v20; // rcx
  int v21; // eax
  __int64 v22; // rdi
  __int64 v23; // rcx
  bool v24; // zf
  __int128 v25; // xmm0
  __int128 v26; // [rsp+20h] [rbp-38h] BYREF
  __int64 v27; // [rsp+30h] [rbp-28h]
  __int64 **v28; // [rsp+60h] [rbp+8h] BYREF

  v28 = a1;
  if ( !a3[25] )
  {
    LOBYTE(v10) = std::wstring::compare(a4, a3 + 32);
    v9 = qword_18098FDF8;
    if ( a3 == *(char **)qword_18098FDF8 )
    {
      if ( v10 < 0 )
      {
        *(_QWORD *)a2 = a3;
        *(_DWORD *)(a2 + 8) = 1;
        *(_BYTE *)(a2 + 16) = 0;
        return a2;
      }
      goto LABEL_26;
    }
    if ( v10 < 0 )
    {
      v28 = (__int64 **)a3;
      v11 = *(_QWORD *)std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,enum JavaOption>>>,std::_Iterator_base0>::operator--(&v28);
      LOBYTE(v12) = std::wstring::compare((char *)(v11 + 32), a4);
      if ( v12 >= 0 )
        goto LABEL_26;
      v13 = *(_BYTE *)(*(_QWORD *)(v11 + 16) + 25LL);
      result = a2;
      *(_BYTE *)(a2 + 16) = 0;
      if ( v13 )
      {
        *(_QWORD *)a2 = v11;
LABEL_12:
        *(_DWORD *)(a2 + 8) = 0;
        return result;
      }
      *(_QWORD *)a2 = a3;
      goto LABEL_14;
    }
    LOBYTE(v15) = std::wstring::compare(a3 + 32, a4);
    if ( v15 >= 0 )
    {
      *(_QWORD *)a2 = a3;
      *(_BYTE *)(a2 + 16) = 1;
      goto LABEL_33;
    }
    v16 = (__int64 *)*((_QWORD *)a3 + 2);
    v17 = *((_BYTE *)v16 + 25);
    if ( v17 )
    {
      v16 = (__int64 *)*((_QWORD *)a3 + 1);
      if ( *((_BYTE *)v16 + 25) )
      {
LABEL_29:
        *(_BYTE *)(a2 + 16) = 0;
        result = a2;
        if ( v17 )
        {
          *(_QWORD *)a2 = a3;
          goto LABEL_12;
        }
        *(_QWORD *)a2 = v16;
LABEL_14:
        *(_DWORD *)(a2 + 8) = 1;
        return result;
      }
      v18 = (__int64 *)a3;
      do
      {
        v19 = (__int64 **)v16;
        if ( v18 != (__int64 *)v16[2] )
          break;
        v16 = (__int64 *)v16[1];
        v18 = (__int64 *)v19;
      }
      while ( !*((_BYTE *)v16 + 25) );
    }
    else
    {
      v20 = (__int64 *)*v16;
      if ( !*(_BYTE *)(*v16 + 25) )
      {
        do
        {
          v16 = v20;
          v20 = (__int64 *)*v20;
        }
        while ( !*((_BYTE *)v20 + 25) );
      }
    }
    if ( !*((_BYTE *)v16 + 25) )
    {
      LOBYTE(v21) = std::wstring::compare(a4, (char *)v16 + 32);
      if ( v21 >= 0 )
        goto LABEL_26;
    }
    goto LABEL_29;
  }
  v7 = qword_18098FDF8;
  if ( *(_BYTE *)(*(_QWORD *)(qword_18098FDF8 + 8) + 25LL)
    || (LOBYTE(v8) = std::wstring::compare((char *)(*(_QWORD *)(qword_18098FDF8 + 16) + 32LL), a4), v8 < 0) )
  {
    *(_QWORD *)a2 = *(_QWORD *)(v7 + 16);
    *(_BYTE *)(a2 + 16) = 0;
LABEL_33:
    *(_DWORD *)(a2 + 8) = 0;
    return a2;
  }
LABEL_26:
  std::_Tree<std::_Tmap_traits<std::wstring,enum JavaOption,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,enum JavaOption>>,0>>::_Find_lower_bound<std::wstring>(
    v9,
    &v26,
    a4);
  v22 = v27;
  v24 = !std::_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<Win32AppInfo>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::shared_ptr<Win32AppInfo>>>,0>>::_Lower_bound_duplicate<std::wstring>(
           v23,
           v27,
           a4);
  result = a2;
  if ( v24 )
  {
    v25 = v26;
    *(_BYTE *)(a2 + 16) = 0;
    *(_OWORD *)a2 = v25;
  }
  else
  {
    *(_QWORD *)a2 = v22;
    *(_DWORD *)(a2 + 8) = 2;
    *(_BYTE *)(a2 + 16) = 1;
  }
  return result;
}
