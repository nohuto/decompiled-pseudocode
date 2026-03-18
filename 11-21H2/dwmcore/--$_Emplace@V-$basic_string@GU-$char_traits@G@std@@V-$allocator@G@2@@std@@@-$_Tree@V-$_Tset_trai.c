/*
 * XREFs of ??$_Emplace@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tset_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@std@@_N@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18005E9DC
 * Callers:
 *     ??$insert@$0A@$0A@@?$_Tree@V?$_Tset_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@_N@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18005E9A8 (--$insert@$0A@$0A@@-$_Tree@V-$_Tset_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G.c)
 * Callees:
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHAEBV12@@Z @ 0x18005EAF0 (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHAEBV12@@Z.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x18005EB80 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@V-$basic_string@GU-$char_traits@G@std@@V-$alloca.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18005ECC8 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@V-$basic_string@GU-$char_traits@G@std@@V-$alloca.c)
 *     ??$?0V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@std@@@1@PEAU?$_Tree_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18005ECEC (--$-0V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$_Tree_temp_node@V-$allocat.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x180185E18 (-_Throw_tree_length_error@std@@YAXXZ.c)
 */

__int64 __fastcall std::_Tree<std::_Tset_traits<std::wstring,std::less<std::wstring>,std::allocator<std::wstring>,0>>::_Emplace<std::wstring>(
        __int64 **a1,
        __int64 a2,
        __int64 a3)
{
  __int64 *v3; // r15
  __int64 *v7; // rsi
  __int64 *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rbx
  _BYTE v12[16]; // [rsp+20h] [rbp-48h] BYREF
  __int64 *v13; // [rsp+30h] [rbp-38h] BYREF
  int v14; // [rsp+38h] [rbp-30h]

  v3 = *a1;
  v14 = 0;
  v7 = v3;
  v8 = (__int64 *)v3[1];
  v13 = v8;
  while ( !*((_BYTE *)v8 + 25) )
  {
    v13 = v8;
    if ( (int)std::wstring::compare(v8 + 4, a3) < 0 )
    {
      v14 = 0;
      v8 = (__int64 *)v8[2];
    }
    else
    {
      v7 = v8;
      v14 = 1;
      v8 = (__int64 *)*v8;
    }
  }
  if ( *((_BYTE *)v7 + 25) || (int)std::wstring::compare(a3, v7 + 4) < 0 )
  {
    if ( a1[1] == (__int64 *)0x3FFFFFFFFFFFFFFLL )
      std::_Throw_tree_length_error();
    v9 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::wstring,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::wstring,void *>>>(
           v12,
           a1,
           v3,
           a3);
    v10 = *(_QWORD *)(v9 + 8);
    *(_QWORD *)(v9 + 8) = 0LL;
    std::_Tree_temp_node<std::allocator<std::_Tree_node<std::wstring,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::wstring,void *>>>(v12);
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::wstring>>::_Insert_node(a1, &v13, v10);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v7;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
