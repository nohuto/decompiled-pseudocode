/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::WindowTabHost::GetAllAppTabAllotment_::_1_::dtor$2 @ 0x1802B6449
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unordered_map@PEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@U?$hash@PEAUHWINEVENTHOOK__@@@std@@U?$equal_to@PEAUHWINEVENTHOOK__@@@4@V?$allocator@U?$pair@QEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@std@@@4@@std@@QEAA@XZ @ 0x1801C5FB0 (--1-$unordered_map@PEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@U-$hash@PEAUHWINEVEN.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::GetAllAppTabAllotment_::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 40) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 40) &= ~1u;
    std::unordered_map<HWINEVENTHOOK__ *,GamingOverlayExperienceManager *>::~unordered_map<HWINEVENTHOOK__ *,GamingOverlayExperienceManager *>(*(_QWORD *)(a2 + 224));
  }
}
