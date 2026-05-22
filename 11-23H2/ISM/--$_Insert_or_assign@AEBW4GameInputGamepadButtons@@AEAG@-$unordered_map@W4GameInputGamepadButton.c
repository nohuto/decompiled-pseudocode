/*
 * XREFs of ??$_Insert_or_assign@AEBW4GameInputGamepadButtons@@AEAG@?$unordered_map@W4GameInputGamepadButtons@@GU?$hash@W4GameInputGamepadButtons@@@std@@U?$equal_to@W4GameInputGamepadButtons@@@3@V?$allocator@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@@3@@std@@AEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@@std@@@std@@@std@@_N@1@AEBW4GameInputGamepadButtons@@AEAG@Z @ 0x1800146BC
 * Callers:
 *     ?OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z @ 0x180023410 (-OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z.c)
 *     ?RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z @ 0x180191E40 (-RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$?0AEBW4GameInputGamepadButtons@@AEAG@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@PEAX@std@@@1@AEBW4GameInputGamepadButtons@@AEAG@Z @ 0x18003D4B8 (--$-0AEBW4GameInputGamepadButtons@@AEAG@-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$p.c)
 *     ?_Insert_new_node_before@?$_Hash@V?$_Umap_traits@W4GameInputGamepadButtons@@GV?$_Uhash_compare@W4GameInputGamepadButtons@@U?$hash@W4GameInputGamepadButtons@@@std@@U?$equal_to@W4GameInputGamepadButtons@@@3@@std@@V?$allocator@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@@3@$0A@@std@@@std@@IEAAPEAU?$_List_node@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@PEAX@2@_KQEAU32@1@Z @ 0x180054014 (-_Insert_new_node_before@-$_Hash@V-$_Umap_traits@W4GameInputGamepadButtons@@GV-$_Uhash_compare@W.c)
 *     ??$_Find_last@W4GameInputGamepadButtons@@@?$_Hash@V?$_Umap_traits@W4GameInputGamepadButtons@@GV?$_Uhash_compare@W4GameInputGamepadButtons@@U?$hash@W4GameInputGamepadButtons@@@std@@U?$equal_to@W4GameInputGamepadButtons@@@3@@std@@V?$allocator@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@PEAX@std@@@1@AEBW4GameInputGamepadButtons@@_K@Z @ 0x18019485C (--$_Find_last@W4GameInputGamepadButtons@@@-$_Hash@V-$_Umap_traits@W4GameInputGamepadButtons@@GV-.c)
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Umap_traits@W4GameInputGamepadButtons@@GV?$_Uhash_compare@W4GameInputGamepadButtons@@U?$hash@W4GameInputGamepadButtons@@@std@@U?$equal_to@W4GameInputGamepadButtons@@@3@@std@@V?$allocator@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@@3@$0A@@std@@@std@@IEBA_K_K@Z @ 0x1801999C4 (-_Desired_grow_bucket_count@-$_Hash@V-$_Umap_traits@W4GameInputGamepadButtons@@GV-$_Uhash_compar.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@W4GameInputGamepadButtons@@GV?$_Uhash_compare@W4GameInputGamepadButtons@@U?$hash@W4GameInputGamepadButtons@@@std@@U?$equal_to@W4GameInputGamepadButtons@@@3@@std@@V?$allocator@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x180199BEC (-_Forced_rehash@-$_Hash@V-$_Umap_traits@W4GameInputGamepadButtons@@GV-$_Uhash_compare@W4GameInpu.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::unordered_map<enum GameInputGamepadButtons,unsigned short>::_Insert_or_assign<enum GameInputGamepadButtons const &,unsigned short &>(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        _WORD *a4)
{
  __int64 v5; // rdi
  unsigned __int64 i; // rcx
  __int64 v7; // rcx
  __int64 v8; // rsi
  unsigned __int64 v10; // rdx
  float v11; // xmm0_4
  __int64 v12; // rcx
  float v13; // xmm1_4
  __int64 v14; // r11
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  _BYTE v18[8]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v19; // [rsp+28h] [rbp-30h]
  __int128 v20; // [rsp+30h] [rbp-28h]
  _BYTE v21[24]; // [rsp+40h] [rbp-18h] BYREF

  v5 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
    v5 = 0x100000001B3LL * (*((unsigned __int8 *)a3 + i) ^ (unsigned __int64)v5);
  v7 = *(_QWORD *)(qword_180269198 + 16 * (v5 & qword_1802691B0) + 8);
  v8 = qword_180269188;
  if ( v7 == qword_180269188 )
    goto LABEL_9;
  while ( 1 )
  {
    if ( *a3 == *(_DWORD *)(v7 + 16) )
    {
      v8 = *(_QWORD *)v7;
      goto LABEL_6;
    }
    if ( v7 == *(_QWORD *)(qword_180269198 + 16 * (v5 & qword_1802691B0)) )
      break;
    v7 = *(_QWORD *)(v7 + 8);
  }
  v8 = v7;
  v7 = 0LL;
LABEL_6:
  if ( !v7 )
  {
LABEL_9:
    if ( qword_180269190 == 0xAAAAAAAAAAAAAAALL )
      std::_Xlength_error("unordered_map/set too long");
    std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<enum GameInputGamepadButtons const,unsigned short>,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<enum GameInputGamepadButtons const,unsigned short>,void *>>>(
      v18,
      &qword_180269188,
      a3,
      a4);
    v10 = qword_180269190 + 1;
    if ( qword_180269190 + 1 < 0 )
      v11 = (float)(int)(v10 & 1 | (v10 >> 1)) + (float)(int)(v10 & 1 | (v10 >> 1));
    else
      v11 = (float)(int)v10;
    v12 = qword_1802691B8;
    if ( qword_1802691B8 < 0 )
    {
      v12 = qword_1802691B8 & 1;
      v13 = (float)(int)(v12 | ((unsigned __int64)qword_1802691B8 >> 1))
          + (float)(int)(v12 | ((unsigned __int64)qword_1802691B8 >> 1));
    }
    else
    {
      v13 = (float)(int)qword_1802691B8;
    }
    if ( (float)(v11 / v13) > *(float *)&ControllerProcessor::s_controllerCurrentKeyMap )
    {
      v15 = std::_Hash<std::_Umap_traits<enum GameInputGamepadButtons,unsigned short,std::_Uhash_compare<enum GameInputGamepadButtons,std::hash<enum GameInputGamepadButtons>,std::equal_to<enum GameInputGamepadButtons>>,std::allocator<std::pair<enum GameInputGamepadButtons const,unsigned short>>,0>>::_Desired_grow_bucket_count();
      std::_Hash<std::_Umap_traits<enum GameInputGamepadButtons,unsigned short,std::_Uhash_compare<enum GameInputGamepadButtons,std::hash<enum GameInputGamepadButtons>,std::equal_to<enum GameInputGamepadButtons>>,std::allocator<std::pair<enum GameInputGamepadButtons const,unsigned short>>,0>>::_Forced_rehash(
        v16,
        v15);
      v20 = *(_OWORD *)std::_Hash<std::_Umap_traits<enum GameInputGamepadButtons,unsigned short,std::_Uhash_compare<enum GameInputGamepadButtons,std::hash<enum GameInputGamepadButtons>,std::equal_to<enum GameInputGamepadButtons>>,std::allocator<std::pair<enum GameInputGamepadButtons const,unsigned short>>,0>>::_Find_last<enum GameInputGamepadButtons>(
                         v17,
                         v21,
                         v19 + 16,
                         v5);
      v8 = v20;
    }
    else
    {
      v14 = v19;
    }
    v19 = 0LL;
    *(_QWORD *)a2 = std::_Hash<std::_Umap_traits<enum GameInputGamepadButtons,unsigned short,std::_Uhash_compare<enum GameInputGamepadButtons,std::hash<enum GameInputGamepadButtons>,std::equal_to<enum GameInputGamepadButtons>>,std::allocator<std::pair<enum GameInputGamepadButtons const,unsigned short>>,0>>::_Insert_new_node_before(
                      v12,
                      v5,
                      v8,
                      v14);
    *(_BYTE *)(a2 + 8) = 1;
    if ( v19 )
      std::_Deallocate<16,0>(v19, 24LL);
  }
  else
  {
    *(_WORD *)(v7 + 20) = *a4;
    *(_QWORD *)a2 = v7;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
