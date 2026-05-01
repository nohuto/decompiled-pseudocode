/*
 * XREFs of ?IsFlyoutOpen@CPeopleBarFlyoutExperienceManager@@UEAAJPEAE@Z @ 0x180368C10
 * Callers:
 *     <none>
 * Callees:
 *     ?CanShow@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAA_NXZ @ 0x180368444 (-CanShow@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAA_NXZ.c)
 */

__int64 __fastcall CPeopleBarFlyoutExperienceManager::IsFlyoutOpen(CPeopleBarFlyoutExperienceManager *this, bool *a2)
{
  bool v3; // al

  v3 = *((_DWORD *)this + 38) == 2
    || !CPeopleBarFlyoutExperienceManager::DebounceDetection::CanShow((CPeopleBarFlyoutExperienceManager *)((char *)this + 672));
  *a2 = v3;
  return 0LL;
}
