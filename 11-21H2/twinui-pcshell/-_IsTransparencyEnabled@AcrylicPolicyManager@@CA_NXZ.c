/*
 * XREFs of ?_IsTransparencyEnabled@AcrylicPolicyManager@@CA_NXZ @ 0x18005BF20
 * Callers:
 *     ?SubscribeToServices@AcrylicPolicyManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18005BC60 (-SubscribeToServices@AcrylicPolicyManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     wistd::__function::__func__lambda_ff41f8cdbde19e69a64f6a7bdf98a1ab__void___cdecl(enum_wil::RegistryChangeKind)_::operator() @ 0x1802DB310 (wistd--__function--__func__lambda_ff41f8cdbde19e69a64f6a7bdf98a1ab__void___cdecl(en_ea_1802DB310.c)
 * Callees:
 *     <none>
 */

char AcrylicPolicyManager::_IsTransparencyEnabled(void)
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
          HKEY_CURRENT_USER,
          L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Themes\\Personalize",
          L"EnableTransparency",
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
