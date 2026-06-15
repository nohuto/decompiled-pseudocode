/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x180050960
 * Callers:
 *     ??$emplace@AEAPEBGAEAV?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@std@@_N@1@AEAPEBGAEAV?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180040BA0 (--$emplace@AEAPEBGAEAV-$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18003C830 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$?RV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V01@@?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEBA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@0@Z @ 0x180040E94 (--$-RV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V01@@-$_Uhash_compare@V-$basi.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@2@@Z @ 0x180053FF0 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_180053FF0.c)
 */

char __fastcall std::_Hash<std::_Umap_traits<std::wstring,wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>>,0>>::_Forced_rehash(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  _QWORD *v4; // rsi
  __int64 *v5; // rdi
  unsigned __int64 v6; // rcx
  __int64 v7; // rbx
  _QWORD *v8; // rcx
  __int64 appended; // rax
  _QWORD *v10; // r11
  _QWORD *v11; // rbx
  const unsigned __int8 **v12; // r15
  const unsigned __int8 *v13; // rdx
  __int64 v14; // r11
  __int64 v15; // rbp
  __int64 v16; // r14
  _QWORD *v17; // rdi
  __int64 v18; // r11
  _QWORD *v19; // r13
  _QWORD *v20; // rdx
  __int64 v21; // r8
  _QWORD *v22; // rdx
  __int64 v23; // r8
  _QWORD *v24; // rdx

  _BitScanReverse64(&v3, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    std::_Xlength_error("invalid hash bucket count");
  v4 = (_QWORD *)a1[1];
  v5 = a1 + 3;
  _BitScanReverse64(&v6, (a2 - 1) | 1);
  v7 = 1LL << ((unsigned __int8)v6 + 1);
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>>>>>>::_Assign_grow(
    a1 + 3,
    2 * v7,
    v4);
  a1[7] = v7;
  LOBYTE(appended) = v7 - 1;
  a1[6] = v7 - 1;
  v10 = *(_QWORD **)a1[1];
  v11 = v10;
  while ( v10 != v4 )
  {
    v11 = (_QWORD *)*v11;
    v12 = (const unsigned __int8 **)(v10 + 2);
    v13 = (const unsigned __int8 *)(v10 + 2);
    if ( v10[5] >= 8uLL )
      v13 = *v12;
    appended = std::_Fnv1a_append_bytes((__int64)v8, v13, 2LL * v10[4]);
    v15 = *v5;
    v16 = 2 * (a1[6] & appended);
    if ( *(_QWORD **)(*v5 + 16 * (a1[6] & appended)) == v4 )
    {
      *(_QWORD *)(v15 + 16 * (a1[6] & appended)) = v14;
      *(_QWORD *)(v15 + 8 * v16 + 8) = v14;
    }
    else
    {
      v17 = *(_QWORD **)(v15 + 16 * (a1[6] & appended) + 8);
      LOBYTE(appended) = std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>::operator()<std::wstring,std::wstring>(
                           (__int64)v8,
                           (__int64)v12,
                           (__int64)(v17 + 2));
      if ( (_BYTE)appended )
      {
        v19 = v17;
        do
        {
          if ( *(_QWORD **)(v15 + 8 * v16) == v19 )
          {
            v20 = *(_QWORD **)(v18 + 8);
            *v20 = v11;
            v8 = (_QWORD *)v11[1];
            *v8 = v17;
            appended = v17[1];
            *(_QWORD *)appended = v18;
            v17[1] = v8;
            v11[1] = v20;
            *(_QWORD *)(v18 + 8) = appended;
            *(_QWORD *)(v15 + 8 * v16) = v18;
            goto LABEL_13;
          }
          v17 = (_QWORD *)v17[1];
          v19 = v17;
        }
        while ( std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>::operator()<std::wstring,std::wstring>(
                  (__int64)v8,
                  (__int64)v12,
                  (__int64)(v17 + 2)) );
        v23 = *v17;
        v24 = *(_QWORD **)(v18 + 8);
        *v24 = v11;
        v8 = (_QWORD *)v11[1];
        *v8 = v23;
        appended = *(_QWORD *)(v23 + 8);
        *(_QWORD *)appended = v18;
        *(_QWORD *)(v23 + 8) = v8;
        v11[1] = v24;
        *(_QWORD *)(v18 + 8) = appended;
      }
      else
      {
        v21 = *v17;
        if ( *v17 != v18 )
        {
          v22 = *(_QWORD **)(v18 + 8);
          *v22 = v11;
          v8 = (_QWORD *)v11[1];
          *v8 = v21;
          appended = *(_QWORD *)(v21 + 8);
          *(_QWORD *)appended = v18;
          *(_QWORD *)(v21 + 8) = v8;
          v11[1] = v22;
          *(_QWORD *)(v18 + 8) = appended;
        }
        *(_QWORD *)(v15 + 8 * v16 + 8) = v18;
      }
LABEL_13:
      v5 = a1 + 3;
    }
    v10 = v11;
  }
  return appended;
}
