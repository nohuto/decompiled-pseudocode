/*
 * XREFs of ?get_OptedIn@MobilityExperienceManager@@UEAAJPEAE@Z @ 0x1800D7EE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MobilityExperienceManager::get_OptedIn(MobilityExperienceManager *this, bool *a2)
{
  LSTATUS ValueW; // eax
  bool v4; // sf
  DWORD v6; // [rsp+58h] [rbp+10h] BYREF
  int v7; // [rsp+60h] [rbp+18h] BYREF

  *a2 = 0;
  v6 = 4;
  ValueW = RegGetValueW(
             HKEY_CURRENT_USER,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Mobility",
             L"OptedIn",
             0x20000010u,
             0LL,
             &v7,
             &v6);
  v4 = ValueW < 0;
  if ( ValueW > 0 )
    v4 = 1;
  if ( !v4 )
    *a2 = v7 != 0;
  return 0LL;
}
