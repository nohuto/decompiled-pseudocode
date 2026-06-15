/*
 * XREFs of ?InitialRegisterForProcess@CpuManager@@EEAAJPEAXPEAURegistrationData@HandleRegistrations@1@@Z @ 0x140053C50
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     memset_0 @ 0x140029234 (memset_0.c)
 */

__int64 __fastcall CpuManager::InitialRegisterForProcess(
        CpuManager *this,
        void *a2,
        struct CpuManager::HandleRegistrations::RegistrationData *a3)
{
  HANDLE CurrentProcess; // rbx
  HANDLE v7; // rax
  signed int LastError; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  HANDLE v11; // rcx
  unsigned int v12; // r9d
  unsigned int v13; // edx
  NTSTATUS v14; // ebx
  HANDLE TargetHandle; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v17; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD ProcessInformation[33]; // [rsp+58h] [rbp-A8h] BYREF

  TargetHandle = 0LL;
  memset_0(&v17, 0, 0x108uLL);
  CurrentProcess = GetCurrentProcess();
  v7 = GetCurrentProcess();
  if ( DuplicateHandle(v7, a2, CurrentProcess, &TargetHandle, 0x2000u, 0, 0) )
  {
    v10 = *((unsigned __int16 *)this + 272);
    v11 = TargetHandle;
    ProcessInformation[v10] |= *((_QWORD *)this + 69);
    v12 = v17;
    v13 = v10 + 1;
    if ( v17 <= v13 )
      v12 = v13;
    v17 = v12;
    v14 = NtSetInformationProcess(v11, ProcessVmCounters|0x40, ProcessInformation, 8 * v12);
    if ( v14 >= 0 )
    {
      v14 = RtlPublishWnfStateData(WNF_AUDC_CPUSET_ID, 0LL, (char *)this + 544, 16LL, TargetHandle);
      if ( v14 >= 0 )
      {
        v14 = RtlPublishWnfStateData(WNF_AUDC_CPUSET_ID_SYSTEM, 0LL, (char *)this + 560, 4LL, 0LL);
        if ( v14 >= 0 )
        {
          v9 = 0;
          *(_QWORD *)a3 = TargetHandle;
          return v9;
        }
      }
      NtSetInformationProcess(TargetHandle, ProcessVmCounters|0x40, 0LL, 0);
      RtlPublishWnfStateData(WNF_AUDC_CPUSET_ID_SYSTEM, 0LL, (char *)this + 560, 4LL, 0LL);
    }
    v9 = v14 | 0x10000000;
  }
  else
  {
    LastError = GetLastError();
    v9 = LastError;
    if ( LastError > 0 )
      v9 = (unsigned __int16)LastError | 0x80070000;
  }
  if ( TargetHandle )
    CloseHandle(TargetHandle);
  return v9;
}
