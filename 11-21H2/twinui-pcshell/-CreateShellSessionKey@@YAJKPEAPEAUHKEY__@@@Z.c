/*
 * XREFs of ?CreateShellSessionKey@@YAJKPEAPEAUHKEY__@@@Z @ 0x1800CA514
 * Callers:
 *     ?Initialize@CPersistence@ApplicationViewManagement@@QEAAJXZ @ 0x1800CA460 (-Initialize@CPersistence@ApplicationViewManagement@@QEAAJXZ.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800CA828 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

LSTATUS __fastcall CreateShellSessionKey(__int64 a1, HKEY *a2)
{
  DWORD CurrentProcessId; // eax
  LSTATUS result; // eax
  DWORD pSessionId; // [rsp+50h] [rbp-C8h] BYREF
  DWORD dwDisposition[3]; // [rsp+54h] [rbp-C4h] BYREF
  WCHAR SubKey[80]; // [rsp+60h] [rbp-B8h] BYREF

  *a2 = 0LL;
  CurrentProcessId = GetCurrentProcessId();
  ProcessIdToSessionId(CurrentProcessId, &pSessionId);
  result = StringCchPrintfW(
             SubKey,
             0x4BuLL,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\SessionInfo\\%d",
             pSessionId);
  if ( result >= 0 )
  {
    result = RegCreateKeyExW(HKEY_CURRENT_USER, SubKey, 0, 0LL, 1u, 4u, 0LL, a2, dwDisposition);
    if ( result > 0 )
      return (unsigned __int16)result | 0x80070000;
  }
  return result;
}
