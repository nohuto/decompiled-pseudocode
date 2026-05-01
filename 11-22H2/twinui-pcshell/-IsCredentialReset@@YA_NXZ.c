/*
 * XREFs of ?IsCredentialReset@@YA_NXZ @ 0x1801B8DD8
 * Callers:
 *     ?IsUserOOBEOrCredentialReset@@YA_NXZ @ 0x1801B8DA8 (-IsUserOOBEOrCredentialReset@@YA_NXZ.c)
 *     ?UpdateFocusOnDismiss@CBaseTrayFlyoutExperienceManager@@AEAAJXZ @ 0x180475BD8 (-UpdateFocusOnDismiss@CBaseTrayFlyoutExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

char IsCredentialReset(void)
{
  char v0; // bl
  bool v2; // zf
  unsigned int v3; // [rsp+50h] [rbp+8h] BYREF
  DWORD v4; // [rsp+58h] [rbp+10h] BYREF
  DWORD v5; // [rsp+60h] [rbp+18h] BYREF

  v5 = 4;
  v0 = 0;
  v4 = 0;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Authentication\\CFL\\ExperienceManagerData",
          L"LaunchCflScenario",
          0x10000012u,
          &v4,
          &v3,
          &v5) )
  {
    if ( v4 == 4 )
    {
      v2 = v3 == 1;
      if ( v3 > 1 )
        return v0;
    }
    else
    {
      if ( v5 != 4 || (unsigned __int16)(v3 - 48) > 1u )
        return v0;
      return (_WORD)v3 == 49;
    }
    return v2;
  }
  return v0;
}
