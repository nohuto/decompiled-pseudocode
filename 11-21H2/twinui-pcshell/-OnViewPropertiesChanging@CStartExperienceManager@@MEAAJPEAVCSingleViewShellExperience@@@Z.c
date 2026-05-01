/*
 * XREFs of ?OnViewPropertiesChanging@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18017FF30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CStartExperienceManager::OnViewPropertiesChanging(
        CStartExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  return CStartExperienceManager::PositionMenu((__int64)this - 96, (__int64)a2, 0);
}
