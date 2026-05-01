/*
 * XREFs of ?IsUserOOBE@@YA_NXZ @ 0x1800F18C8
 * Callers:
 *     ?IsAnyOOBE@@YA_NXZ @ 0x1800F1854 (-IsAnyOOBE@@YA_NXZ.c)
 *     ?SubscribeToServices@CDesktopPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x180119110 (-SubscribeToServices@CDesktopPositioner@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?IsUserOOBEOrCredentialReset@@YA_NXZ @ 0x1801B8DA8 (-IsUserOOBEOrCredentialReset@@YA_NXZ.c)
 * Callees:
 *     <none>
 */

char IsUserOOBE(void)
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
          L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\OOBE",
          L"LaunchUserOOBE",
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
