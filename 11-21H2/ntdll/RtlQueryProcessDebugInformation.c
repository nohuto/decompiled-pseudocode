/*
 * XREFs of RtlQueryProcessDebugInformation @ 0x1800013C0
 * Callers:
 *     RtlpQueryProcessDebugInformationFromWow64 @ 0x1800E4340 (RtlpQueryProcessDebugInformationFromWow64.c)
 *     RtlpQueryProcessDebugInformationRemote @ 0x1800E43E0 (RtlpQueryProcessDebugInformationRemote.c)
 * Callees:
 *     RtlQueryProcessModuleInformation @ 0x180001558 (RtlQueryProcessModuleInformation.c)
 *     RtlpChangeQueryDebugBufferTarget @ 0x18000230C (RtlpChangeQueryDebugBufferTarget.c)
 *     RtlpCreateUserThreadEx @ 0x180008100 (RtlpCreateUserThreadEx.c)
 *     RtlWow64GetProcessMachines @ 0x180082B40 (RtlWow64GetProcessMachines.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtWaitForSingleObject @ 0x1800A40F0 (NtWaitForSingleObject.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     ZwQueryInformationThread @ 0x1800A4510 (ZwQueryInformationThread.c)
 *     NtOpenProcess @ 0x1800A4530 (NtOpenProcess.c)
 *     ZwDuplicateObject @ 0x1800A47F0 (ZwDuplicateObject.c)
 *     ZwReadVirtualMemory @ 0x1800A4850 (ZwReadVirtualMemory.c)
 *     NtTerminateThread @ 0x1800A4AD0 (NtTerminateThread.c)
 *     memset @ 0x1800AAE00 (memset.c)
 *     RtlQueryProcessBackTraceInformation @ 0x1800E3530 (RtlQueryProcessBackTraceInformation.c)
 *     RtlQueryProcessHeapInformation @ 0x1800E36C0 (RtlQueryProcessHeapInformation.c)
 *     RtlQueryProcessLockInformation @ 0x1800E3C20 (RtlQueryProcessLockInformation.c)
 *     RtlpCopyRemoteDebugInformation @ 0x1800E40F8 (RtlpCopyRemoteDebugInformation.c)
 *     RtlpQueryCriticalSectionOwnerInformation @ 0x1800E42E4 (RtlpQueryCriticalSectionOwnerInformation.c)
 *     RtlpValidateRemoteDebugInformation @ 0x1800E476C (RtlpValidateRemoteDebugInformation.c)
 *     AVrfpQueryProcessVerifierOptions @ 0x1800E67CC (AVrfpQueryProcessVerifierOptions.c)
 *     RtlpCreateExecutionRequiredRequest @ 0x180117DA0 (RtlpCreateExecutionRequiredRequest.c)
 *     RtlpDestroyExecutionRequiredRequest @ 0x180117EA0 (RtlpDestroyExecutionRequiredRequest.c)
 */

