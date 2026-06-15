/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@Ucase_insensitive_hash@@Ucase_insensitive_equality@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x1801573A8
 * Callers:
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@Ucase_insensitive_hash@@Ucase_insensitive_equality@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@2@$0A@@std@@@std@@IEAAXXZ @ 0x180157598 (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$al_ea_180157598.c)
 * Callees:
 *     ??Rcase_insensitive_hash@@QEBA_KAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800417A0 (--Rcase_insensitive_hash@@QEBA_KAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@2@@Z @ 0x1800426C8 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Hash<std::_Umap_traits<std::wstring,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>,std::_Uhash_compare<std::wstring,case_insensitive_hash,case_insensitive_equality>,std::allocator<std::pair<std::wstring const,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>>>,0>>::_Forced_rehash(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rcx
  __int64 v5; // rbx
  unsigned __int64 v6; // rbp
  __int64 *v7; // rsi
  _QWORD *v8; // rcx
  __int64 result; // rax
  _QWORD *v10; // rbx
  _QWORD *v11; // rdi
  _QWORD *v12; // r12
  __int64 v13; // r14
  __int64 v14; // r15
  _QWORD *v15; // rsi
  _QWORD *v16; // rdx
  _QWORD *v17; // rcx
  _QWORD *v18; // r8
  _QWORD *v19; // rdx
  __int64 *v20; // r8
  _QWORD *v21; // rdx
  _QWORD *v22; // rcx
  _QWORD *v23; // r8
  _QWORD *v24; // rdx
  _QWORD *v25; // rdx

  _BitScanReverse64(&v3, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    std::_Xlength_error("invalid hash bucket count");
  _BitScanReverse64(&v4, (a2 - 1) | 1);
  v5 = 1LL << ((unsigned __int8)v4 + 1);
  v6 = a1[1];
  v7 = a1 + 3;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>>>>>>::_Assign_grow(
    (__int64)(a1 + 3),
    2 * v5,
    v6);
  result = v5 - 1;
  a1[6] = v5 - 1;
  a1[7] = v5;
  v10 = *(_QWORD **)a1[1];
  v11 = v10;
  while ( v10 != (_QWORD *)v6 )
  {
    v11 = (_QWORD *)*v11;
    v12 = v10 + 2;
    result = case_insensitive_hash::operator()((__int64)v8, (__int64)(v10 + 2));
    v13 = 2 * (result & a1[6]);
    v14 = *v7;
    if ( *(_QWORD *)(*v7 + 16 * (result & a1[6])) == v6 )
    {
      *(_QWORD *)(v14 + 16 * (result & a1[6])) = v10;
      *(_QWORD *)(v14 + 8 * v13 + 8) = v10;
    }
    else
    {
      v15 = *(_QWORD **)(v14 + 16 * (result & a1[6]) + 8);
      v16 = v15 + 2;
      if ( v15[5] >= 8uLL )
        v16 = (_QWORD *)*v16;
      v17 = v10 + 2;
      if ( v10[5] >= 8uLL )
        v17 = (_QWORD *)*v12;
      result = _o__wcsicmp(v17, v16);
      if ( (_DWORD)result )
      {
        while ( 1 )
        {
          v20 = v15 + 1;
          if ( *(_QWORD **)(v14 + 8 * v13) == v15 )
            break;
          v15 = (_QWORD *)*v20;
          v21 = (_QWORD *)(*v20 + 16);
          if ( *(_QWORD *)(*v20 + 40) >= 8uLL )
            v21 = (_QWORD *)*v21;
          v22 = v10 + 2;
          if ( v10[5] >= 8uLL )
            v22 = (_QWORD *)*v12;
          if ( !(unsigned int)_o__wcsicmp(v22, v21) )
          {
            v23 = (_QWORD *)*v15;
            v24 = (_QWORD *)v10[1];
            *v24 = v11;
            v8 = (_QWORD *)v11[1];
            *v8 = v23;
            result = v23[1];
            *(_QWORD *)result = v10;
            v23[1] = v8;
            v11[1] = v24;
            v10[1] = result;
            goto LABEL_23;
          }
        }
        v25 = (_QWORD *)v10[1];
        *v25 = v11;
        result = v11[1];
        *(_QWORD *)result = v15;
        v8 = (_QWORD *)*v20;
        *v8 = v10;
        *v20 = result;
        v11[1] = v25;
        v10[1] = v8;
        *(_QWORD *)(v14 + 8 * v13) = v10;
      }
      else
      {
        v18 = (_QWORD *)*v15;
        if ( (_QWORD *)*v15 != v10 )
        {
          v19 = (_QWORD *)v10[1];
          *v19 = v11;
          v8 = (_QWORD *)v11[1];
          *v8 = v18;
          result = v18[1];
          *(_QWORD *)result = v10;
          v18[1] = v8;
          v11[1] = v19;
          v10[1] = result;
        }
        *(_QWORD *)(v14 + 8 * v13 + 8) = v10;
      }
LABEL_23:
      v7 = a1 + 3;
    }
    v10 = v11;
  }
  return result;
}
