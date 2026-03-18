/*
 * XREFs of ??$_Emplace@U?$pair@_KPEAVCCursorState@@@std@@@?$_Tree@V?$_Tmap_traits@_KPEAVCCursorState@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KPEAVCCursorState@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CB_KPEAVCCursorState@@@std@@PEAX@std@@_N@1@$$QEAU?$pair@_KPEAVCCursorState@@@1@@Z @ 0x18002F9F4
 * Callers:
 *     ?EnsureCursorState@CCursorManager@@AEAAJ_KPEAPEAVCCursorState@@@Z @ 0x18002F914 (-EnsureCursorState@CCursorManager@@AEAAJ_KPEAPEAVCCursorState@@@Z.c)
 * Callees:
 *     ??$?0U?$pair@_KPEAVCCursorState@@@std@@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KPEAVCCursorState@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CB_KPEAVCCursorState@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_KPEAVCCursorState@@@std@@PEAX@1@$$QEAU?$pair@_KPEAVCCursorState@@@1@@Z @ 0x18002FACC (--$-0U-$pair@_KPEAVCCursorState@@@std@@@-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$C.c)
 *     ??$_Find_lower_bound@_K@?$_Tree@V?$_Tmap_traits@_KPEAVCCursorState@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KPEAVCCursorState@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CB_KPEAVCCursorState@@@std@@PEAX@std@@@1@AEB_K@Z @ 0x1800302F4 (--$_Find_lower_bound@_K@-$_Tree@V-$_Tmap_traits@_KPEAVCCursorState@@U-$less@_K@std@@V-$allocator.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x180185D74 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$ComPtr@UICompObjectDiagnosticsRootPr.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x180185DC4 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$ComPtr@UICompObjectDiagnosticsRootPr.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x180185E18 (-_Throw_tree_length_error@std@@YAXXZ.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned __int64,CCursorState *,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,CCursorState *>>,0>>::_Emplace<std::pair<unsigned __int64,CCursorState *>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 lower; // rax
  _QWORD *v6; // r10
  __int128 v7; // xmm0
  __int64 v8; // rax
  __int64 v9; // rbx
  _QWORD *v10; // r10
  _QWORD *v11; // rax
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 *v16; // rdx
  __int64 v17; // rcx
  _BYTE v18[8]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v19; // [rsp+28h] [rbp-40h]
  __int128 v20; // [rsp+30h] [rbp-38h]
  __int64 v21; // [rsp+40h] [rbp-28h]
  __int64 v22; // [rsp+48h] [rbp-20h] BYREF

  lower = std::_Tree<std::_Tmap_traits<unsigned __int64,CCursorState *,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,CCursorState *>>,0>>::_Find_lower_bound<unsigned __int64>(
            a1,
            &v22,
            a3);
  v7 = *(_OWORD *)lower;
  v21 = *(_QWORD *)(lower + 16);
  v20 = v7;
  if ( !*(_BYTE *)(v21 + 25) && *v6 >= *(_QWORD *)(v21 + 32) )
  {
    *(_QWORD *)a2 = v21;
    *(_BYTE *)(a2 + 8) = 0;
    return a2;
  }
  if ( a1[1] == 0x555555555555555LL )
    std::_Throw_tree_length_error();
  v8 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,CCursorState *>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,CCursorState *>,void *>>>(
         v18,
         a1,
         *a1,
         v6);
  v9 = *(_QWORD *)(v8 + 8);
  *(_QWORD *)(v8 + 8) = 0LL;
  if ( v19 )
    std::_Deallocate<16,0>(v19, 48LL);
  ++a1[1];
  v10 = (_QWORD *)*a1;
  v11 = (_QWORD *)v20;
  *(_QWORD *)(v9 + 8) = v20;
  if ( v11 == v10 )
  {
    *v10 = v9;
    v10[1] = v9;
    v10[2] = v9;
    *(_BYTE *)(v9 + 24) = 1;
    goto LABEL_7;
  }
  if ( DWORD2(v20) )
  {
    *v11 = v9;
    if ( v11 == (_QWORD *)*v10 )
      *v10 = v9;
  }
  else
  {
    v11[2] = v9;
    if ( v11 == (_QWORD *)v10[2] )
      v10[2] = v9;
  }
  v13 = *(_QWORD *)(v9 + 8);
  v14 = v9;
  while ( !*(_BYTE *)(v13 + 24) )
  {
    v15 = *(_QWORD *)(v14 + 8);
    v16 = *(__int64 **)(v15 + 8);
    v17 = *v16;
    if ( v15 == *v16 )
    {
      v17 = v16[2];
      if ( !*(_BYTE *)(v17 + 24) )
        goto LABEL_30;
      if ( v14 == *(_QWORD *)(v15 + 16) )
        std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Lrotate(
          a1,
          *(_QWORD *)(v14 + 8));
      *(_BYTE *)(*(_QWORD *)(v14 + 8) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v14 + 8) + 8LL) + 24LL) = 0;
      std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Rrotate(
        a1,
        *(_QWORD *)(*(_QWORD *)(v14 + 8) + 8LL));
    }
    else
    {
      if ( !*(_BYTE *)(v17 + 24) )
      {
LABEL_30:
        *(_BYTE *)(v15 + 24) = 1;
        *(_BYTE *)(v17 + 24) = 1;
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v14 + 8) + 8LL) + 24LL) = 0;
        v14 = *(_QWORD *)(*(_QWORD *)(v14 + 8) + 8LL);
        goto LABEL_27;
      }
      if ( v14 == *(_QWORD *)v15 )
        std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Rrotate(
          a1,
          *(_QWORD *)(v14 + 8));
      *(_BYTE *)(*(_QWORD *)(v14 + 8) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v14 + 8) + 8LL) + 24LL) = 0;
      std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Lrotate(
        a1,
        *(_QWORD *)(*(_QWORD *)(v14 + 8) + 8LL));
    }
LABEL_27:
    v13 = *(_QWORD *)(v14 + 8);
  }
  *(_BYTE *)(v10[1] + 24LL) = 1;
LABEL_7:
  *(_QWORD *)a2 = v9;
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}
