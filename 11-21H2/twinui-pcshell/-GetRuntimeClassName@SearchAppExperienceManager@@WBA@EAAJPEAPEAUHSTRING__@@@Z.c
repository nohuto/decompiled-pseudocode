/*
 * XREFs of ?GetRuntimeClassName@SearchAppExperienceManager@@WBA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1801F2C10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SearchAppExperienceManager::GetRuntimeClassName(__int64 a1, HSTRING *a2)
{
  return MiniSearchExperienceManager::GetRuntimeClassName((MiniSearchExperienceManager *)(a1 - 16), a2);
}
