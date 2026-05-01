/*
 * XREFs of ?GetProcessWorkingDirectoryByPID@Common@@YAJK_NPEAGPEAK@Z @ 0x180044F38
 * Callers:
 *     ?GetProcessWorkingDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x180047454 (-GetProcessWorkingDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z.c)
 * Callees:
 *     ?GetProcessImageInfoByPID@Common@@YAJKPEAGPEAK01@Z @ 0x180044C58 (-GetProcessImageInfoByPID@Common@@YAJKPEAGPEAK01@Z.c)
 *     __security_check_cookie @ 0x18004A5E0 (__security_check_cookie.c)
 *     memset_0 @ 0x18004B744 (memset_0.c)
 */

__int64 __fastcall Common::GetProcessWorkingDirectoryByPID(
        DWORD dwProcessId,
        __int64 a2,
        unsigned int *a3,
        unsigned __int16 *a4)
{
  HANDLE v7; // rdi
  signed int LastError; // eax
  int v10; // ebx
  NTSTATUS InformationProcess; // eax
  signed int v12; // eax
  signed int v13; // eax
  SIZE_T v14; // r9
  signed int v15; // eax
  _OWORD ProcessInformation[3]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v17[56]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int16 v18; // [rsp+98h] [rbp-68h]
  LPCVOID v19; // [rsp+A0h] [rbp-60h]
  _BYTE Buffer[32]; // [rsp+4A0h] [rbp+3A0h] BYREF
  LPCVOID lpBaseAddress; // [rsp+4C0h] [rbp+3C0h]

  memset_0(Buffer, 0, 0x7D0uLL);
  memset_0(v17, 0, 0x440uLL);
  memset(ProcessInformation, 0, sizeof(ProcessInformation));
  if ( a3 && a4 )
  {
    *(_WORD *)a3 = 0;
    v7 = OpenProcess(0x1010u, 0, dwProcessId);
    if ( !v7 )
    {
      LastError = GetLastError();
      if ( LastError == 5 )
        return Common::GetProcessImageInfoByPID(dwProcessId, 0LL, 0LL, a3, a4);
      v10 = (unsigned __int16)LastError | 0x80070000;
      if ( LastError <= 0 )
        v10 = LastError;
      if ( v10 < 0 )
        return (unsigned int)v10;
    }
    InformationProcess = NtQueryInformationProcess(v7, ProcessBasicInformation, ProcessInformation, 0x30u, 0LL);
    v10 = 0;
    if ( InformationProcess < 0 )
      v10 = InformationProcess | 0x10000000;
    if ( v10 >= 0 )
    {
      if ( ReadProcessMemory(v7, *((LPCVOID *)&ProcessInformation[0] + 1), Buffer, 0x7D0uLL, 0LL) )
        goto LABEL_37;
      v12 = GetLastError();
      v10 = (unsigned __int16)v12 | 0x80070000;
      if ( v12 <= 0 )
        v10 = v12;
      if ( v10 >= 0 )
      {
LABEL_37:
        if ( ReadProcessMemory(v7, lpBaseAddress, v17, 0x440uLL, 0LL) )
        {
          v10 = 0;
        }
        else
        {
          v13 = GetLastError();
          v10 = (unsigned __int16)v13 | 0x80070000;
          if ( v13 <= 0 )
            v10 = v13;
          if ( v10 < 0 )
            goto LABEL_31;
        }
        if ( v19 )
        {
          v14 = 2LL * *(unsigned int *)a4;
          if ( v18 < v14 )
          {
            if ( ReadProcessMemory(v7, v19, a3, v14, 0LL) )
            {
              v10 = 0;
            }
            else
            {
              v15 = GetLastError();
              v10 = (unsigned __int16)v15 | 0x80070000;
              if ( v15 <= 0 )
                v10 = v15;
            }
          }
          else
          {
            v10 = -2147024774;
          }
          *(_DWORD *)a4 = (v18 >> 1) + 1;
        }
      }
    }
LABEL_31:
    if ( v7 )
      CloseHandle(v7);
    return (unsigned int)v10;
  }
  return 2147500035LL;
}