NTSTATUS __cdecl RtlQueryProcessDebugInformation(HANDLE UniqueProcessId, ULONG Flags, PRTL_DEBUG_INFORMATION Buffer)
{
  NTSTATUS (__cdecl *v3)(PVOID); // rbx
  unsigned int v4; // r13d
  _QWORD *v5; // r15
  SIZE_T OffsetFree; // r8
  ULONG v10; // r9d
  HANDLE v11; // r8
  bool v12; // dl
  HANDLE v13; // rcx
  NTSTATUS result; // eax
  NTSTATUS v15; // eax
  HANDLE v16; // rcx
  void *v17; // r14
  HANDLE TargetProcessHandle; // rcx
  HANDLE v19; // r15
  int v20; // eax
  int v21; // eax
  ULONG Options; // [rsp+30h] [rbp-D0h]
  HANDLE Handle; // [rsp+60h] [rbp-A0h] BYREF
  USHORT ProcessMachine[4]; // [rsp+68h] [rbp-98h] BYREF
  HANDLE TargetHandle; // [rsp+70h] [rbp-90h] BYREF
  PUSER_THREAD_START_ROUTINE v26; // [rsp+78h] [rbp-88h]
  _CLIENT_ID ClientId; // [rsp+80h] [rbp-80h] BYREF
  ULONG_PTR NumberOfBytesRead; // [rsp+90h] [rbp-70h] BYREF
  LARGE_INTEGER Timeout; // [rsp+98h] [rbp-68h] BYREF
  HANDLE ThreadHandle; // [rsp+A0h] [rbp-60h] BYREF
  HANDLE v31; // [rsp+A8h] [rbp-58h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v33[18]; // [rsp+E0h] [rbp-20h] BYREF
  _DWORD ThreadInformation[12]; // [rsp+170h] [rbp+70h] BYREF
  _BYTE Buffera[64]; // [rsp+1A0h] [rbp+A0h] BYREF
  NTSTATUS (__cdecl *v36)(PVOID); // [rsp+1E0h] [rbp+E0h]

  v3 = 0LL;
  Handle = 0LL;
  v4 = 0;
  v5 = 0LL;
  v26 = (PUSER_THREAD_START_ROUTINE)RtlpQueryProcessDebugInformationRemote;
  if ( Buffer->TargetProcessId && Buffer->TargetProcessId != UniqueProcessId )
    return -1073741811;
  if ( (Flags & 0x3FFFFFBE) != 0 && (Flags & 0x40000000) != 0 )
    return -1073741637;
  Buffer->Flags = Flags;
  OffsetFree = Buffer->OffsetFree;
  Timeout.QuadPart = -600000000LL;
  if ( OffsetFree )
    memset(&Buffer[1], 0, OffsetFree - 208);
  Buffer->OffsetFree = 208LL;
  v10 = Flags & 0x41;
  v11 = UniqueProcessId;
  *(_DWORD *)ProcessMachine = v10;
  v12 = 0;
  if ( (Flags & 0x3FFFFFBE) == 0 )
    v12 = (Flags & 0x80000000) != 0 && (Flags & 0x41) != 0;
  if ( v12 )
  {
    if ( (Flags & 0x40000000) != 0 )
    {
      v5 = UniqueProcessId;
    }
    else if ( NtCurrentTeb()->ClientId.UniqueProcess != UniqueProcessId )
    {
      ObjectAttributes.Length = 48;
      memset(&ObjectAttributes.RootDirectory, 0, 20);
      ClientId.UniqueProcess = UniqueProcessId;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ClientId.UniqueThread = 0LL;
      v15 = NtOpenProcess(&Handle, 0x1FFFFFu, &ObjectAttributes, &ClientId);
      v16 = Handle;
      v5 = v33;
      v10 = *(_DWORD *)ProcessMachine;
      v11 = UniqueProcessId;
      if ( v15 < 0 )
        v16 = 0LL;
      v33[1] = RtlpQueryReadVirtualMemory;
      Handle = v16;
      v33[2] = NtQueryInformationProcess;
      v33[0] = v16;
    }
  }
  if ( NtCurrentTeb()->ClientId.UniqueProcess == v11 || (Flags & 0x40000000) != 0 || Handle )
  {
    if ( !v10 || (LODWORD(v3) = RtlQueryProcessModuleInformation(v5, Flags, Buffer), !(_DWORD)v3) )
    {
      if ( (Flags & 2) == 0 || (LODWORD(v3) = RtlQueryProcessBackTraceInformation(Buffer), !(_DWORD)v3) )
      {
        if ( (Flags & 0x20) == 0 || (LODWORD(v3) = RtlQueryProcessLockInformation(Buffer), !(_DWORD)v3) )
        {
          if ( (Flags & 0x21C) == 0 || (LODWORD(v3) = RtlQueryProcessHeapInformation(Buffer), !(_DWORD)v3) )
          {
            if ( (Flags & 0x80u) == 0 || (LODWORD(v3) = AVrfpQueryProcessVerifierOptions(Buffer), !(_DWORD)v3) )
            {
              if ( (Flags & 0xC00) != 0 )
                LODWORD(v3) = RtlpQueryCriticalSectionOwnerInformation(Buffer, Flags);
            }
          }
        }
      }
    }
    v13 = Handle;
    if ( !Handle )
      return (int)v3;
    goto LABEL_22;
  }
  if ( ((Flags - 1024) & 0xFFFFFBFF) == 0 )
  {
    ObjectAttributes.Length = 48;
    memset(&ObjectAttributes.RootDirectory, 0, 20);
    ClientId.UniqueProcess = UniqueProcessId;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ClientId.UniqueThread = 0LL;
    if ( NtOpenProcess(&Handle, 0x1000u, &ObjectAttributes, &ClientId) >= 0 )
    {
      if ( RtlWow64GetProcessMachines(Handle, ProcessMachine, 0LL) >= 0
        && ProcessMachine[0]
        && ZwDuplicateObject(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             Handle,
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             &TargetHandle,
             0x10u,
             0,
             0) >= 0 )
      {
        if ( ZwReadVirtualMemory(TargetHandle, &LdrSystemDllInitBlock, Buffera, 0xF0uLL, &NumberOfBytesRead) >= 0
          && NumberOfBytesRead == 240 )
        {
          v3 = v36;
        }
        NtClose(TargetHandle);
        if ( v3 )
        {
          v26 = v3;
          v4 = 1;
        }
      }
      NtClose(Handle);
    }
    Handle = 0LL;
  }
  *(_QWORD *)ProcessMachine = 0LL;
  result = RtlpChangeQueryDebugBufferTarget(Buffer, UniqueProcessId, v4, ProcessMachine);
  if ( result >= 0 )
  {
    v17 = *(void **)ProcessMachine;
    TargetProcessHandle = *(HANDLE *)ProcessMachine;
    if ( !*(_QWORD *)ProcessMachine )
      TargetProcessHandle = Buffer->TargetProcessHandle;
    LODWORD(v3) = RtlpCreateExecutionRequiredRequest(TargetProcessHandle, &v31);
    v13 = v17;
    if ( (int)v3 >= 0 )
    {
      LODWORD(v3) = RtlpCreateUserThreadEx(
                      v17,
                      0LL,
                      0LL,
                      Options,
                      v26,
                      Buffer->ViewBaseTarget,
                      (__int64)&ThreadHandle,
                      0LL);
      if ( (int)v3 >= 0 )
      {
        v19 = ThreadHandle;
        v20 = NtWaitForSingleObject(ThreadHandle, 1u, &Timeout);
        LODWORD(v3) = v20;
        if ( v20 < 0 )
        {
          NtTerminateThread(v19, v20);
        }
        else
        {
          LODWORD(v3) = ZwQueryInformationThread(v19, ThreadBasicInformation, ThreadInformation, 0x30u, 0LL);
          if ( (int)v3 >= 0 )
            LODWORD(v3) = ThreadInformation[0];
        }
        NtClose(v19);
      }
      NtClose(v17);
      if ( v31 )
        RtlpDestroyExecutionRequiredRequest(v31);
      if ( (int)v3 < 0 )
        return (int)v3;
      if ( v4 == 1 )
      {
        LODWORD(v3) = 0;
        Buffer->CriticalSectionOwnerThread = (HANDLE)(unsigned int)_mm_cvtsi128_si32(
                                                                     _mm_srli_si128(
                                                                       *(__m128i *)((char *)&Buffer->CommitSize
                                                                                  + Buffer->ViewSize),
                                                                       4));
      }
      else
      {
        LODWORD(v3) = RtlpCopyRemoteDebugInformation(Buffer);
        if ( (int)v3 < 0 )
          return (int)v3;
      }
      v21 = -1073741558;
      if ( (Flags & 1) != 0 && !Buffer->Modules )
        LODWORD(v3) = -1073741558;
      if ( (Flags & 0x40) != 0 && !Buffer->Modules )
        goto LABEL_67;
      if ( (int)v3 >= 0 )
      {
        v21 = RtlpValidateRemoteDebugInformation(Buffer, Flags, &Buffer[1], Buffer->OffsetFree - 208);
LABEL_67:
        LODWORD(v3) = v21;
      }
      return (int)v3;
    }
LABEL_22:
    NtClose(v13);
    return (int)v3;
  }
  return result;
}
