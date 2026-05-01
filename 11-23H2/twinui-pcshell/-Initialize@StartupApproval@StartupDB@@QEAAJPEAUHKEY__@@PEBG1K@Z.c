/*
 * XREFs of ?Initialize@StartupApproval@StartupDB@@QEAAJPEAUHKEY__@@PEBG1K@Z @ 0x18063EB24
 * Callers:
 *     ?IsStartupAppEnabled@StartupAppMonitor@@CA_NPEAUHKEY__@@PEBG1@Z @ 0x18063EBE8 (-IsStartupAppEnabled@StartupAppMonitor@@CA_NPEAUHKEY__@@PEBG1@Z.c)
 * Callees:
 *     ?Uninitialize@StartupApproval@StartupDB@@QEAAXXZ @ 0x1806407F8 (-Uninitialize@StartupApproval@StartupDB@@QEAAXXZ.c)
 */

__int64 __fastcall StartupDB::StartupApproval::Initialize(
        StartupDB::StartupApproval *phkResult,
        HKEY hKey,
        unsigned __int16 *a3,
        const unsigned __int16 *a4)
{
  unsigned int v7; // ebx
  HKEY hKeya; // [rsp+50h] [rbp+18h] BYREF

  hKeya = (HKEY)a3;
  StartupDB::StartupApproval::Uninitialize(phkResult);
  if ( *((_DWORD *)phkResult + 2) )
  {
    *(_QWORD *)phkResult = (*((_DWORD *)phkResult + 2) != 1) + 1LL;
    return 0;
  }
  if ( RegOpenKeyExW(
         hKey,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\StartupApproved",
         0,
         0x101u,
         &hKeya)
    || (v7 = RegOpenKeyExW(hKeya, a4, 0, 0x101u, (PHKEY)phkResult), RegCloseKey(hKeya), v7) )
  {
    *(_QWORD *)phkResult = 1LL;
    return 0;
  }
  return v7;
}
