/*
 * XREFs of ?OnViewShowing@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180071C40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CStartExperienceManager::OnViewShowing(
        CStartExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  return CStartExperienceManager::PositionMenu((char *)this - 96, a2, 0LL);
}
