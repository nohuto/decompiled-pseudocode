/*
 * XREFs of ??$_Emplace@AEBV?$shared_ptr@UHotKeyInfo@@@std@@@?$_Tree@V?$_Tset_traits@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@_N@1@AEBV?$shared_ptr@UHotKeyInfo@@@1@@Z @ 0x1801D0E3C
 * Callers:
 *     ?DetectAndProcessHotKey@HotKeyProcessor@@QEAAJI_N_KPEAEIIU_GUID@@AEAUHotKeyDetectionResult@@@Z @ 0x1801D2828 (-DetectAndProcessHotKey@HotKeyProcessor@@QEAAJI_N_KPEAEIIU_GUID@@AEAUHotKeyDetectionResult@@@Z.c)
 * Callees:
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1800913E4 (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$set@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CB_KV?$set@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CB_KV?$set@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x180092E68 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_KV-$set@V-$shared_ptr@UHotKeyInfo@@.c)
 *     ??$?0AEBV?$shared_ptr@UHotKeyInfo@@@std@@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@1@AEBV?$shared_ptr@UHotKeyInfo@@@1@@Z @ 0x1801D00F0 (--$-0AEBV-$shared_ptr@UHotKeyInfo@@@std@@@-$_Tree_temp_node@V-$allocator@U-$_Tree_node@V-$shared.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1801D1E94 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@V-$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@std@.c)
 */

__int64 __fastcall std::_Tree<std::_Tset_traits<std::shared_ptr<HotKeyInfo>,std::less<std::shared_ptr<HotKeyInfo>>,std::allocator<std::shared_ptr<HotKeyInfo>>,0>>::_Emplace<std::shared_ptr<HotKeyInfo> const &>(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 *a3)
{
  __int64 v4; // rcx
  __int64 v6; // rdx
  __int64 v7; // rax
  unsigned __int64 v8; // r9
  _QWORD *v9; // rax
  __int64 v10; // rbx
  _QWORD v12[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v13; // [rsp+30h] [rbp-28h] BYREF
  int v14; // [rsp+38h] [rbp-20h]

  v14 = 0;
  v4 = *a1;
  v6 = v4;
  v7 = *(_QWORD *)(v4 + 8);
  v13 = v7;
  if ( !*(_BYTE *)(v7 + 25) )
  {
    v8 = *a3;
    do
    {
      v13 = v7;
      if ( *(_QWORD *)(v7 + 32) >= v8 )
      {
        v6 = v7;
        v14 = 1;
        v7 = *(_QWORD *)v7;
      }
      else
      {
        v14 = 0;
        v7 = *(_QWORD *)(v7 + 16);
      }
    }
    while ( !*(_BYTE *)(v7 + 25) );
  }
  if ( *(_BYTE *)(v6 + 25) || *a3 < *(_QWORD *)(v6 + 32) )
  {
    if ( a1[1] == 0x555555555555555LL )
      std::_Throw_tree_length_error();
    v9 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::shared_ptr<HotKeyInfo>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::shared_ptr<HotKeyInfo>,void *>>>(
           v12,
           (__int64)a1,
           v4,
           a3);
    v10 = v9[1];
    v9[1] = 0LL;
    std::_Tree_temp_node<std::allocator<std::_Tree_node<std::shared_ptr<HotKeyInfo>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::shared_ptr<HotKeyInfo>,void *>>>(v12);
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::set<std::shared_ptr<HotKeyInfo>>>>>::_Insert_node(
                      a1,
                      (__int64)&v13,
                      v10);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v6;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
