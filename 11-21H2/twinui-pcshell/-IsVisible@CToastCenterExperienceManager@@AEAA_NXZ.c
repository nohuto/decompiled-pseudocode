/*
 * XREFs of ?IsVisible@CToastCenterExperienceManager@@AEAA_NXZ @ 0x1800A6F98
 * Callers:
 *     ?Launch@CToastCenterExperienceManager@@AEAAJXZ @ 0x180362E8C (-Launch@CToastCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CToastCenterExperienceManager::IsVisible(CToastCenterExperienceManager *this)
{
  return *((_DWORD *)this + 36) == 2;
}
