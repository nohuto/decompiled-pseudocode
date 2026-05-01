/*
 * XREFs of ?s_GetAppId@PeoplePaneViewManager@@CAPEBGXZ @ 0x1804B67F8
 * Callers:
 *     ?LaunchPeoplePaneForContactWithArgs@PeoplePaneViewManager@@AEAAJPEBG0@Z @ 0x1804B52B8 (-LaunchPeoplePaneForContactWithArgs@PeoplePaneViewManager@@AEAAJPEBG0@Z.c)
 *     ?LaunchPeopleShare@PeoplePaneViewManager@@UEAAJPEBGPEAUIInspectable@@@Z @ 0x1804B54C0 (-LaunchPeopleShare@PeoplePaneViewManager@@UEAAJPEBGPEAUIInspectable@@@Z.c)
 * Callees:
 *     <none>
 */

const unsigned __int16 *PeoplePaneViewManager::s_GetAppId(void)
{
  int v0; // ecx
  LSTATUS ValueW; // eax
  bool v2; // zf
  const unsigned __int16 *result; // rax
  unsigned int v4; // [rsp+50h] [rbp+8h] BYREF
  DWORD v5; // [rsp+58h] [rbp+10h] BYREF
  DWORD v6; // [rsp+60h] [rbp+18h] BYREF

  v0 = dword_18098D610;
  if ( dword_18098D610 )
    goto LABEL_12;
  v5 = 0;
  v6 = 4;
  ValueW = RegGetValueW(
             HKEY_LOCAL_MACHINE,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\ImmersiveShell",
             L"PrereleaseExperience",
             0x10000012u,
             &v5,
             &v4,
             &v6);
  if ( !ValueW )
  {
    if ( v5 == 4 )
    {
      if ( v4 <= 1 )
      {
        v2 = v4 == 1;
        goto LABEL_9;
      }
    }
    else if ( v6 == 4 && (unsigned __int16)(v4 - 48) <= 1u )
    {
      ValueW = 0;
      v2 = (_WORD)v4 == 49;
LABEL_9:
      LOBYTE(ValueW) = v2;
      if ( ValueW )
      {
        dword_18098D610 = 1;
        return L"PeopleExperienceHostVS_ccv6fwk6gx0xp!App";
      }
    }
  }
  v0 = 2;
  dword_18098D610 = 2;
LABEL_12:
  result = L"Microsoft.Windows.PeopleExperienceHost_cw5n1h2txyewy!App";
  if ( v0 == 1 )
    return L"PeopleExperienceHostVS_ccv6fwk6gx0xp!App";
  return result;
}
