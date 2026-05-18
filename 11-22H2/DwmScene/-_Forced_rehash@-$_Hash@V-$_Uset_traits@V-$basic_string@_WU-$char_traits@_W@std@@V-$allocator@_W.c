/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Uset_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$_Uhash_compare@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x18006E7A0
 * Callers:
 *     ?_Rehash_for_1@?$_Hash@V?$_Uset_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$_Uhash_compare@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@$0A@@std@@@std@@IEAAXXZ @ 0x18006EA6C (-_Rehash_for_1@-$_Hash@V-$_Uset_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@.c)
 * Callees:
 *     ??$_Hash_array_representation@_W@std@@YA_KQEB_W_K@Z @ 0x18001E9B4 (--$_Hash_array_representation@_W@std@@YA_KQEB_W_K@Z.c)
 *     ??$?RV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V01@@?$_Uhash_compare@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@QEBA_NAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@0@Z @ 0x18006182C (--$-RV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V01@@-$_Uhash_compare@V-$b.c)
 *     ??1_Clear_guard@?$_Hash@V?$_Uset_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$_Uhash_compare@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x180064244 (--1_Clear_guard@-$_Hash@V-$_Uset_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@U_Iterator_base0@2@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x18006E374 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_s.c)
 */

__int64 __fastcall std::_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>::_Forced_rehash(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  __int64 v4; // r12
  unsigned __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 *v7; // rbx
  __int64 *v8; // r11
  __int64 *v9; // rsi
  unsigned __int8 *v10; // rcx
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r11
  __int64 v14; // rbp
  __int64 v15; // rdi
  __int64 v16; // rcx
  _QWORD *v17; // r10
  __int64 v18; // r8
  __int64 **v19; // rdx
  _QWORD *v20; // rcx
  _QWORD *v21; // rax
  _QWORD *v22; // r14
  __int64 v23; // r8
  __int64 **v24; // rdx
  _QWORD *v25; // rcx
  _QWORD *v26; // rax
  __int64 **v27; // rdx
  _QWORD *v28; // rcx
  _QWORD *v29; // rax
  __int64 v31; // [rsp+58h] [rbp+10h] BYREF

  _BitScanReverse64(&v3, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    std::_Xlength_error("invalid hash bucket count");
  v4 = a1[1];
  _BitScanReverse64(&v5, (a2 - 1) | 1);
  v6 = 1LL << ((unsigned __int8)v5 + 1);
  std::_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::wstring>>,std::_Iterator_base0>>>::_Assign_grow(
    (__int64)(a1 + 3),
    2 * v6,
    v4);
  a1[7] = v6;
  a1[6] = v6 - 1;
  v7 = *(__int64 **)a1[1];
LABEL_4:
  while ( 1 )
  {
    v8 = v7;
    if ( v7 == (__int64 *)v4 )
      break;
    v7 = (__int64 *)*v7;
    v9 = v8 + 2;
    v10 = (unsigned __int8 *)(v8 + 2);
    if ( (unsigned __int64)v8[5] >= 8 )
      v10 = (unsigned __int8 *)*v9;
    v11 = std::_Hash_array_representation<wchar_t>(v10, v8[4]);
    v14 = a1[3];
    v15 = 2 * (a1[6] & v11);
    if ( *(_QWORD *)(v14 + 16 * (a1[6] & v11)) == v4 )
    {
      *(_QWORD *)(v14 + 16 * (a1[6] & v11)) = v13;
      goto LABEL_9;
    }
    if ( std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>::operator()<std::wstring,std::wstring>(
           v12,
           v9,
           *(_QWORD *)(v14 + 16 * (a1[6] & v11) + 8) + 16LL) )
    {
      v22 = v17;
      while ( *(_QWORD **)(v14 + 8 * v15) != v22 )
      {
        v22 = (_QWORD *)v17[1];
        if ( !std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>::operator()<std::wstring,std::wstring>(
                v16,
                v9,
                (__int64)(v22 + 2)) )
        {
          v23 = *v17;
          v24 = *(__int64 ***)(v13 + 8);
          *v24 = v7;
          v25 = (_QWORD *)v7[1];
          *v25 = v23;
          v26 = *(_QWORD **)(v23 + 8);
          *v26 = v13;
          *(_QWORD *)(v23 + 8) = v25;
          v7[1] = (__int64)v24;
          *(_QWORD *)(v13 + 8) = v26;
          goto LABEL_4;
        }
      }
      v27 = *(__int64 ***)(v13 + 8);
      *v27 = v7;
      v28 = (_QWORD *)v7[1];
      *v28 = v17;
      v29 = (_QWORD *)v17[1];
      *v29 = v13;
      v17[1] = v28;
      v7[1] = (__int64)v27;
      *(_QWORD *)(v13 + 8) = v29;
      *(_QWORD *)(v14 + 8 * v15) = v13;
    }
    else
    {
      v18 = *v17;
      if ( *v17 != v13 )
      {
        v19 = *(__int64 ***)(v13 + 8);
        *v19 = v7;
        v20 = (_QWORD *)v7[1];
        *v20 = v18;
        v21 = *(_QWORD **)(v18 + 8);
        *v21 = v13;
        *(_QWORD *)(v18 + 8) = v20;
        v7[1] = (__int64)v19;
        *(_QWORD *)(v13 + 8) = v21;
      }
LABEL_9:
      *(_QWORD *)(v14 + 8 * v15 + 8) = v13;
    }
  }
  v31 = 0LL;
  return std::_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>::_Clear_guard::~_Clear_guard(&v31);
}
