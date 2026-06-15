/*
 * XREFs of ??$_Try_emplace@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$$V@?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAX@std@@_N@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1800397F8
 * Callers:
 *     ?UpdateAudioPlaybackStatus@CPlaybackNotifier@@AEAAXW4REFERENCE_OPERATION@@PEBG@Z @ 0x180039710 (-UpdateAudioPlaybackStatus@CPlaybackNotifier@@AEAAXW4REFERENCE_OPERATION@@PEBG@Z.c)
 * Callees:
 *     ??$_Find_lower_bound@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAX@std@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x180039910 (--$_Find_lower_bound@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$_Tree@V-$_.c)
 *     ?compare@?$_WChar_traits@G@std@@SAHQEBG0_K@Z @ 0x180039B40 (-compare@-$_WChar_traits@G@std@@SAHQEBG0_K@Z.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800532A0 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@st.c)
 *     ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180064B0C (--$-0AEBUpiecewise_construct_t@std@@V-$tuple@$$QEAV-$basic_string@GU-$char_traits@G@std@@V-$allo.c)
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAX@2@@Z @ 0x1800FB3D4 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@PEAX@2@@Z @ 0x1800FB4AC (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_KV-$function@$$A6AX_N@Z@std@@@std@@@std.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1800FB500 (-_Throw_tree_length_error@std@@YAXXZ.c)
 */

__int64 __fastcall std::map<std::wstring,ENDPOINT_REF_DATA>::_Try_emplace<std::wstring,>(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3)
{
  int v6; // r9d
  _QWORD *v7; // rdx
  unsigned __int64 v8; // rbp
  _QWORD *v9; // rcx
  __int64 v10; // r8
  int v11; // eax
  __int64 v12; // r11
  _QWORD *v14; // r8
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // r8
  _QWORD *v18; // r10
  _QWORD *v19; // rax
  __int64 v20; // rax
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 *v23; // rdx
  __int64 v24; // rcx
  _BYTE v25[16]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD *v26; // [rsp+40h] [rbp-38h] BYREF
  int v27; // [rsp+48h] [rbp-30h]
  __int64 v28; // [rsp+50h] [rbp-28h]
  _QWORD *v29; // [rsp+98h] [rbp+20h] BYREF

  std::_Tree<std::_Tmap_traits<std::wstring,ENDPOINT_REF_DATA,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,ENDPOINT_REF_DATA>>,0>>::_Find_lower_bound<std::wstring>(
    a1,
    &v26);
  if ( !*(_BYTE *)(v28 + 25) )
  {
    v7 = (_QWORD *)(v28 + 32);
    v8 = *(_QWORD *)(v28 + 48);
    if ( *(_QWORD *)(v28 + 56) >= 8uLL )
      v7 = (_QWORD *)*v7;
    v9 = a3;
    if ( a3[3] >= 8uLL )
      v9 = (_QWORD *)*a3;
    v10 = *(_QWORD *)(v28 + 48);
    if ( v8 >= a3[2] )
      v10 = a3[2];
    v11 = std::_WChar_traits<unsigned short>::compare(v9, v7, v10);
    if ( v11 )
    {
      if ( v11 >= 0 )
      {
LABEL_10:
        *(_QWORD *)a2 = v12;
        *(_BYTE *)(a2 + 8) = 0;
        return a2;
      }
    }
    else if ( a3[2] >= v8 )
    {
      goto LABEL_10;
    }
  }
  if ( a1[1] == 0x38E38E38E38E38ELL )
    std::_Throw_tree_length_error();
  v14 = (_QWORD *)*a1;
  v29 = a3;
  v15 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::wstring const,ENDPOINT_REF_DATA>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::wstring const,ENDPOINT_REF_DATA>,void *>>>(
          (unsigned int)v25,
          (_DWORD)a1,
          (_DWORD)v14,
          v6,
          (__int64)&v29);
  v16 = *(_QWORD *)(v15 + 8);
  *(_QWORD *)(v15 + 8) = 0LL;
  std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::wstring const,enum AEC_LOOPBACK_SELECTION_MODE>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::wstring const,enum AEC_LOOPBACK_SELECTION_MODE>,void *>>>(v25);
  v18 = (_QWORD *)*a1;
  v19 = v26;
  ++a1[1];
  *(_QWORD *)(v16 + 8) = v19;
  if ( v19 == v18 )
  {
    *v18 = v16;
    v18[1] = v16;
    v18[2] = v16;
    *(_BYTE *)(v16 + 24) = 1;
    goto LABEL_16;
  }
  if ( v27 )
  {
    *v19 = v16;
    if ( v19 == (_QWORD *)*v18 )
      *v18 = v16;
  }
  else
  {
    v19[2] = v16;
    if ( v19 == (_QWORD *)v18[2] )
      v18[2] = v16;
  }
  v20 = *(_QWORD *)(v16 + 8);
  v21 = v16;
  while ( !*(_BYTE *)(v20 + 24) )
  {
    v22 = *(_QWORD *)(v21 + 8);
    v23 = *(__int64 **)(v22 + 8);
    v24 = *v23;
    if ( v22 == *v23 )
    {
      v24 = v23[2];
      if ( !*(_BYTE *)(v24 + 24) )
        goto LABEL_36;
      if ( v21 == *(_QWORD *)(v22 + 16) )
        std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,ENDPOINT_REF_DATA>>>::_Lrotate(
          a1,
          *(_QWORD *)(v21 + 8));
      *(_BYTE *)(*(_QWORD *)(v21 + 8) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v21 + 8) + 8LL) + 24LL) = 0;
      std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::function<void (bool)>>>>::_Rrotate(
        a1,
        *(_QWORD *)(*(_QWORD *)(v21 + 8) + 8LL),
        v17,
        v21);
    }
    else
    {
      if ( !*(_BYTE *)(v24 + 24) )
      {
LABEL_36:
        *(_BYTE *)(v22 + 24) = 1;
        *(_BYTE *)(v24 + 24) = 1;
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v21 + 8) + 8LL) + 24LL) = 0;
        v21 = *(_QWORD *)(*(_QWORD *)(v21 + 8) + 8LL);
        goto LABEL_33;
      }
      if ( v21 == *(_QWORD *)v22 )
        std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::function<void (bool)>>>>::_Rrotate(
          a1,
          *(_QWORD *)(v21 + 8),
          v17,
          *(_QWORD *)(v21 + 8));
      *(_BYTE *)(*(_QWORD *)(v21 + 8) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v21 + 8) + 8LL) + 24LL) = 0;
      std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,ENDPOINT_REF_DATA>>>::_Lrotate(
        a1,
        *(_QWORD *)(*(_QWORD *)(v21 + 8) + 8LL));
    }
LABEL_33:
    v20 = *(_QWORD *)(v21 + 8);
  }
  *(_BYTE *)(v18[1] + 24LL) = 1;
LABEL_16:
  *(_QWORD *)a2 = v16;
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}
