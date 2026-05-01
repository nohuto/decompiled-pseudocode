/*
 * XREFs of ?RmpTelemetryTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18008A6C0
 * Callers:
 *     <none>
 * Callees:
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001C610 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001D750 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800288A0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     ?RmpTelemetryLogGlobalState@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18008A5A0 (-RmpTelemetryLogGlobalState@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 */

void __fastcall RmpTelemetryTimerCallback(
        struct _TP_CALLBACK_INSTANCE *a1,
        struct _RM_SERVICE_GLOBALS *a2,
        struct _TP_TIMER *a3)
{
  LSTATUS v4; // eax
  bool v5; // sf
  LSTATUS v6; // eax
  bool v7; // sf
  LSTATUS v8; // eax
  bool v9; // sf
  int v10; // [rsp+30h] [rbp-C8h] BYREF
  HKEY phkResult; // [rsp+38h] [rbp-C0h] BYREF
  HKEY hKey; // [rsp+40h] [rbp-B8h] BYREF
  _BYTE v13[144]; // [rsp+50h] [rbp-A8h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v13);
  phkResult = 0LL;
  hKey = 0LL;
  RmpAcquireGlobalLock();
  RmpTelemetryLogGlobalState(a2);
  *((_DWORD *)a2 + 142) = GetTickCount();
  RmpReleaseGlobalLock();
  RtlGetDeviceFamilyInfoEnum(0LL, &v10, 0LL);
  if ( v10 == 3 )
  {
    v4 = RegOpenKeyExW(
           HKEY_LOCAL_MACHINE,
           L"System\\CurrentControlSet\\Control\\Session Manager\\Memory Management",
           0,
           0x20006u,
           &phkResult);
    v5 = v4 < 0;
    if ( v4 > 0 )
      v5 = 1;
    if ( !v5 )
    {
      v6 = RegOpenKeyExW(
             HKEY_LOCAL_MACHINE,
             L"Software\\Microsoft\\Windows NT\\CurrentVersion\\ResourceManager",
             0,
             0x20006u,
             &hKey);
      v7 = v6 < 0;
      if ( v6 > 0 )
        v7 = 1;
      if ( !v7 )
      {
        v8 = RegDeleteValueW(hKey, L"SimulateCommitSavings");
        v9 = v8 < 0;
        if ( v8 > 0 )
          v9 = 1;
        if ( !v9 )
          RegDeleteValueW(phkResult, L"SimulateCommitSavings");
      }
    }
  }
  if ( phkResult )
    RegCloseKey(phkResult);
  if ( hKey )
    RegCloseKey(hKey);
  CempLockTrackerClearForThread(HampLockTrackerId);
}
