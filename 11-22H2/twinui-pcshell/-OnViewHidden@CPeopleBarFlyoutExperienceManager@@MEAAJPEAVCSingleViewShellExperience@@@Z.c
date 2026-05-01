/*
 * XREFs of ?OnViewHidden@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18043F4C0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ @ 0x1800664B0 (-UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?NotifyTrayOfFlyoutVisibility@CPeopleBarFlyoutExperienceManager@@AEAAJ_N@Z @ 0x18043EE94 (-NotifyTrayOfFlyoutVisibility@CPeopleBarFlyoutExperienceManager@@AEAAJ_N@Z.c)
 *     ?UpdateFocusOnDismiss@CPeopleBarFlyoutExperienceManager@@AEAAJXZ @ 0x180440300 (-UpdateFocusOnDismiss@CPeopleBarFlyoutExperienceManager@@AEAAJXZ.c)
 *     ?UpdateViewPositionAndEffects@CPeopleBarFlyoutExperienceManager@@AEAAJ_N@Z @ 0x180440544 (-UpdateViewPositionAndEffects@CPeopleBarFlyoutExperienceManager@@AEAAJ_N@Z.c)
 */

__int64 __fastcall CPeopleBarFlyoutExperienceManager::OnViewHidden(
        CPeopleBarFlyoutExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  CPeopleBarFlyoutExperienceManager *v2; // rbx
  int updated; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (CPeopleBarFlyoutExperienceManager *)((char *)this - 64);
  CPeopleBarFlyoutExperienceManager::NotifyTrayOfFlyoutVisibility(
    (CPeopleBarFlyoutExperienceManager *)((char *)this - 64),
    0);
  CPeopleBarFlyoutExperienceManager::UpdateViewPositionAndEffects(v2, 0);
  updated = CPeopleBarFlyoutExperienceManager::UpdateFocusOnDismiss(v2);
  if ( updated < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x17A,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
      (const char *)(unsigned int)updated);
  SingleViewLightDismissHelper::UnregisterWithLightDismiss((CPeopleBarFlyoutExperienceManager *)((char *)this + 592));
  return 0LL;
}
