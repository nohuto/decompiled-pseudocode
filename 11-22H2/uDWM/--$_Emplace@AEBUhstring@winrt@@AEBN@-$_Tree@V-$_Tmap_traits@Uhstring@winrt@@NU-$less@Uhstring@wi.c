/*
 * XREFs of ??$_Emplace@AEBUhstring@winrt@@AEBN@?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@_N@1@AEBUhstring@winrt@@AEBN@Z @ 0x1800FBB80
 * Callers:
 *     ?Insert@?$produce@U?$map_impl@Uhstring@winrt@@NV?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMap@Uhstring@winrt@@N@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAXNPEA_N@Z @ 0x1800FDDA0 (-Insert@-$produce@U-$map_impl@Uhstring@winrt@@NV-$map@Uhstring@winrt@@NU-$less@Uhstring@winrt@@@.c)
 * Callees:
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUhstring@winrt@@N@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1800B8B34 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUhstring@winrt@@N@std@@@std@@@std@@Q.c)
 *     ??$?0AEBUhstring@winrt@@AEBN@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@1@AEBUhstring@winrt@@AEBN@Z @ 0x1800FBAC0 (--$-0AEBUhstring@winrt@@AEBN@-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBUhstring@w.c)
 *     ??$_Find_lower_bound@Uhstring@winrt@@@?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@@1@AEBUhstring@winrt@@@Z @ 0x1800FC0C0 (--$_Find_lower_bound@Uhstring@winrt@@@-$_Tree@V-$_Tmap_traits@Uhstring@winrt@@NU-$less@Uhstring@.c)
 *     ??$_Lower_bound_duplicate@Uhstring@winrt@@@?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@$0A@@std@@@std@@IEBA_NQEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@1@AEBUhstring@winrt@@@Z @ 0x1800FC1D4 (--$_Lower_bound_duplicate@Uhstring@winrt@@@-$_Tree@V-$_Tmap_traits@Uhstring@winrt@@NU-$less@Uhst.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800FCC84 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@@st.c)
 *     ?_Check_grow_by_1@?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@$0A@@std@@@std@@IEAAXXZ @ 0x1800FF884 (-_Check_grow_by_1@-$_Tree@V-$_Tmap_traits@Uhstring@winrt@@NU-$less@Uhstring@winrt@@@std@@V-$allo.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<winrt::hstring,double,std::less<winrt::hstring>,std::allocator<std::pair<winrt::hstring const,double>>,0>>::_Emplace<winrt::hstring const &,double const &>(
        __int64 *a1,
        __int64 a2,
        struct winrt::impl::hstring_header **a3,
        _QWORD *a4)
{
  __int64 v8; // rax
  __int128 v9; // xmm6
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rbx
  _BYTE v15[16]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v16; // [rsp+40h] [rbp-38h] BYREF
  __int64 v17; // [rsp+50h] [rbp-28h]

  v8 = std::_Tree<std::_Tmap_traits<winrt::hstring,double,std::less<winrt::hstring>,std::allocator<std::pair<winrt::hstring const,double>>,0>>::_Find_lower_bound<winrt::hstring>(
         a1,
         &v16);
  v9 = *(_OWORD *)v8;
  v17 = *(_QWORD *)(v8 + 16);
  v10 = v17;
  if ( (unsigned __int8)std::_Tree<std::_Tmap_traits<winrt::hstring,double,std::less<winrt::hstring>,std::allocator<std::pair<winrt::hstring const,double>>,0>>::_Lower_bound_duplicate<winrt::hstring>(
                          v11,
                          v17,
                          a3) )
  {
    *(_QWORD *)a2 = v10;
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    std::_Tree<std::_Tmap_traits<winrt::hstring,double,std::less<winrt::hstring>,std::allocator<std::pair<winrt::hstring const,double>>,0>>::_Check_grow_by_1(a1);
    v12 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<winrt::hstring const,double>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<winrt::hstring const,double>,void *>>>(
            (__int64)v15,
            (__int64)a1,
            *a1,
            a3,
            a4);
    v13 = *(_QWORD *)(v12 + 8);
    *(_QWORD *)(v12 + 8) = 0LL;
    std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<winrt::hstring const,double>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<winrt::hstring const,double>,void *>>>(v15);
    v16 = v9;
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::hstring const,double>>>::_Insert_node(
                      (__int64)a1,
                      (__int64)&v16,
                      v13);
    *(_BYTE *)(a2 + 8) = 1;
  }
  return a2;
}
