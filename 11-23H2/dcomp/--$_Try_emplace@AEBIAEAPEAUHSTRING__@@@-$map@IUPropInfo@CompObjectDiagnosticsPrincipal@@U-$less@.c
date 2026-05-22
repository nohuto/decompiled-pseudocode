/*
 * XREFs of ??$_Try_emplace@AEBIAEAPEAUHSTRING__@@@?$map@IUPropInfo@CompObjectDiagnosticsPrincipal@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUPropInfo@CompObjectDiagnosticsPrincipal@@@std@@@4@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIUPropInfo@CompObjectDiagnosticsPrincipal@@@std@@PEAX@std@@_N@1@AEBIAEAPEAUHSTRING__@@@Z @ 0x18019C3D4
 * Callers:
 *     ?RememberPropertyName@CompObjectDiagnosticsPrincipal@@QEAA_NIPEAUHSTRING__@@@Z @ 0x18019E284 (-RememberPropertyName@CompObjectDiagnosticsPrincipal@@QEAA_NIPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUICompositor@Composition@UI@Windows@@V?$ComPtr@VCompositionDebugSettings@Diagnostics@Composition@UI@Windows@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAUICompositor@Composition@UI@Windows@@V?$ComPtr@VCompositionDebugSettings@Diagnostics@Composition@UI@Windows@@@WRL@Microsoft@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@QEAUICompositor@Composition@UI@Windows@@V?$ComPtr@VCompositionDebugSettings@Diagnostics@Composition@UI@Windows@@@WRL@Microsoft@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x18009912C (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAUICompositor@Composition@UI@Windows@@.c)
 *     ??$_Find_lower_bound@I@?$_Tree@V?$_Tmap_traits@I$$CBUSuperWetInkBallpointPenPoint@@U?$less@I@std@@V?$allocator@U?$pair@$$CBI$$CBUSuperWetInkBallpointPenPoint@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBI$$CBUSuperWetInkBallpointPenPoint@@@std@@PEAX@std@@@1@AEBI@Z @ 0x1800E6460 (--$_Find_lower_bound@I@-$_Tree@V-$_Tmap_traits@I$$CBUSuperWetInkBallpointPenPoint@@U-$less@I@std.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x1801004AC (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 *     ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@1@V?$tuple@AEAPEAUHSTRING__@@@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBIUPropInfo@CompObjectDiagnosticsPrincipal@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBIUPropInfo@CompObjectDiagnosticsPrincipal@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUPropInfo@CompObjectDiagnosticsPrincipal@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@AEAPEAUHSTRING__@@@1@@Z @ 0x18019BD30 (--$-0AEBUpiecewise_construct_t@std@@V-$tuple@AEBI@1@V-$tuple@AEAPEAUHSTRING__@@@1@@-$_Tree_temp_.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBIUPropInfo@CompObjectDiagnosticsPrincipal@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18019C7B4 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBIUPropInfo@CompObjectDiagnosticsPrin.c)
 */

__int64 __fastcall std::map<unsigned int,CompObjectDiagnosticsPrincipal::PropInfo>::_Try_emplace<unsigned int const &,HSTRING__ * &>(
        __int64 *a1,
        __int64 a2,
        unsigned int *a3)
{
  const char *v5; // rcx
  _DWORD *v6; // r10
  __int64 v7; // r8
  _QWORD *v8; // rax
  __int64 v9; // rbx
  __int128 v11; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v12[2]; // [rsp+50h] [rbp-38h] BYREF
  __int128 v13; // [rsp+60h] [rbp-28h] BYREF
  __int64 v14; // [rsp+70h] [rbp-18h]

  std::_Tree<std::_Tmap_traits<unsigned int,SuperWetInkBallpointPenPoint const,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,SuperWetInkBallpointPenPoint const>>,0>>::_Find_lower_bound<unsigned int>(
    a1,
    (__int64)&v13,
    a3);
  if ( *(_BYTE *)(v14 + 25) || *v6 < *(_DWORD *)(v14 + 32) )
  {
    if ( a1[1] == 0x2AAAAAAAAAAAAAALL )
      std::_Dwm_Xlength_error(v5);
    v7 = *a1;
    *(_QWORD *)&v11 = v6;
    v8 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned int const,CompObjectDiagnosticsPrincipal::PropInfo>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned int const,CompObjectDiagnosticsPrincipal::PropInfo>,void *>>>(
           v12,
           (__int64)a1,
           v7);
    v9 = v8[1];
    v8[1] = 0LL;
    std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned int const,CompObjectDiagnosticsPrincipal::PropInfo>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned int const,CompObjectDiagnosticsPrincipal::PropInfo>,void *>>>(v12);
    v11 = v13;
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<Windows::UI::Composition::ICompositor * const,Microsoft::WRL::ComPtr<Windows::UI::Composition::Diagnostics::CompositionDebugSettings>>>>::_Insert_node(
                      (__int64)a1,
                      (__int64)&v11,
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
