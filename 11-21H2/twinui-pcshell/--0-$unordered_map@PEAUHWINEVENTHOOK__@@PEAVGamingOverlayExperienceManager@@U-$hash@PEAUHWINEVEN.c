/*
 * XREFs of ??0?$unordered_map@PEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@U?$hash@PEAUHWINEVENTHOOK__@@@std@@U?$equal_to@PEAUHWINEVENTHOOK__@@@4@V?$allocator@U?$pair@QEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@std@@@4@@std@@QEAA@XZ @ 0x18009D688
 * Callers:
 *     _dynamic_initializer_for__OwnedHWinEventHook_GamingOverlayExperienceManager_::m_eventHookOwners__ @ 0x180002670 (_dynamic_initializer_for__OwnedHWinEventHook_GamingOverlayExperienceManager_--m_eventHookOwners_.c)
 * Callees:
 *     ??0?$_Hash@V?$_Umap_traits@PEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@V?$_Uhash_compare@PEAUHWINEVENTHOOK__@@U?$hash@PEAUHWINEVENTHOOK__@@@std@@U?$equal_to@PEAUHWINEVENTHOOK__@@@3@@std@@V?$allocator@U?$pair@QEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@std@@@4@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@PEAUHWINEVENTHOOK__@@U?$hash@PEAUHWINEVENTHOOK__@@@std@@U?$equal_to@PEAUHWINEVENTHOOK__@@@3@@1@AEBV?$allocator@U?$pair@QEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@std@@@1@@Z @ 0x18009D250 (--0-$_Hash@V-$_Umap_traits@PEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@V-$_Uhash_co.c)
 */

int *__fastcall std::unordered_map<HWINEVENTHOOK__ *,GamingOverlayExperienceManager *>::unordered_map<HWINEVENTHOOK__ *,GamingOverlayExperienceManager *>(
        __int64 a1)
{
  int v2; // [rsp+30h] [rbp+8h] BYREF
  int v3; // [rsp+34h] [rbp+Ch]

  v3 = HIDWORD(a1);
  v2 = 0;
  std::_Hash<std::_Umap_traits<HWINEVENTHOOK__ *,GamingOverlayExperienceManager *,std::_Uhash_compare<HWINEVENTHOOK__ *,std::hash<HWINEVENTHOOK__ *>,std::equal_to<HWINEVENTHOOK__ *>>,std::allocator<std::pair<HWINEVENTHOOK__ * const,GamingOverlayExperienceManager *>>,0>>::_Hash<std::_Umap_traits<HWINEVENTHOOK__ *,GamingOverlayExperienceManager *,std::_Uhash_compare<HWINEVENTHOOK__ *,std::hash<HWINEVENTHOOK__ *>,std::equal_to<HWINEVENTHOOK__ *>>,std::allocator<std::pair<HWINEVENTHOOK__ * const,GamingOverlayExperienceManager *>>,0>>(
    a1,
    &v2);
  return &OwnedHWinEventHook<GamingOverlayExperienceManager>::m_eventHookOwners;
}
