/*
 * XREFs of SmscpLoadSubSystem @ 0x140006588
 * Callers:
 *     SmpExecuteCommand @ 0x140004F44 (SmpExecuteCommand.c)
 * Callees:
 *     SmExecPgmEx @ 0x140004CB8 (SmExecPgmEx.c)
 *     SmpExecuteImage @ 0x14000584C (SmpExecuteImage.c)
 *     SmpEventWriteULONG @ 0x140005C30 (SmpEventWriteULONG.c)
 *     SmpEventWriteULONGString @ 0x140005C88 (SmpEventWriteULONGString.c)
 *     memset_0 @ 0x140014B4F (memset_0.c)
 */

__int64 __fastcall SmscpLoadSubSystem(unsigned __int16 *a1, __int64 a2, __int64 a3, int a4, __int16 a5)
{
  int v9; // r9d
  NTSTATUS v10; // edi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  _BYTE EventInformation[4]; // [rsp+48h] [rbp-41h] BYREF
  int v17; // [rsp+4Ch] [rbp-3Dh]
  HANDLE Object[3]; // [rsp+50h] [rbp-39h] BYREF
  __int128 ProcessParameters; // [rsp+68h] [rbp-21h] BYREF
  HANDLE ThreadHandle; // [rsp+78h] [rbp-11h]
  __int64 v21; // [rsp+80h] [rbp-9h]
  int v22; // [rsp+B0h] [rbp+27h]

  memset_0(&ProcessParameters, 0, 0x68uLL);
  SmpEventWriteULONGString(&SmssEvt_LoadSubsystem_Start, a4, a1);
  if ( (a5 & 0x10) == 0 )
  {
    v10 = SmpExecuteImage((__int64)a1, a2, a3, v9, 0LL, a5 | 0x20u, (PRTL_USER_PROCESS_PARAMETERS)&ProcessParameters);
    if ( v10 < 0 )
    {
      v11 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
      SmpGlobalLog[2 * v11 + 2] = 1206;
      goto LABEL_3;
    }
    v12 = v21;
    *((_QWORD *)SmscpSharedWindow + 1) = v21;
    if ( v22 == 1 )
    {
      v10 = NtResumeThread(ThreadHandle, 0LL);
      if ( v10 < 0 )
      {
        v13 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
        SmpGlobalLog[2 * v13 + 2] = 1256;
        goto LABEL_11;
      }
    }
    else
    {
      v10 = SmExecPgmEx(v12, &ProcessParameters);
      if ( v10 < 0 )
      {
        v13 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
        SmpGlobalLog[2 * v13 + 2] = 1243;
LABEL_11:
        *(_QWORD *)&SmpGlobalLog[2 * v13 + 4] = a3;
        SmpGlobalLog[2 * v13 + 3] = v10;
        v14 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
        SmpGlobalLog[2 * v14 + 2] = 1262;
        goto LABEL_14;
      }
    }
    Object[0] = SmscpSubsystemRegistered;
    Object[1] = *((HANDLE *)&ProcessParameters + 1);
    v10 = NtWaitForMultipleObjects(2u, Object, WaitAny, 0, 0LL);
    if ( v10 >= 0 )
    {
      if ( v10 != 1 || (NtQueryEvent(SmscpSubsystemRegistered, EventBasicInformation, EventInformation, 8u, 0LL), v17) )
      {
        *((_QWORD *)SmscpSharedWindow + 1) = 0LL;
        NtSetInformationProcess(*((HANDLE *)&ProcessParameters + 1), (PROCESSINFOCLASS)68, 0LL, 0);
        v10 = 0;
        goto LABEL_19;
      }
      v10 = -1073741823;
      v11 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
      SmpGlobalLog[2 * v11 + 2] = 1310;
      goto LABEL_3;
    }
    v14 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
    SmpGlobalLog[2 * v14 + 2] = 1284;
LABEL_14:
    *(_QWORD *)&SmpGlobalLog[2 * v14 + 4] = a3;
    SmpGlobalLog[2 * v14 + 3] = v10;
    NtTerminateProcess(*((HANDLE *)&ProcessParameters + 1), v10);
    goto LABEL_19;
  }
  v10 = -1073741772;
  v11 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
  SmpGlobalLog[2 * v11 + 2] = 1184;
LABEL_3:
  SmpGlobalLog[2 * v11 + 3] = v10;
  *(_QWORD *)&SmpGlobalLog[2 * v11 + 4] = a3;
LABEL_19:
  SmpEventWriteULONG(&SmssEvt_LoadSubsystem_Stop, v10);
  return (unsigned int)v10;
}
