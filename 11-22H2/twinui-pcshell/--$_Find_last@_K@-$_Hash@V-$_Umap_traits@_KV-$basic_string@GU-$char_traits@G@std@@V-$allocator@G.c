/*
 * XREFs of ??$_Find_last@_K@?$_Hash@V?$_Umap_traits@_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@std@@@1@AEB_K_K@Z @ 0x1802D2DC4
 * Callers:
 *     ??$emplace@_KUTargetWindowContext@GamingOverlayExperienceManager@@@?$_Hash@V?$_Umap_traits@_KUTargetWindowContext@GamingOverlayExperienceManager@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@@std@@@std@@@std@@_N@1@$$QEA_K$$QEAUTargetWindowContext@GamingOverlayExperienceManager@@@Z @ 0x1803F7810 (--$emplace@_KUTargetWindowContext@GamingOverlayExperienceManager@@@-$_Hash@V-$_Umap_traits@_KUTa.c)
 *     ?WinEventProc@GamingOverlayExperienceManager@@AEAAXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z @ 0x180408F94 (-WinEventProc@GamingOverlayExperienceManager@@AEAAXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@_KUTargetWindowContext@GamingOverlayExperienceManager@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@@4@$0A@@std@@@std@@QEAA_KAEB_K@Z @ 0x18040AB90 (-erase@-$_Hash@V-$_Umap_traits@_KUTargetWindowContext@GamingOverlayExperienceManager@@V-$_Uhash_.c)
 *     ??$_Try_emplace@AEB_K$$V@?$_Hash@V?$_Umap_traits@_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x180635688 (--$_Try_emplace@AEB_K$$V@-$_Hash@V-$_Umap_traits@_KV-$basic_string@GU-$char_traits@G@std@@V-$all.c)
 *     ??$_Try_emplace@AEB_K$$V@?$_Hash@V?$_Umap_traits@_K_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_K_K@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x180635834 (--$_Try_emplace@AEB_K$$V@-$_Hash@V-$_Umap_traits@_K_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equa.c)
 *     ??$emplace@AEB_K@?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@@std@@_N@1@AEB_K@Z @ 0x180635E9C (--$emplace@AEB_K@-$_Hash@V-$_Uset_traits@_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@_K_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_K_K@std@@@std@@@std@@@1@AEB_K@Z @ 0x180636100 (--$find@X@-$_Hash@V-$_Umap_traits@_K_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@std@.c)
 *     ??$find@X@?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEAA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@@1@AEB_K@Z @ 0x18063615C (--$find@X@-$_Hash@V-$_Uset_traits@_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@std@@V.c)
 *     ?at@?$unordered_map@_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@QEAAAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@AEB_K@Z @ 0x180638960 (-at@-$unordered_map@_KV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-$hash@_K@2.c)
 *     ??$emplace@_K@?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@@std@@_N@1@$$QEA_K@Z @ 0x180727670 (--$emplace@_K@-$_Hash@V-$_Uset_traits@_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@st.c)
 *     ?erase@?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEAA_KAEB_K@Z @ 0x180728D40 (-erase@-$_Hash@V-$_Uset_traits@_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@std@@V-$a.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<unsigned __int64,std::wstring,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::wstring>>,0>>::_Find_last<unsigned __int64>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4)
{
  __int64 v4; // r11
  _QWORD *v5; // r10
  __int64 v6; // rax
  _QWORD *v7; // r9

  v4 = a1[3];
  v5 = (_QWORD *)a1[1];
  v6 = 2 * (a4 & a1[6]);
  v7 = *(_QWORD **)(v4 + 16 * (a4 & a1[6]) + 8);
  if ( v7 == v5 )
  {
    *a2 = v5;
LABEL_3:
    a2[1] = 0LL;
  }
  else
  {
    while ( *a3 != v7[2] )
    {
      if ( v7 == *(_QWORD **)(v4 + 8 * v6) )
      {
        *a2 = v7;
        goto LABEL_3;
      }
      v7 = (_QWORD *)v7[1];
    }
    *a2 = *v7;
    a2[1] = v7;
  }
  return a2;
}
