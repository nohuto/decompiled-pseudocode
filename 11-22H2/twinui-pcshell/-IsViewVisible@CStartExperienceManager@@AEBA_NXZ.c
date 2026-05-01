/*
 * XREFs of ?IsViewVisible@CStartExperienceManager@@AEBA_NXZ @ 0x1801BD4A0
 * Callers:
 *     CStartExperienceManager::OnDisplayMonitorInfoChangedAsync$_ResumeCoro$1 @ 0x1801E2980 (CStartExperienceManager--OnDisplayMonitorInfoChangedAsync$_ResumeCoro$1.c)
 *     ?InputHostHiding@CStartExperienceManager@@UEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z @ 0x1802D4A60 (-InputHostHiding@CStartExperienceManager@@UEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z.c)
 *     ?InputHostShowing@CStartExperienceManager@@UEAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@11@Z @ 0x180444F30 (-InputHostShowing@CStartExperienceManager@@UEAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@11@.c)
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
