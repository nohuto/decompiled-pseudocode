/*
 * XREFs of SmpStartServerSilo @ 0x14001A950
 * Callers:
 *     <none>
 * Callees:
 *     SmpExecuteImage @ 0x14000584C (SmpExecuteImage.c)
 */

__int64 __fastcall SmpStartServerSilo(__int64 a1, __int64 a2)
{
  NTSTATUS v3; // r8d
  __int64 v4; // rax
  int InformationJobObject; // ebx
  int v7; // r9d
  signed __int32 v8; // edx
  __int64 v9; // rax
  signed __int32 v10; // edx
  __int64 v11; // rax
  char ProcessParameters; // [rsp+40h] [rbp-39h] BYREF
  HANDLE ProcessHandle; // [rsp+48h] [rbp-31h]
  HANDLE ThreadHandle; // [rsp+50h] [rbp-29h]
  _BYTE JobInformation[32]; // [rsp+B0h] [rbp+37h] BYREF
  void *TargetHandle; // [rsp+E0h] [rbp+67h] BYREF

  v3 = NtDuplicateObject(
         *(HANDLE *)(a2 + 32),
         *(HANDLE *)(a1 + 48),
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         &TargetHandle,
         0x1F003Fu,
         0,
         0);
  if ( v3 < 0 )
  {
    v4 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
    SmpGlobalLog[2 * v4 + 2] = 445;
    SmpGlobalLog[2 * v4 + 3] = v3;
    *(_QWORD *)&SmpGlobalLog[2 * v4 + 4] = a1;
    return (unsigned int)v3;
  }
  InformationJobObject = NtQueryInformationJobObject(
                           TargetHandle,
                           JobObjectEndOfJobTimeInformation|0x20,
                           JobInformation,
                           0x20u,
                           0LL);
  if ( InformationJobObject >= 0 )
  {
    InformationJobObject = SmpExecuteImage(
                             (__int64)&SmpHelperCmd,
                             0LL,
                             0LL,
                             v7,
                             (__int64)TargetHandle,
                             20512,
                             (PRTL_USER_PROCESS_PARAMETERS)&ProcessParameters);
    if ( InformationJobObject >= 0 )
    {
      if ( !*(_BYTE *)(a1 + 56) )
      {
        InformationJobObject = NtResumeThread(ThreadHandle, 0LL);
        if ( InformationJobObject < 0 )
        {
          v11 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
          SmpGlobalLog[2 * v11 + 2] = 506;
          SmpGlobalLog[2 * v11 + 3] = InformationJobObject;
          *(_QWORD *)&SmpGlobalLog[2 * v11 + 4] = a1;
          NtTerminateProcess(ProcessHandle, 0);
        }
      }
      NtClose(TargetHandle);
      NtClose(ProcessHandle);
      NtClose(ThreadHandle);
      return (unsigned int)InformationJobObject;
    }
    NtClose(TargetHandle);
    v10 = _InterlockedIncrement(SmpGlobalLog) % 64;
    v9 = 2LL * v10;
    SmpGlobalLog[4 * v10 + 2] = 489;
  }
  else
  {
    NtClose(TargetHandle);
    v8 = _InterlockedIncrement(SmpGlobalLog) % 64;
    v9 = 2LL * v8;
    SmpGlobalLog[4 * v8 + 2] = 467;
  }
  SmpGlobalLog[2 * v9 + 3] = InformationJobObject;
  *(_QWORD *)&SmpGlobalLog[2 * v9 + 4] = a1;
  return (unsigned int)InformationJobObject;
}
