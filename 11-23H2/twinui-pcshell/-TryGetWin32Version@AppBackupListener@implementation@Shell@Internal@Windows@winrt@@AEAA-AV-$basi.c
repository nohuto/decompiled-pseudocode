/*
 * XREFs of ?TryGetWin32Version@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@AEBV78@PEBG@Z @ 0x1806F61F0
 * Callers:
 *     ?BuildRegistryKeyMap@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1806F2064 (-BuildRegistryKeyMap@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ?GetAppThatWasUpdatedOrInstalled@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$optional@U?$pair@Uhstring@winrt@@U12@@std@@@std@@PEAUHKEY__@@PEBG@Z @ 0x1806F2B8C (-GetAppThatWasUpdatedOrInstalled@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180098C40 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ??$AccessRegKey_Error@AEAY0DH@$$CBGPEBGAEAJ@CAppBackupListenerTelemetry@@SAXAEAY0DH@$$CBG$$QEAPEBGAEAJ@Z @ 0x1806EE0C0 (--$AccessRegKey_Error@AEAY0DH@$$CBGPEBGAEAJ@CAppBackupListenerTelemetry@@SAXAEAY0DH@$$CBG$$QEAPE.c)
 */

_QWORD *__fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::TryGetWin32Version(
        __int64 a1,
        _QWORD *a2,
        HKEY *a3,
        _QWORD *a4,
        LPCWSTR lpSubKey)
{
  HKEY v8; // rcx
  DWORD pcbData; // [rsp+40h] [rbp-248h] BYREF
  LSTATUS ValueW; // [rsp+44h] [rbp-244h] BYREF
  __int64 v12[3]; // [rsp+48h] [rbp-240h] BYREF
  _WORD pvData[256]; // [rsp+60h] [rbp-228h] BYREF

  v12[0] = (__int64)a2;
  memset_0(pvData, 0, sizeof(pvData));
  v8 = *a3;
  pcbData = 512;
  ValueW = RegGetValueW(v8, lpSubKey, L"DisplayVersion", 2u, 0LL, pvData, &pcbData);
  if ( (ValueW & 0xFFFFFFFD) != 0 )
  {
    if ( a4[3] >= 8uLL )
      a4 = (_QWORD *)*a4;
    v12[0] = (__int64)a4;
    CAppBackupListenerTelemetry::AccessRegKey_Error<unsigned short const (&)[55],unsigned short const *,long &>(
      (__int64)L"Unable to get win32 app display version for key map at",
      v12,
      &ValueW);
  }
  std::wstring::wstring(a2, pvData);
  return a2;
}
