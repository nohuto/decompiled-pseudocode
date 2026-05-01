/*
 * XREFs of ??0StartupApproval@StartupDB@@QEAA@XZ @ 0x18063DB7C
 * Callers:
 *     ?IsStartupAppEnabled@StartupAppMonitor@@CA_NPEAUHKEY__@@PEBG1@Z @ 0x18063EBE8 (-IsStartupAppEnabled@StartupAppMonitor@@CA_NPEAUHKEY__@@PEBG1@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

StartupDB::StartupApproval *__fastcall StartupDB::StartupApproval::StartupApproval(StartupDB::StartupApproval *this)
{
  struct _OSVERSIONINFOW VersionInformation; // [rsp+20h] [rbp-138h] BYREF
  char v4; // [rsp+138h] [rbp-20h]

  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  VersionInformation.dwOSVersionInfoSize = 284;
  if ( GetVersionExW(&VersionInformation) && (v4 & 0x40) != 0
    || (unsigned int)SHWindowsPolicy(&POLID_EnableAllStartupApplications) )
  {
    *((_DWORD *)this + 2) = 1;
  }
  return this;
}
