/*
 * XREFs of ?_Unchecked_erase@?$list@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@V?$allocator@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@@2@@std@@AEAAPEAU?$_List_node@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@PEAX@2@QEAU32@@Z @ 0x18040A468
 * Callers:
 *     ?erase@?$_Hash@V?$_Umap_traits@_KUTargetWindowContext@GamingOverlayExperienceManager@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@@4@$0A@@std@@@std@@QEAA_KAEB_K@Z @ 0x18040AB90 (-erase@-$_Hash@V-$_Umap_traits@_KUTargetWindowContext@GamingOverlayExperienceManager@@V-$_Uhash_.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@U?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@@std@@@std@@YAXPEAU?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@QEAU1@AEAV?$allocator@U?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@@0@@Z @ 0x1803F49FC (--$_Destroy_range@V-$allocator@U-$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@@std@@@s.c)
 */

_QWORD *__fastcall std::list<std::pair<unsigned __int64 const,GamingOverlayExperienceManager::TargetWindowContext>>::_Unchecked_erase(
        __int64 a1,
        void *a2)
{
  _QWORD *v2; // rdi
  __int64 v4; // rcx

  v2 = *(_QWORD **)a2;
  --*(_QWORD *)(a1 + 8);
  **((_QWORD **)a2 + 1) = v2;
  v2[1] = *((_QWORD *)a2 + 1);
  v4 = *((_QWORD *)a2 + 3);
  if ( v4 )
  {
    std::_Destroy_range<std::allocator<OwnedHWinEventHook<GamingOverlayExperienceManager>>>(v4, *((_QWORD *)a2 + 4));
    std::_Deallocate<16,0>(*((void **)a2 + 3), (*((_QWORD *)a2 + 5) - *((_QWORD *)a2 + 3)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)a2 + 3) = 0LL;
    *((_QWORD *)a2 + 4) = 0LL;
    *((_QWORD *)a2 + 5) = 0LL;
  }
  std::_Deallocate<16,0>(a2, 0x38uLL);
  return v2;
}
