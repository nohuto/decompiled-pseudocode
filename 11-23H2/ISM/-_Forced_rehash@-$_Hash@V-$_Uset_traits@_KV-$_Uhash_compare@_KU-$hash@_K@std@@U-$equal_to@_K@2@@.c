/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x1800A3930
 * Callers:
 *     ??$emplace@AEB_K@?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@@std@@_N@1@AEB_K@Z @ 0x18001BE14 (--$emplace@AEB_K@-$_Hash@V-$_Uset_traits@_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@.c)
 *     ??$emplace@AEBQEAUIHeatSystemContextClient@@@?$_Hash@V?$_Uset_traits@PEAUIHeatSystemContextClient@@V?$_Uhash_compare@PEAUIHeatSystemContextClient@@U?$hash@PEAUIHeatSystemContextClient@@@std@@U?$equal_to@PEAUIHeatSystemContextClient@@@3@@std@@V?$allocator@PEAUIHeatSystemContextClient@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUIHeatSystemContextClient@@@std@@@std@@@std@@_N@1@AEBQEAUIHeatSystemContextClient@@@Z @ 0x1801A2690 (--$emplace@AEBQEAUIHeatSystemContextClient@@@-$_Hash@V-$_Uset_traits@PEAUIHeatSystemContextClien.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000E920 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUIHeatSystemContextClient@@@std@@@std@@U_Iterator_base0@2@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUIHeatSystemContextClient@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1800A3808 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_const_iterator@V-$_List_v_ea_1800A3808.c)
 */

unsigned __int64 __fastcall std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::_Forced_rehash(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rcx
  __int64 v6; // rbx
  unsigned __int64 *v7; // rcx
  unsigned __int64 result; // rax
  const unsigned __int8 *v9; // rbx
  const unsigned __int8 *v10; // r11
  unsigned __int64 **v11; // rdx
  __int64 v12; // r11
  __int64 v13; // r9
  __int64 v14; // r8
  unsigned __int64 v15; // r10
  const unsigned __int8 **v16; // rdx
  unsigned __int64 *v17; // r10
  unsigned __int64 v18; // r8
  const unsigned __int8 **v19; // rdx
  const unsigned __int8 **v20; // rdx

  _BitScanReverse64(&v3, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    std::_Xlength_error("invalid hash bucket count");
  v4 = a1[1];
  _BitScanReverse64(&v5, (a2 - 1) | 1);
  v6 = 1LL << ((unsigned __int8)v5 + 1);
  std::_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<IHeatSystemContextClient *>>,std::_Iterator_base0>>>::_Assign_grow(
    (__int64)(a1 + 3),
    2 * v6,
    v4);
  result = v6 - 1;
  a1[7] = v6;
  a1[6] = v6 - 1;
  v9 = *(const unsigned __int8 **)a1[1];
LABEL_4:
  while ( 1 )
  {
    v10 = v9;
    if ( v9 == (const unsigned __int8 *)v4 )
      return result;
    v9 = *(const unsigned __int8 **)v9;
    result = std::_Fnv1a_append_bytes((__int64)v7, v10 + 16, 8uLL);
    v13 = a1[3];
    v14 = 2 * (a1[6] & result);
    if ( *(_QWORD *)(v13 + 16 * (a1[6] & result)) == v4 )
    {
      *(_QWORD *)(v13 + 16 * (a1[6] & result)) = v12;
      goto LABEL_7;
    }
    result = *(_QWORD *)(v13 + 16 * (a1[6] & result) + 8);
    v7 = *v11;
    if ( *v11 == *(unsigned __int64 **)(result + 16) )
    {
      v15 = *(_QWORD *)result;
      if ( *(_QWORD *)result != v12 )
      {
        v16 = *(const unsigned __int8 ***)(v12 + 8);
        *v16 = v9;
        v7 = (unsigned __int64 *)*((_QWORD *)v9 + 1);
        *v7 = v15;
        result = *(_QWORD *)(v15 + 8);
        *(_QWORD *)result = v12;
        *(_QWORD *)(v15 + 8) = v7;
        *((_QWORD *)v9 + 1) = v16;
        *(_QWORD *)(v12 + 8) = result;
      }
LABEL_7:
      *(_QWORD *)(v13 + 8 * v14 + 8) = v12;
    }
    else
    {
      while ( 1 )
      {
        v17 = (unsigned __int64 *)(result + 8);
        if ( *(_QWORD *)(v13 + 8 * v14) == result )
          break;
        result = *v17;
        if ( v7 == *(unsigned __int64 **)(*v17 + 16) )
        {
          v18 = *(_QWORD *)result;
          v19 = *(const unsigned __int8 ***)(v12 + 8);
          *v19 = v9;
          v7 = (unsigned __int64 *)*((_QWORD *)v9 + 1);
          *v7 = v18;
          result = *(_QWORD *)(v18 + 8);
          *(_QWORD *)result = v12;
          *(_QWORD *)(v18 + 8) = v7;
          *((_QWORD *)v9 + 1) = v19;
          *(_QWORD *)(v12 + 8) = result;
          goto LABEL_4;
        }
      }
      v20 = *(const unsigned __int8 ***)(v12 + 8);
      *v20 = v9;
      v7 = (unsigned __int64 *)*((_QWORD *)v9 + 1);
      *v7 = result;
      result = *v17;
      *(_QWORD *)result = v12;
      *v17 = (unsigned __int64)v7;
      *((_QWORD *)v9 + 1) = v20;
      *(_QWORD *)(v12 + 8) = result;
      *(_QWORD *)(v13 + 8 * v14) = v12;
    }
  }
}
