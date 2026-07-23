/*
 * XREFs of RtlQueryProcessDebugInformation @ 0x180001320
 * Callers:
 *     RtlpQueryProcessDebugInformationFromWow64 @ 0x1800E45A0 (RtlpQueryProcessDebugInformationFromWow64.c)
 *     RtlpQueryProcessDebugInformationRemote @ 0x1800E4640 (RtlpQueryProcessDebugInformationRemote.c)
 * Callees:
 *     RtlQueryProcessModuleInformation @ 0x1800014C0 (RtlQueryProcessModuleInformation.c)
 *     RtlpChangeQueryDebugBufferTarget @ 0x18000273C (RtlpChangeQueryDebugBufferTarget.c)
 *     RtlpCreateUserThreadEx @ 0x18005C2F0 (RtlpCreateUserThreadEx.c)
 *     RtlWow64GetProcessMachines @ 0x18007EFF0 (RtlWow64GetProcessMachines.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtWaitForSingleObject @ 0x1800A0F30 (NtWaitForSingleObject.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     ZwQueryInformationThread @ 0x1800A1350 (ZwQueryInformationThread.c)
 *     NtOpenProcess @ 0x1800A1370 (NtOpenProcess.c)
 *     ZwDuplicateObject @ 0x1800A1630 (ZwDuplicateObject.c)
 *     ZwReadVirtualMemory @ 0x1800A1690 (ZwReadVirtualMemory.c)
 *     NtTerminateThread @ 0x1800A1910 (NtTerminateThread.c)
 *     RtlQueryProcessBackTraceInformation @ 0x1800E3510 (RtlQueryProcessBackTraceInformation.c)
 *     RtlQueryProcessHeapInformation @ 0x1800E36A0 (RtlQueryProcessHeapInformation.c)
 *     RtlQueryProcessLockInformation @ 0x1800E3C30 (RtlQueryProcessLockInformation.c)
 *     RtlpCopyRemoteDebugInformation @ 0x1800E40C0 (RtlpCopyRemoteDebugInformation.c)
 *     RtlpQueryCriticalSectionOwner @ 0x1800E42EC (RtlpQueryCriticalSectionOwner.c)
 *     RtlpQueryCriticalSectionOwnerInformation @ 0x1800E4540 (RtlpQueryCriticalSectionOwnerInformation.c)
 *     RtlpValidateRemoteDebugInformation @ 0x1800E4B48 (RtlpValidateRemoteDebugInformation.c)
 *     AVrfpQueryProcessVerifierOptions @ 0x1800E6964 (AVrfpQueryProcessVerifierOptions.c)
 *     RtlpCreateExecutionRequiredRequest @ 0x1801196A0 (RtlpCreateExecutionRequiredRequest.c)
 *     RtlpDestroyExecutionRequiredRequest @ 0x1801197A0 (RtlpDestroyExecutionRequiredRequest.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __cdecl RtlQueryProcessDebugInformation(HANDLE UniqueProcessId, ULONG Flags, PRTL_DEBUG_INFORMATION Buffer)
{
  NTSTATUS (__cdecl *v3)(PVOID); // rbx
  _QWORD *v4; // r15
  SIZE_T OffsetFree; // r8
  bool v9; // dl
  HANDLE v10; // rcx
  NTSTATUS result; // eax
  NTSTATUS v12; // eax
  HANDLE v13; // rcx
  unsigned int v14; // r15d
  HANDLE v15; // r14
  HANDLE TargetProcessHandle; // rcx
  HANDLE v17; // r15
  int v18; // eax
  int v19; // eax
  ULONG Options; // [rsp+30h] [rbp-D0h]
  HANDLE Handle; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v22; // [rsp+68h] [rbp-98h]
  USHORT ProcessMachine; // [rsp+6Ch] [rbp-94h] BYREF
  HANDLE TargetHandle; // [rsp+70h] [rbp-90h] BYREF
  HANDLE ProcessHandle; // [rsp+78h] [rbp-88h] BYREF
  PUSER_THREAD_START_ROUTINE v26; // [rsp+80h] [rbp-80h]
  _CLIENT_ID ClientId; // [rsp+88h] [rbp-78h] BYREF
  ULONG_PTR NumberOfBytesRead; // [rsp+98h] [rbp-68h] BYREF
  LARGE_INTEGER Timeout; // [rsp+A0h] [rbp-60h] BYREF
  HANDLE ThreadHandle; // [rsp+A8h] [rbp-58h] BYREF
  HANDLE v31; // [rsp+B0h] [rbp-50h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v33[17]; // [rsp+E8h] [rbp-18h] BYREF
  _DWORD ThreadInformation[12]; // [rsp+170h] [rbp+70h] BYREF
  _BYTE Buffera[64]; // [rsp+1A0h] [rbp+A0h] BYREF
  NTSTATUS (__cdecl *v36)(PVOID); // [rsp+1E0h] [rbp+E0h]

  v3 = 0LL;
  v26 = (PUSER_THREAD_START_ROUTINE)RtlpQueryProcessDebugInformationRemote;
  v4 = 0LL;
  Handle = 0LL;
  v22 = 0;
  if ( Buffer->TargetProcessId && Buffer->TargetProcessId != UniqueProcessId )
    return -1073741811;
  if ( (Flags & 0x3FFFFFBE) != 0 && (Flags & 0x40000000) != 0 )
    return -1073741637;
  Buffer->Flags = Flags;
  OffsetFree = Buffer->OffsetFree;
  Timeout.QuadPart = -600000000LL;
  if ( OffsetFree )
    memset_thunk_772440563353939046(&Buffer[1], 0, OffsetFree - 208);
  Buffer->OffsetFree = 208LL;
  if ( Flags == -2147481600 )
    return RtlpQueryCriticalSectionOwner(UniqueProcessId, Buffer);
  v9 = 0;
  if ( (Flags & 0x3FFFFFBE) == 0 )
    v9 = (Flags & 0x80000000) != 0 && (Flags & 0x41) != 0;
  if ( v9 )
  {
    if ( (Flags & 0x40000000) != 0 )
    {
      v4 = UniqueProcessId;
    }
    else if ( NtCurrentTeb()->ClientId.UniqueProcess != UniqueProcessId )
    {
      ObjectAttributes.Length = 48;
      memset(&ObjectAttributes.RootDirectory, 0, 20);
      ClientId.UniqueProcess = UniqueProcessId;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ClientId.UniqueThread = 0LL;
      v12 = NtOpenProcess(&Handle, 0x1FFFFFu, &ObjectAttributes, &ClientId);
      v13 = Handle;
      v4 = v33;
      v33[1] = RtlpQueryReadVirtualMemory;
      if ( v12 < 0 )
        v13 = 0LL;
      v33[2] = NtQueryInformationProcess;
      Handle = v13;
      v33[0] = v13;
    }
  }
  if ( NtCurrentTeb()->ClientId.UniqueProcess == UniqueProcessId || (Flags & 0x40000000) != 0 || Handle )
  {
    if ( (Flags & 0x41) == 0 || (LODWORD(v3) = RtlQueryProcessModuleInformation(v4, Flags, Buffer), !(_DWORD)v3) )
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
    v10 = Handle;
    if ( !Handle )
      return (int)v3;
    goto LABEL_23;
  }
  if ( (Flags & 0x80000000) == 0 && ((Flags - 1024) & 0xFFFFFBFF) == 0 )
  {
    ObjectAttributes.Length = 48;
    memset(&ObjectAttributes.RootDirectory, 0, 20);
    ClientId.UniqueProcess = UniqueProcessId;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ClientId.UniqueThread = 0LL;
    if ( NtOpenProcess(&Handle, 0x1000u, &ObjectAttributes, &ClientId) >= 0 )
    {
      if ( RtlWow64GetProcessMachines(Handle, &ProcessMachine, 0LL) >= 0
        && ProcessMachine
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
          v22 = 1;
        }
      }
      NtClose(Handle);
    }
    Handle = 0LL;
  }
  v14 = v22;
  ProcessHandle = 0LL;
  result = RtlpChangeQueryDebugBufferTarget(Buffer, UniqueProcessId, v22, &ProcessHandle);
  if ( result >= 0 )
  {
    v15 = ProcessHandle;
    TargetProcessHandle = ProcessHandle;
    if ( !ProcessHandle )
      TargetProcessHandle = Buffer->TargetProcessHandle;
    LODWORD(v3) = RtlpCreateExecutionRequiredRequest(TargetProcessHandle, &v31);
    v10 = v15;
    if ( (int)v3 >= 0 )
    {
      LODWORD(v3) = RtlpCreateUserThreadEx(
                      v15,
                      0LL,
                      0LL,
                      Options,
                      v26,
                      Buffer->ViewBaseTarget,
                      (__int64)&ThreadHandle,
                      0LL);
      if ( (int)v3 >= 0 )
      {
        v17 = ThreadHandle;
        v18 = NtWaitForSingleObject(ThreadHandle, 1u, &Timeout);
        LODWORD(v3) = v18;
        if ( v18 < 0 )
        {
          NtTerminateThread(v17, v18);
        }
        else
        {
          LODWORD(v3) = ZwQueryInformationThread(v17, ThreadBasicInformation, ThreadInformation, 0x30u, 0LL);
          if ( (int)v3 >= 0 )
            LODWORD(v3) = ThreadInformation[0];
        }
        NtClose(v17);
        v14 = v22;
      }
      NtClose(v15);
      if ( v31 )
        RtlpDestroyExecutionRequiredRequest(v31);
      if ( (int)v3 < 0 )
        return (int)v3;
      if ( v14 == 1 )
      {
        LODWORD(v3) = 0;
        Buffer->CriticalSectionOwnerThread = (HANDLE)(unsigned int)_mm_cvtsi128_si32(
                                                                     _mm_srli_si128(
                                                                       *(__m128i *)((char *)&Buffer->CommitSize
                                                                                  + Buffer->ViewSize),
                                                                       4));
      }
      else if ( !v14 )
      {
        LODWORD(v3) = RtlpCopyRemoteDebugInformation(Buffer);
        if ( (int)v3 < 0 )
          return (int)v3;
      }
      v19 = -1073741558;
      if ( (Flags & 1) != 0 && !Buffer->Modules )
        LODWORD(v3) = -1073741558;
      if ( (Flags & 0x40) != 0 && !Buffer->Modules )
        goto LABEL_71;
      if ( (int)v3 >= 0 )
      {
        v19 = RtlpValidateRemoteDebugInformation(Buffer, Flags, &Buffer[1], Buffer->OffsetFree - 208);
LABEL_71:
        LODWORD(v3) = v19;
      }
      return (int)v3;
    }
LABEL_23:
    NtClose(v10);
    return (int)v3;
  }
  return result;
}
