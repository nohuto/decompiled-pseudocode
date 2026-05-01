/*
 * XREFs of ?MatchesTrayInfoTipAppIdFormat@TrayUtility@SystemTray@@YA_NPEAUHSTRING__@@@Z @ 0x180491A28
 * Callers:
 *     ?FindAppInfo@TrayInfoTipAppInfoProvider@SystemTray@@UEAAJPEAUHSTRING__@@PEAPEAUIAppInfo@ApplicationModel@Windows@@@Z @ 0x180490950 (-FindAppInfo@TrayInfoTipAppInfoProvider@SystemTray@@UEAAJPEAUHSTRING__@@PEAPEAUIAppInfo@Applicat.c)
 * Callees:
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1801EACE3 (memcmp_0.c)
 */

bool __fastcall SystemTray::TrayUtility::MatchesTrayInfoTipAppIdFormat(HSTRING string, HSTRING a2)
{
  PCWSTR StringRawBuffer; // rax
  unsigned __int64 v4; // r8
  PCWSTR v5; // rax
  UINT32 length; // [rsp+20h] [rbp-28h] BYREF
  GUID pclsid; // [rsp+28h] [rbp-20h] BYREF

  StringRawBuffer = WindowsGetStringRawBuffer(string, &length);
  v4 = -1LL;
  do
    ++v4;
  while ( aMicrosoftExplo[v4] );
  if ( v4 > length || memcmp_0(StringRawBuffer, L"Microsoft.Explorer.Notification.", 2 * v4) )
    return 0;
  v5 = WindowsGetStringRawBuffer(string, 0LL);
  return CLSIDFromString(v5 + 32, &pclsid) >= 0;
}
