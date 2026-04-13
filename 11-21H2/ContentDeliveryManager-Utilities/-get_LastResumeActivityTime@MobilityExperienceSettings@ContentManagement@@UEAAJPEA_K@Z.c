/*
 * XREFs of ?get_LastResumeActivityTime@MobilityExperienceSettings@ContentManagement@@UEAAJPEA_K@Z @ 0x1800497B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::MobilityExperienceSettings::get_LastResumeActivityTime(
        ContentManagement::MobilityExperienceSettings *this,
        unsigned __int64 *a2)
{
  DWORD v3; // [rsp+60h] [rbp+18h] BYREF

  v3 = 8;
  RegGetValueW(
    HKEY_CURRENT_USER,
    L"Software\\Microsoft\\Windows\\CurrentVersion\\Mobility",
    L"LastResumeOnPCTime",
    0x20000040u,
    0LL,
    a2,
    &v3);
  return 0LL;
}
