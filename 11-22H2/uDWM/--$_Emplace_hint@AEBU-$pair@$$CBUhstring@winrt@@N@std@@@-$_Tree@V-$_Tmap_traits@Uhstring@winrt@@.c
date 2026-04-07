/*
 * XREFs of ??$_Emplace_hint@AEBU?$pair@$$CBUhstring@winrt@@N@std@@@?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@1@QEAU21@AEBU?$pair@$$CBUhstring@winrt@@N@1@@Z @ 0x1800FBC58
 * Callers:
 *     ??0?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@QEAA@V?$initializer_list@U?$pair@$$CBUhstring@winrt@@N@std@@@1@@Z @ 0x1800FC9E0 (--0-$map@Uhstring@winrt@@NU-$less@Uhstring@winrt@@@std@@V-$allocator@U-$pair@$$CBUhstring@winrt@.c)
 * Callees:
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUhstring@winrt@@N@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1800B8B34 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUhstring@winrt@@N@std@@@std@@@std@@Q.c)
 *     ??$?0AEBU?$pair@$$CBUhstring@winrt@@N@std@@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@1@AEBU?$pair@$$CBUhstring@winrt@@N@1@@Z @ 0x1800FBA04 (--$-0AEBU-$pair@$$CBUhstring@winrt@@N@std@@@-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair.c)
 *     ??$_Find_hint@Uhstring@winrt@@@?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Tree_find_hint_result@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@@1@QEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@1@AEBUhstring@winrt@@@Z @ 0x1800FBDB8 (--$_Find_hint@Uhstring@winrt@@@-$_Tree@V-$_Tmap_traits@Uhstring@winrt@@NU-$less@Uhstring@winrt@@.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800FCC84 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@@st.c)
 *     ?_Check_grow_by_1@?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@$0A@@std@@@std@@IEAAXXZ @ 0x1800FF884 (-_Check_grow_by_1@-$_Tree@V-$_Tmap_traits@Uhstring@winrt@@NU-$less@Uhstring@winrt@@@std@@V-$allo.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<winrt::hstring,double,std::less<winrt::hstring>,std::allocator<std::pair<winrt::hstring const,double>>,0>>::_Emplace_hint<std::pair<winrt::hstring const,double> const &>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rax
  __int128 v6; // xmm6
  __int64 v8; // rax
  __int64 v9; // rbx
  _BYTE v10[32]; // [rsp+20h] [rbp-58h] BYREF
  __int128 v11; // [rsp+40h] [rbp-38h] BYREF
  __int64 v12; // [rsp+50h] [rbp-28h]

  v5 = std::_Tree<std::_Tmap_traits<winrt::hstring,double,std::less<winrt::hstring>,std::allocator<std::pair<winrt::hstring const,double>>,0>>::_Find_hint<winrt::hstring>(
         a1,
         v10,
         a2,
         a3);
  v6 = *(_OWORD *)v5;
  v12 = *(_QWORD *)(v5 + 16);
  v11 = v6;
  if ( (_BYTE)v12 )
    return v11;
  std::_Tree<std::_Tmap_traits<winrt::hstring,double,std::less<winrt::hstring>,std::allocator<std::pair<winrt::hstring const,double>>,0>>::_Check_grow_by_1(a1);
  v8 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<winrt::hstring const,double>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<winrt::hstring const,double>,void *>>>(
         (__int64)v10,
         (__int64)a1,
         *a1,
         a3);
  v9 = *(_QWORD *)(v8 + 8);
  *(_QWORD *)(v8 + 8) = 0LL;
  std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<winrt::hstring const,double>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<winrt::hstring const,double>,void *>>>(v10);
  v11 = v6;
  return std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::hstring const,double>>>::_Insert_node(
           (__int64)a1,
           (__int64)&v11,
           v9);
}
