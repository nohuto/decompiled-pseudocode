/*
 * XREFs of ?OnDismiss@MeetNowExperienceManager@@UEAAJXZ @ 0x180472BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyView@CSingleViewShellExperience@@QEAAJXZ @ 0x180747360 (-DestroyView@CSingleViewShellExperience@@QEAAJXZ.c)
 */

__int64 __fastcall MeetNowExperienceManager::OnDismiss(MeetNowExperienceManager *this)
{
  CSingleViewShellExperience::DestroyView((MeetNowExperienceManager *)((char *)this + 168));
  return 0LL;
}
