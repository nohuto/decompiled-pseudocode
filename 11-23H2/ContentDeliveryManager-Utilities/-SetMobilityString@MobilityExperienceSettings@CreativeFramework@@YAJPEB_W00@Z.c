/*
 * XREFs of ?SetMobilityString@MobilityExperienceSettings@CreativeFramework@@YAJPEB_W00@Z @ 0x1800C1A2C
 * Callers:
 *     ?put_PairingContext@MobilityExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x1800C2100 (-put_PairingContext@MobilityExperienceManager@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?Return_Win32Msg@in1diag3@details@wil@@YAJPEAXIPEBDK1ZZ @ 0x18003F2D0 (-Return_Win32Msg@in1diag3@details@wil@@YAJPEAXIPEBDK1ZZ.c)
 */

__int64 __fastcall CreativeFramework::MobilityExperienceSettings::SetMobilityString(
        CreativeFramework::MobilityExperienceSettings *this,
        const wchar_t *a2,
        const wchar_t *lpData,
        const wchar_t *a4)
{
  __int64 v4; // rax
  unsigned int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = -1LL;
  do
    ++v4;
  while ( lpData[v4] );
  v5 = RegSetKeyValueW(
         HKEY_CURRENT_USER,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Mobility",
         L"PairingContext",
         1u,
         lpData,
         2 * v4 + 2);
  if ( v5 )
    return wil::details::in1diag3::Return_Win32Msg(
             retaddr,
             (void *)0x53,
             (__int64)"onecoreuap\\internal\\shell\\inc\\MobilityExperienceSettings.h",
             (const char *)v5,
             (unsigned __int64)"RegKey: %ws %ws",
             (const char *)L"Software\\Microsoft\\Windows\\CurrentVersion\\Mobility",
             L"PairingContext");
  else
    return 0LL;
}
