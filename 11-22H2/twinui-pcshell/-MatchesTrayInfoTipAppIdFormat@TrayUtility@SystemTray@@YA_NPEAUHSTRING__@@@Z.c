/*
 * XREFs of ?MatchesTrayInfoTipAppIdFormat@TrayUtility@SystemTray@@YA_NPEAUHSTRING__@@@Z @ 0x18018A438
 * Callers:
 *     ?CanActivate@TrayInfoTipActivator@SystemTray@@UEAAJPEAUHSTRING__@@0PEAUIPropertySet@Collections@Foundation@Windows@@PEAE@Z @ 0x18018A410 (-CanActivate@TrayInfoTipActivator@SystemTray@@UEAAJPEAUHSTRING__@@0PEAUIPropertySet@Collections@.c)
 *     ?FindAppInfo@TrayInfoTipAppInfoProvider@SystemTray@@UEAAJPEAUHSTRING__@@PEAPEAUIAppInfo@ApplicationModel@Windows@@@Z @ 0x180546450 (-FindAppInfo@TrayInfoTipAppInfoProvider@SystemTray@@UEAAJPEAUHSTRING__@@PEAPEAUIAppInfo@Applicat.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1801C9363 (memcmp_0.c)
 */

bool __fastcall SystemTray::TrayUtility::MatchesTrayInfoTipAppIdFormat(HSTRING string, HSTRING a2)
{
  PCWSTR StringRawBuffer; // rax
  unsigned __int64 v4; // r8
  PCWSTR v6; // rax
  UINT32 length; // [rsp+20h] [rbp-28h] BYREF
  GUID pclsid; // [rsp+28h] [rbp-20h] BYREF

  StringRawBuffer = WindowsGetStringRawBuffer(string, &length);
  v4 = -1LL;
  do
    ++v4;
  while ( aMicrosoftExplo[v4] );
  if ( v4 > length || memcmp_0(StringRawBuffer, L"Microsoft.Explorer.Notification.", 2 * v4) )
    return 0;
  v6 = WindowsGetStringRawBuffer(string, 0LL);
  return CLSIDFromString(v6 + 32, &pclsid) >= 0;
}
