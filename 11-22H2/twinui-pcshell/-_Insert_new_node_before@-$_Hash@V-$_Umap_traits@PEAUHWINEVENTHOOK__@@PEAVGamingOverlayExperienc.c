/*
 * XREFs of ?_Insert_new_node_before@?$_Hash@V?$_Umap_traits@PEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@V?$_Uhash_compare@PEAUHWINEVENTHOOK__@@U?$hash@PEAUHWINEVENTHOOK__@@@std@@U?$equal_to@PEAUHWINEVENTHOOK__@@@3@@std@@V?$allocator@U?$pair@QEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@std@@@4@$0A@@std@@@std@@IEAAPEAU?$_List_node@U?$pair@QEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@std@@PEAX@2@_KQEAU32@1@Z @ 0x18040A1E0
 * Callers:
 *     ??$emplace@AEAPEAUHWINEVENTHOOK__@@AEAPEAVGamingOverlayExperienceManager@@@?$_Hash@V?$_Umap_traits@PEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@V?$_Uhash_compare@PEAUHWINEVENTHOOK__@@U?$hash@PEAUHWINEVENTHOOK__@@@std@@U?$equal_to@PEAUHWINEVENTHOOK__@@@3@@std@@V?$allocator@U?$pair@QEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@std@@@std@@@std@@@std@@_N@1@AEAPEAUHWINEVENTHOOK__@@AEAPEAVGamingOverlayExperienceManager@@@Z @ 0x1803F767C (--$emplace@AEAPEAUHWINEVENTHOOK__@@AEAPEAVGamingOverlayExperienceManager@@@-$_Hash@V-$_Umap_trai.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<HWINEVENTHOOK__ *,GamingOverlayExperienceManager *,std::_Uhash_compare<HWINEVENTHOOK__ *,std::hash<HWINEVENTHOOK__ *>,std::equal_to<HWINEVENTHOOK__ *>>,std::allocator<std::pair<HWINEVENTHOOK__ * const,GamingOverlayExperienceManager *>>,0>>::_Insert_new_node_before(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  _QWORD *v4; // r10
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx

  v4 = *(_QWORD **)(a3 + 8);
  ++qword_18098F500;
  *a4 = a3;
  a4[1] = v4;
  *v4 = a4;
  *(_QWORD *)(a3 + 8) = a4;
  v5 = qword_18098F508;
  v6 = 2 * (a2 & qword_18098F520);
  v7 = *(_QWORD *)(qword_18098F508 + 16 * (a2 & qword_18098F520));
  if ( v7 == qword_18098F4F8 )
  {
    *(_QWORD *)(qword_18098F508 + 8 * v6) = a4;
LABEL_6:
    *(_QWORD *)(v5 + 8 * v6 + 8) = a4;
    return a4;
  }
  if ( v7 == a3 )
  {
    *(_QWORD *)(qword_18098F508 + 8 * v6) = a4;
  }
  else if ( *(_QWORD **)(qword_18098F508 + 8 * v6 + 8) == v4 )
  {
    goto LABEL_6;
  }
  return a4;
}
