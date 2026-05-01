/*
 * XREFs of ?IsDisabledForMachineConfig@details@MeetAndChatHelpers@@YA_NXZ @ 0x1806BE6B0
 * Callers:
 *     ?IsMaCDisabledForDevice@MeetAndChatHelpers@@YA_NXZ @ 0x1806BE8A0 (-IsMaCDisabledForDevice@MeetAndChatHelpers@@YA_NXZ.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18004EB90 (-ResultFromKnownLastError@@YAJXZ.c)
 *     GetAssignedAccessTypeForUser @ 0x180096438 (GetAssignedAccessTypeForUser.c)
 *     IsUserAssignedAccessSingleApp @ 0x1800F194C (IsUserAssignedAccessSingleApp.c)
 *     GetSidStringFromToken @ 0x1800F199C (GetSidStringFromToken.c)
 *     RegExists @ 0x18010EA80 (RegExists.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MACFlyout@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18014EAA4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MACFlyout@@@details@wil@@QEAAX_NW4Reporti.c)
 *     ?_Free@?$NativeString@V?$LocalMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1801AA024 (-_Free@-$NativeString@V-$LocalMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?IsStagingInProgress@@YA_NXZ @ 0x1806BE968 (-IsStagingInProgress@@YA_NXZ.c)
 *     RegGetDword @ 0x18073B5EC (RegGetDword.c)
 */

bool __fastcall MeetAndChatHelpers::details::IsDisabledForMachineConfig(
        MeetAndChatHelpers::details *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  BOOL v4; // ebx
  signed int Error; // eax
  bool result; // al
  LPWSTR StringSid[4]; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  DWORD pcbData; // [rsp+80h] [rbp+20h] BYREF
  int pvData; // [rsp+88h] [rbp+28h] BYREF
  DWORD dwFlags; // [rsp+90h] [rbp+30h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MACFlyout>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_MACFlyout>::GetImpl'::`2'::impl,
    1u,
    3u,
    a4);
  pcbData = 4;
  if ( RegGetValueW(
         HKEY_LOCAL_MACHINE,
         L"OSDATA\\Software\\Microsoft\\Windows\\CurrentVersion\\RetailDemo\\OobeWrite",
         L"Enabled",
         0x10010u,
         0LL,
         &pvData,
         &pcbData) )
  {
    pcbData = 4;
    RegGetValueW(
      HKEY_LOCAL_MACHINE,
      L"Software\\Microsoft\\Windows\\CurrentVersion\\RetailDemo\\OobeWrite",
      L"Enabled",
      0x20010010u,
      0LL,
      &pvData,
      &pcbData);
  }
  if ( pvData || (unsigned int)IsUserAssignedAccessSingleApp((void *)0xFFFFFFFFFFFFFFFCLL) )
    return 1;
  memset(StringSid, 0, 24);
  v4 = (int)GetSidStringFromToken((HANDLE)0xFFFFFFFFFFFFFFFCLL, StringSid) >= 0
    && (unsigned int)GetAssignedAccessTypeForUser(StringSid[0]) == 2;
  Windows::Internal::NativeString<Windows::Internal::LocalMemPolicy<unsigned short>>::_Free((__int64)StringSid);
  if ( v4 )
    return 1;
  if ( GetProfileType(&dwFlags) || (Error = ResultFromKnownLastError(), Error >= 0) )
  {
    if ( (dwFlags & 1) != 0 )
      return 1;
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x7D,
      (int)"ShellCommonDesktopBase\\Internal\\ShellCommonDesktopBase\\Inc\\MeetAndChatHelpers.h",
      (const char *)(unsigned int)Error);
  }
  if ( GetSystemMetrics(67)
    || (unsigned int)RegExists(HKEY_LOCAL_MACHINE, L"System\\Setup\\Status", L"AuditBoot") == 1
    && (unsigned int)RegGetDword(-2147483646LL, L"System\\Setup\\Status") )
  {
    return 1;
  }
  if ( (unsigned int)RegExists(HKEY_LOCAL_MACHINE, L"System\\Setup\\Status\\AuditBootVolatile", 0LL) == 1 )
    return 1;
  result = IsStagingInProgress();
  if ( result )
    return 1;
  return result;
}
