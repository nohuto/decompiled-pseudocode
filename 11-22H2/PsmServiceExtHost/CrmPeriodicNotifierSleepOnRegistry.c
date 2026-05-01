/*
 * XREFs of CrmPeriodicNotifierSleepOnRegistry @ 0x18004B7E0
 * Callers:
 *     CrmGlobalsPeriodicNotifier @ 0x18004B6B0 (CrmGlobalsPeriodicNotifier.c)
 * Callees:
 *     CempQueryUnbiasedInterruptTimeMs64 @ 0x180011964 (CempQueryUnbiasedInterruptTimeMs64.c)
 */

void __fastcall CrmPeriodicNotifierSleepOnRegistry(DWORD a1)
{
  void *v1; // rdi
  unsigned __int64 v2; // rsi
  unsigned __int64 UnbiasedInterruptTimeMs64; // r14
  HANDLE EventW; // rax
  bool i; // zf
  DWORD v6; // ebx
  HKEY hKey; // [rsp+50h] [rbp-18h] BYREF
  DWORD cbData; // [rsp+A0h] [rbp+38h] BYREF
  unsigned int Data; // [rsp+A8h] [rbp+40h] BYREF
  unsigned int lpData; // [rsp+B0h] [rbp+48h] BYREF
  DWORD dwDisposition; // [rsp+B8h] [rbp+50h] BYREF

  cbData = a1;
  hKey = 0LL;
  v1 = 0LL;
  Data = 30000;
  v2 = 0LL;
  UnbiasedInterruptTimeMs64 = CempQueryUnbiasedInterruptTimeMs64();
  if ( !RegCreateKeyExW(
          HKEY_LOCAL_MACHINE,
          L"SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\CentralResourceManager",
          0,
          0LL,
          0,
          0xF003Fu,
          0LL,
          &hKey,
          &dwDisposition)
    && (dwDisposition != 1 || !RegSetValueExW(hKey, L"NotifyInterval", 0, 4u, (const BYTE *)&Data, 4u)) )
  {
    EventW = CreateEventW(0LL, 0, 0, 0LL);
    v1 = EventW;
    if ( EventW )
    {
      for ( i = RegNotifyChangeKeyValue(hKey, 0, 4u, EventW, 1) == 0; i; i = v6 == 0 )
      {
        cbData = 4;
        if ( RegQueryValueExW(hKey, L"NotifyInterval", 0LL, 0LL, (LPBYTE)&lpData, &cbData) )
          break;
        Data = lpData;
        if ( v2 >= lpData )
          break;
        v6 = WaitForSingleObject(v1, lpData - v2);
        v2 = CempQueryUnbiasedInterruptTimeMs64() - UnbiasedInterruptTimeMs64;
      }
    }
  }
  if ( hKey )
    RegCloseKey(hKey);
  if ( v1 )
    CloseHandle(v1);
  if ( v2 < Data )
    Sleep(Data - v2);
}
