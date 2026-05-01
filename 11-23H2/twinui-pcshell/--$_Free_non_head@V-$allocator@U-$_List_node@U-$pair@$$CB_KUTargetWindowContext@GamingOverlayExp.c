/*
 * XREFs of ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1803F571C
 * Callers:
 *     ??1?$list@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@V?$allocator@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@@2@@std@@QEAA@XZ @ 0x1803F9588 (--1-$list@U-$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@V-$allocator@.c)
 *     ??1GamingOverlayExperienceManager@@EEAA@XZ @ 0x1803F98A8 (--1GamingOverlayExperienceManager@@EEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@U?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@@std@@@std@@YAXPEAU?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@QEAU1@AEAV?$allocator@U?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@@0@@Z @ 0x1803F49FC (--$_Destroy_range@V-$allocator@U-$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@@std@@@s.c)
 */

void __fastcall std::_List_node<std::pair<unsigned __int64 const,GamingOverlayExperienceManager::TargetWindowContext>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned __int64 const,GamingOverlayExperienceManager::TargetWindowContext>,void *>>>(
        __int64 a1,
        __int64 a2)
{
  void **v2; // rbx
  __int64 v3; // rcx
  void **v4; // rdi

  **(_QWORD **)(a2 + 8) = 0LL;
  v2 = *(void ***)a2;
  if ( *(_QWORD *)a2 )
  {
    do
    {
      v3 = (__int64)v2[3];
      v4 = (void **)*v2;
      if ( v3 )
      {
        std::_Destroy_range<std::allocator<OwnedHWinEventHook<GamingOverlayExperienceManager>>>(v3, (__int64)v2[4]);
        std::_Deallocate<16,0>(v2[3], ((_BYTE *)v2[5] - (_BYTE *)v2[3]) & 0xFFFFFFFFFFFFFFF8uLL);
        v2[3] = 0LL;
        v2[4] = 0LL;
        v2[5] = 0LL;
      }
      std::_Deallocate<16,0>(v2, 0x38uLL);
      v2 = v4;
    }
    while ( v4 );
  }
}
