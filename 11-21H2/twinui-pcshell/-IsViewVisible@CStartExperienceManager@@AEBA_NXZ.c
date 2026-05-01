/*
 * XREFs of ?IsViewVisible@CStartExperienceManager@@AEBA_NXZ @ 0x18036F554
 * Callers:
 *     ?InputHostHiding@CStartExperienceManager@@UEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z @ 0x18036F3E0 (-InputHostHiding@CStartExperienceManager@@UEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z.c)
 *     ?InputHostShowing@CStartExperienceManager@@UEAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@11@Z @ 0x18036F470 (-InputHostShowing@CStartExperienceManager@@UEAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@11@.c)
 * Callees:
 *     <none>
 */

bool __fastcall CStartExperienceManager::IsViewVisible(CStartExperienceManager *this)
{
  char v1; // dl

  v1 = 0;
  if ( this != (CStartExperienceManager *)-320LL )
    return *((_DWORD *)this + 90) == 2;
  return v1;
}
