/*
 * XREFs of ??$_Find_hint@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_hint_result@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@PEAX@std@@@1@QEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@PEAX@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1801B77D0
 * Callers:
 *     ??$_Emplace_hint@AEBU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@@2@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@PEAX@1@QEAU21@AEBU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@1@@Z @ 0x1801B76A8 (--$_Emplace_hint@AEBU-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@W4.c)
 * Callees:
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHAEBV12@@Z @ 0x180126B5C (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHAEBV12@@Z.c)
 *     ??$_Find_lower_bound@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@PEAX@std@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1801B79C8 (--$_Find_lower_bound@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$_Tree@V-$_.c)
 *     ??$_Lower_bound_duplicate@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@@2@$0A@@std@@@std@@IEBA_NQEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@PEAX@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1801B7A40 (--$_Lower_bound_duplicate@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$_Tree.c)
 *     ??F?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1801B7B80 (--F-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_stri.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<std::wstring,enum JavaOption,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,enum JavaOption>>,0>>::_Find_hint<std::wstring>(
        __int64 **a1,
        __int64 a2,
        __int64 *a3,
        _QWORD *a4)
{
  __int64 v7; // rdi
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rdi
  char v11; // cl
  __int64 result; // rax
  __int64 *v13; // rdi
  char v14; // r14
  __int64 *v15; // rax
  __int64 **v16; // rcx
  __int64 *v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rcx
  bool v20; // zf
  __int128 v21; // xmm0
  __int128 v22; // [rsp+20h] [rbp-38h] BYREF
  __int64 v23; // [rsp+30h] [rbp-28h]
  __int64 **v24; // [rsp+60h] [rbp+8h] BYREF

  v24 = a1;
  if ( !*((_BYTE *)a3 + 25) )
  {
    v9 = std::wstring::compare(a4, a3 + 4);
    v8 = qword_1807B5660;
    if ( a3 == *(__int64 **)qword_1807B5660 )
    {
      if ( v9 < 0 )
      {
        *(_QWORD *)a2 = a3;
        *(_DWORD *)(a2 + 8) = 1;
        *(_BYTE *)(a2 + 16) = 0;
        return a2;
      }
      goto LABEL_26;
    }
    if ( v9 < 0 )
    {
      v24 = (__int64 **)a3;
      v10 = *(_QWORD *)std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,enum JavaOption>>>,std::_Iterator_base0>::operator--(&v24);
      if ( (int)std::wstring::compare((_QWORD *)(v10 + 32), a4) >= 0 )
        goto LABEL_26;
      v11 = *(_BYTE *)(*(_QWORD *)(v10 + 16) + 25LL);
      result = a2;
      *(_BYTE *)(a2 + 16) = 0;
      if ( v11 )
      {
        *(_QWORD *)a2 = v10;
LABEL_12:
        *(_DWORD *)(a2 + 8) = 0;
        return result;
      }
      *(_QWORD *)a2 = a3;
      goto LABEL_14;
    }
    if ( (int)std::wstring::compare(a3 + 4, a4) >= 0 )
    {
      *(_QWORD *)a2 = a3;
      *(_BYTE *)(a2 + 16) = 1;
      goto LABEL_33;
    }
    v13 = (__int64 *)a3[2];
    v14 = *((_BYTE *)v13 + 25);
    if ( v14 )
    {
      v13 = (__int64 *)a3[1];
      if ( *((_BYTE *)v13 + 25) )
      {
LABEL_29:
        *(_BYTE *)(a2 + 16) = 0;
        result = a2;
        if ( v14 )
        {
          *(_QWORD *)a2 = a3;
          goto LABEL_12;
        }
        *(_QWORD *)a2 = v13;
LABEL_14:
        *(_DWORD *)(a2 + 8) = 1;
        return result;
      }
      v15 = a3;
      do
      {
        v16 = (__int64 **)v13;
        if ( v15 != (__int64 *)v13[2] )
          break;
        v13 = (__int64 *)v13[1];
        v15 = (__int64 *)v16;
      }
      while ( !*((_BYTE *)v13 + 25) );
    }
    else
    {
      v17 = (__int64 *)*v13;
      if ( !*(_BYTE *)(*v13 + 25) )
      {
        do
        {
          v13 = v17;
          v17 = (__int64 *)*v17;
        }
        while ( !*((_BYTE *)v17 + 25) );
      }
    }
    if ( !*((_BYTE *)v13 + 25) && (int)std::wstring::compare(a4, v13 + 4) >= 0 )
      goto LABEL_26;
    goto LABEL_29;
  }
  v7 = qword_1807B5660;
  if ( *(_BYTE *)(*(_QWORD *)(qword_1807B5660 + 8) + 25LL)
    || (int)std::wstring::compare((_QWORD *)(*(_QWORD *)(qword_1807B5660 + 16) + 32LL), a4) < 0 )
  {
    *(_QWORD *)a2 = *(_QWORD *)(v7 + 16);
    *(_BYTE *)(a2 + 16) = 0;
LABEL_33:
    *(_DWORD *)(a2 + 8) = 0;
    return a2;
  }
LABEL_26:
  std::_Tree<std::_Tmap_traits<std::wstring,enum JavaOption,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,enum JavaOption>>,0>>::_Find_lower_bound<std::wstring>(
    v8,
    &v22,
    a4);
  v18 = v23;
  v20 = (unsigned __int8)std::_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<Win32AppInfo>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::shared_ptr<Win32AppInfo>>>,0>>::_Lower_bound_duplicate<std::wstring>(
                           v19,
                           v23,
                           a4) == 0;
  result = a2;
  if ( v20 )
  {
    v21 = v22;
    *(_BYTE *)(a2 + 16) = 0;
    *(_OWORD *)a2 = v21;
  }
  else
  {
    *(_QWORD *)a2 = v18;
    *(_DWORD *)(a2 + 8) = 2;
    *(_BYTE *)(a2 + 16) = 1;
  }
  return result;
}
