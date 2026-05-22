/*
 * XREFs of ??$_Insert_or_assign@UDWMPointerMapping@@AEAUCursorId@@@?$unordered_map@UDWMPointerMapping@@UCursorId@@UDWMMappingHash@@U?$equal_to@UDWMPointerMapping@@@std@@V?$allocator@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@5@@std@@AEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@std@@@std@@@std@@_N@1@$$QEAUDWMPointerMapping@@AEAUCursorId@@@Z @ 0x18004A264
 * Callers:
 *     ?CreateCursor@DWMCursorBroker@@UEAAJPEAUDeviceInfo@@KPEAPEAUICursor@@@Z @ 0x180049F10 (-CreateCursor@DWMCursorBroker@@UEAAJPEAUDeviceInfo@@KPEAPEAUICursor@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001EAA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Find_last@UDWMPointerMapping@@@?$_Hash@V?$_Umap_traits@UDWMPointerMapping@@UCursorId@@V?$_Uhash_compare@UDWMPointerMapping@@UDWMMappingHash@@U?$equal_to@UDWMPointerMapping@@@std@@@std@@V?$allocator@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@PEAX@std@@@1@AEBUDWMPointerMapping@@_K@Z @ 0x18004A414 (--$_Find_last@UDWMPointerMapping@@@-$_Hash@V-$_Umap_traits@UDWMPointerMapping@@UCursorId@@V-$_Uh.c)
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Uset_traits@W4_Button@@V?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@V?$allocator@W4_Button@@@3@$0A@@std@@@std@@IEBA_K_K@Z @ 0x1800ABEB4 (-_Desired_grow_bucket_count@-$_Hash@V-$_Uset_traits@W4_Button@@V-$_Uhash_compare@W4_Button@@U-$h.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@UDWMPointerMapping@@UCursorId@@V?$_Uhash_compare@UDWMPointerMapping@@UDWMMappingHash@@U?$equal_to@UDWMPointerMapping@@@std@@@std@@V?$allocator@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x1801FAE24 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@UDWMPointerMapping@@UCursorId@@V-$_Uhash_compare@UDWMPoi.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::unordered_map<DWMPointerMapping,CursorId,DWMMappingHash,std::equal_to<DWMPointerMapping>,std::allocator<std::pair<DWMPointerMapping const,CursorId>>>::_Insert_or_assign<DWMPointerMapping,CursorId &>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4)
{
  __int64 v8; // rbp
  __int64 v9; // rcx
  unsigned __int64 i; // rdx
  unsigned __int64 j; // rdx
  __int64 v12; // rbp
  __int64 v13; // rdx
  _QWORD *v14; // rbx
  __int64 v15; // rdx
  float v16; // xmm0_4
  __int64 v17; // rcx
  float v18; // xmm1_4
  __int64 v19; // rdx
  _QWORD *v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r9
  __int64 v25; // rax
  __int64 v26; // rax
  __int128 v27; // [rsp+20h] [rbp-48h] BYREF
  __int64 v28; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v29; // [rsp+38h] [rbp-30h]

  v8 = 0xCBF29CE484222325uLL;
  v9 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
    v9 = 0x100000001B3LL * (*((unsigned __int8 *)a3 + i) ^ (unsigned __int64)v9);
  for ( j = 0LL; j < 4; ++j )
    v8 = 0x100000001B3LL * (*((unsigned __int8 *)a3 + j + 4) ^ (unsigned __int64)v8);
  v12 = v9 ^ v8;
  std::_Hash<std::_Umap_traits<DWMPointerMapping,CursorId,std::_Uhash_compare<DWMPointerMapping,DWMMappingHash,std::equal_to<DWMPointerMapping>>,std::allocator<std::pair<DWMPointerMapping const,CursorId>>,0>>::_Find_last<DWMPointerMapping>(
    a1,
    &v27,
    a3,
    v12);
  v13 = *((_QWORD *)&v27 + 1);
  if ( *((_QWORD *)&v27 + 1) )
  {
    *(_QWORD *)(*((_QWORD *)&v27 + 1) + 24LL) = *a4;
    *(_QWORD *)a2 = v13;
    *(_BYTE *)(a2 + 8) = 0;
    return a2;
  }
  if ( *(_QWORD *)(a1 + 16) == 0x7FFFFFFFFFFFFFFLL )
    std::_Xlength_error("unordered_map/set too long");
  v28 = a1 + 8;
  v29 &= *((_QWORD *)&v27 + 1);
  v14 = std::_Allocate<16,std::_Default_allocate_traits,0>((unsigned int)(DWORD2(v27) + 32));
  v29 = (unsigned __int64)v14;
  v14[2] = *a3;
  v14[3] = *a4;
  v15 = *(_QWORD *)(a1 + 16) + 1LL;
  if ( v15 < 0 )
    v16 = (float)(v15 & 1 | (unsigned int)((unsigned __int64)v15 >> 1))
        + (float)(v15 & 1 | (unsigned int)((unsigned __int64)v15 >> 1));
  else
    v16 = (float)(int)v15;
  v17 = *(_QWORD *)(a1 + 56);
  if ( v17 < 0 )
  {
    v25 = *(_QWORD *)(a1 + 56) & 1LL | ((unsigned __int64)v17 >> 1);
    v18 = (float)(int)v25 + (float)(int)v25;
  }
  else
  {
    v18 = (float)(int)v17;
  }
  if ( (float)(v16 / v18) > *(float *)a1 )
  {
    v26 = std::_Hash<std::_Uset_traits<enum _Button,std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>,std::allocator<enum _Button>,0>>::_Desired_grow_bucket_count(a1);
    std::_Hash<std::_Umap_traits<DWMPointerMapping,CursorId,std::_Uhash_compare<DWMPointerMapping,DWMMappingHash,std::equal_to<DWMPointerMapping>>,std::allocator<std::pair<DWMPointerMapping const,CursorId>>,0>>::_Forced_rehash(
      a1,
      v26);
    v27 = *(_OWORD *)std::_Hash<std::_Umap_traits<DWMPointerMapping,CursorId,std::_Uhash_compare<DWMPointerMapping,DWMMappingHash,std::equal_to<DWMPointerMapping>>,std::allocator<std::pair<DWMPointerMapping const,CursorId>>,0>>::_Find_last<DWMPointerMapping>(
                       a1,
                       &v28,
                       v14 + 2,
                       v12);
  }
  v19 = v27;
  v20 = *(_QWORD **)(v27 + 8);
  ++*(_QWORD *)(a1 + 16);
  *v14 = v19;
  v14[1] = v20;
  *v20 = v14;
  *(_QWORD *)(v19 + 8) = v14;
  v21 = *(_QWORD *)(a1 + 24);
  v22 = 2 * (v12 & *(_QWORD *)(a1 + 48));
  v23 = *(_QWORD *)(v21 + 16 * (v12 & *(_QWORD *)(a1 + 48)));
  if ( v23 == *(_QWORD *)(a1 + 8) )
  {
    *(_QWORD *)(v21 + 16 * (v12 & *(_QWORD *)(a1 + 48))) = v14;
  }
  else
  {
    if ( v23 == v19 )
    {
      *(_QWORD *)(v21 + 16 * (v12 & *(_QWORD *)(a1 + 48))) = v14;
      goto LABEL_16;
    }
    if ( *(_QWORD **)(v21 + 16 * (v12 & *(_QWORD *)(a1 + 48)) + 8) != v20 )
      goto LABEL_16;
  }
  *(_QWORD *)(v21 + 8 * v22 + 8) = v14;
LABEL_16:
  *(_QWORD *)a2 = v14;
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}
