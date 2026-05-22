/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Umap_traits@W4GameInputGamepadButtons@@GV?$_Uhash_compare@W4GameInputGamepadButtons@@U?$hash@W4GameInputGamepadButtons@@@std@@U?$equal_to@W4GameInputGamepadButtons@@@3@@std@@V?$allocator@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x1801A7BCC
 * Callers:
 *     ??$_Insert_or_assign@AEBW4GameInputGamepadButtons@@AEAG@?$unordered_map@W4GameInputGamepadButtons@@GU?$hash@W4GameInputGamepadButtons@@@std@@U?$equal_to@W4GameInputGamepadButtons@@@3@V?$allocator@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@@3@@std@@AEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@@std@@@std@@@std@@_N@1@AEBW4GameInputGamepadButtons@@AEAG@Z @ 0x180015294 (--$_Insert_or_assign@AEBW4GameInputGamepadButtons@@AEAG@-$unordered_map@W4GameInputGamepadButton.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000F030 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unordered_map@KUTargetingInfo@Win32kInterop@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@@std@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unordered_map@KUTargetingInfo@Win32kInterop@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@@std@@@std@@@std@@@std@@@2@@Z @ 0x1800386E4 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_1800386E4.c)
 */

unsigned __int64 __fastcall std::_Hash<std::_Umap_traits<enum GameInputGamepadButtons,unsigned short,std::_Uhash_compare<enum GameInputGamepadButtons,std::hash<enum GameInputGamepadButtons>,std::equal_to<enum GameInputGamepadButtons>>,std::allocator<std::pair<enum GameInputGamepadButtons const,unsigned short>>,0>>::_Forced_rehash(
        __int64 a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rcx
  __int64 v3; // rdi
  unsigned __int64 v4; // rcx
  __int64 v5; // rbx
  unsigned __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // rsi
  const unsigned __int8 *v9; // r11
  const unsigned __int8 *v10; // rbx
  unsigned int *v11; // rdx
  __int64 v12; // r11
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // r10
  const unsigned __int8 **v16; // rdx
  unsigned __int64 *v17; // r10
  __int64 v18; // r8
  const unsigned __int8 **v19; // rdx
  const unsigned __int8 **v20; // rdx

  _BitScanReverse64(&v2, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v2 )
    std::_Xlength_error("invalid hash bucket count");
  v3 = qword_180278558;
  _BitScanReverse64(&v4, (a2 - 1) | 1);
  v5 = 1LL << ((unsigned __int8)v4 + 1);
  result = (unsigned __int64)std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,std::unordered_map<unsigned long,Win32kInterop::TargetingInfo>>>>>>>::_Assign_grow(
                               (__int64)&qword_180278568,
                               2 * v5,
                               qword_180278558);
  v8 = v5 - 1;
  qword_180278588 = v5;
  qword_180278580 = v5 - 1;
  v9 = *(const unsigned __int8 **)qword_180278558;
  v10 = *(const unsigned __int8 **)qword_180278558;
  while ( v9 != (const unsigned __int8 *)v3 )
  {
    v10 = *(const unsigned __int8 **)v10;
    result = std::_Fnv1a_append_bytes(v7, v9 + 16, 4uLL);
    v13 = qword_180278568;
    v14 = 2 * (v8 & result);
    if ( *(_QWORD *)(qword_180278568 + 16 * (v8 & result)) == v3 )
    {
      *(_QWORD *)(qword_180278568 + 16 * (v8 & result)) = v12;
LABEL_7:
      *(_QWORD *)(v13 + 8 * v14 + 8) = v12;
      goto LABEL_15;
    }
    result = *(_QWORD *)(qword_180278568 + 16 * (v8 & result) + 8);
    v7 = *v11;
    if ( (_DWORD)v7 == *(_DWORD *)(result + 16) )
    {
      v15 = *(_QWORD *)result;
      if ( *(_QWORD *)result != v12 )
      {
        v16 = *(const unsigned __int8 ***)(v12 + 8);
        *v16 = v10;
        v7 = *((_QWORD *)v10 + 1);
        *(_QWORD *)v7 = v15;
        result = *(_QWORD *)(v15 + 8);
        *(_QWORD *)result = v12;
        *(_QWORD *)(v15 + 8) = v7;
        *((_QWORD *)v10 + 1) = v16;
        *(_QWORD *)(v12 + 8) = result;
      }
      goto LABEL_7;
    }
    while ( 1 )
    {
      v17 = (unsigned __int64 *)(result + 8);
      if ( *(_QWORD *)(qword_180278568 + 8 * v14) == result )
        break;
      result = *v17;
      if ( (_DWORD)v7 == *(_DWORD *)(*v17 + 16) )
      {
        v18 = *(_QWORD *)result;
        v19 = *(const unsigned __int8 ***)(v12 + 8);
        *v19 = v10;
        v7 = *((_QWORD *)v10 + 1);
        *(_QWORD *)v7 = v18;
        result = *(_QWORD *)(v18 + 8);
        *(_QWORD *)result = v12;
        *(_QWORD *)(v18 + 8) = v7;
        *((_QWORD *)v10 + 1) = v19;
        *(_QWORD *)(v12 + 8) = result;
        goto LABEL_15;
      }
    }
    v20 = *(const unsigned __int8 ***)(v12 + 8);
    *v20 = v10;
    v7 = *((_QWORD *)v10 + 1);
    *(_QWORD *)v7 = result;
    result = *v17;
    *(_QWORD *)result = v12;
    *v17 = v7;
    *((_QWORD *)v10 + 1) = v20;
    *(_QWORD *)(v12 + 8) = result;
    *(_QWORD *)(v13 + 8 * v14) = v12;
LABEL_15:
    v8 = qword_180278580;
    v9 = v10;
  }
  return result;
}
