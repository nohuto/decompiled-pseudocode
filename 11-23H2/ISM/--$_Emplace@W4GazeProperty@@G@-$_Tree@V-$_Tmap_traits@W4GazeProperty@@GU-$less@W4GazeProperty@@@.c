/*
 * XREFs of ??$_Emplace@W4GazeProperty@@G@?$_Tree@V?$_Tmap_traits@W4GazeProperty@@GU?$less@W4GazeProperty@@@std@@V?$allocator@U?$pair@$$CBW4GazeProperty@@G@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBW4GazeProperty@@G@std@@PEAX@std@@_N@1@$$QEAW4GazeProperty@@$$QEAG@Z @ 0x1801A0804
 * Callers:
 *     ?Initialize@GazeHidParser@@QEAAJPEAU_HIDP_PREPARSED_DATA@@@Z @ 0x1801A1224 (-Initialize@GazeHidParser@@QEAAJPEAU_HIDP_PREPARSED_DATA@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$set@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CB_KV?$set@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CB_KV?$set@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x18005AD04 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_KV-$set@V-$shared_ptr@UHotKeyInfo@@.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1800A7AAC (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ??$?0W4GazeProperty@@G@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBW4GazeProperty@@G@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBW4GazeProperty@@G@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBW4GazeProperty@@G@std@@PEAX@1@$$QEAW4GazeProperty@@$$QEAG@Z @ 0x1801A0760 (--$-0W4GazeProperty@@G@-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBW4GazeProperty@@.c)
 *     ??$_Find_lower_bound@W4GazeProperty@@@?$_Tree@V?$_Tmap_traits@W4GazeProperty@@GU?$less@W4GazeProperty@@@std@@V?$allocator@U?$pair@$$CBW4GazeProperty@@G@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBW4GazeProperty@@G@std@@PEAX@std@@@1@AEBW4GazeProperty@@@Z @ 0x1801A08E0 (--$_Find_lower_bound@W4GazeProperty@@@-$_Tree@V-$_Tmap_traits@W4GazeProperty@@GU-$less@W4GazePro.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<enum GazeProperty,unsigned short,std::less<enum GazeProperty>,std::allocator<std::pair<enum GazeProperty const,unsigned short>>,0>>::_Emplace<enum GazeProperty,unsigned short>(
        __int64 *a1,
        __int64 a2)
{
  __int64 lower; // rax
  _DWORD *v5; // r10
  _WORD *v6; // r11
  __int128 v7; // xmm6
  _QWORD *v8; // rax
  __int64 v9; // rsi
  __int64 v11; // [rsp+30h] [rbp-48h] BYREF
  void *v12; // [rsp+38h] [rbp-40h]
  __int128 v13; // [rsp+40h] [rbp-38h] BYREF
  __int64 v14; // [rsp+50h] [rbp-28h]

  lower = std::_Tree<std::_Tmap_traits<enum GazeProperty,unsigned short,std::less<enum GazeProperty>,std::allocator<std::pair<enum GazeProperty const,unsigned short>>,0>>::_Find_lower_bound<enum GazeProperty>(
            a1,
            &v13);
  v7 = *(_OWORD *)lower;
  v14 = *(_QWORD *)(lower + 16);
  if ( *(_BYTE *)(v14 + 25) || *v5 < *(_DWORD *)(v14 + 28) )
  {
    if ( a1[1] == 0x666666666666666LL )
      std::_Throw_tree_length_error();
    v8 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<enum GazeProperty const,unsigned short>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<enum GazeProperty const,unsigned short>,void *>>>(
           &v11,
           (__int64)a1,
           *a1,
           v5,
           v6);
    v9 = v8[1];
    v8[1] = 0LL;
    if ( v12 )
      std::_Deallocate<16,0>(v12, 0x28uLL);
    v13 = v7;
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::set<std::shared_ptr<HotKeyInfo>>>>>::_Insert_node(
                      (__int64)a1,
                      (__int64)&v13,
                      v9);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v14;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
