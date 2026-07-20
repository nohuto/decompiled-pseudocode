/*
 * XREFs of SmpExecuteImage @ 0x14000584C
 * Callers:
 *     SmpExecuteCommand @ 0x140004F44 (SmpExecuteCommand.c)
 *     SmscpLoadSubSystem @ 0x140006588 (SmscpLoadSubSystem.c)
 *     SmpInvokeAutoChk @ 0x140006A98 (SmpInvokeAutoChk.c)
 *     SmpLoadSubSystem @ 0x1400199F8 (SmpLoadSubSystem.c)
 *     SmpStartServerSilo @ 0x14001A950 (SmpStartServerSilo.c)
 * Callees:
 *     SmpEventWriteULONG @ 0x140005C30 (SmpEventWriteULONG.c)
 *     SmpEventWriteULONGString @ 0x140005C88 (SmpEventWriteULONGString.c)
 *     SmpSelectNodeNumber @ 0x140005E90 (SmpSelectNodeNumber.c)
 */

__int64 __fastcall SmpExecuteImage(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int16 a6,
        PRTL_USER_PROCESS_PARAMETERS ProcessParameters)
{
  PRTL_USER_PROCESS_PARAMETERS v7; // r14
  int v8; // ebx
  int v10; // eax
  unsigned int v11; // edx
  __int64 v12; // rax
  __int16 v14; // di
  __int64 v15; // rcx
  __int16 v16; // si
  int v17; // esi
  __int64 v18; // r8
  int UserProcess; // ebx
  HANDLE *p_Flags; // rsi
  HANDLE v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  int v24; // r15d
  unsigned int v25; // ecx
  signed __int32 v26; // eax
  __int64 v27; // rax
  _BYTE v28[56]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+98h] [rbp-70h]
  _BYTE ProcessInformation[32]; // [rsp+A0h] [rbp-68h] BYREF
  char v31; // [rsp+D8h] [rbp-30h] BYREF
  int v32; // [rsp+190h] [rbp+88h] BYREF

  v32 = a4;
  v7 = (PRTL_USER_PROCESS_PARAMETERS)&v31;
  LOWORD(v8) = 0;
  if ( ProcessParameters )
    v7 = ProcessParameters;
  v10 = RtlCreateProcessParametersEx(&ProcessParameters, a1, 0LL, a2, a3, SmpDefaultEnvironment, 0LL, 0LL, 0LL, 0LL, 1);
  v11 = v10;
  if ( v10 < 0 )
  {
    v12 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
    SmpGlobalLog[2 * v12 + 2] = 9544;
    SmpGlobalLog[2 * v12 + 3] = v11;
    *(_QWORD *)&SmpGlobalLog[2 * v12 + 4] = a1;
    return v11;
  }
  v14 = a6;
  v15 = (unsigned int)SmpDebug;
  v16 = a6;
  if ( (a6 & 1) != 0 )
    v15 = 1LL;
  ProcessParameters->DebugFlags = v15;
  v17 = v16 & 0x400;
  if ( v17 )
  {
    ProcessParameters->Flags |= 0x40000u;
    v8 = SmpSelectNodeNumber(v15, (unsigned int)v10) + 1;
  }
  if ( (v14 & 0x1000) != 0 )
    ProcessParameters->Flags |= 0x400000u;
  if ( (v14 & 0x4000) != 0 )
    ProcessParameters->Flags |= 0x800000u;
  if ( v14 < 0 )
    ProcessParameters->Flags |= 0x80000000;
  ProcessParameters->Flags |= 0x20000u;
  v7->MaximumLength = 104;
  SmpEventWriteULONGString(&SmssEvt_ExecuteImage_Start);
  memset(&v28[8], 0, 48);
  *(_WORD *)&v28[8] = 1;
  *(_WORD *)&v28[10] = v8;
  LOBYTE(v18) = v17 != 0;
  v29 = a5;
  UserProcess = RtlCreateUserProcessEx(a1, ProcessParameters, v18, &v28[8], v7);
  RtlDestroyProcessParameters(ProcessParameters);
  p_Flags = (HANDLE *)&v7->Flags;
  if ( UserProcess < 0
    || NtQueryInformationProcess(*p_Flags, ProcessBasicInformation, ProcessInformation, 0x30u, 0LL) < 0 )
  {
    SmpEventWriteULONG(&SmssEvt_ExecuteImage_Stop);
    if ( UserProcess < 0 )
    {
      v23 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
      SmpGlobalLog[2 * v23 + 2] = 9639;
      SmpGlobalLog[2 * v23 + 3] = UserProcess;
      *(_QWORD *)&SmpGlobalLog[2 * v23 + 4] = a1;
      return (unsigned int)UserProcess;
    }
  }
  else
  {
    SmpEventWriteULONG(&SmssEvt_ExecuteImage_Stop);
  }
  if ( (v14 & 0x2000) != 0 )
  {
    v21 = *p_Flags;
    v32 = 1;
    UserProcess = NtSetInformationProcess(v21, ProcessBreakOnTermination, &v32, 4u);
    if ( UserProcess < 0 )
    {
      v22 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
      SmpGlobalLog[2 * v22 + 2] = 9658;
      SmpGlobalLog[2 * v22 + 3] = UserProcess;
      *(_QWORD *)&SmpGlobalLog[2 * v22 + 4] = v7;
LABEL_32:
      NtTerminateProcess(*p_Flags, UserProcess);
      NtWaitForSingleObject(*p_Flags, 0, 0LL);
LABEL_34:
      NtClose(v7->ConsoleHandle);
      NtClose(*p_Flags);
      return (unsigned int)UserProcess;
    }
  }
  v24 = v14 & 0x20;
  if ( (v14 & 0x20) == 0 )
  {
    v25 = v24 + 1;
    if ( LODWORD(v7->CurrentDirectory.Handle) != v24 + 1 && (v14 & 0x8000) == 0 )
    {
      UserProcess = -1073741701;
      v26 = (v25 + _InterlockedExchangeAdd(SmpGlobalLog, v25)) & 0x8000003F;
      if ( v26 < 0 )
        v26 = v25 + (((_BYTE)v26 - (_BYTE)v25) | 0xFFFFFFC0);
      v27 = 2LL * v26;
      SmpGlobalLog[2 * v27 + 2] = 9676;
      SmpGlobalLog[2 * v27 + 3] = -1073741701;
      *(_QWORD *)&SmpGlobalLog[2 * v27 + 4] = a1;
      goto LABEL_32;
    }
    NtResumeThread(v7->ConsoleHandle, 0LL);
    if ( (v14 & 2) == 0 )
      NtWaitForSingleObject(v7->ConsoleHandle, 0, 0LL);
  }
  if ( (v14 & 0x20) == 0 )
    goto LABEL_34;
  return (unsigned int)UserProcess;
}
