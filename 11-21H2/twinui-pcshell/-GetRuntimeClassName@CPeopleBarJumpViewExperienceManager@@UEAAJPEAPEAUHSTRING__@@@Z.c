/*
 * XREFs of ?GetRuntimeClassName@CPeopleBarJumpViewExperienceManager@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18036B210
 * Callers:
 *     ?GetRuntimeClassName@CPeopleBarJumpViewExperienceManager@@WBI@EAAJPEAPEAUHSTRING__@@@Z @ 0x1801F3EB0 (-GetRuntimeClassName@CPeopleBarJumpViewExperienceManager@@WBI@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall CPeopleBarJumpViewExperienceManager::GetRuntimeClassName(
        CPeopleBarJumpViewExperienceManager *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.Shell.Experience.PeopleBarJumpViewExperienceManager", 0x44u, a2);
}
