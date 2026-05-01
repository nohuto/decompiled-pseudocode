/*
 * XREFs of ??$_Try_emplace@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@$$V@?$map@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@U?$less@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@@6@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@PEAX@std@@_N@1@$$QEAV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@Z @ 0x180055D14
 * Callers:
 *     ?_PersistPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180056218 (-_PersistPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     _lambda_c6623334da8ed11a0378a692878c9731_::operator() @ 0x1804FA740 (_lambda_c6623334da8ed11a0378a692878c9731_--operator().c)
 * Callees:
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180055E04 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$ComPtr@UIApplicationView@@@WRL@Mi.c)
 *     ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@$$QEAV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@$$QEAV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180055E30 (--$-0AEBUpiecewise_construct_t@std@@V-$tuple@$$QEAV-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@.c)
 *     ??$_Find_lower_bound@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@?$_Tree@V?$_Tmap_traits@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@U?$less@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@@6@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@PEAX@std@@@1@AEBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@Z @ 0x18015CAC0 (--$_Find_lower_bound@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@-$_Tree@V-$_Tmap_traits@V-$Co.c)
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x1801B81D8 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKV-$ComPtr@UIObjectCollection@@@WRL@Micr.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@2@@Z @ 0x1801B8228 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$basic_string@GU-$char_traits@G@std@@.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x180340C88 (-_Throw_tree_length_error@std@@YAXXZ.c)
 */

__int64 __fastcall std::map<Microsoft::WRL::ComPtr<IApplicationView>,Microsoft::WRL::ComPtr<IOcclusionBasedApplicationViewPosition>>::_Try_emplace<Microsoft::WRL::ComPtr<IApplicationView>,>(
        _QWORD *a1,
        __int64 a2)
{
  int v4; // r9d
  _QWORD *v5; // r10
  _QWORD *v6; // r8
  __int64 v7; // rax
  __int64 v8; // rbx
  _QWORD *v9; // r10
  _QWORD *v10; // rax
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 *v15; // rdx
  __int64 v16; // rcx
  _BYTE v17[16]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD *v18; // [rsp+40h] [rbp-28h] BYREF
  int v19; // [rsp+48h] [rbp-20h]
  __int64 v20; // [rsp+50h] [rbp-18h]
  _QWORD *v21; // [rsp+88h] [rbp+20h] BYREF

  std::_Tree<std::_Tmap_traits<Microsoft::WRL::ComPtr<IApplicationView>,Microsoft::WRL::ComPtr<IOcclusionBasedApplicationViewPosition>,std::less<Microsoft::WRL::ComPtr<IApplicationView>>,std::allocator<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,Microsoft::WRL::ComPtr<IOcclusionBasedApplicationViewPosition>>>,0>>::_Find_lower_bound<Microsoft::WRL::ComPtr<IApplicationView>>(
    a1,
    &v18);
  if ( !*(_BYTE *)(v20 + 25) && *v5 >= *(_QWORD *)(v20 + 32) )
  {
    *(_QWORD *)a2 = v20;
    *(_BYTE *)(a2 + 8) = 0;
    return a2;
  }
  if ( a1[1] == 0x555555555555555LL )
    std::_Throw_tree_length_error();
  v6 = (_QWORD *)*a1;
  v21 = v5;
  v7 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,Microsoft::WRL::ComPtr<IOcclusionBasedApplicationViewPosition>>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,Microsoft::WRL::ComPtr<IOcclusionBasedApplicationViewPosition>>,void *>>>(
         (unsigned int)v17,
         (_DWORD)a1,
         (_DWORD)v6,
         v4,
         (__int64)&v21);
  v8 = *(_QWORD *)(v7 + 8);
  *(_QWORD *)(v7 + 8) = 0LL;
  std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,Microsoft::WRL::ComPtr<IOcclusionBasedApplicationViewPosition>>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,Microsoft::WRL::ComPtr<IOcclusionBasedApplicationViewPosition>>,void *>>>(v17);
  v9 = (_QWORD *)*a1;
  v10 = v18;
  ++a1[1];
  *(_QWORD *)(v8 + 8) = v10;
  if ( v10 == v9 )
  {
    *v9 = v8;
    v9[1] = v8;
    v9[2] = v8;
    *(_BYTE *)(v8 + 24) = 1;
    goto LABEL_5;
  }
  if ( v19 )
  {
    *v10 = v8;
    if ( v10 == (_QWORD *)*v9 )
      *v9 = v8;
  }
  else
  {
    v10[2] = v8;
    if ( v10 == (_QWORD *)v9[2] )
      v9[2] = v8;
  }
  v12 = *(_QWORD *)(v8 + 8);
  v13 = v8;
  while ( !*(_BYTE *)(v12 + 24) )
  {
    v14 = *(_QWORD *)(v13 + 8);
    v15 = *(__int64 **)(v14 + 8);
    v16 = *v15;
    if ( v14 == *v15 )
    {
      v16 = v15[2];
      if ( !*(_BYTE *)(v16 + 24) )
        goto LABEL_28;
      if ( v13 == *(_QWORD *)(v14 + 16) )
        std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>>::_Lrotate(a1);
      *(_BYTE *)(*(_QWORD *)(v13 + 8) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v13 + 8) + 8LL) + 24LL) = 0;
      std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::wstring>>>::_Rrotate(
        a1,
        *(_QWORD *)(*(_QWORD *)(v13 + 8) + 8LL));
    }
    else
    {
      if ( !*(_BYTE *)(v16 + 24) )
      {
LABEL_28:
        *(_BYTE *)(v14 + 24) = 1;
        *(_BYTE *)(v16 + 24) = 1;
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v13 + 8) + 8LL) + 24LL) = 0;
        v13 = *(_QWORD *)(*(_QWORD *)(v13 + 8) + 8LL);
        goto LABEL_25;
      }
      if ( v13 == *(_QWORD *)v14 )
        std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::wstring>>>::_Rrotate(
          a1,
          *(_QWORD *)(v13 + 8));
      *(_BYTE *)(*(_QWORD *)(v13 + 8) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v13 + 8) + 8LL) + 24LL) = 0;
      std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>>::_Lrotate(a1);
    }
LABEL_25:
    v12 = *(_QWORD *)(v13 + 8);
  }
  *(_BYTE *)(v9[1] + 24LL) = 1;
LABEL_5:
  *(_QWORD *)a2 = v8;
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}
