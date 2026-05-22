/*
 * XREFs of ?SetControllerVirtualKeyMappings@ControllerProcessor@@SAJ_N@Z @ 0x18000A8D0
 * Callers:
 *     ?OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z @ 0x180015680 (-OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z.c)
 *     ?RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z @ 0x180172C44 (-RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800044C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x180004EC0 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ??$_Find_last@W4GameInputGamepadButtons@@@?$_Hash@V?$_Umap_traits@W4GameInputGamepadButtons@@GV?$_Uhash_compare@W4GameInputGamepadButtons@@U?$hash@W4GameInputGamepadButtons@@@std@@U?$equal_to@W4GameInputGamepadButtons@@@3@@std@@V?$allocator@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@PEAX@std@@@1@AEBW4GameInputGamepadButtons@@_K@Z @ 0x18000AA90 (--$_Find_last@W4GameInputGamepadButtons@@@-$_Hash@V-$_Umap_traits@W4GameInputGamepadButtons@@GV-.c)
 *     ?_Insert_new_node_before@?$_Hash@V?$_Umap_traits@W4GameInputGamepadButtons@@GV?$_Uhash_compare@W4GameInputGamepadButtons@@U?$hash@W4GameInputGamepadButtons@@@std@@U?$equal_to@W4GameInputGamepadButtons@@@3@@std@@V?$allocator@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@@3@$0A@@std@@@std@@IEAAPEAU?$_List_node@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@PEAX@2@_KQEAU32@1@Z @ 0x180048A38 (-_Insert_new_node_before@-$_Hash@V-$_Umap_traits@W4GameInputGamepadButtons@@GV-$_Uhash_compare@W.c)
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Umap_traits@W4GameInputGamepadButtons@@GV?$_Uhash_compare@W4GameInputGamepadButtons@@U?$hash@W4GameInputGamepadButtons@@@std@@U?$equal_to@W4GameInputGamepadButtons@@@3@@std@@V?$allocator@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@@3@$0A@@std@@@std@@IEBA_K_K@Z @ 0x18017A5A4 (-_Desired_grow_bucket_count@-$_Hash@V-$_Umap_traits@W4GameInputGamepadButtons@@GV-$_Uhash_compar.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@W4GameInputGamepadButtons@@GV?$_Uhash_compare@W4GameInputGamepadButtons@@U?$hash@W4GameInputGamepadButtons@@@std@@U?$equal_to@W4GameInputGamepadButtons@@@3@@std@@V?$allocator@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x18017A7C0 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@W4GameInputGamepadButtons@@GV-$_Uhash_compare@W4GameInpu.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ControllerProcessor::SetControllerVirtualKeyMappings(char a1)
{
  __int64 v1; // rbx
  unsigned __int64 j; // rcx
  __int64 v3; // rcx
  __int64 v4; // rdi
  unsigned __int64 i; // rcx
  size_t v7; // rax
  _DWORD *v8; // rsi
  unsigned __int64 v9; // rdx
  float v10; // xmm0_4
  __int64 v11; // rcx
  float v12; // xmm1_4
  size_t size_of; // rax
  _DWORD *v14; // rdi
  __int64 v15; // r8
  unsigned __int64 v16; // rdx
  float v17; // xmm0_4
  float v18; // xmm1_4
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  _QWORD *v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int128 v30; // [rsp+20h] [rbp-28h] BYREF
  __int128 v31; // [rsp+30h] [rbp-18h] BYREF
  int v32; // [rsp+50h] [rbp+8h] BYREF

  v32 = 8;
  v1 = 0xCBF29CE484222325uLL;
  if ( a1 )
  {
    for ( i = 0LL; i < 4; ++i )
      v1 = 0x100000001B3LL * (*((unsigned __int8 *)&v32 + i) ^ (unsigned __int64)v1);
    std::_Hash<std::_Umap_traits<enum GameInputGamepadButtons,unsigned short,std::_Uhash_compare<enum GameInputGamepadButtons,std::hash<enum GameInputGamepadButtons>,std::equal_to<enum GameInputGamepadButtons>>,std::allocator<std::pair<enum GameInputGamepadButtons const,unsigned short>>,0>>::_Find_last<enum GameInputGamepadButtons>(
      i,
      &v30,
      &v32,
      v1);
    if ( *((_QWORD *)&v30 + 1) )
    {
      *(_WORD *)(*((_QWORD *)&v30 + 1) + 20LL) = 196;
      return 0LL;
    }
    if ( qword_180243050 != 0xAAAAAAAAAAAAAAALL )
    {
      *(_QWORD *)&v31 = &qword_180243048;
      *((_QWORD *)&v31 + 1) = 0LL;
      size_of = std::_Get_size_of_n<24>(1uLL);
      v14 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
      *((_QWORD *)&v31 + 1) = v14;
      v14[4] = 8;
      *((_WORD *)v14 + 10) = 196;
      v15 = qword_180243050;
      v16 = qword_180243050 + 1;
      if ( qword_180243050 + 1 < 0 )
        v17 = (float)(int)(v16 & 1 | (v16 >> 1)) + (float)(int)(v16 & 1 | (v16 >> 1));
      else
        v17 = (float)(int)v16;
      if ( qword_180243078 < 0 )
        v18 = (float)(qword_180243078 & 1 | (unsigned int)((unsigned __int64)qword_180243078 >> 1))
            + (float)(qword_180243078 & 1 | (unsigned int)((unsigned __int64)qword_180243078 >> 1));
      else
        v18 = (float)(int)qword_180243078;
      if ( (float)(v17 / v18) > *(float *)&ControllerProcessor::s_controllerCurrentKeyMap )
      {
        v19 = std::_Hash<std::_Umap_traits<enum GameInputGamepadButtons,unsigned short,std::_Uhash_compare<enum GameInputGamepadButtons,std::hash<enum GameInputGamepadButtons>,std::equal_to<enum GameInputGamepadButtons>>,std::allocator<std::pair<enum GameInputGamepadButtons const,unsigned short>>,0>>::_Desired_grow_bucket_count();
        std::_Hash<std::_Umap_traits<enum GameInputGamepadButtons,unsigned short,std::_Uhash_compare<enum GameInputGamepadButtons,std::hash<enum GameInputGamepadButtons>,std::equal_to<enum GameInputGamepadButtons>>,std::allocator<std::pair<enum GameInputGamepadButtons const,unsigned short>>,0>>::_Forced_rehash(
          v20,
          v19);
        v30 = *(_OWORD *)std::_Hash<std::_Umap_traits<enum GameInputGamepadButtons,unsigned short,std::_Uhash_compare<enum GameInputGamepadButtons,std::hash<enum GameInputGamepadButtons>,std::equal_to<enum GameInputGamepadButtons>>,std::allocator<std::pair<enum GameInputGamepadButtons const,unsigned short>>,0>>::_Find_last<enum GameInputGamepadButtons>(
                           v21,
                           &v31,
                           v14 + 4,
                           v1);
        v15 = qword_180243050;
      }
      v22 = v30;
      v23 = *(_QWORD **)(v30 + 8);
      qword_180243050 = v15 + 1;
      *(_QWORD *)v14 = v30;
      *((_QWORD *)v14 + 1) = v23;
      *v23 = v14;
      *(_QWORD *)(v22 + 8) = v14;
      v24 = qword_180243058;
      v25 = 2 * (qword_180243070 & v1);
      v26 = *(_QWORD *)(qword_180243058 + 8 * v25);
      if ( v26 == qword_180243048 )
      {
        *(_QWORD *)(qword_180243058 + 8 * v25) = v14;
      }
      else
      {
        if ( v26 == v22 )
        {
          *(_QWORD *)(qword_180243058 + 8 * v25) = v14;
          return 0LL;
        }
        if ( *(_QWORD **)(qword_180243058 + 8 * v25 + 8) != v23 )
          return 0LL;
      }
      *(_QWORD *)(v24 + 8 * v25 + 8) = v14;
      return 0LL;
    }
    goto LABEL_41;
  }
  for ( j = 0LL; j < 4; ++j )
    v1 = 0x100000001B3LL * (*((unsigned __int8 *)&v32 + j) ^ (unsigned __int64)v1);
  v3 = *(_QWORD *)(qword_180243058 + 16 * (qword_180243070 & v1) + 8);
  v4 = qword_180243048;
  if ( v3 == qword_180243048 )
  {
LABEL_12:
    if ( qword_180243050 != 0xAAAAAAAAAAAAAAALL )
    {
      *(_QWORD *)&v31 = &qword_180243048;
      v7 = std::_Get_size_of_n<24>(1uLL);
      v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(v7);
      *((_QWORD *)&v31 + 1) = v8;
      v8[4] = 8;
      *((_WORD *)v8 + 10) = 27;
      v9 = qword_180243050 + 1;
      if ( qword_180243050 + 1 < 0 )
        v10 = (float)(int)(v9 & 1 | (v9 >> 1)) + (float)(int)(v9 & 1 | (v9 >> 1));
      else
        v10 = (float)(int)v9;
      v11 = qword_180243078;
      if ( qword_180243078 < 0 )
      {
        v11 = qword_180243078 & 1;
        v12 = (float)(int)(v11 | ((unsigned __int64)qword_180243078 >> 1))
            + (float)(int)(v11 | ((unsigned __int64)qword_180243078 >> 1));
      }
      else
      {
        v12 = (float)(int)qword_180243078;
      }
      if ( (float)(v10 / v12) > *(float *)&ControllerProcessor::s_controllerCurrentKeyMap )
      {
        v27 = std::_Hash<std::_Umap_traits<enum GameInputGamepadButtons,unsigned short,std::_Uhash_compare<enum GameInputGamepadButtons,std::hash<enum GameInputGamepadButtons>,std::equal_to<enum GameInputGamepadButtons>>,std::allocator<std::pair<enum GameInputGamepadButtons const,unsigned short>>,0>>::_Desired_grow_bucket_count();
        std::_Hash<std::_Umap_traits<enum GameInputGamepadButtons,unsigned short,std::_Uhash_compare<enum GameInputGamepadButtons,std::hash<enum GameInputGamepadButtons>,std::equal_to<enum GameInputGamepadButtons>>,std::allocator<std::pair<enum GameInputGamepadButtons const,unsigned short>>,0>>::_Forced_rehash(
          v28,
          v27);
        v31 = *(_OWORD *)std::_Hash<std::_Umap_traits<enum GameInputGamepadButtons,unsigned short,std::_Uhash_compare<enum GameInputGamepadButtons,std::hash<enum GameInputGamepadButtons>,std::equal_to<enum GameInputGamepadButtons>>,std::allocator<std::pair<enum GameInputGamepadButtons const,unsigned short>>,0>>::_Find_last<enum GameInputGamepadButtons>(
                           v29,
                           &v30,
                           v8 + 4,
                           v1);
        v4 = v31;
      }
      std::_Hash<std::_Umap_traits<enum GameInputGamepadButtons,unsigned short,std::_Uhash_compare<enum GameInputGamepadButtons,std::hash<enum GameInputGamepadButtons>,std::equal_to<enum GameInputGamepadButtons>>,std::allocator<std::pair<enum GameInputGamepadButtons const,unsigned short>>,0>>::_Insert_new_node_before(
        v11,
        v1,
        v4,
        v8);
      return 0LL;
    }
LABEL_41:
    std::_Xlength_error("unordered_map/set too long");
  }
  while ( *(_DWORD *)(v3 + 16) != 8 )
  {
    if ( v3 == *(_QWORD *)(qword_180243058 + 16 * (qword_180243070 & v1)) )
    {
      v4 = v3;
      goto LABEL_12;
    }
    v3 = *(_QWORD *)(v3 + 8);
  }
  *(_WORD *)(v3 + 20) = 27;
  return 0LL;
}
