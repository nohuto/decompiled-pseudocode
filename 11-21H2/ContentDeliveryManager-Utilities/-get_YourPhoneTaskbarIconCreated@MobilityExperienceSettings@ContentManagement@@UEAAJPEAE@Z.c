/*
 * XREFs of ?get_YourPhoneTaskbarIconCreated@MobilityExperienceSettings@ContentManagement@@UEAAJPEAE@Z @ 0x18004A730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::MobilityExperienceSettings::get_YourPhoneTaskbarIconCreated(
        ContentManagement::MobilityExperienceSettings *this,
        bool *a2)
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
             L"YourPhoneAppTaskbarIconCreated",
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
