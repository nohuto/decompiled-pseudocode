/*
 * XREFs of ?WaitForDwmExit@@YAJPEAKPEAU_FILETIME@@@Z @ 0x1800062D4
 * Callers:
 *     ?CleanupOldDwmProcess@@YAJXZ @ 0x18000411C (-CleanupOldDwmProcess@@YAJXZ.c)
 *     DwmpTerminateSessionProcess @ 0x180007280 (DwmpTerminateSessionProcess.c)
 * Callees:
 *     ?SignalDwmExited@@YA_NXZ @ 0x180005F08 (-SignalDwmExited@@YA_NXZ.c)
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x1800075AC (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     DwmpResetPortConnection @ 0x180007894 (DwmpResetPortConnection.c)
 */

__int64 __fastcall WaitForDwmExit(LPDWORD lpExitCode, LPFILETIME lpExitTime)
{
  signed int v4; // ebx
  signed int v5; // eax
  signed int v6; // eax
  unsigned int v7; // edx
  signed int LastError; // eax
  struct _FILETIME CreationTime; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0;
  DwmpResetPortConnection();
  if ( !WaitForSingleObject(ghDwmProcess, 0x12Cu)
    || TerminateProcess(ghDwmProcess, 0x42Bu)
    || (v5 = GetLastError(), v5 == 5) )
  {
    if ( WaitForSingleObject(ghDwmProcess, 0xFFFFFFFF) )
    {
      v4 = -2147467259;
      v7 = 928;
    }
    else
    {
      SetLastError(0);
      if ( GetExitCodeProcess(ghDwmProcess, lpExitCode) )
      {
        if ( !lpExitTime
          || (SetLastError(0), GetProcessTimes(ghDwmProcess, &CreationTime, lpExitTime, &CreationTime, &CreationTime)) )
        {
          SignalDwmExited();
          goto LABEL_24;
        }
        LastError = GetLastError();
        v4 = LastError;
        if ( LastError > 0 )
          v4 = (unsigned __int16)LastError | 0x80070000;
        v7 = 923;
        if ( v4 >= 0 )
          v4 = -2003304445;
      }
      else
      {
        v6 = GetLastError();
        v4 = v6;
        if ( v6 > 0 )
          v4 = (unsigned __int16)v6 | 0x80070000;
        v7 = 913;
        if ( v4 >= 0 )
          v4 = -2003304445;
      }
    }
    DoStackCaptureDirect(v4, v7);
  }
  else if ( v5 > 0 )
  {
    v4 = (unsigned __int16)v5 | 0x80070000;
  }
  else
  {
    v4 = v5;
  }
LABEL_24:
  if ( ghDwmProcess )
  {
    CloseHandle(ghDwmProcess);
    ghDwmProcess = 0LL;
  }
  return (unsigned int)v4;
}
