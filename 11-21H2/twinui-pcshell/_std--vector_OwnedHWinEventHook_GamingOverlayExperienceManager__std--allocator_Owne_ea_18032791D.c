/*
 * XREFs of _std::vector_OwnedHWinEventHook_GamingOverlayExperienceManager__std::allocator_OwnedHWinEventHook_GamingOverlayExperienceManager_____::_Emplace_reallocate_HWINEVENTHOOK_____&_GamingOverlayExperienceManager____::_1_::catch$4 @ 0x18032791D
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@U?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@@std@@@std@@YAXPEAU?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@QEAU1@AEAV?$allocator@U?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@@0@@Z @ 0x180327624 (--$_Destroy_range@V-$allocator@U-$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@@std@@@s.c)
 */

void __fastcall __noreturn std::vector_OwnedHWinEventHook_GamingOverlayExperienceManager__std::allocator_OwnedHWinEventHook_GamingOverlayExperienceManager_____::_Emplace_reallocate_HWINEVENTHOOK_______GamingOverlayExperienceManager____::_1_::catch_4(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<OwnedHWinEventHook<GamingOverlayExperienceManager>>>(
    *(_QWORD *)(a2 + 160),
    *(_QWORD *)(a2 + 56));
  std::_Deallocate<16,0>(*(void **)(a2 + 64), 8LL * *(_QWORD *)(a2 + 168));
  throw;
}
