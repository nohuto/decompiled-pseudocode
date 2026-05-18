/*
 * XREFs of DwmpNotifyUserLogon @ 0x180006C00
 * Callers:
 *     <none>
 * Callees:
 *     ?TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z @ 0x180006060 (-TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z.c)
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x1800075AC (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     DwmpUpdateUserSettings @ 0x1800078A0 (DwmpUpdateUserSettings.c)
 */

__int64 __fastcall DwmpNotifyUserLogon(HANDLE hToken)
{
  signed int v2; // ebx
  REGSAM v3; // edi
  BOOL v4; // esi
  HKEY v5; // r14
  HANDLE v6; // rbx
  HANDLE v7; // rax
  signed int v8; // eax
  unsigned int v9; // edx
  int v10; // ecx
  HKEY v11; // rdi
  HANDLE v12; // rbx
  HANDLE v13; // rax
  signed int v14; // eax
  HKEY v15; // rdi
  HANDLE v16; // rbx
  HANDLE CurrentProcess; // rax
  signed int LastError; // eax
  int updated; // eax
  HKEY v21; // [rsp+40h] [rbp-20h] BYREF
  HANDLE v22; // [rsp+48h] [rbp-18h] BYREF
  HANDLE v23; // [rsp+50h] [rbp-10h] BYREF
  HANDLE TargetHandle; // [rsp+58h] [rbp-8h] BYREF
  HKEY phkResult; // [rsp+A8h] [rbp+48h] BYREF
  HKEY v26; // [rsp+B0h] [rbp+50h] BYREF
  HKEY v27; // [rsp+B8h] [rbp+58h] BYREF

  v26 = 0LL;
  v2 = 0;
  TargetHandle = 0LL;
  v27 = 0LL;
  v23 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  AcquireSRWLockShared(&gDwmStateLock);
  if ( ghDwmProcess )
  {
    phkResult = 0LL;
    v3 = 131097;
    v4 = 0;
    if ( hToken )
    {
      v4 = ImpersonateLoggedOnUser(hToken);
      if ( v4 )
        v3 = 131103;
    }
    if ( !RegOpenCurrentUser(v3, &phkResult) )
    {
      RegOpenKeyExW(phkResult, L"Software\\Microsoft\\Windows\\DWM", 0, v3, &v26);
      RegOpenKeyExW(phkResult, L"Software\\Policies\\Microsoft\\Windows\\DWM", 0, 0x20019u, &v27);
      RegOpenKeyExW(phkResult, L"Software\\Microsoft\\Windows\\CurrentVersion\\Themes\\Personalize", 0, 0x20019u, &v21);
      CloseHandle(phkResult);
    }
    if ( v4 )
      RevertToSelf();
    v5 = v26;
    if ( !v26
      || (v26 = 0LL,
          SetLastError(0),
          v6 = ghDwmProcess,
          v7 = GetCurrentProcess(),
          DuplicateHandle(v7, v5, v6, &TargetHandle, v3, 0, 1u)) )
    {
      v11 = v27;
      if ( !v27
        || (v27 = 0LL,
            SetLastError(0),
            v12 = ghDwmProcess,
            v13 = GetCurrentProcess(),
            DuplicateHandle(v13, v11, v12, &v23, 0x20019u, 0, 1u)) )
      {
        v15 = v21;
        if ( !v21
          || (v21 = 0LL,
              SetLastError(0),
              v16 = ghDwmProcess,
              CurrentProcess = GetCurrentProcess(),
              DuplicateHandle(CurrentProcess, v15, v16, &v22, 0x20019u, 0, 1u)) )
        {
          updated = DwmpUpdateUserSettings(!v4, TargetHandle, v23, v22);
          v2 = updated;
          if ( updated >= 0 )
            goto LABEL_30;
          v9 = 1633;
          v10 = updated;
          goto LABEL_29;
        }
        LastError = GetLastError();
        v2 = LastError;
        if ( LastError > 0 )
          v2 = (unsigned __int16)LastError | 0x80070000;
        v9 = 1627;
      }
      else
      {
        v14 = GetLastError();
        v2 = v14;
        if ( v14 > 0 )
          v2 = (unsigned __int16)v14 | 0x80070000;
        v9 = 1609;
      }
    }
    else
    {
      v8 = GetLastError();
      v2 = v8;
      if ( v8 > 0 )
        v2 = (unsigned __int16)v8 | 0x80070000;
      v9 = 1591;
    }
    if ( v2 >= 0 )
      v2 = -2003304445;
    v10 = v2;
LABEL_29:
    DoStackCaptureDirect(v10, v9);
  }
LABEL_30:
  TraceLoggingWriteEtw(7, v2, 0);
  ReleaseSRWLockShared(&gDwmStateLock);
  if ( v26 )
    CloseHandle(v26);
  if ( v27 )
    CloseHandle(v27);
  if ( v21 )
    CloseHandle(v21);
  return (unsigned int)v2;
}
