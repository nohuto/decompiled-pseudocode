/*
 * XREFs of ??$_Insert@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@U_Iterator_base0@2@@2@@?$_Hash@V?$_Uset_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$_Uhash_compare@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@std@@_N@1@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@U_Iterator_base0@2@@1@@Z @ 0x1800BC868
 * Callers:
 *     ?_Check_size@?$_Hash@V?$_Uset_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$_Uhash_compare@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@$0A@@std@@@std@@IEAAXXZ @ 0x1800C2128 (-_Check_size@-$_Hash@V-$_Uset_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@.c)
 * Callees:
 *     ?_Check_size@?$_Hash@V?$_Uset_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$_Uhash_compare@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@$0A@@std@@@std@@IEAAXXZ @ 0x1800C2128 (-_Check_size@-$_Hash@V-$_Uset_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@.c)
 *     ?erase@?$list@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@2@@Z @ 0x1800C2844 (-erase@-$list@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V-$allocator@V-$b.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>::_Insert<std::wstring const &,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::wstring>>,std::_Iterator_base0>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD **a4)
{
  _QWORD *v5; // r9
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // r11
  unsigned __int64 v10; // rcx
  unsigned __int64 i; // rdx
  unsigned __int64 v12; // r8
  int v13; // ecx
  __int64 v14; // r8
  __int64 v15; // rax
  _QWORD *v16; // rbx
  _QWORD *v17; // rdx
  _QWORD *v18; // rax
  unsigned __int64 v19; // r15
  unsigned __int64 v20; // rdx
  _WORD *v21; // r11
  int v22; // eax
  _QWORD *v23; // rax
  unsigned __int64 v24; // r11
  unsigned __int64 v25; // rdx
  __int64 result; // rax
  _QWORD *v27; // rax
  _QWORD *v28; // rdx
  __int64 v29; // rdx
  _QWORD *v30; // rax
  __int64 v31; // rax
  _QWORD *v32; // rax
  _QWORD **v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rcx
  _QWORD *iter; // rax
  __int64 v38; // [rsp+20h] [rbp-48h] BYREF
  _QWORD *v40; // [rsp+80h] [rbp+18h] BYREF
  _QWORD **v41; // [rsp+88h] [rbp+20h]

  v41 = a4;
  v5 = a3;
  v8 = a3[2];
  v9 = 2 * v8;
  if ( a3[3] >= 8uLL )
    a3 = (_QWORD *)*a3;
  v10 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < v9; ++i )
    v10 = 0x100000001B3LL * (*((unsigned __int8 *)a3 + i) ^ v10);
  v12 = (HIDWORD(v10) ^ v10) & *(_QWORD *)(a1 + 40);
  v13 = -1;
  if ( *(_QWORD *)(a1 + 48) <= v12 )
    v12 += -1LL - (*(_QWORD *)(a1 + 40) >> 1);
  v14 = 2 * v12;
  v15 = *(_QWORD *)(a1 + 16);
  v16 = *(_QWORD **)a1;
  v17 = *(_QWORD **)(v15 + 8 * v14);
  v40 = v17;
  if ( v16 != v17 )
  {
    v16 = **(_QWORD ***)(v15 + 8 * v14 + 8);
    while ( v16 != v17 )
    {
      v16 = (_QWORD *)v16[1];
      v18 = v16 + 2;
      v19 = v16[4];
      if ( v16[5] >= 8uLL )
        v18 = (_QWORD *)*v18;
      v20 = v16[4];
      if ( v8 < v19 )
        v20 = v8;
      if ( v5[3] < 8uLL )
        v21 = v5;
      else
        v21 = (_WORD *)*v5;
      if ( v20 )
      {
        while ( *v21 == *(_WORD *)v18 )
        {
          ++v21;
          v18 = (_QWORD *)((char *)v18 + 2);
          if ( !--v20 )
            goto LABEL_20;
        }
        v22 = *v21 < *(_WORD *)v18 ? -1 : 1;
      }
      else
      {
LABEL_20:
        if ( v8 >= v19 )
          v22 = v8 != v19;
        else
          v22 = -1;
      }
      v17 = v40;
      if ( !v22 )
      {
        v23 = v16 + 2;
        if ( v5[3] >= 8uLL )
          v5 = (_QWORD *)*v5;
        v24 = v16[4];
        v25 = v8;
        if ( v24 < v8 )
          v25 = v16[4];
        if ( v16[5] >= 8uLL )
          v23 = (_QWORD *)*v23;
        if ( v25 )
        {
          while ( *(_WORD *)v23 == *(_WORD *)v5 )
          {
            v23 = (_QWORD *)((char *)v23 + 2);
            v5 = (_QWORD *)((char *)v5 + 2);
            if ( !--v25 )
              goto LABEL_34;
          }
          v13 = *(_WORD *)v23 < *(_WORD *)v5 ? -1 : 1;
        }
        else
        {
LABEL_34:
          if ( v24 >= v8 )
            v13 = v24 != v8;
        }
        if ( !v13 )
        {
          std::list<std::wstring>::erase(a1, &v40, a4, v5);
          *(_QWORD *)a2 = v16;
          *(_BYTE *)(a2 + 8) = 0;
          return a2;
        }
        v16 = (_QWORD *)*v16;
        break;
      }
    }
  }
  v27 = *a4;
  if ( v16 != *a4 )
  {
    *a4[1] = v27;
    *(_QWORD *)v27[1] = v16;
    *(_QWORD *)v16[1] = a4;
    v28 = (_QWORD *)v16[1];
    v16[1] = v27[1];
    v27[1] = a4[1];
    a4[1] = v28;
  }
  v29 = *(_QWORD *)(a1 + 16);
  v30 = *(_QWORD **)(v29 + 8 * v14);
  if ( v30 == *(_QWORD **)a1 )
  {
    *(_QWORD *)(v29 + 8 * v14) = a4;
    v31 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(v31 + 8 * v14 + 8) = a4;
  }
  else if ( v30 == v16 )
  {
    *(_QWORD *)(v29 + 8 * v14) = a4;
  }
  else
  {
    v32 = *(_QWORD **)(v29 + 8 * v14 + 8);
    v33 = (_QWORD **)*v32;
    *(_QWORD *)(v29 + 8 * v14 + 8) = *v32;
    if ( v33 != a4 )
    {
      v34 = *(_QWORD *)(a1 + 16);
      v35 = *(_QWORD *)(v34 + 8 * v14 + 8);
      *(_QWORD *)(v34 + 8 * v14 + 8) = *(_QWORD *)(v35 + 8);
    }
  }
  try
  {
    std::_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>::_Check_size();
    *(_QWORD *)a2 = a4;
    *(_BYTE *)(a2 + 8) = 1;
    result = a2;
  }
  catch ( ... )
  {
    iter = (_QWORD *)std::_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>::_Make_iter(
                       v36,
                       &v40,
                       v41);
    std::_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>::erase(
      a1,
      &v38,
      *iter);
    throw;
  }
  return result;
}
