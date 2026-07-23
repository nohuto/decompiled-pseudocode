/*
 * XREFs of sub_140B25540 @ 0x140B25540
 * Callers:
 *     sub_140B25464 @ 0x140B25464 (sub_140B25464.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     PoRegisterPowerSettingCallback @ 0x140762500 (PoRegisterPowerSettingCallback.c)
 */

__int64 sub_140B25540()
{
  __int64 result; // rax
  unsigned int v1; // ebx
  GUID SettingGuid; // [rsp+30h] [rbp-38h] BYREF
  GUID i; // [rsp+40h] [rbp-28h] BYREF

  result = (unsigned int)dword_140D06884;
  v1 = 0;
  SettingGuid = (GUID)xmmword_140025E90;
  for ( i = (GUID)xmmword_140025E80; v1 < (unsigned int)dword_140D06884; ++v1 )
  {
    SettingGuid.Data4[7] = v1;
    i.Data4[7] = v1;
    PoRegisterPowerSettingCallback(0LL, &SettingGuid, (PPOWER_SETTING_CALLBACK)sub_140997BA0, 0LL, 0LL);
    PoRegisterPowerSettingCallback(0LL, &i, (PPOWER_SETTING_CALLBACK)sub_140997BA0, 0LL, 0LL);
    result = (unsigned int)dword_140D06884;
  }
  return result;
}
