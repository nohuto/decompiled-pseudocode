/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@Ucase_insensitive_hash@@Ucase_insensitive_equality@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x18015E864
 * Callers:
 *     ??$emplace@AEAPEBGV?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@Ucase_insensitive_hash@@Ucase_insensitive_equality@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@std@@@std@@@std@@_N@1@AEAPEBG$$QEAV?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@Z @ 0x18005DD6C (--$emplace@AEAPEBGV-$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U-$default_d.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@std@@@std@@@2@@Z @ 0x180053BF4 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_180053BF4.c)
 *     ??Rcase_insensitive_hash@@QEBA_KAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18005DF24 (--Rcase_insensitive_hash@@QEBA_KAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
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
  __int64 result; // rax
  _QWORD *v9; // rbx
  _QWORD *v10; // rdi
  _QWORD *v11; // r12
  __int64 v12; // r14
  __int64 v13; // r15
  _QWORD *v14; // rsi
  _QWORD *v15; // rdx
  _QWORD *v16; // rcx
  _QWORD *v17; // r8
  _QWORD *v18; // rdx
  _QWORD *v19; // rcx
  __int64 *v20; // r8
  _QWORD *v21; // rdx
  _QWORD *v22; // rcx
  _QWORD *v23; // r8
  _QWORD *v24; // rdx
  _QWORD *v25; // rcx
  _QWORD *v26; // rdx
  _QWORD *v27; // rcx

  _BitScanReverse64(&v3, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    std::_Xlength_error("invalid hash bucket count");
  _BitScanReverse64(&v4, (a2 - 1) | 1);
  v5 = 1LL << ((unsigned __int8)v4 + 1);
  v6 = a1[1];
  v7 = a1 + 3;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<_GUID const,enum ValidEffectPackConfigurationSettings>>>>>>::_Assign_grow(
    (__int64)(a1 + 3),
    2 * v5,
    v6);
  result = v5 - 1;
  a1[6] = v5 - 1;
  a1[7] = v5;
  v9 = *(_QWORD **)a1[1];
  v10 = v9;
  while ( v9 != (_QWORD *)v6 )
  {
    v10 = (_QWORD *)*v10;
    v11 = v9 + 2;
    result = case_insensitive_hash::operator()();
    v12 = 2 * (result & a1[6]);
    v13 = *v7;
    if ( *(_QWORD *)(*v7 + 16 * (result & a1[6])) == v6 )
    {
      *(_QWORD *)(v13 + 16 * (result & a1[6])) = v9;
      *(_QWORD *)(v13 + 8 * v12 + 8) = v9;
    }
    else
    {
      v14 = *(_QWORD **)(v13 + 16 * (result & a1[6]) + 8);
      v15 = v14 + 2;
      if ( v14[5] >= 8uLL )
        v15 = (_QWORD *)*v15;
      v16 = v9 + 2;
      if ( v9[5] >= 8uLL )
        v16 = (_QWORD *)*v11;
      result = _o__wcsicmp(v16, v15);
      if ( (_DWORD)result )
      {
        while ( 1 )
        {
          v20 = v14 + 1;
          if ( *(_QWORD **)(v13 + 8 * v12) == v14 )
            break;
          v14 = (_QWORD *)*v20;
          v21 = (_QWORD *)(*v20 + 16);
          if ( *(_QWORD *)(*v20 + 40) >= 8uLL )
            v21 = (_QWORD *)*v21;
          v22 = v9 + 2;
          if ( v9[5] >= 8uLL )
            v22 = (_QWORD *)*v11;
          if ( !(unsigned int)_o__wcsicmp(v22, v21) )
          {
            v23 = (_QWORD *)*v14;
            v24 = (_QWORD *)v9[1];
            *v24 = v10;
            v25 = (_QWORD *)v10[1];
            *v25 = v23;
            result = v23[1];
            *(_QWORD *)result = v9;
            v23[1] = v25;
            v10[1] = v24;
            v9[1] = result;
            goto LABEL_23;
          }
        }
        v26 = (_QWORD *)v9[1];
        *v26 = v10;
        result = v10[1];
        *(_QWORD *)result = v14;
        v27 = (_QWORD *)*v20;
        *v27 = v9;
        *v20 = result;
        v10[1] = v26;
        v9[1] = v27;
        *(_QWORD *)(v13 + 8 * v12) = v9;
      }
      else
      {
        v17 = (_QWORD *)*v14;
        if ( (_QWORD *)*v14 != v9 )
        {
          v18 = (_QWORD *)v9[1];
          *v18 = v10;
          v19 = (_QWORD *)v10[1];
          *v19 = v17;
          result = v17[1];
          *(_QWORD *)result = v9;
          v17[1] = v19;
          v10[1] = v18;
          v9[1] = result;
        }
        *(_QWORD *)(v13 + 8 * v12 + 8) = v9;
      }
LABEL_23:
      v7 = a1 + 3;
    }
    v9 = v10;
  }
  return result;
}
