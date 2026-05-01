/*
 * XREFs of ??1?$unordered_map@PEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@U?$hash@PEAUHWINEVENTHOOK__@@@std@@U?$equal_to@PEAUHWINEVENTHOOK__@@@4@V?$allocator@U?$pair@QEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@std@@@4@@std@@QEAA@XZ @ 0x180187C88
 * Callers:
 *     _dynamic_atexit_destructor_for__OwnedHWinEventHook_GamingOverlayExperienceManager_::m_eventHookOwners__ @ 0x1802246E0 (_dynamic_atexit_destructor_for__OwnedHWinEventHook_GamingOverlayExperienceManager_--m_eventHookO.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::unordered_map<HWINEVENTHOOK__ *,GamingOverlayExperienceManager *>::~unordered_map<HWINEVENTHOOK__ *,GamingOverlayExperienceManager *>(
        __int64 a1)
{
  _QWORD **v2; // rcx
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx

  std::_Deallocate<16,0>(*(void **)(a1 + 24), (*(_QWORD *)(a1 + 32) - *(_QWORD *)(a1 + 24)) & 0xFFFFFFFFFFFFFFF8uLL);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  v2 = *(_QWORD ***)(a1 + 8);
  *v2[1] = 0LL;
  v3 = *v2;
  if ( v3 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      std::_Deallocate<16,0>(v3, 0x20uLL);
      v3 = v4;
    }
    while ( v4 );
  }
  std::_Deallocate<16,0>(*(void **)(a1 + 8), 0x20uLL);
}
