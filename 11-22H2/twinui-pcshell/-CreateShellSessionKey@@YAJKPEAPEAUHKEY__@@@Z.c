/*
 * XREFs of ?CreateShellSessionKey@@YAJKPEAPEAUHKEY__@@@Z @ 0x18012F95C
 * Callers:
 *     ?Initialize@CPersistence@ApplicationViewManagement@@QEAAJXZ @ 0x18012F5D8 (-Initialize@CPersistence@ApplicationViewManagement@@QEAAJXZ.c)
 *     ?DoesShellSessionSubKeyExist@@YA_NPEB_W@Z @ 0x18076C5AC (-DoesShellSessionSubKeyExist@@YA_NPEB_W@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18012FE34 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

LSTATUS __fastcall CreateShellSessionKey(REGSAM samDesired, PHKEY phkResult)
{
  DWORD CurrentProcessId; // eax
  LSTATUS result; // eax
  DWORD pSessionId; // [rsp+50h] [rbp-C8h] BYREF
  DWORD dwDisposition[3]; // [rsp+54h] [rbp-C4h] BYREF
  WCHAR SubKey[80]; // [rsp+60h] [rbp-B8h] BYREF

  *phkResult = 0LL;
  CurrentProcessId = GetCurrentProcessId();
  ProcessIdToSessionId(CurrentProcessId, &pSessionId);
  result = StringCchPrintfW(
             SubKey,
             0x4BuLL,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\SessionInfo\\%d",
             pSessionId);
  if ( result >= 0 )
  {
    result = RegCreateKeyExW(HKEY_CURRENT_USER, SubKey, 0, 0LL, 1u, samDesired, 0LL, phkResult, dwDisposition);
    if ( result > 0 )
      return (unsigned __int16)result | 0x80070000;
  }
  return result;
}
