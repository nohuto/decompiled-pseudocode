/*
 * XREFs of ??$_Destroy_range@V?$allocator@U?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@@std@@@std@@YAXPEAU?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@QEAU1@AEAV?$allocator@U?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@@0@@Z @ 0x1803F49FC
 * Callers:
 *     _std::vector_OwnedHWinEventHook_GamingOverlayExperienceManager__std::allocator_OwnedHWinEventHook_GamingOverlayExperienceManager_____::_Emplace_reallocate_HWINEVENTHOOK_____&_GamingOverlayExperienceManager____::_1_::catch$3 @ 0x1803F4C68 (_std--vector_OwnedHWinEventHook_GamingOverlayExperienceManager__std--allocator_Owne_ea_1803F4C68.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1803F571C (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CB_KUTargetWindowContext@GamingOverlayExp.c)
 *     ??$_Uninitialized_move@PEAU?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@V?$allocator@U?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@@std@@@std@@YAPEAU?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@QEAU1@0PEAU1@AEAV?$allocator@U?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@@0@@Z @ 0x1803F6638 (--$_Uninitialized_move@PEAU-$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@V-$allocator@.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1803F93DC (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CB_KUTargetWindowContext@Gaming.c)
 *     ??1TargetWindowContext@GamingOverlayExperienceManager@@QEAA@XZ @ 0x1803F9714 (--1TargetWindowContext@GamingOverlayExperienceManager@@QEAA@XZ.c)
 *     ?WndProc@GamingOverlayExperienceManager@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x1804091D4 (-WndProc@GamingOverlayExperienceManager@@AEAA_JPEAUHWND__@@I_K_J@Z.c)
 *     ?_Change_array@?$vector@U?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@V?$allocator@U?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@@std@@@std@@AEAAXQEAU?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@_K1@Z @ 0x1804098F4 (-_Change_array@-$vector@U-$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@V-$allocator@U-.c)
 *     ?_Unchecked_erase@?$list@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@V?$allocator@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@@2@@std@@AEAAPEAU?$_List_node@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@PEAX@2@QEAU32@@Z @ 0x18040A468 (-_Unchecked_erase@-$list@U-$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std.c)
 * Callees:
 *     ??1?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@QEAA@XZ @ 0x1803F91B0 (--1-$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@QEAA@XZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<OwnedHWinEventHook<GamingOverlayExperienceManager>>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = OwnedHWinEventHook<GamingOverlayExperienceManager>::~OwnedHWinEventHook<GamingOverlayExperienceManager>(v3);
      v3 += 8LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
