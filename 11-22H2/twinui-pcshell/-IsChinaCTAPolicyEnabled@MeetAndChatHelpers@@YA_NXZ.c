/*
 * XREFs of ?IsChinaCTAPolicyEnabled@MeetAndChatHelpers@@YA_NXZ @ 0x1806BE608
 * Callers:
 *     ?IsMaCDisabledForDevice@MeetAndChatHelpers@@YA_NXZ @ 0x1806BE8A0 (-IsMaCDisabledForDevice@MeetAndChatHelpers@@YA_NXZ.c)
 * Callees:
 *     ?SHRegGetStringEx@@YAJPEAUHKEY__@@PEBG1HPEAGK@Z @ 0x18018D6DC (-SHRegGetStringEx@@YAJPEAUHKEY__@@PEBG1HPEAGK@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 */

bool __fastcall MeetAndChatHelpers::IsChinaCTAPolicyEnabled(MeetAndChatHelpers *this)
{
  char v1; // bl
  unsigned __int16 v3[264]; // [rsp+30h] [rbp-228h] BYREF

  memset_0(v3, 0, 0x208uLL);
  v1 = 0;
  if ( SHRegGetStringEx(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\DeviceAccess",
         L"ActivePolicyCode",
         2u,
         v3,
         0x104u) >= 0 )
    return (unsigned int)_o__wcsicmp(v3, L"ZH") == 0;
  return v1;
}
