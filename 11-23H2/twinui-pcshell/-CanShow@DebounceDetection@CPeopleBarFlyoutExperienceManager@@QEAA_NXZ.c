/*
 * XREFs of ?CanShow@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAA_NXZ @ 0x18043E2F0
 * Callers:
 *     ?IsFlyoutOpen@CPeopleBarFlyoutExperienceManager@@UEAAJPEAE@Z @ 0x18043EB00 (-IsFlyoutOpen@CPeopleBarFlyoutExperienceManager@@UEAAJPEAE@Z.c)
 *     ?ShowFlyout@CPeopleBarFlyoutExperienceManager@@UEAAJUPoint@Foundation@Windows@@@Z @ 0x18043F930 (-ShowFlyout@CPeopleBarFlyoutExperienceManager@@UEAAJUPoint@Foundation@Windows@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CPeopleBarFlyoutExperienceManager::DebounceDetection::CanShow(
        CPeopleBarFlyoutExperienceManager::DebounceDetection *this)
{
  return GetTickCount64() - *(_QWORD *)this > 0x64;
}
