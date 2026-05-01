/*
 * XREFs of ??$_Find_last@PEAUHWINEVENTHOOK__@@@?$_Hash@V?$_Umap_traits@PEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@V?$_Uhash_compare@PEAUHWINEVENTHOOK__@@U?$hash@PEAUHWINEVENTHOOK__@@@std@@U?$equal_to@PEAUHWINEVENTHOOK__@@@3@@std@@V?$allocator@U?$pair@QEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@QEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@std@@PEAX@std@@@1@AEBQEAUHWINEVENTHOOK__@@_K@Z @ 0x1803F56B8
 * Callers:
 *     ??$emplace@AEAPEAUHWINEVENTHOOK__@@AEAPEAVGamingOverlayExperienceManager@@@?$_Hash@V?$_Umap_traits@PEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@V?$_Uhash_compare@PEAUHWINEVENTHOOK__@@U?$hash@PEAUHWINEVENTHOOK__@@@std@@U?$equal_to@PEAUHWINEVENTHOOK__@@@3@@std@@V?$allocator@U?$pair@QEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@std@@@std@@@std@@@std@@_N@1@AEAPEAUHWINEVENTHOOK__@@AEAPEAVGamingOverlayExperienceManager@@@Z @ 0x1803F767C (--$emplace@AEAPEAUHWINEVENTHOOK__@@AEAPEAVGamingOverlayExperienceManager@@@-$_Hash@V-$_Umap_trai.c)
 *     ?GetOwner@?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@SAPEAVGamingOverlayExperienceManager@@PEAUHWINEVENTHOOK__@@@Z @ 0x1803FEE70 (-GetOwner@-$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@SAPEAVGamingOverlayExperienceM.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@PEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@V?$_Uhash_compare@PEAUHWINEVENTHOOK__@@U?$hash@PEAUHWINEVENTHOOK__@@@std@@U?$equal_to@PEAUHWINEVENTHOOK__@@@3@@std@@V?$allocator@U?$pair@QEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBQEAUHWINEVENTHOOK__@@@Z @ 0x18040AAE4 (-erase@-$_Hash@V-$_Umap_traits@PEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@V-$_Uhas.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<HWINEVENTHOOK__ *,GamingOverlayExperienceManager *,std::_Uhash_compare<HWINEVENTHOOK__ *,std::hash<HWINEVENTHOOK__ *>,std::equal_to<HWINEVENTHOOK__ *>>,std::allocator<std::pair<HWINEVENTHOOK__ * const,GamingOverlayExperienceManager *>>,0>>::_Find_last<HWINEVENTHOOK__ *>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4)
{
  _QWORD *v4; // rcx

  v4 = *(_QWORD **)(qword_18098F508 + 16 * (a4 & qword_18098F520) + 8);
  if ( v4 == (_QWORD *)qword_18098F4F8 )
  {
    *a2 = qword_18098F4F8;
LABEL_3:
    a2[1] = 0LL;
  }
  else
  {
    while ( *a3 != v4[2] )
    {
      if ( v4 == *(_QWORD **)(qword_18098F508 + 16 * (a4 & qword_18098F520)) )
      {
        *a2 = v4;
        goto LABEL_3;
      }
      v4 = (_QWORD *)v4[1];
    }
    *a2 = *v4;
    a2[1] = v4;
  }
  return a2;
}
