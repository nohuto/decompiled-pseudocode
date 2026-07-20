/*
 * XREFs of SmscpExecuteInitialCommand @ 0x140004B10
 * Callers:
 *     SmscMain @ 0x1400048D8 (SmscMain.c)
 * Callees:
 *     SmExecPgmEx @ 0x140004CB8 (SmExecPgmEx.c)
 *     SmpExecuteCommand @ 0x140004F44 (SmpExecuteCommand.c)
 *     memset_0 @ 0x140014B4F (memset_0.c)
 */

__int64 __fastcall SmscpExecuteInitialCommand(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // r8d
  __int64 v7; // rax
  __int64 result; // rax
  unsigned int v9; // ebx
  __int64 v10; // rax
  signed __int32 v11[8]; // [rsp+0h] [rbp-A8h] BYREF
  char v12; // [rsp+30h] [rbp-78h] BYREF
  HANDLE ProcessHandle; // [rsp+38h] [rbp-70h]

  memset_0(&v12, 0, 0x68uLL);
  v4 = SmpExecuteCommand(a3, (PRTL_USER_PROCESS_PARAMETERS)&v12);
  v6 = v4;
  if ( v4 >= 0 )
  {
    *(_DWORD *)SmscpSharedWindow = 2;
    result = SmExecPgmEx(v5, &v12, (unsigned int)v4);
    v9 = result;
    if ( (int)result < 0 )
    {
      *(_DWORD *)SmscpSharedWindow = 1;
      _InterlockedOr(v11, 0);
      *((_DWORD *)SmscpSharedWindow + 2) = 1106;
      *((_DWORD *)SmscpSharedWindow + 1) = result;
      *((_QWORD *)SmscpSharedWindow + 2) = SmscpExecuteInitialCommand;
      v10 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
      SmpGlobalLog[2 * v10 + 2] = 1108;
      SmpGlobalLog[2 * v10 + 3] = v9;
      *(_QWORD *)&SmpGlobalLog[2 * v10 + 4] = a3;
      NtTerminateProcess(ProcessHandle, v9);
      return v9;
    }
  }
  else
  {
    *(_DWORD *)SmscpSharedWindow = 1;
    _InterlockedOr(v11, 0);
    *((_DWORD *)SmscpSharedWindow + 2) = 1080;
    *((_DWORD *)SmscpSharedWindow + 1) = v4;
    *((_QWORD *)SmscpSharedWindow + 2) = SmscpExecuteInitialCommand;
    v7 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
    SmpGlobalLog[2 * v7 + 2] = 1081;
    SmpGlobalLog[2 * v7 + 3] = v6;
    *(_QWORD *)&SmpGlobalLog[2 * v7 + 4] = a3;
    return v6;
  }
  return result;
}
